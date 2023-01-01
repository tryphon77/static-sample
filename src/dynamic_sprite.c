#include <genesis.h>

const u16 dynamic_sprite_palette_data[] = {
	0x0C0E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x060E, 0x0E40, 0x0E80, 0x0EEA, 0x0EC6, 0x0EEE
};

const Palette dynamic_sprite_palette = {
	16, // numColors
	(u16*) dynamic_sprite_palette_data
};

const u32 dynamic_tileset_0_data[] = {
	0x00000000, 0x00000000, 0x00B0CEE0, 0xBC0CEDFD, 0xBC0CEDFD, 0x00B0CEE0, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_1_data[] = {
	0x00C00B00, 0x0E00C000, 0x0DFD00E0, 0x0FFFEC00, 0x0DFDC000, 0x0EDEEC00, 0x00E000B0, 0x000CD000
};


const u32 dynamic_tileset_2_data[] = {
	0x00D00000, 0x0000E000, 0xE0CE0C00, 0x0CDDC000, 0x0EDDECD0, 0x00EEB000, 0x00C00C00, 0xC0000000
};


const u32 dynamic_tileset_3_data[] = {
	0x0000D000, 0x00C00000, 0x0B000000, 0x00000C00, 0x00BE0000, 0x00000000, 0x00000000, 0x0000BE00
};


const u32 dynamic_tileset_4_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x000000BC, 0x0000BCCE, 0x0000CEED, 0x000BCEDF, 0x000CEDFF
};


const u32 dynamic_tileset_5_data[] = {
	0x00000000, 0x000000BB, 0x0000BBCC, 0x000BCCEE, 0x00BCEEDD, 0x00BEDDFF, 0x0BCEDFFF, 0x0BEDFFFF
};


