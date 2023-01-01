#include <genesis.h>


const u16 ship_sprite_palette_data[] = {
	0x0E0E, 0x0008, 0x002C, 0x006E, 0x00AE, 0x00CE, 0x0000, 0x0444, 0x0666, 0x0AAA, 0x0CCC, 0x0E40, 0x0E80, 0x0EC6, 0x0EEA, 0x0EEE
};

const Palette ship_sprite_palette = {
	16, // numColors
	(u16*) ship_sprite_palette_data
};

const u32 ship_sprite_animation_0_frame_0_tileset_data[] = {
	0x00000000, 0x00000000, 0x000FFFFF, 0x00F7FFFF, 0x03322FAA, 0x00971699, 0xAF003299, 0x0AF00A87,
	0x00AFA8FF, 0xA00A9869, 0xF996AA66, 0xA8878976, 0x97727887, 0x80000098, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0xF0000000, 0xFFFF0000, 0xAAAAF0BB, 0x99990BCC, 0x8967AFCD, 0x766699FD,
	0xFFFFA78F, 0xAFFFFFAA, 0x689AAFF7, 0x61169AF2, 0x83211110, 0x9FA00000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBBB00000, 0xCCBBB000, 0xDDCCFB00,
	0xDEDDCFB0, 0xFFEEDCFB, 0x9AFDDCCB, 0x07AFFBBB, 0x0007AA90, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_1_frame_1_tileset_data[] = {
	0x00000000, 0x02300000, 0x0023FFFF, 0x00A23FAA, 0xAF866699, 0x6AF887FF, 0x06AF9876, 0x966AA988,
	0xFAA99AA9, 0x99916997, 0x88821678, 0x86932199, 0x67711677, 0x80000880, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0xF0000000, 0xAFA909DC, 0x98669AFD, 0xFFFFF8AF, 0xAAAAFFF9, 0x6111AA23,
	0x73221177, 0xA9777778, 0x9A986660, 0x99961112, 0x91111200, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xDCB00000, 0xEDCCB000, 0xFFDCCB00, 0x8AFEDFB0,
	0x77AFFCFB, 0x888AAFCB, 0x00888AFC, 0x000088A0, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_1_frame_2_tileset_data[] = {
	0x02300000, 0x002300FF, 0x00823869, 0x9A76AA78, 0x09AFFAAA, 0x000FFFA9, 0xA00AAFF7, 0xFAA16A79,
	0xA991269F, 0x988231FA, 0x866666AA, 0xA991267A, 0x98823166, 0x87700978, 0x70000000, 0x00000000,
	0x00000000, 0xFFFFA900, 0xAAAAAA90, 0x22222AA0, 0x93333333, 0x96666777, 0x77777777, 0x99777888,
	0xFA978888, 0xAAA78888, 0xAAA66888, 0xAA111111, 0x62222220, 0x99999A00, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBCB00000, 0xAFCCB000, 0x77AFCFB0, 0x7778ACFB,
	0x88878FCB, 0x888888FC, 0x888888AD, 0x07888AD0, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_3_frame_1_tileset_data[] = {
	0x00000000, 0x00000000, 0x02200000, 0x00AFFFFF, 0x009FFFFF, 0xA982FAAA, 0x02236F99, 0x00821699,
	0xFF061688, 0x7AF77986, 0x87AFA878, 0x987A889A, 0xA989A879, 0xF0000007, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0xF0000000, 0xFFFF00BB, 0xAFFFFBCC, 0xAAAA9CCD, 0x9678ACDE,
	0x6FFA8FCE, 0x86699AFD, 0x9888777F, 0xFFFFA129, 0xAAAFFA92, 0x799AAA90, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xCBB00000, 0xDCCBB000, 0xEDDCFB00,
	0xEEEDCFB0, 0xEEEEDCFB, 0xFDDDECBB, 0xAFCCDCBB, 0x009ACBB0, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_3_frame_2_tileset_data[] = {
	0x00000000, 0x02300000, 0x00022099, 0xA9FFFFFF, 0x09FFFFFF, 0x78AFFFFF, 0x8792FAAA, 0x98326F99,
	0xF3262689, 0x7AA76997, 0x879FF88A, 0x987AFF99, 0xA988A7FF, 0xF0009899, 0x00000076, 0x00000000,
	0x00000000, 0x00000000, 0x99AA9800, 0xA1112220, 0xFFFFA7BB, 0xFFFFFBCC, 0xAAA79CCD, 0x9667FCDE,
	0x7AFFFCDE, 0xA666AFCD, 0x96669AFF, 0x81222279, 0xFFFF6123, 0xAAAAAA80, 0x89999800, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBB000000, 0xCCCBB000, 0xDDCCFC00, 0xEEDDCFC0,
	0xEEEEDCFB, 0xDEEEDDCC, 0xCCDDDCBB, 0xF97CCBB0, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_5_frame_0_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000B,
	0x00000BBB, 0x0000BFCC, 0x000BFCDD, 0x00BFCDEE, 0x00BCCDDF, 0x00BBBFFA, 0x0009AA70, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00BB0FAA, 0xBBCCB099,
	0xCCDCFA76, 0xDDDF9966, 0xEDF87AFF, 0xFFAAFFFF, 0xA97FFAA9, 0x702FA961, 0x00011112, 0x0000000A,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0FFFFFF0, 0xFFFFFF7F, 0xAAAAF223, 0x99996179,
	0x98992300, 0x6778A00F, 0xFFFF8AFA, 0xFA9689A0, 0x86688889, 0x1666668C, 0x38788727, 0xF9890000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x00000000,
	0xFA000000, 0xA0000000, 0x00000000, 0x0A000000, 0x9F000000, 0xCA000000, 0x8CC66600, 0x088CC800
};


const u32 ship_sprite_animation_5_frame_1_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000BBB, 0x000BBBCB,
	0x00BFCCCE, 0x0BFCCCDE, 0xBFCCDDEF, 0xBBCDEEF9, 0xBBCDDF96, 0xBBB99976, 0x09997111, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000AFA, 0x000AFFFF, 0xB7F999AA, 0xCC776999,
	0xEF997698, 0xF9988777, 0x999FFFF9, 0x99FFF988, 0x6FFF9886, 0x3FF98167, 0x62111679, 0x86669880,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x99800000, 0xA9700000, 0xA9233000, 0x98200000,
	0x87899000, 0x78990000, 0x97800000, 0x68890000, 0x86A8A000, 0x6CC69000, 0x27886600, 0x00770660
};


const u32 ship_sprite_animation_5_frame_2_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000009, 0x000BBBBB, 0x00BACCCB,
	0x0BACCCCC, 0x0BACCDDC, 0xBBCCDDDD, 0xBBCDDEED, 0xBBCDEEDA, 0x0BCDDDA7, 0x09AAAA71, 0x00000766,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x09A99800, 0xAAAA9980, 0xAAA99982, 0xB66A8888,
	0xB9989880, 0xC9877777, 0xAFFF9886, 0x9FFA8867, 0xAAA88677, 0x2AA86666, 0x61111766, 0x66087007,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x33000000, 0x20000000,
	0x00000000, 0x78000000, 0x70000000, 0x90000000, 0x79000000, 0x78000000, 0x68000000, 0x66000000
};


const u32 ship_sprite_animation_5_frame_3_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000F, 0x0002BBBB, 0x000BABBB,
	0x00BACCCB, 0x00BCDDDC, 0x0BBCDEED, 0x0BCDEEDD, 0x8BCDEEAA, 0x98CDEAA8, 0x009AA986, 0x00866000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x99870000, 0xFA987000, 0xAA988732, 0xB6A88720,
	0xB7697760, 0xB8777670, 0xA7999700, 0x99FF8870, 0x8FFA8868, 0x63F97667, 0x60211666, 0x00086000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x20000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_5_frame_4_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000078, 0x0000079A, 0x033279BB, 0x00288BBC,
	0x00086BCC, 0x0000BBCD, 0x088ABBDD, 0x8AAABBDE, 0x8AAA6CDE, 0x0AA369DE, 0x0076679A, 0x00807700,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x87000000, 0xA9700000, 0xBB972330, 0xFBB88200,
	0xCCB68000, 0xDCBA0000, 0xDDBBA880, 0xEDBBAAA8, 0xEDC86AA8, 0xED976AA0, 0xA9766700, 0x00770800
};


const u32 ship_sprite_animation_5_frame_5_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000789, 0x0000789A, 0x2237889A, 0x002788A6,
	0x00677967, 0x00767778, 0x00079997, 0x00788FF9, 0x08688AFF, 0x076679F3, 0x06661120, 0x00006800,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x90000000, 0xFF000000, 0xABBBB200, 0xBBBBAB00,
	0xBBCCCAB0, 0xBCDDDCB0, 0xADEEDCBB, 0x9DDEEDCB, 0x8AAEEDCB, 0x68AAEDC8, 0x6689AA90, 0x00006680,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x90000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_5_frame_6_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000899A, 0x000899AA, 0x3328999A, 0x028888A6,
	0x00088989, 0x87777778, 0x076889FF, 0x097688AF, 0x9777688A, 0x8766668A, 0x86667111, 0x66700780,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x90000000, 0xAA900000, 0xAABBBBB0, 0x6BBCCCAB,
	0x9BCCCCCA, 0x9CCDDCCA, 0xFADDDDCC, 0xF9DEEDDC, 0xAAADEEDC, 0xA27ADDDC, 0x1617AAAA, 0x66667000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0xB0000000, 0xB0000000, 0xBB000000, 0xBB000000, 0xBB000000, 0xB0000000, 0x90000000, 0x00000000
};


