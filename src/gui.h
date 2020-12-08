#pragma once

#include "main.h"

typedef uint32_t Dib;

#pragma pack(push, 1)

struct Win;
struct Scroll;
struct GraphicWin;
struct CWinFonted;

struct Filemap {
    int pvFileBuffer;
    int hFile;
    int hFileMapping;
    int iFileSize;
};

struct Heap {
    int iFlags;
    int pszStart;
    char *pszPosition;
    int iSize;
    int iSpaceLeft;
};

struct Strings {
    Heap oMemAllocator;
    int fAllocated;
};

struct SpotInternal {
    RECT rTest;
    int iHitBoxID;
    int iTag;
};

struct Spot {
    SpotInternal *paHitBoxes;
    int iArraySize;
    int iCount;
};

struct CListItem {
    int field_0;
    void *pItem;
    int p4Alloced;
    CListItem *pPrev;
    CListItem *pNext;
    int field_14;
    int field_18;
};

struct CList {
    int vtbl;
    CListItem *pFirst;
    CListItem *pCurrent;
    int iCount;
    int iCurrent;
    Heap *poMemAllocator;
};

struct Font {
    int field_0;
    int iFlags;
    HGDIOBJ hgdiobjFont;
    int iLineHeight;
    int iHeight;
    int iInternalLeading;
    int iAscent;
    int iDescent;
    int field_20;
    char *pszFileName;
};

struct Time {
    int iFlags;
    int iResult;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int iElapse;
    int fFired;
    int iResolution;
    int field_24;
};

struct PaletteInternal
{
    int field_0;
    Time *ptrTime;
    BYTE field_8;
    BYTE field_9;
    BYTE field_A;
    BYTE field_B;
    void *field_C;
};

struct Palette { // PRACX version did not have seed and paletteInternal
    PALETTEENTRY colors[256];
    int seed;
    PaletteInternal paletteInternal[5];
};

struct _PcxHeader {
    BYTE Identifier;
    BYTE Version;
    BYTE Encoding;
    BYTE BitsPerPixel;
    WORD XStart;
    WORD YStart;
    WORD XEnd;
    WORD YEnd;
    WORD HorzRes;
    WORD VertRes;
    BYTE Palette[48];
    BYTE Reserved1;
    BYTE NumBitPlanes;
    WORD BytesPerLine;
    WORD PaletteType;
    WORD HorzScreenSize;
    WORD VertScreenSize;
    BYTE Reserved2[54];
};

struct CaviarData
{
    int field_0;
    int fileDescriptor;
    int field_8;
};