const u32 dynamic_tileset_6_data[] = {
	0x0000000C, 0x00000BCE, 0x000BBCDD, 0x0000BBCE, 0xB0BCCCEE, 0x000BBBCC, 0x0B00CECE, 0x000BBCDD,
	0x0BBCEECE, 0x000BBCEE, 0x00000BBC, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0xEEC00000, 0xDDDEC000, 0xFFFDEC00, 0xDFFFDE00, 0xEFFFFDC0, 0xEDFFFDE0, 0xDFFFFDE0, 0xFFFFFDC0,
	0xEDFFDE00, 0xFFFDEC00, 0xEDDEC000, 0xCEC00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_7_data[] = {
	0x00000000, 0x0000BBC0, 0xB000000B, 0x0000BBBC, 0x00BBCCBB, 0x0000EEEE, 0x0BCBDDDD, 0x0000CCEB,
	0xB0B0BBBC, 0x00000000, 0x000BBBBC, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00BC0000, 0x00000000, 0xBBBB0000, 0xEECC0000, 0xBCEC0000, 0xDDDD0000, 0xDDFD0000, 0xBBED0000,
	0xCEDE0000, 0xBCCC0000, 0xE0BB0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_8_data[] = {
	0x000000BC, 0xBBC00000, 0x000BBBBB, 0xBBBCEECC, 0xCCBBBCEC, 0xEEEEDDDD, 0xDDDDDDFD, 0xCCEBBBED,
	0xBBBCCEDE, 0x0000BCCC, 0xBBBCE0BB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0xC000000B, 0x0BBBBBBC, 0xBCCCCCCE, 0xCEEEEEED, 0xEDFDFFFF, 0xDDDDFDFF, 0xFDFFFFFF, 0xDDDDDDFF,
	0xEEEEEDDD, 0xCCCCCEEE, 0xBBBBBCCC, 0x00000BBB, 0x00BBE000, 0x00000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_9_data[] = {
	0x0000BBBB, 0xBBBBCCCC, 0xCCCCEEEE, 0xEEEEDDDD, 0xDDDDFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
	0xFFFFFFFF, 0xDDDDFFFF, 0xEEEEDDDD, 0xCCCCEEEE, 0xBBBBCCCC, 0x0000BBBB, 0x00000000, 0x00000000,
	0x0000BBBB, 0xBBBBCCCC, 0xCCCCEEEE, 0xEEEEDDDD, 0xDDDDFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
	0xFFFFFFFF, 0xDDDDFFFF, 0xEEEEDDDD, 0xCCCCEEEE, 0xBBBBCCCC, 0x0000BBBB, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_10_data[] = {
	0x0000BBBB, 0xBBBBCCCC, 0xCCCCEEEE, 0xEEEEDDDD, 0xDDDDFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
	0xFFFFFFFF, 0xDDDDFFFF, 0xEEEEDDDD, 0xCCCCEEEE, 0xBBBBCCCC, 0x0000BBBB, 0x00000000, 0x00000000,
	0xBB000000, 0xCCBB0000, 0xEECCB000, 0xDDEECB00, 0xFFDDECB0, 0xFFFFDCB0, 0xFFFFFECB, 0xFFFFFECB,
	0xFFFFDCB0, 0xFFDDECB0, 0xDDEECB00, 0xEECCB000, 0xCCBB0000, 0xBB000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_11_data[] = {
	0x000CCC00, 0x0BBEDDEC, 0xBCEDFFDD, 0xBCEDFFDD, 0x0BBEDDEC, 0x000CCC00, 0x00000000, 0x00000000,
	0x0B000000, 0x000ECB00, 0xECB00000, 0xECB00000, 0x000ECB00, 0x0B000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_12_data[] = {
	0x00000000, 0x0000000B, 0x0000BCCC, 0x00BCEDEE, 0x0BCEEEED, 0xBEEDDDFF, 0xCEDFFFDD, 0xCEDFFFFF,
	0xBEEDDDFF, 0x0BCEEEDD, 0x00BCCEEE, 0x0000BCCC, 0x0000000B, 0x00000000, 0x00000000, 0x00000000,
	0x0BB00000, 0xBB00CB00, 0xEEBB0000, 0xEDFDCC0B, 0xDDEEE000, 0xDFDE0000, 0xFDFDECB0, 0xFFD0C000,
	0xDECE000B, 0xDDECEB00, 0xEDFDCCEC, 0xEECB0000, 0xBB00CB00, 0x0BB00000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_13_data[] = {
	0x00000000, 0x00000000, 0x000000BC, 0x00B00BCE, 0x0000BEEB, 0x0B0BEDFC, 0x0CBEEFDD, 0xBCCEDDFF,
	0xBCEDDFFF, 0xBEEDDFFF, 0xCEDDFFFD, 0xCEDFFFFF, 0xEDDFFFFF, 0xEDFFFFFF, 0xEDFFFFFF, 0x00000000,
	0x00B000BB, 0xBC00BCCE, 0xE0BBCEEE, 0x0BBCEEDD, 0xCCEEDDEC, 0xDEDDDDD0, 0xEDDDDFFF, 0xEDDFFFFE,
	0xDFFFFFDE, 0xFFFDDFDD, 0xFFFFFFFF, 0xFFDFFFDD, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000,
	0xCCCB0000, 0xEEEECB00, 0xDDE00000, 0xE0000BBC, 0x00BCEEDD, 0xBCEEDE00, 0xEDDE0BCC, 0xDDCCCCEE,
	0xECEEEEEE, 0xDEDDDECC, 0xDDFFFCCE, 0xFFFDEEDD, 0xFFFFFFFD, 0xFFFFFDFD, 0xFFFFFFDD, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0xCB000000, 0xECCB0000, 0x00000000, 0xCB000000, 0xDECB0BE0,
	0xCCE00000, 0xB0B00000, 0xEBEBC000, 0xCCB00000, 0xDDEC0000, 0xDDEECC00, 0xEEC00000, 0x00000000
};


const u32 dynamic_tileset_14_data[] = {
	0x0000FF00, 0x00FFDD00, 0x00DDEE00, 0x0FDECC00, 0x0FECBB00, 0xFECBB000, 0xFECB0000, 0x00000000
};


const u32 dynamic_tileset_15_data[] = {
	0x00000000, 0x0000000F, 0x000000FF, 0x00000FDD, 0x0000FDDE, 0x000FFDEC, 0x000FDECB, 0x00FDECB0,
	0x00FDECB0, 0x0FDECB00, 0x0FDECB00, 0x0DDECB00, 0xFDECB000, 0xFDECB000, 0xFDECB000, 0x00000000,
	0x00FFFF00, 0xFFDDDD00, 0xDDDEEE00, 0xEEECCC00, 0xCCCBBB00, 0xBBB00000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_16_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000F, 0x000000FF, 0x00000FFD,
	0x0000FFDD, 0x0000FDDE, 0x000FFDEC, 0x000FDECB, 0x00FDECB0, 0x00FDECB0, 0x0FDECB00, 0x0FDECB00,
	0x0FDECB00, 0x0FDECB00, 0xFDECB000, 0xFDECB000, 0xFDECB000, 0xFDECB000, 0xFDECB000, 0x00000000,
	0x00000000, 0x000000FF, 0x000FFFDD, 0x0FFDDDEE, 0xFFDDEECC, 0xFDEECCBB, 0xDEECBB00, 0xDECB0000,
	0xECB00000, 0xCB000000, 0xB0000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00FFFF00, 0xFFDDDD00, 0xDDEEEE00, 0xEECCCC00, 0xCCBBBB00, 0xBB000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 dynamic_tileset_17_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000D, 0x000000EE, 0x00000DDE,
	0x0000DEBC, 0x0000DEC0, 0x000DECBB, 0x000EEC00, 0x00DCBBB0, 0x00DEC000, 0x0DECB000, 0x0EEC0B00,
	0x0ECBB000, 0x0DECBB00, 0xDECB0000, 0xDEBBB000, 0xECB00000, 0xDECB0000, 0xEEB0B000, 0x00000000,
	0x00000000, 0x000000ED, 0x000EDDEE, 0x0EDEEEBC, 0xCEBCCC0B, 0xEBCB0B00, 0xB0B0B000, 0xCBB00000,
	0xB0B00000, 0xBB000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00EDED00, 0xDDEEEE00, 0xCECBCB00, 0xBCB0B000, 0x0B0B0B00, 0xB0000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const TileSet dynamic_tileset_0 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_0_data
};

const TileSet dynamic_tileset_1 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_1_data
};

const TileSet dynamic_tileset_2 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_2_data
};

const TileSet dynamic_tileset_3 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_3_data
};

const TileSet dynamic_tileset_4 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_4_data
};

const TileSet dynamic_tileset_5 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_5_data
};

const TileSet dynamic_tileset_6 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_6_data
};

const TileSet dynamic_tileset_7 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_7_data
};