const u32 ship_sprite_animation_5_frame_7_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000899A, 0x000079AF, 0x003329AA, 0x00002899,
	0x00998788, 0x00099877, 0x00008799, 0x00098868, 0x00A8A686, 0x0096CC67, 0x06688729, 0x66077000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFA000000, 0xFFFA0000, 0xA999F7BB, 0x99677CCB,
	0x96799FEE, 0x778899FE, 0xFFFF999F, 0x89FFF999, 0x889FFF66, 0x6189FF36, 0x76111261, 0x88966680,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBB000000, 0xCBBB0000,
	0xCCCFB000, 0xDCCCFB00, 0xEDDCCFB0, 0xFEEDCBB0, 0x9FDDCBB0, 0x7999BBB0, 0x11799900, 0x00000000
};


const u32 ship_sprite_animation_5_frame_8_tileset_data[] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000000,
	0x000000AF, 0x0000000A, 0x00000000, 0x000000A0, 0x000000F9, 0x000000AC, 0x00666CC8, 0x008CC880,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0FFFFFF0, 0xF7FFFFFF, 0x322FAAAA, 0x97169999,
	0x00329989, 0xF00A8776, 0xAFA8FFFF, 0x0A9869AF, 0x98888668, 0xC8666661, 0x72788783, 0x0000989F,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 0xAAF0BB00, 0x990BCCBB,
	0x67AFCDCC, 0x6699FDDD, 0xFFA78FDE, 0xFFFFAAFF, 0x9AAFF79A, 0x169AF207, 0x21111000, 0xA0000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xB0000000,
	0xBBB00000, 0xCCFB0000, 0xDDCFB000, 0xEEDCFB00, 0xFDDCCB00, 0xAFFBBB00, 0x07AA9000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_0_tileset_data[] = {
	0x00000000, 0x00000000, 0x000FFFFF, 0x00F7FFFF, 0x03322FAA, 0x00861699, 0xAF001299, 0x0AF00987,
	0x00AF97FF, 0xA00A9869, 0xF996AA66, 0xA8878976, 0x97727887, 0x80000098, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0xF0000000, 0xFFFF0000, 0xAAAAF0BB, 0x99990BCC, 0x8967AFCD, 0x766699FD,
	0xFFFFA78F, 0xAFFFFFAA, 0x689AAFF7, 0x61169AF2, 0x83211110, 0x9FA00000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBBB00000, 0xCCBBB000, 0xDDCCFB00,
	0xDEDDCFB0, 0xFFEEDCFB, 0x9AFDDCCB, 0x07AFFBBB, 0x0007AA90, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_3_tileset_data[] = {
	0x00000000, 0x0300009A, 0x00300877, 0x90238766, 0xF9922299, 0xFFF3337A, 0x877111AA, 0x707666AA,
	0x9076669A, 0xF9922289, 0xFFF33378, 0x87711177, 0x80037666, 0x00320767, 0x02000078, 0x00000000,
	0x00000000, 0xAAAA0000, 0x7777AAA0, 0x13333333, 0x99AAAAAA, 0xA9889999, 0xFAA88899, 0xAAA88889,
	0xAA988889, 0x99878899, 0x88778999, 0x77777777, 0x11222222, 0x77778880, 0x88880000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xAAA00000, 0x999AABC0, 0x99999ABC, 0x999999AB,
	0x9999999B, 0x999998BC, 0x99977BC0, 0x77700000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_4_tileset_data[] = {
	0x70000000, 0x87700978, 0x98823166, 0xA991267A, 0x866666AA, 0x988231FA, 0xA991269F, 0xFAA16A79,
	0xA00AAFF7, 0x000FFFA9, 0x09AFFAAA, 0x9A76AA78, 0x00823869, 0x002300FF, 0x02300000, 0x00000000,
	0x00000000, 0x99999A00, 0x62222220, 0xAA111111, 0xAAA66888, 0xAAA78888, 0xFA978888, 0x99777888,
	0x77777777, 0x96666777, 0x93333333, 0x22222AA0, 0xAAAAAA90, 0xFFFFA900, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x07888AD0, 0x888888AD, 0x888888FC, 0x88878FCB, 0x7778ACFB,
	0x77AFCFB0, 0xAFCCB000, 0xBCB00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_5_tileset_data[] = {
	0x00000000, 0x00000000, 0x80000880, 0x67711677, 0x86932199, 0x88821678, 0x99916997, 0xFAA99AA9,
	0x966AA988, 0x06AF9876, 0x7AF887FF, 0xAF866699, 0x00A23FAA, 0x0023FFFF, 0x02300000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x91111200, 0x99961112, 0x9A986660, 0xA9777778, 0x73221177,
	0x6111AA23, 0xAAAAFFF9, 0xFFFFF8AF, 0x98669AFD, 0xAFA909DC, 0xF0000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000088A0, 0x00888AFC, 0x888AAFCB, 0x77AFFCFB,
	0x8AFEDFB0, 0xFFDCCB00, 0xEDCCB000, 0xDCB00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_6_tileset_data[] = {
	0x00000000, 0x00000000, 0x80000098, 0x97727887, 0xA8878976, 0xF996AA66, 0xA00A9869, 0x00AFA8FF,
	0x0AF00A87, 0xAF003299, 0x00971699, 0x03322FAA, 0x00F7FFFF, 0x000FFFFF, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x9FA00000, 0x83211110, 0x61169AF2, 0x689AAFF7, 0xAFFFFFAA, 0xFFFFA78F,
	0x766699FD, 0x8967AFCD, 0x99990BCC, 0xAAAAF0BB, 0xFFFF0000, 0xF0000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x0007AA90, 0x07AFFBBB, 0x9AFDDCCB, 0xFFEEDCFB, 0xDEDDCFB0,
	0xDDCCFB00, 0xCCBBB000, 0xBBB00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_7_tileset_data[] = {
	0x00000000, 0x00000000, 0xF0000007, 0xA989A879, 0x987A889A, 0x87AFA878, 0x7AF77986, 0xFF061688,
	0x00821699, 0x02236F99, 0xA982FAAA, 0x009FFFFF, 0x00AFFFFF, 0x02200000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x799AAA90, 0xAAAFFA92, 0xFFFFA129, 0x9888777F, 0x86699AFD, 0x6FFA8FCE,
	0x9678ACDE, 0xAAAA9CCD, 0xAFFFFBCC, 0xFFFF00BB, 0xF0000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x009ACBB0, 0xAFCCDCBB, 0xFDDDECBB, 0xEEEEDCFB, 0xEEEDCFB0,
	0xEDDCFB00, 0xDCCBB000, 0xCBB00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_8_tileset_data[] = {
	0x00000000, 0x00000076, 0xF0009899, 0xA988A7FF, 0x987AFF99, 0x879FF88A, 0x7AA76997, 0xF3262689,
	0x98326F99, 0x8792FAAA, 0x78AFFFFF, 0x09FFFFFF, 0xA9FFFFFF, 0x00022099, 0x02300000, 0x00000000,
	0x00000000, 0x89999800, 0xAAAAAA80, 0xFFFF6123, 0x81222279, 0x96669AFF, 0xA666AFCD, 0x7AFFFCDE,
	0x9667FCDE, 0xAAA79CCD, 0xFFFFFBCC, 0xFFFFA7BB, 0xA1112220, 0x99AA9800, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF97CCBB0, 0xCCDDDCBB, 0xDEEEDDCC, 0xEEEEDCFB,
	0xEEDDCFC0, 0xDDCCFC00, 0xCCCBB000, 0xBB000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const u32 ship_sprite_animation_6_frame_9_tileset_data[] = {
	0x00000000, 0x030000A6, 0x80330088, 0xA8823AA8, 0xAAA9AFFA, 0x888AFFFA, 0x7AAFFFFF, 0x9AAAAAAA,
	0x889AAAAA, 0x76899999, 0x97688888, 0x87768886, 0x70020886, 0x00330077, 0x03000076, 0x00000000,
	0x00000000, 0xAAAA0000, 0x8888AAA0, 0xA3333333, 0x9666AA9B, 0xAA99F9BC, 0xAAA9A9BC, 0xAAA99BCD,
	0x98888BCD, 0x867786BC, 0x677776BB, 0x7666776B, 0x71222111, 0x88887770, 0x77770000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xCCCCC000, 0xCCCCFFC0, 0xDDDDCCFC, 0xEEEEEDCC,
	0xDEEEDDCB, 0xDDDDDCCB, 0xCCCCCBB0, 0xBBBBB000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};


const TileSet ship_sprite_animation_0_frame_0_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_0_frame_0_tileset_data
};

const AnimationFrame ship_sprite_animation_0_frame_0 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_0_frame_0_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const AnimationFrame* const ship_sprite_animation_0_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_0_frame_0,
};

const Animation ship_sprite_animation_0 = {
	1, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_0_frames
};

const TileSet ship_sprite_animation_1_frame_1_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_1_frame_1_tileset_data
};

const AnimationFrame ship_sprite_animation_1_frame_1 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_1_frame_1_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_1_frame_2_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_1_frame_2_tileset_data
};

const AnimationFrame ship_sprite_animation_1_frame_2 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_1_frame_2_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const AnimationFrame* const ship_sprite_animation_1_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_0_frame_0,
	(AnimationFrame*) &ship_sprite_animation_1_frame_1,
	(AnimationFrame*) &ship_sprite_animation_1_frame_2,
};

const Animation ship_sprite_animation_1 = {
	3, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_1_frames
};

const AnimationFrame* const ship_sprite_animation_2_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_1_frame_2,
	(AnimationFrame*) &ship_sprite_animation_1_frame_1,
	(AnimationFrame*) &ship_sprite_animation_0_frame_0,
};

const Animation ship_sprite_animation_2 = {
	3, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_2_frames
};

const TileSet ship_sprite_animation_3_frame_1_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_3_frame_1_tileset_data
};