struct Caviar
{
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
    int field_6C;
    int field_70;
    int field_74;
    int field_78;
    int field_7C;
    int field_80;
    int field_84;
    int field_88;
    int field_8C;
    int field_90;
    int field_94;
    int field_98;
    int field_9C;
    int field_A0;
    int field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    int field_B8;
    int field_BC;
    int field_C0;
    int field_C4;
    int field_C8;
    int field_CC;
    int field_D0;
    int field_D4;
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    int field_F4;
    int field_F8;
    int field_FC;
    int field_100;
    int field_104;
    int field_108;
    int field_10C;
    int field_110;
    int field_114;
    int field_118;
    int field_11C;
    int field_120;
    int field_124;
    int field_128;
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    int field_13C;
    int field_140;
    int field_144;
    int field_148;
    int field_14C;
    int field_150;
    int field_154;
    int field_158;
    int field_15C;
    int field_160;
    int field_164;
    int field_168;
    int field_16C;
    int field_170;
    int field_174;
    int field_178;
    int field_17C;
    int field_180;
    int field_184;
    int field_188;
    int field_18C;
    int field_190;
    int field_194;
    int field_198;
    int field_19C;
    int field_1A0;
    int field_1A4;
    int field_1A8;
    int field_1AC;
    int field_1B0;
    int field_1B4;
    int field_1B8;
    int field_1BC;
    int field_1C0;
    int field_1C4;
    int field_1C8;
    int field_1CC;
    int field_1D0;
    int field_1D4;
    int field_1D8;
    int field_1DC;
    int field_1E0;
    int field_1E4;
    int field_1E8;
    int field_1EC;
    int field_1F0;
    int field_1F4;
    int field_1F8;
    int field_1FC;
    int field_200;
    int field_204;
    int field_208;
    int field_20C;
    int field_210;
    int field_214;
    int field_218;
    int field_21C;
    int field_220;
    int field_224;
    int field_228;
    int field_22C;
    int field_230;
    int field_234;
    int field_238;
    int field_23C;
    int field_240;
    int field_244;
    int field_248;
    int field_24C;
    int field_250;
    int field_254;
    int field_258;
    int field_25C;
    int field_260;
    int field_264;
    int field_268;
    int field_26C;
    int field_270;
    int field_274;
    int field_278;
    int field_27C;
    int field_280;
    int field_284;
    int field_288;
    int field_28C;
    int field_290;
    int field_294;
    int field_298;
    int field_29C;
    int field_2A0;
    int field_2A4;
    int field_2A8;
    int field_2AC;
    int field_2B0;
    int field_2B4;
    int field_2B8;
    int field_2BC;
    int field_2C0;
    int field_2C4;
    int field_2C8;
    int field_2CC;
    int field_2D0;
    int field_2D4;
    int field_2D8;
    int field_2DC;
    int field_2E0;
    int field_2E4;
    int field_2E8;
    int field_2EC;
    int field_2F0;
    int field_2F4;
    int field_2F8;
    int field_2FC;
    int field_300;
    int field_304;
    int field_308;
    int field_30C;
    int field_310;
    int field_314;
    int field_318;
    int field_31C;
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
    int field_330;
    int field_334;
    int field_338;
    int field_33C;
    int field_340;
    int field_344;
    int field_348;
    int field_34C;
    int field_350;
    int field_354;
    int field_358;
    int field_35C;
    int field_360;
    int field_364;
    int field_368;
    int field_36C;
    int field_370;
    int field_374;
    int field_378;
    int field_37C;
    int field_380;
    int field_384;
    int field_388;
    int field_38C;
    int field_390;
    int field_394;
    int field_398;
    int field_39C;
    int field_3A0;
    int field_3A4;
    int field_3A8;
    int field_3AC;
    int field_3B0;
    int field_3B4;
    int field_3B8;
    int field_3BC;
    int field_3C0;
    int field_3C4;
    int field_3C8;
    int field_3CC;
    int field_3D0;
    int field_3D4;
    int field_3D8;
    int field_3DC;
    int field_3E0;
    int field_3E4;
    int field_3E8;
    int field_3EC;
    int field_3F0;
    int field_3F4;
    int field_3F8;
    int field_3FC;
    int field_400;
    int field_404;
    int field_408;
    int field_40C;
    int field_410;
    int field_414;
    int field_418;
    int field_41C;
    int field_420;
    int field_424;
    int field_428;
    int field_42C;
    int field_430;
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    int field_458;
    int field_45C;
    int field_460;
    int field_464;
    int field_468;
    int field_46C;
    int field_470;
    int field_474;
    int field_478;
    int field_47C;
    int field_480;
    int field_484;
    int field_488;
    int field_48C;
    int field_490;
    int field_494;
    int field_498;
    int field_49C;
    int field_4A0;
    int field_4A4;
    int field_4A8;
    int field_4AC;
    int field_4B0;
    int field_4B4;
    int field_4B8;
    int field_4BC;
    int field_4C0;
    int field_4C4;
    int field_4C8;
    int field_4CC;
    int field_4D0;
    int field_4D4;
    int field_4D8;
    int field_4DC;
    int field_4E0;
    int field_4E4;
    int field_4E8;
    int field_4EC;
    int field_4F0;
    int field_4F4;
    int field_4F8;
    int field_4FC;
    int field_500;
    int field_504;
    int field_508;
    int field_50C;
    int field_510;
    int field_514;
    int field_518;
    int field_51C;
    int field_520;
    int field_524;
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
    int field_544;
    int field_548;
    int field_54C;
    int field_550;
    int field_554;
    int field_558;
    int field_55C;
    int field_560;
    int field_564;
    int field_568;
    int field_56C;
    int field_570;
    int field_574;
    int field_578;
    int field_57C;
    int field_580;
    int field_584;
    int field_588;
    int field_58C;
    int field_590;
    int field_594;
    int field_598;
    int field_59C;
    int field_5A0;
    int field_5A4;
    int field_5A8;
    int field_5AC;
    int field_5B0;
    int field_5B4;
    int field_5B8;
    int field_5BC;
    int field_5C0;
    int field_5C4;
    int field_5C8;
    int field_5CC;
    int field_5D0;
    int field_5D4;
    int field_5D8;
    int field_5DC;
    int field_5E0;
    int field_5E4;
    int field_5E8;
    int field_5EC;
    int field_5F0;
    int field_5F4;
    int field_5F8;
    int field_5FC;
    int field_600;
    int field_604;
    int field_608;
    int field_60C;
    int field_610;
    int field_614;
    int field_618;
    int field_61C;
    int field_620;
    int field_624;
    int field_628;
    int field_62C;
    int field_630;
    int field_634;
    int field_638;
    int field_63C;
    int field_640;
    int field_644;
    int field_648;
    int field_64C;
    int field_650;
    int field_654;
    int field_658;
    int field_65C;
    int field_660;
    int field_664;
    int field_668;
    int field_66C;
    int field_670;
    int field_674;
    int field_678;
    int field_67C;
    int field_680;
    int field_684;
    int field_688;
    int field_68C;
    int field_690;
    int field_694;
    int field_698;
    int field_69C;
    int field_6A0;
    int field_6A4;
    int field_6A8;
    int field_6AC;
    int field_6B0;
    int field_6B4;
    int field_6B8;
    int field_6BC;
    int field_6C0;
    int field_6C4;
    int field_6C8;
    int field_6CC;
    int field_6D0;
    int field_6D4;
    int field_6D8;
    int field_6DC;
    int field_6E0;
    int field_6E4;
    int field_6E8;
    int field_6EC;
    int field_6F0;
    int field_6F4;
    int field_6F8;
    int field_6FC;
    int field_700;
    int field_704;
    int field_708;
    int field_70C;
    int field_710;
    int field_714;
    int field_718;
    int field_71C;
    int field_720;
    int field_724;
    int field_728;
    int field_72C;
    int field_730;
    int field_734;
    int field_738;
    int field_73C;
    int field_740;
    int field_744;
    int field_748;
    CaviarData caviarData[200];
    int field_10AC;
    int field_10B0;
    int field_10B4;
    int field_10B8;
    int field_10BC;
    int field_10C0;
    int field_10C4;
    int field_10C8;
    int field_10CC;
    int field_10D0;
    int field_10D4;
    int field_10D8;
    int field_10DC;
    int field_10E0;
    int field_10E4;
    int field_10E8;
    int field_10EC;
    int field_10F0;
    int field_10F4;
    int field_10F8;
    int field_10FC;
    int field_1100;
    int field_1104;
    int field_1108;
    int field_110C;
    int field_1110;
    int field_1114;
    int field_1118;
    int field_111C;
    int field_1120;
    int field_1124;
    int field_1128;
    int field_112C;
    int field_1130;
    int field_1134;
    int field_1138;
    int field_113C;
    int field_1140;
    int field_1144;
    int field_1148;
    int field_114C;
    int field_1150;
    int field_1154;
    int field_1158;
    int field_115C;
    int field_1160;
    int field_1164;
    int field_1168;
    int field_116C;
    int field_1170;
    int field_1174;
    int field_1178;
    int field_117C;
    int field_1180;
    int field_1184;
    int field_1188;
    int field_118C;
    int field_1190;
    int field_1194;
    int field_1198;
    int field_119C;
    int field_11A0;
    int field_11A4;
    int field_11A8;
    int field_11AC;
    int field_11B0;
    int field_11B4;
    int field_11B8;
    int field_11BC;
    int field_11C0;
    int field_11C4;
    int field_11C8;
    int field_11CC;
    int field_11D0;
    int field_11D4;
    int field_11D8;
    int field_11DC;
    int field_11E0;
    int field_11E4;
    int field_11E8;
    int field_11EC;
    int field_11F0;
    int field_11F4;
    int field_11F8;
    int field_11FC;
    int field_1200;
    int field_1204;
    int field_1208;
    int field_120C;
    int field_1210;
    int field_1214;
    int field_1218;
    int field_121C;
    int field_1220;
    int field_1224;
    int field_1228;
    int field_122C;
    int field_1230;
    int field_1234;
    int field_1238;
    int field_123C;
    int field_1240;
    int field_1244;
    int field_1248;
    int field_124C;
    int field_1250;
    int field_1254;
    int field_1258;
    int field_125C;
    int field_1260;
    int field_1264;
    int field_1268;
    int field_126C;
    int field_1270;
    int field_1274;
    int field_1278;
    int field_127C;
    int field_1280;
    int field_1284;
    int field_1288;
    int field_128C;
    int field_1290;
    int field_1294;
    int field_1298;
    int field_129C;
    int field_12A0;
    int field_12A4;
    int field_12A8;
    int field_12AC;
    int field_12B0;
    int field_12B4;
    int field_12B8;
    int field_12BC;
    int field_12C0;
    int field_12C4;
    int field_12C8;
    int field_12CC;
    int field_12D0;
    int field_12D4;
    int field_12D8;
    int field_12DC;
    int field_12E0;
    int field_12E4;
    int field_12E8;
    int field_12EC;
    int field_12F0;
    int field_12F4;
    int field_12F8;
    int field_12FC;
    int field_1300;
    int field_1304;
    int field_1308;
    int field_130C;
    int field_1310;
    int field_1314;
    int field_1318;
    int field_131C;
    int field_1320;
    int field_1324;
    int field_1328;
    int field_132C;
    int field_1330;
    int field_1334;
    int field_1338;
    int field_133C;
    int field_1340;
    int field_1344;
    int field_1348;
    int field_134C;
    int field_1350;
    int field_1354;
    int field_1358;
    int field_135C;
    int field_1360;
    int field_1364;
    int field_1368;
    int field_136C;
    int field_1370;
    int field_1374;
    int field_1378;
    int field_137C;
    int field_1380;
    int field_1384;
    int field_1388;
    int field_138C;
    int field_1390;
    int field_1394;
    int field_1398;
    int field_139C;
    int field_13A0;
    int field_13A4;
    int field_13A8;
    int field_13AC;
    int field_13B0;
    int field_13B4;
    int field_13B8;
    int field_13BC;
    int field_13C0;
    int field_13C4;
    int field_13C8;
    int field_13CC;
};