const TileSet dynamic_tileset_8 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_8_data
};

const TileSet dynamic_tileset_9 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_9_data
};

const TileSet dynamic_tileset_10 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_10_data
};

const TileSet dynamic_tileset_11 = {
	0, // compression
	2, // numTiles
	(u32*) dynamic_tileset_11_data
};

const TileSet dynamic_tileset_12 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_12_data
};

const TileSet dynamic_tileset_13 = {
	0, // compression
	8, // numTiles
	(u32*) dynamic_tileset_13_data
};

const TileSet dynamic_tileset_14 = {
	0, // compression
	1, // numTiles
	(u32*) dynamic_tileset_14_data
};

const TileSet dynamic_tileset_15 = {
	0, // compression
	4, // numTiles
	(u32*) dynamic_tileset_15_data
};

const TileSet dynamic_tileset_16 = {
	0, // compression
	9, // numTiles
	(u32*) dynamic_tileset_16_data
};

const TileSet dynamic_tileset_17 = {
	0, // compression
	9, // numTiles
	(u32*) dynamic_tileset_17_data
};

const AnimationFrame dynamic_frame_0 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_0, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			0,  // numTiles
			-4, // offsetY
			-4, // offsetYFlip
			0, // 00 | size (8 x 8)
			-4, // offsetX
			-4, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_1 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_1, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #1
			0,  // numTiles
			-4, // offsetY
			-4, // offsetYFlip
			0, // 00 | size (8 x 8)
			-4, // offsetX
			-4, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_4 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #4
			0,  // numTiles
			-11, // offsetY
			3, // offsetYFlip
			0, // 00 | size (8 x 8)
			11, // offsetX
			-19, // offsetXFlip
		},
		{
			// VDPSprite #5
			0,  // numTiles
			-18, // offsetY
			10, // offsetYFlip
			0, // 00 | size (8 x 8)
			8, // offsetX
			-16, // offsetXFlip
		},
		{
			// VDPSprite #6
			0,  // numTiles
			-25, // offsetY
			17, // offsetYFlip
			0, // 00 | size (8 x 8)
			1, // offsetX
			-9, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_5 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #7
			0,  // numTiles
			3, // offsetY
			-11, // offsetYFlip
			0, // 00 | size (8 x 8)
			11, // offsetX
			-19, // offsetXFlip
		},
		{
			// VDPSprite #8
			0,  // numTiles
			10, // offsetY
			-18, // offsetYFlip
			0, // 00 | size (8 x 8)
			8, // offsetX
			-16, // offsetXFlip
		},
		{
			// VDPSprite #9
			0,  // numTiles
			17, // offsetY
			-25, // offsetYFlip
			0, // 00 | size (8 x 8)
			1, // offsetX
			-9, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_6 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #10
			0,  // numTiles
			-10, // offsetY
			2, // offsetYFlip
			0, // 00 | size (8 x 8)
			9, // offsetX
			-17, // offsetXFlip
		},
		{
			// VDPSprite #11
			0,  // numTiles
			-16, // offsetY
			8, // offsetYFlip
			0, // 00 | size (8 x 8)
			6, // offsetX
			-14, // offsetXFlip
		},
		{
			// VDPSprite #12
			0,  // numTiles
			-22, // offsetY
			14, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_7 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #13
			0,  // numTiles
			2, // offsetY
			-10, // offsetYFlip
			0, // 00 | size (8 x 8)
			9, // offsetX
			-17, // offsetXFlip
		},
		{
			// VDPSprite #14
			0,  // numTiles
			8, // offsetY
			-16, // offsetYFlip
			0, // 00 | size (8 x 8)
			6, // offsetX
			-14, // offsetXFlip
		},
		{
			// VDPSprite #15
			0,  // numTiles
			14, // offsetY
			-22, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_8 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #16
			0,  // numTiles
			-9, // offsetY
			1, // offsetYFlip
			0, // 00 | size (8 x 8)
			4, // offsetX
			-12, // offsetXFlip
		},
		{
			// VDPSprite #17
			0,  // numTiles
			-14, // offsetY
			6, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #18
			0,  // numTiles
			-19, // offsetY
			11, // offsetYFlip
			0, // 00 | size (8 x 8)
			-3, // offsetX
			-5, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_9 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_2, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #19
			0,  // numTiles
			1, // offsetY
			-9, // offsetYFlip
			0, // 00 | size (8 x 8)
			4, // offsetX
			-12, // offsetXFlip
		},
		{
			// VDPSprite #20
			0,  // numTiles
			6, // offsetY
			-14, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #21
			0,  // numTiles
			11, // offsetY
			-19, // offsetYFlip
			0, // 00 | size (8 x 8)
			-3, // offsetX
			-5, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_10 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #22
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			0, // 00 | size (8 x 8)
			5, // offsetX
			-13, // offsetXFlip
		},
		{
			// VDPSprite #23
			0,  // numTiles
			-12, // offsetY
			4, // offsetYFlip
			0, // 00 | size (8 x 8)
			2, // offsetX
			-10, // offsetXFlip
		},
		{
			// VDPSprite #24
			0,  // numTiles
			-16, // offsetY
			8, // offsetYFlip
			0, // 00 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_11 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #25
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			0, // 00 | size (8 x 8)
			5, // offsetX
			-13, // offsetXFlip
		},
		{
			// VDPSprite #26
			0,  // numTiles
			4, // offsetY
			-12, // offsetYFlip
			0, // 00 | size (8 x 8)
			2, // offsetX
			-10, // offsetXFlip
		},
		{
			// VDPSprite #27
			0,  // numTiles
			8, // offsetY
			-16, // offsetYFlip
			0, // 00 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_12 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #28
			0,  // numTiles
			-7, // offsetY
			-1, // offsetYFlip
			0, // 00 | size (8 x 8)
			2, // offsetX
			-10, // offsetXFlip
		},
		{
			// VDPSprite #29
			0,  // numTiles
			-10, // offsetY
			2, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #30
			0,  // numTiles
			-13, // offsetY
			5, // offsetYFlip
			0, // 00 | size (8 x 8)
			-3, // offsetX
			-5, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_13 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #31
			0,  // numTiles
			-1, // offsetY
			-7, // offsetYFlip
			0, // 00 | size (8 x 8)
			2, // offsetX
			-10, // offsetXFlip
		},
		{
			// VDPSprite #32
			0,  // numTiles
			2, // offsetY
			-10, // offsetYFlip
			0, // 00 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #33
			0,  // numTiles
			5, // offsetY
			-13, // offsetYFlip
			0, // 00 | size (8 x 8)
			-3, // offsetX
			-5, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_14 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #34
			0,  // numTiles
			-6, // offsetY
			-2, // offsetYFlip
			0, // 00 | size (8 x 8)
			-1, // offsetX
			-7, // offsetXFlip
		},
		{
			// VDPSprite #35
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			0, // 00 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
		{
			// VDPSprite #36
			0,  // numTiles
			-10, // offsetY
			2, // offsetYFlip
			0, // 00 | size (8 x 8)
			-4, // offsetX
			-4, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_15 = {
	3, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_3, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #37
			0,  // numTiles
			-2, // offsetY
			-6, // offsetYFlip
			0, // 00 | size (8 x 8)
			-1, // offsetX
			-7, // offsetXFlip
		},
		{
			// VDPSprite #38
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			0, // 00 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
		{
			// VDPSprite #39
			0,  // numTiles
			2, // offsetY
			-10, // offsetYFlip
			0, // 00 | size (8 x 8)
			-4, // offsetX
			-4, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_16 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_4, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #40
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			0, // 00 | size (8 x 8)
			-8, // offsetX
			0, // offsetXFlip
		},
		{
			// VDPSprite #41
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			16, // 10 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #42
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			32, // 20 | size (8 x 8)
			-8, // offsetX
			0, // offsetXFlip
		},
		{
			// VDPSprite #43
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			48, // 30 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_17 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_5, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #44
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			0, // 00 | size (8 x 8)
			-8, // offsetX
			0, // offsetXFlip
		},
		{
			// VDPSprite #45
			0,  // numTiles
			-8, // offsetY
			0, // offsetYFlip
			16, // 10 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
		{
			// VDPSprite #46
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			32, // 20 | size (8 x 8)
			-8, // offsetX
			0, // offsetXFlip
		},
		{
			// VDPSprite #47
			0,  // numTiles
			0, // offsetY
			-8, // offsetYFlip
			48, // 30 | size (8 x 8)
			0, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_18 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_6, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #48
			0,  // numTiles
			-6, // offsetY
			-10, // offsetYFlip
			5, // 00 | size (16 x 16)
			-7, // offsetX
			-9, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_19 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_7, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #49
			0,  // numTiles
			-5, // offsetY
			-11, // offsetYFlip
			5, // 00 | size (16 x 16)
			-4, // offsetX
			-12, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_20 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_8, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #50
			0,  // numTiles
			-5, // offsetY
			-11, // offsetYFlip
			5, // 00 | size (16 x 16)
			-8, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_21 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_9, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #51
			0,  // numTiles
			-7, // offsetY
			-9, // offsetYFlip
			5, // 00 | size (16 x 16)
			-8, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_22 = {
	1, // numSprite
	1, // timer
	(TileSet*) &dynamic_tileset_10, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #52
			0,  // numTiles
			-7, // offsetY
			-9, // offsetYFlip
			5, // 00 | size (16 x 16)
			-8, // offsetX
			-8, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_27 = {
	1, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_12, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #54
			0,  // numTiles
			-7, // offsetY
			-9, // offsetYFlip
			5, // 00 | size (16 x 16)
			0, // offsetX
			-16, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_28 = {
	2, // numSprite
	8, // timer
	(TileSet*) &dynamic_tileset_13, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #55
			0,  // numTiles
			-15, // offsetY
			-1, // offsetYFlip
			13, // 00 | size (32 x 16)
			0, // offsetX
			-32, // offsetXFlip
		},
		{
			// VDPSprite #56
			0,  // numTiles
			-1, // offsetY
			-15, // offsetYFlip
			45, // 20 | size (32 x 16)
			0, // offsetX
			-32, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_26 = {
	1, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_11, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #53
			0,  // numTiles
			-3, // offsetY
			-5, // offsetYFlip
			4, // 00 | size (16 x 8)
			0, // offsetX
			-16, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_29 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_14, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #57
			0,  // numTiles
			-7, // offsetY
			-1, // offsetYFlip
			0, // 00 | size (8 x 8)
			-6, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #58
			0,  // numTiles
			-7, // offsetY
			-1, // offsetYFlip
			16, // 10 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
		{
			// VDPSprite #59
			0,  // numTiles
			-1, // offsetY
			-7, // offsetYFlip
			32, // 20 | size (8 x 8)
			-6, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #60
			0,  // numTiles
			-1, // offsetY
			-7, // offsetYFlip
			48, // 30 | size (8 x 8)
			-2, // offsetX
			-6, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_30 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_15, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #61
			0,  // numTiles
			-15, // offsetY
			-1, // offsetYFlip
			5, // 00 | size (16 x 16)
			-14, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #62
			0,  // numTiles
			-15, // offsetY
			-1, // offsetYFlip
			21, // 10 | size (16 x 16)
			-2, // offsetX
			-14, // offsetXFlip
		},
		{
			// VDPSprite #63
			0,  // numTiles
			-1, // offsetY
			-15, // offsetYFlip
			37, // 20 | size (16 x 16)
			-14, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #64
			0,  // numTiles
			-1, // offsetY
			-15, // offsetYFlip
			53, // 30 | size (16 x 16)
			-2, // offsetX
			-14, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_31 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_16, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #65
			0,  // numTiles
			-23, // offsetY
			-1, // offsetYFlip
			10, // 00 | size (24 x 24)
			-22, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #66
			0,  // numTiles
			-23, // offsetY
			-1, // offsetYFlip
			26, // 10 | size (24 x 24)
			-2, // offsetX
			-22, // offsetXFlip
		},
		{
			// VDPSprite #67
			0,  // numTiles
			-1, // offsetY
			-23, // offsetYFlip
			42, // 20 | size (24 x 24)
			-22, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #68
			0,  // numTiles
			-1, // offsetY
			-23, // offsetYFlip
			58, // 30 | size (24 x 24)
			-2, // offsetX
			-22, // offsetXFlip
		},
	}
};

const AnimationFrame dynamic_frame_32 = {
	4, // numSprite
	2, // timer
	(TileSet*) &dynamic_tileset_17, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #69
			0,  // numTiles
			-23, // offsetY
			-1, // offsetYFlip
			10, // 00 | size (24 x 24)
			-22, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #70
			0,  // numTiles
			-23, // offsetY
			-1, // offsetYFlip
			26, // 10 | size (24 x 24)
			-2, // offsetX
			-22, // offsetXFlip
		},
		{
			// VDPSprite #71
			0,  // numTiles
			-1, // offsetY
			-23, // offsetYFlip
			42, // 20 | size (24 x 24)
			-22, // offsetX
			-2, // offsetXFlip
		},
		{
			// VDPSprite #72
			0,  // numTiles
			-1, // offsetY
			-23, // offsetYFlip
			58, // 30 | size (24 x 24)
			-2, // offsetX
			-22, // offsetXFlip
		},
	}
};

const AnimationFrame* const dynamic_bullet_frames[] = {
	(AnimationFrame*) &dynamic_frame_0,
};

const Animation dynamic_bullet = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_bullet_frames
};

const AnimationFrame* const dynamic_blast_frames[] = {
	(AnimationFrame*) &dynamic_frame_1,
};

const Animation dynamic_blast = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_blast_frames
};

const AnimationFrame* const dynamic_loading_frames[] = {
	(AnimationFrame*) &dynamic_frame_4,
	(AnimationFrame*) &dynamic_frame_5,
	(AnimationFrame*) &dynamic_frame_6,
	(AnimationFrame*) &dynamic_frame_7,
	(AnimationFrame*) &dynamic_frame_8,
	(AnimationFrame*) &dynamic_frame_9,
	(AnimationFrame*) &dynamic_frame_10,
	(AnimationFrame*) &dynamic_frame_11,
	(AnimationFrame*) &dynamic_frame_12,
	(AnimationFrame*) &dynamic_frame_13,
	(AnimationFrame*) &dynamic_frame_14,
	(AnimationFrame*) &dynamic_frame_15,
};

const Animation dynamic_loading = {
	12, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_loading_frames
};

const AnimationFrame* const dynamic_megabeam_start_frames[] = {
	(AnimationFrame*) &dynamic_frame_16,
	(AnimationFrame*) &dynamic_frame_17,
	(AnimationFrame*) &dynamic_frame_16,
};

const Animation dynamic_megabeam_start = {
	3, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_start_frames
};

const AnimationFrame* const dynamic_megabeam_level_1_frames[] = {
	(AnimationFrame*) &dynamic_frame_18,
};

const Animation dynamic_megabeam_level_1 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_level_1_frames
};

const AnimationFrame* const dynamic_megabeam_part_1_frames[] = {
	(AnimationFrame*) &dynamic_frame_19,
};

const Animation dynamic_megabeam_part_1 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_part_1_frames
};

const AnimationFrame* const dynamic_megabeam_part_2_frames[] = {
	(AnimationFrame*) &dynamic_frame_20,
};

const Animation dynamic_megabeam_part_2 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_part_2_frames
};