const AnimationFrame ship_sprite_animation_3_frame_1 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_3_frame_1_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_3_frame_2_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_3_frame_2_tileset_data
};

const AnimationFrame ship_sprite_animation_3_frame_2 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_3_frame_2_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const AnimationFrame* const ship_sprite_animation_3_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_0_frame_0,
	(AnimationFrame*) &ship_sprite_animation_3_frame_1,
	(AnimationFrame*) &ship_sprite_animation_3_frame_2,
};

const Animation ship_sprite_animation_3 = {
	3, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_3_frames
};

const AnimationFrame* const ship_sprite_animation_4_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_3_frame_2,
	(AnimationFrame*) &ship_sprite_animation_3_frame_1,
	(AnimationFrame*) &ship_sprite_animation_0_frame_0,
};

const Animation ship_sprite_animation_4 = {
	3, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_4_frames
};

const TileSet ship_sprite_animation_5_frame_0_tileset = {
	0, // compression
	8, // numTiles
	(u32*) ship_sprite_animation_5_frame_0_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_0 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_0_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			8,  // numTile
			0, // offsetY
			0, // offsetYFlip
			13, // size (32 x 16)
			0, // offsetX
			0, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_1_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_1_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_1 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_1_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			5, // offsetX
			3, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_2_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_2_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_2 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_2_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			7, // offsetX
			1, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_3_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_3_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_3 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_3_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			8, // offsetX
			0, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_4_tileset = {
	0, // compression
	4, // numTiles
	(u32*) ship_sprite_animation_5_frame_4_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_4 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_4_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			4,  // numTile
			0, // offsetY
			0, // offsetYFlip
			5, // size (16 x 16)
			8, // offsetX
			8, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_5_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_5_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_5 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_5_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			7, // offsetX
			1, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_6_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_6_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_6 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_6_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			7, // offsetX
			1, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_7_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_5_frame_7_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_7 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_7_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_5_frame_8_tileset = {
	0, // compression
	8, // numTiles
	(u32*) ship_sprite_animation_5_frame_8_tileset_data
};

const AnimationFrame ship_sprite_animation_5_frame_8 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_5_frame_8_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			8,  // numTile
			0, // offsetY
			0, // offsetYFlip
			13, // size (32 x 16)
			0, // offsetX
			0, // offsetXFlip
		},
	}
};