struct Buffer {
    void *vtblCPCX;
    Win *poOwner;
    int (__cdecl *pfcnScrollText)(char *pszText, int x, int y, int iCharsToScroll);
    int dwordC;
    int dword10;
    int dword14;
    int dword18;
    int iFlags;
    void *pstRect[12];
    char *pcSurfaceBits;
    char *pcDIBBits;
    void **ppddsSurface;
    void **ppddcClipper;
    HDC hdcSurface;
    HDC hdcCompatible;
    int iHdcSurfaceRefCounter;
    int iDDSSurfaceRefCount;
    int hrgnMainRegion;
    HBITMAP hbmBitmapOld;
    HBITMAP hbmBitmap;
    BITMAPINFO stBitMapInfo;
    int dib[256];
    int lPitch;
    int iHyperlinkCount;
    Spot oHitBoxList;
    void *apHeapMem[20];
    int dword50C;
    int dword510;
    int dword514;
    int dword518;
    int iParseCharType;
    int dword520;
    int dword524;
    int dword528;
    Font *font1;
    Font *font2;
    Font *font3;
    Font *font4;
    int colorVal1;
    int color2Val1;
    int color3Val1;
    int colorhyperVal1;
    int colorVal2;
    int color2Val2;
    int color3Val2;
    int colorhyperVal2;
    int colorVal3;
    int color2Val3;
    int color3Val3;
    int colorhyperVal3;
    int colorVal4;
    int color2Val4;
    int color3Val4;
    int colorhyperVal4;
    int fHasPalette;
    int cPaletteOffset;
    Palette *pPalette;
};