const AnimationFrame* const dynamic_megabeam_part_3_frames[] = {
	(AnimationFrame*) &dynamic_frame_21,
};

const Animation dynamic_megabeam_part_3 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_part_3_frames
};

const AnimationFrame* const dynamic_megabeam_part_4_frames[] = {
	(AnimationFrame*) &dynamic_frame_22,
};

const Animation dynamic_megabeam_part_4 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_megabeam_part_4_frames
};

const AnimationFrame* const dynamic_ultrabeam_start_frames[] = {
	(AnimationFrame*) &dynamic_frame_27,
	(AnimationFrame*) &dynamic_frame_28,
	(AnimationFrame*) &dynamic_frame_27,
	(AnimationFrame*) &dynamic_frame_26,
};

const Animation dynamic_ultrabeam_start = {
	4, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_ultrabeam_start_frames
};

const AnimationFrame* const dynamic_ultrabeam_big_frames[] = {
	(AnimationFrame*) &dynamic_frame_17,
};

const Animation dynamic_ultrabeam_big = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_ultrabeam_big_frames
};

const AnimationFrame* const dynamic_ultrabeam_small_frames[] = {
	(AnimationFrame*) &dynamic_frame_16,
};

const Animation dynamic_ultrabeam_small = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_ultrabeam_small_frames
};

