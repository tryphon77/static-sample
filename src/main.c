#include <genesis.h>
#include <kdebug.h>


const SpriteDefinition dynamic_sprite;

const SpriteDefinition static_sprite;
extern const TileSet *const static_all_tilesets[];
extern const u16 const* static_tilesets[];

// forward
static void joyEvent(u16 joy, u16 changed, u16 state);

const u16 palettes[] = {
	0x000, 0x200, 0x400, 0x600, 0x800, 0xA00, 0xC00, 0xE00, 0xE22, 0xE44, 0xE66, 0xE88, 0xEAA, 0xECC, 0xEEE, 0xEEE,
	
	0x000, 0x022, 0x044, 0x066, 0x088, 0x0AA, 0x0CC, 0x0EE, 0x2EE, 0x4EE, 0x6EE, 0x8EE, 0xAEE, 0xCEE, 0xEEE, 0xEEE,

	0x000, 0x042, 0x084, 0x0C6, 0x0E8, 0x0EA, 0x0EC, 0x0EE, 0xE22, 0xE44, 0xE66, 0xE88, 0xEAA, 0xECC, 0xEEE, 0xEEE,

	0x000, 0x200, 0x400, 0x600, 0x800, 0xA00, 0xC00, 0xE00, 0xE22, 0xE44, 0xE66, 0xE88, 0xEAA, 0xECC, 0xEEE, 0xEEE
};

const u32 tile[] = {
	0xFFFFFFFF,
	0xF0000000,
	0xF0000000,
	0xF0000000,
	0xF0000000,
	0xF0000000,
	0xF0000000,
	0xF0000000
};

Sprite *sprite_s1;
Sprite *sprite_s2;
Sprite *sprite_d1;

u16 curAnim;
u16 numAnimations;
// u16 static_tiles;


static void frameChanged(Sprite* sprite) {
    // get VRAM tile index for this animation of this sprite
	u16 **tileIndexes = (u16**) (sprite ->data);
    u16 tileIndex = tileIndexes[sprite->animInd][sprite->frameInd];

    // manually set tile index for the current frame (preloaded in VRAM)
    SPR_setVRAMTileIndex(sprite, tileIndex);
}

u16** SPR_preloadAllFrames(const SpriteDefinition* spriteDef, const TileSet* const* allTilesets, u16 tileIndex, u16 *numTile) {
	u16 n;

    // pre-load all animation frames into VRAM for enemies
	u16 tileInd = tileIndex;
	n = 0;

	const TileSet* const* curTileset = allTilesets;

	while (*curTileset) {
		// load tileset
		// kprintf("curTileset=%p, tileInd=%d", curTileset, tileInd);
		VDP_loadTileSet(*curTileset, tileInd, DMA);

		tileInd += (*curTileset)->numTile;
		n += (*curTileset)->numTile;

		// next tileset
		curTileset++;
	}
	
	*numTile = n;
	
	u16 numAnimation = spriteDef->numAnimation;
	u16 numFrameTot = 0;
	
	Animation** curAnimation;
	curAnimation = spriteDef->animations;
	
	for (int k = 0 ; k < numAnimation ; k++) {
		// kprintf("curAnimation=%p, numFrameTot=%d", curAnimation, numFrameTot);
		numFrameTot += (*curAnimation)->numFrame;
		curAnimation++;
	}
	
    u16** indexes = MEM_alloc((numAnimation * sizeof(u16*)) + (numFrameTot * sizeof(u16)));

    // store pointer
    u16** result = indexes;

    // init frames indexes pointer
    u16* indFrames = (u16*) (indexes + numAnimation);

    // start index
	u16 index = tileIndex;
    tileInd = index;

    Animation **anim;
	anim = spriteDef->animations;

    for(u16 indAnim = 0; indAnim < numAnimation; indAnim++) {
        // store frames indexes pointer for this animation
        *indexes++ = indFrames;

        AnimationFrame** frame = (*anim)->frames;
        const u16 numFrame = (*anim)->numFrame;

        for(u16 indFrame = 0; indFrame < numFrame; indFrame++) {
            const TileSet* tileset = (*frame)->tileset;

            // store frame tile index
            *indFrames++ = tileIndex + static_tilesets[indAnim][indFrame];
            // next tileset
            tileInd += tileset->numTile;
            // next frame
            frame++;
        }

        anim++;
	}
	
	return result;
}

Sprite* SPR_addStaticSprite(const SpriteDefinition* spriteDef, s16 x, s16 y, u16 attribut, u16** tileIndexes) {
	Sprite *sprite;
	
	sprite = SPR_addSprite(
		spriteDef, 
		x, y, 
		attribut
	);

	sprite->data = (u32) tileIndexes;
	
    // disable auto tile upload for enemies sprites as we will pre-load all animation frames in VRAM for them
    SPR_setAutoTileUpload(sprite, FALSE);

    // set frame change callback for enemies so we can update tile index easily
    SPR_setFrameChangeCallback(sprite, &frameChanged);

	return sprite;
}



static void set_anim(u16 joy) {
	if (joy & BUTTON_A) SPR_setAnim(sprite_s1, curAnim);
	if (joy & BUTTON_B) SPR_setAnim(sprite_s2, curAnim);
	if (joy & BUTTON_C) SPR_setAnim(sprite_d1, curAnim);
	kprintf("current animation: %d", curAnim);
}
	
int main(bool hard) {
	u16 ind;	

    // initialization
    VDP_setScreenWidth320();
	VDP_setScreenHeight224();

    PAL_setColors(0, (u16*) palettes, 64, CPU);
	PAL_setColors(0, dynamic_sprite.palette->data, 16, CPU);
	
	VDP_loadTileData(tile, TILE_USER_INDEX, 1, CPU);
	VDP_fillTileMap(VDP_BG_A, TILE_USER_INDEX, 0, 64*32);

    // init sprite engine with default parameters
    SPR_init();
    ind = TILE_USER_INDEX + 1;
	

	curAnim = 0;
	numAnimations = dynamic_sprite.numAnimation;

	u16 numTiles;
	u16 **all_frames = SPR_preloadAllFrames(
		&static_sprite, 
		static_all_tilesets, 
		ind, 
		&numTiles
	);
	
	sprite_s1 = SPR_addStaticSprite(
		&static_sprite, 
		160, 56, 
		TILE_ATTR(PAL0, TRUE, FALSE, FALSE),
		all_frames
	);
	
	sprite_s2 = SPR_addStaticSprite(
		&static_sprite, 
		160, 112, 
		TILE_ATTR(PAL0, TRUE, FALSE, FALSE),
		all_frames
	);
	
	sprite_d1 = SPR_addSprite(
		&dynamic_sprite, 
		160, 168, 
		TILE_ATTR(PAL0, TRUE, FALSE, FALSE)
	);
	
	set_anim(BUTTON_A | BUTTON_B | BUTTON_C);

    // set joy and vblank handler
    JOY_setEventHandler(joyEvent);

    // just to monitor frame CPU usage
    SYS_showFrameLoad(TRUE);

    while(TRUE) {			
        // update sprites
        SPR_update();

        // sync frame and do vblank process
        SYS_doVBlankProcess();
    }

    return 0;
}

static void joyEvent(u16 joy, u16 changed, u16 state) {
	if (changed & state & BUTTON_LEFT) {
		if (curAnim == 0) curAnim = numAnimations - 1;
		else curAnim--;
		set_anim(state);
	}
	else if (changed & state & BUTTON_RIGHT) {
		if (curAnim == numAnimations - 1) curAnim = 0;
		else curAnim ++;
		set_anim(state);
	}
}