struct Sprite {
    void *ppszFileName;
    char *pcBits;
    BYTE cTransparentIndex;
    BYTE f9[3];
    int iSpriteWidth2;
    int iSpriteWidth;
    int iSpriteHeight;
    int iWidth;
    int iHeight;
    int iLeftOffset;
    int iTopOffset;
    int fObj1Exists;
};

struct AutoSound {
    void *vtbl;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
    int field_6C;
    int field_70;
    int field_74;
    int field_78;
    int field_7C;
    int field_80;
    int field_84;
    int field_88;
    int field_8C;
    int field_90;
    int field_94;
};

struct Win {
    AutoSound oClass0A;
    int iFlags;
    int iSomeFlag;
    int field_A0;
    int field_A4;
    Win *poWinBase;
    int iVertScaleDenom;
    int iVertScaleNum;
    Buffer *buffer1;
    Buffer *buffer2;
    Buffer *buffer3;
    Buffer *buffer4;
    Win *poParent;
    CList oChildList;
    char *pszCaption;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    int iBackbufferBackgroundColor;
    int field_F8;
    int pCanvasBackground;
    int cBackgroundColor;
    int field_104;
    int field_108;
    int field_10C;
    int field_110;
    int field_114;
    int iBorderSize;
    int fHasBorder;
    int iBorderColor1;
    int iBorderColor2;
    int field_128;
    Buffer *pCanvasBackBuffer;
    int field_130;
    int iMinPosLeft;
    int iMinPosTop;
    RECT rRect1;
    RECT rRect2;
    int field_15C;
    int field_160;
    int field_164;
    int field_168;
    int iCaptionSize;
    int iNCSize;
    int field_174;
    int field_178;
    int field_17C;
    int field_180;
    int field_184;
    Sprite *sprtCursor;
    int field_18C;
    int field_190;
    HCURSOR *phCursor;
    int nCursorName;
    int field_19C;
    int iSomeFlag2;
    Win *apoChildren[150];
    int iChildCount;
    int field_400;
    int field_404;
    int field_408;
    int field_40C;
    int field_410;
    int field_414;
    int field_418;
    int field_41C;
    int field_420;
    int field_424;
    int field_428;
    int field_42C;
    int field_430;
    int field_434;
    int field_438;
    Scroll *scroll_vert;
    Scroll *scroll_horz;
};