const AnimationFrame* const ship_sprite_animation_5_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_5_frame_0,
	(AnimationFrame*) &ship_sprite_animation_5_frame_1,
	(AnimationFrame*) &ship_sprite_animation_5_frame_2,
	(AnimationFrame*) &ship_sprite_animation_5_frame_3,
	(AnimationFrame*) &ship_sprite_animation_5_frame_4,
	(AnimationFrame*) &ship_sprite_animation_5_frame_5,
	(AnimationFrame*) &ship_sprite_animation_5_frame_6,
	(AnimationFrame*) &ship_sprite_animation_5_frame_7,
	(AnimationFrame*) &ship_sprite_animation_5_frame_8,
};

const Animation ship_sprite_animation_5 = {
	9, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_5_frames
};

const TileSet ship_sprite_animation_6_frame_0_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_0_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_0 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_0_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_3_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_3_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_3 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_3_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_4_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_4_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_4 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_4_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_5_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_5_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_5 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_5_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_6_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_6_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_6 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_6_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_7_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_7_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_7 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_7_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_8_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_8_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_8 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_8_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const TileSet ship_sprite_animation_6_frame_9_tileset = {
	0, // compression
	6, // numTiles
	(u32*) ship_sprite_animation_6_frame_9_tileset_data
};

const AnimationFrame ship_sprite_animation_6_frame_9 = {
	1, // numSprite
	8, // timer
	(TileSet*) &ship_sprite_animation_6_frame_9_tileset, // tileset
	NULL, // collision
	{
		{
			// VDPSprite #0
			6,  // numTile
			0, // offsetY
			0, // offsetYFlip
			9, // size (24 x 16)
			4, // offsetX
			4, // offsetXFlip
		},
	}
};