const AnimationFrame* const dynamic_ultrabeam_hit_frames[] = {
	(AnimationFrame*) &dynamic_frame_29,
	(AnimationFrame*) &dynamic_frame_30,
	(AnimationFrame*) &dynamic_frame_31,
	(AnimationFrame*) &dynamic_frame_32,
};

const Animation dynamic_ultrabeam_hit = {
	4, // numFrames
	0, // loop
	(AnimationFrame**) dynamic_ultrabeam_hit_frames
};

const Animation *const dynamic_sprite_animations[] = {
	(Animation*) &dynamic_bullet,
	(Animation*) &dynamic_blast,
	(Animation*) &dynamic_loading,
	(Animation*) &dynamic_megabeam_start,
	(Animation*) &dynamic_megabeam_level_1,
	(Animation*) &dynamic_megabeam_part_1,
	(Animation*) &dynamic_megabeam_part_2,
	(Animation*) &dynamic_megabeam_part_3,
	(Animation*) &dynamic_megabeam_part_4,
	(Animation*) &dynamic_ultrabeam_start,
	(Animation*) &dynamic_ultrabeam_big,
	(Animation*) &dynamic_ultrabeam_small,
	(Animation*) &dynamic_ultrabeam_hit,
};

const SpriteDefinition dynamic_sprite = {
	32, // width
	32, // height
	(Palette*) &dynamic_sprite_palette,
	13, // numAnimations
	(Animation **) dynamic_sprite_animations, 
	9, // maxNumTiles
	4, // maxNumsprites
};