struct GraphicWin {
    Win oWinBase;
    Buffer oCanvas;
    int field_9CC;
    int field_9D0;
    int field_9D4;
    int field_9D8;
    int field_9DC;
    int field_9E0;
    int field_9E4;
    int field_9E8;
    int field_9EC;
    int field_9F0;
    int field_9F4;
    int field_9F8;
    int field_9FC;
    int field_A00;
    int field_A04;
    Buffer *poCanvas;
    int field_A0C;
    int field_A10;
};

struct CImage {
    char *pcBits;
    int iWidth;
    int iHeight;
    int dwordC;
    int dword10;
    int iWidthLess1;
    int dword18;
    int dword1C;
    int iHeightLess1;
    int dword24;
    int iHeightLess1_2;
    int dword2C;
    int dword30;
    int dword34;
    int dword38;
    int iWidthLess1_2;
    int dword40;
    int iWidthLess1_3;
    int iCenterY;
    int iWidthLess1_4;
    int iHeightLess1_3;
    int iCenterX;
    int iHeightLess1_4;
    int dword5C;
    int iHeightLess1_5;
    int dword64;
    int iCenterY_2;
    int fNotMalloced;
};

struct CClass3B {
    GraphicWin oWinBuffed;
    int field_A14;
    int field_A18;
    Time oTimer1;
    int field_A44;
    int field_A48;
    Time oTimer2;
    int field_A74;
    int field_A78;
    int field_A7C;
    int field_A80;
    int field_A84;
    int field_A88;
    int field_A8C;
    int field_A90;
    int field_A94;
    int field_A98;
    int field_A9C;
    int field_AA0;
    int field_AA4;
    int field_AA8;
    int field_AAC;
    int field_AB0;
    int field_AB4;
    int field_AB8;
};

struct CClass3ArrayItem {
    int field_0;
    int pszCaption;
    int iFlags;
    int field_C;
    CWinFonted *poWinFonted;
};

struct CMainWnd {
    HWND hwndScreen;
    void **ppddDirectDraw;
    int dword_9C6B20;
    void **ppdsSurface;
    RECT *prScreenRect;
};

struct CWinFonted {
    GraphicWin oWinBuffed;
    int field_A14;
    int iArrayCount;
    int field_A1C;
    int field_A20;
    int iHitBoxTagClicked;
    int field_A28;
    Spot oHitBoxList;
    CClass3ArrayItem astArray[15];
};

struct MapVtbl {
    int field_0;
    GraphicWin *iOffsetofoClass2;
};

struct TTilePos {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    char field_A;
    char field_B;
};

struct TextureStore {
    int field_0;
    int field_4;
    int field_8[150];
};