const AnimationFrame* const ship_sprite_animation_6_frames[] = {
	(AnimationFrame*) &ship_sprite_animation_6_frame_0,
	(AnimationFrame*) &ship_sprite_animation_1_frame_1,
	(AnimationFrame*) &ship_sprite_animation_1_frame_2,
	(AnimationFrame*) &ship_sprite_animation_6_frame_3,
	(AnimationFrame*) &ship_sprite_animation_6_frame_4,
	(AnimationFrame*) &ship_sprite_animation_6_frame_5,
	(AnimationFrame*) &ship_sprite_animation_6_frame_6,
	(AnimationFrame*) &ship_sprite_animation_6_frame_7,
	(AnimationFrame*) &ship_sprite_animation_6_frame_8,
	(AnimationFrame*) &ship_sprite_animation_6_frame_9,
	(AnimationFrame*) &ship_sprite_animation_3_frame_2,
	(AnimationFrame*) &ship_sprite_animation_3_frame_1,
};

const Animation ship_sprite_animation_6 = {
	12, // numFrames
	0, // loop
	(AnimationFrame**) ship_sprite_animation_6_frames
};

const Animation *const ship_sprite_animations[] = {
	(Animation*) &ship_sprite_animation_0,
	(Animation*) &ship_sprite_animation_1,
	(Animation*) &ship_sprite_animation_2,
	(Animation*) &ship_sprite_animation_3,
	(Animation*) &ship_sprite_animation_4,
	(Animation*) &ship_sprite_animation_5,
	(Animation*) &ship_sprite_animation_6,
};

const SpriteDefinition ship_sprite = {
	256, // width
	128, // height
	(Palette*) &ship_sprite_palette,
	7, // numAnimations
	(Animation **) ship_sprite_animations, 
	8, // maxNumTiles
	1, // maxNumsprites
};