struct MapWin_Alt {
    MapVtbl *vtbl;
    TTilePos *paTilePos;
    int field_8;
    TextureStore aoMainArrayItem1[4];
    TextureStore aoMainArrayItem2[196];
    TextureStore oUnknown;
    int iZoomX2;
    int iWhatToDrawFlags;
    int field_1DD74;
    int field_1DD78;
    int field_1DD7C;
    int field_1DD80;
    int field_1DD84;
    int field_1DD88;
    int field_1DD8C;
    int field_1DD90;
    int field_1DD94;
    int iZoomFactor;
    int iTileX;
    int iTileY;
    int iMapTileLeft;
    int iMapTileTop;
    int iMapPixelLeft;
    int iMapPixelTop;
    int iPixelsPerTileX;
    int iPixelsPerHalfTileX;
    int iPixelsPerTileY;
    int iPixelsPerHalfTileY_2;
    int iPixelsPerHalfTileY;
    int iZoomX12_2;
    int iMapTilesOddX;
    int iMapTilesOddY;
    int iMapTilesEvenX;
    int iMapTilesEvenY;
    int iZoomX12;
    int iZoomX4;
    int field_1DDE4;
    int field_1DDE8;
    int field_1DDEC;
    int field_1DDF0;
    int field_1DDF4;
    int field_1DDF8;
    int field_1DDFC;
    int field_1DE00;
    int field_1DE04;
    int field_1DE08;
    int field_1DE0C;
    int field_1DE10;
    int field_1DE14;
    int field_1DE18;
    int field_1DE1C;
    int field_1DE20;
    int field_1DE24;
    Buffer oCanvas1;
    Buffer oCanvas2;
    Buffer oCanvas3;
    int iLastZoomFactor;
    int iLastZoomX2;
    Font oFont1;
    int iFont1Height;
    Font oFont2;
    int iFont4Height;
    Font oFont3;
    int iFont3Height;
    int field_1EF4C;
    int field_1EF50;
    CClass3B oaClass3B[4];
    int drawOnlyCursor;
    int field_21A48;
    int field_21A4C;
    int field_21A50;
    int field_21A54;
    int field_21A58;
    int field_21A5C;
    int field_21A60;
    int field_21A64;
};

struct ButtonGroup;

struct BaseButton
{
    GraphicWin graphicWin;
    int field_A14;
    int field_A18;
    Time time1;
    int field_A44;
    int field_A48;
    Time time2;
    int field_A74;
    int field_A78;
    LPSTR name;
    LPSTR bubbleText;
    int color;
    int bevelUpper;
    int bevelLower;
    int bevelThickness;
    int field_A94;
    int field_A98;
    int field_A9C;
    int field_AA0;
    int field_AA4;
    ButtonGroup *btnGroup;
    int field_AAC;
    int field_AB0;
    int field_AB4;
};

struct ButtonGroup
{
    BaseButton *buttons[32];
    int btnCount;
    int field_84;
    int field_88;
    int field_8C;
    int field_90;
};

struct FlatButton
{
    BaseButton baseButton;
    int field_AB8;
    int field_ABC;
    int field_AC0;
    int field_AC4;
    int field_AC8;
    int field_ACC;
    int field_AD0;
    int field_AD4;
    int field_AD8;
    int field_ADC;
    Sprite *sprite0;
    int field_AE4;
    int field_AE8;
    int field_AEC;
    int field_AF0;
    int field_AF4;
    int field_AF8;
    int field_AFC;
    int field_B00;
    int field_B04;
    int field_B08;
    int field_B0C;
    Sprite *sprite1;
    Sprite *sprite2;
    Sprite *sprite3;
    int field_B1C;
    int field_B20;
    int field_B24;
    int field_B28;
    int field_B2C;
    int field_B30;
    int field_B34;
    int field_B38;
    int field_B3C;
    int field_B40;
    int field_B44;
    int field_B48;
};

struct Scroll
{
    GraphicWin graphicWin;
    int field_A14;
    int field_A18;
    int border_color;
    int field_A20;
    int field_A24;
    int field_A28;
    int position;
    int field_A30;
    int field_A34;
    int field_A38;
    int field_A3C;
    int paging;
    int field_A44;
    int field_A48;
    int field_A4C;
    int field_A50;
    int bar_thickness1;
    int bar_thickness2;
    int color;
    int bar_thickness3;
    Buffer *buffer;
    int bevel_thickness;
    int bevel_upper;
    int bevel_lower;
    int field_A74;
    Sprite *field_A78;
    Sprite *sprite_left1;
    Sprite *sprite_left2;
    Sprite *sprite_left3;
    int field_A88;
    int field_A8C;
    int field_A90;
    Sprite *sprite_right1;
    Sprite *sprite_right2;
    Sprite *sprite_right3;
    int field_AA0;
    int field_AA4;
    int field_AA8;
    FlatButton flatButton_left;
    FlatButton flatButton_right;
    int field_2144;
    int field_2148;
};

struct CMenuItem {
    int pszCaption;
    int pszHotKey;
    int iMenuID;
    int iFlag;
    int field_10;
};

struct CMenu {
    GraphicWin field_0;
    int field_A14;
    CMenuItem aMenuItems[64];
    int field_F18;
    int field_F1C;
    int iMenuItemCount;
    int iWidth;
    int field_F28;
    int iVisibleItemCount;
    int field_F30;
    int field_F34;
    int field_F38;
    int field_F3C;
};

struct CMainMenuItem {
    int iMenuItemID;
    int pszCaption;
    int iFlags;
    int pszHotKey;
    CMenu *poSubMenu;
};

struct CClass5 {
    MapWin_Alt oMap;
    int field_21A68;
    GraphicWin oClass2;
};

struct CKeyFileIndex {
    char szFileName[256];
    char *pszSections;
    int field_104;
    int iSectionCount;
    int field_10C;
    int field_110;
    int field_114;
};

struct CKeyFile {
    char szFileName[80];
    char szSomeString[256];
    char *pszValues;
    FILE *pFile;
    char *pszFileBuffer;
    int pszNextValue;
};

typedef int(__cdecl *MENU_HANDLER_CB_F)(int iMenuItemId);

struct Menu {
    GraphicWin oWinBuffed;
    MENU_HANDLER_CB_F pMenuHandlerCB;
    int iBaseMenuItemCount;
    int field_A1C;
    int field_A20;
    int iHitBoxTagClicked;
    int field_A28;
    Spot oHitBoxList;
    CMainMenuItem aMainMenuItems[15];
};

struct Console {
    MapWin_Alt oMap;
    GraphicWin oWinBuffed;
    Buffer oCanvas1;
    Time oTimer;
    Menu oMainMenu;
    Buffer oCanvas2;
    Sprite oSprite1;
    Sprite aoSprite2[3];
    int field_23BC8;
    int field_23BCC;
    int field_23BD0;
    int cOwner;
    int fUnitNotViewMode;
    int iUnit;
    int field_23BE0;
    int field_23BE4;
    int field_23BE8;
    int field_23BEC;
    int field_23BF0;
    int field_23BF4;
    int field_23BF8;
    int field_23BFC;
    int field_23C00;
    int field_23C04;
    int iCursorPositionCurrent;
    int field_23C0C;
    int aiCursorPositionsX[32];
    int aiCursorPositionsY[32];
    int field_23D10;
    int field_23D14;
    int field_23D18;
    int field_23D1C;
    int field_23D20;
    int field_23D24;
    Sprite oSprite3;
    Sprite oSPrite4;
    int field_23D80;
    int field_23D84;
    int field_23D88;
    int field_23D8C;
    GraphicWin oClass2_2;
};

struct StatusWin {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    Caviar caviar;
    int field_1400;
    int field_1404;
    int field_1408;
    int field_140C;
    int field_1410;
    int field_1414;
    int field_1418;
    int field_141C;
    int field_1420;
    int field_1424;
    int field_1428;
    int field_142C;
    int field_1430;
    int field_1434;
    int field_1438;
    int field_143C;
    int field_1440;
    int field_1444;
    int field_1448;
    int field_144C;
    int field_1450;
    int field_1454;
    int field_1458;
    int field_145C;
    int field_1460;
    int field_1464;
    int field_1468;
    int field_146C;
    int field_1470;
    int field_1474;
    int field_1478;
    int field_147C;
    int field_1480;
    int field_1484;
    int field_1488;
    int field_148C;
    int field_1490;
    int field_1494;
    int field_1498;
    int field_149C;
    int field_14A0;
    int field_14A4;
    int field_14A8;
    int field_14AC;
    int field_14B0;
    int field_14B4;
    int field_14B8;
    int field_14BC;
    int field_14C0;
    int field_14C4;
    int field_14C8;
    int field_14CC;
    int field_14D0;
    int field_14D4;
    int field_14D8;
    int field_14DC;
    int field_14E0;
    int field_14E4;
    int field_14E8;
    int field_14EC;
    int field_14F0;
    int field_14F4;
    int field_14F8;
    int field_14FC;
    int field_1500;
    int field_1504;
    int field_1508;
    int field_150C;
    int field_1510;
    int field_1514;
    int field_1518;
    int field_151C;
    int field_1520;
    int field_1524;
    int field_1528;
    int field_152C;
    Font oFontNorm;
    Font oFontItal;
    Font oFontBold;
    int iTileInfoTab;
    int iFontHeight;
    int field_15B0;
    int iTileX;
    int iTileY;
    int iUnitIndex;
    int iCityIndex;
    int field_15C4;
    int field_15C8;
    int field_15CC;
    int field_15D0;
    int field_15D4;
    int fInOnClick;
    int field_15DC;
    Spot oHitBoxList;
};



#pragma pack(pop)

typedef MAP CTile;
typedef BASE CCity;
typedef Console CMain;
typedef MapWin_Alt CMap;
typedef StatusWin CInfoWin;
typedef GraphicWin CWinBuffed;
typedef Win CWinBase;
typedef Menu CMainMenu;
typedef Buffer CCanvas;
typedef Time CTimer;
typedef Font CFont;
typedef TextureStore CMainArrayItem;
typedef Sprite CSprite;
typedef Spot CHitBoxList;
typedef SpotInternal CHitBox;
typedef Heap CMemAllocator;
typedef AutoSound CClass0A;
typedef Filemap CFile;
typedef Strings CLabelAllocator;
typedef Palette CPalette;

// TODO: Unresolved names/classes to be renamed
//CClass3B
//CClass3ArrayItem
//CWinFonted
//CClass5
//CKeyFileIndex
//CKeyFile
//CList
//CListItem
//CMenu
//CMenuItem
//CMainMenuItem
//CImage
//CMainWnd

static_assert(sizeof(CHitBox) == 24, "");
static_assert(sizeof(CHitBoxList) == 12, "");
static_assert(sizeof(CFont) == 40, "");
static_assert(sizeof(CTimer) == 40, "");
static_assert(sizeof(CSprite) == 44, "");
static_assert(sizeof(CMainArrayItem) == 608, "");
static_assert(sizeof(CWinBase) == 1092, "");
static_assert(sizeof(CCanvas) == 1416, "");
static_assert(sizeof(CMainMenu) == 2916, "");
static_assert(sizeof(CWinBuffed) == 2580, "");
static_assert(sizeof(CMap) == 137832, "");
static_assert(sizeof(CMain) == 149412, "");

extern Console* pMain;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattributes"

typedef int(__thiscall *FMapWin_pixel_to_tile)(Console* This, int x, int y, long* px, long* py);
typedef int(__thiscall *FMapWin_tile_to_pixel)(Console* This, int x, int y, long* px, long* py);
typedef int(__thiscall *FMapWin_set_center)(Console* This, int x, int y, int v1);
typedef int(__thiscall *FMapWin_calculate_dim)(Console* This);
typedef int(__thiscall *FWin_is_visible)(Win* This);
typedef int(__thiscall *FTutWin_draw_arrow)(Win* This);
typedef int(__thiscall *FPlanWin_blink)(Win* This);
typedef int(__thiscall *FStringBox_clip_ids)(Win* This, int len);
typedef int(__thiscall *FStatusWin_on_redraw)(StatusWin* This);
typedef int(__thiscall *FMapWin_gen_map)(Console* This, int owner, int units_only);
typedef int(__thiscall *FMapWin_draw_map)(Console* This, int v1);
typedef int(__stdcall *FWinProc)(HWND, int, WPARAM, LPARAM);
typedef int(__stdcall *FConsole_zoom)(int zoom_type, int v1);
typedef int(__cdecl *FWin_update_screen)(RECT *prRect, int v1);
typedef int(__cdecl *FWin_flip)(RECT *pRect);

ATOM WINAPI ModRegisterClassA(WNDCLASS* pstWndClass);
int WINAPI ModGetSystemMetrics(int nIndex);
int __cdecl blink_timer();
int __thiscall zoom_process(Console* This);
int __thiscall draw_map(Console* This, int iOwner, int fUnitsOnly);

#pragma GCC diagnostic pop



