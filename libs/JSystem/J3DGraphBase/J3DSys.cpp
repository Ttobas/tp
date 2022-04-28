//
// Generated By: dol2asm
// Translation Unit: J3DSys
//

#include "JSystem/J3DGraphBase/J3DSys.h"

#include "dol2asm.h"
#include "dolphin/gx/GXPixel.h"
#include "dolphin/os/OS.h"
#include "dolphin/types.h"

#include "JSystem/J3DGraphBase/J3DTevs.h"

#include "JSystem/J3DGraphBase/J3DTexture.h"

//
// Forward References:
//

extern void J3DFifoLoadTexCached(GXTexMapID, u32, GXTexCacheSize, u32, GXTexCacheSize);
extern void makeTexCoordTable();
extern void makeAlphaCmpTable();
extern void makeZModeTable();
extern void makeTevSwapTable();
extern "C" void GXInvalidateVtxCache();

extern "C" extern J3DDefaultTexCoordInfo const j3dDefaultTexCoordInfo[8];
extern "C" extern const GXColor j3dDefaultColInfo;
extern "C" extern u8 data_804563C8;
extern "C" extern const GXColorS10 j3dDefaultTevColor;
extern "C" extern const GXColor j3dDefaultTevKColor;

//
// Declarations:
//

/* ############################################################################################## */
/* 80434AC8-80434BE4 0617E8 011C+00 1/1 151/151 486/486 .bss             j3dSys */
J3DSys j3dSys;

/* 80434BE4-80434C14 061904 0030+00 0/0 17/17 154/154 .bss             mCurrentMtx__6J3DSys */
Mtx J3DSys::mCurrentMtx;

/* 80434C14-80434C20 061934 000C+00 0/0 6/6 0/0 .bss             mCurrentS__6J3DSys */
Vec J3DSys::mCurrentS;

/* 80434C20-80434C2C 061940 000C+00 0/0 5/5 0/0 .bss             mParentS__6J3DSys */
Vec J3DSys::mParentS;

/* 80434C2C-80434C70 06194C 0040+04 1/1 17/17 0/0 .bss             sTexCoordScaleTable__6J3DSys */
u16 J3DSys::sTexCoordScaleTable[32];

/* 8030FDE8-8030FEC0 30A728 00D8+00 1/1 0/0 0/0 .text            __ct__6J3DSysFv */
J3DSys::J3DSys() {
    makeTexCoordTable();
    makeTevSwapTable();
    makeAlphaCmpTable();
    makeZModeTable();

    mFlags = 0;
    PSMTXIdentity(mViewMtx);
    mDrawMode = 1;
    mMaterialMode = 0;
    mModel = NULL;
    mShape = NULL;
    for (u32 i = 0; i < ARRAY_SIZE(mDrawBuffer); i++)
        mDrawBuffer[i] = NULL;
    mTexture = NULL;
    mMatPacket = NULL;
    mShapePacket = NULL;
    mModelDrawMtx = NULL;
    mModelNrmMtx = NULL;
    mVtxPos = NULL;
    mVtxNrm = NULL;
    mVtxCol = NULL;

    for (u32 i = 0; i < 32; i += 4) {
        sTexCoordScaleTable[i + 0] = 1;
        sTexCoordScaleTable[i + 1] = 1;
        sTexCoordScaleTable[i + 2] = 0;
        sTexCoordScaleTable[i + 3] = 0;
    }
}

static inline void J3DFifoLoadIndx(u8 cmd, u16 indx, u16 addr) {
    GFX_FIFO(u8) = cmd;
    GFX_FIFO(u16) = indx;
    GFX_FIFO(u16) = addr;
}

/* 8030FEC0-8030FEE4 30A800 0024+00 0/0 1/1 0/0 .text            loadPosMtxIndx__6J3DSysCFiUs */
void J3DSys::loadPosMtxIndx(int addr, u16 indx) const {
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_A, indx, 0xB000 | ((u16)(addr * 0x0C)));
}

/* 8030FEE4-8030FF0C 30A824 0028+00 0/0 1/1 0/0 .text            loadNrmMtxIndx__6J3DSysCFiUs */
void J3DSys::loadNrmMtxIndx(int addr, u16 indx) const {
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_B, indx, 0x8000 | ((u16)((addr * 0x09) + 0x400)));
}

/* 8030FF0C-803100BC 30A84C 01B0+00 1/1 0/0 0/0 .text setTexCacheRegion__6J3DSysF15_GXTexCacheSize
 */
void J3DSys::setTexCacheRegion(GXTexCacheSize size) {
    const u32 kSize[] = {
        0x00008000,
        0x00020000,
        0x00080000,
        0x00000000,
    };
    const u32 kRegionNum[] = {8, 4, 1, 0};

    u32 regionNum = kRegionNum[size];
    mTexCacheRegionNum = regionNum;

    if (!!(mFlags & 0x80000000)) {
        for (u32 i = 0; i < regionNum; i++) {
            if (!!(i & 1)) {
                GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size] + 0x80000, size,
                                     i * kSize[size], size);
                J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size] + 0x80000, size,
                                     i * kSize[size], size);
            } else {
                GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size], size,
                                     i * kSize[size] + 0x80000, size);
                J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size], size,
                                     i * kSize[size] + 0x80000, size);
            }
        }
    } else {
        for (u32 i = 0; i < regionNum; i++) {
            GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size], size,
                                 i * kSize[size] + 0x80000, size);
            J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size], size, i * kSize[size] + 0x80000,
                                 size);
        }
    }
}

/* 803CD8A0-803CD8B0 02A9C0 0010+00 1/1 0/0 0/0 .data            NullTexData */
SECTION_DATA static u8 NullTexData[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CD8B0-803CD8E0 02A9D0 0030+00 1/1 0/0 0/0 .data            j3dIdentityMtx */
SECTION_DATA static Mtx j3dIdentityMtx = {
    1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
};

/* 803100BC-8031073C 30A9FC 0680+00 0/0 3/3 0/0 .text            drawInit__6J3DSysFv */
void J3DSys::drawInit() {
    GXInvalidateVtxCache();
    GXSetCurrentMtx(GX_PNMTX0);
    GXSetCullMode(GX_CULL_BACK);
    GXSetCoPlanar(GX_FALSE);
    GXSetClipMode(GX_FALSE);
    GXSetColorUpdate(GX_TRUE);
    GXSetDither(GX_TRUE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRC_ALPHA, GX_BL_INV_SRC_ALPHA, GX_LO_NOOP);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
    GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
    GXSetZCompLoc(GX_TRUE);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_NRM_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR1, GX_CLR_RGBA, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX1, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX2, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX3, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX4, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX5, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX6, GX_CLR_RGBA, GX_RGBA4, 7);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX7, GX_CLR_RGBA, GX_RGBA4, 7);

    GXSetNumIndStages(0);
    reinitTexture();

    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);

    for (u32 i = 0; i < 10; i++)
        GXLoadTexMtxImm(j3dIdentityMtx, GX_TEXMTX0 + i * 3, GX_MTX3x4);

    Mtx23 indTexMtx = {
        {0.5f, 0.0f, 0.0f},
        {0.0f, 0.5f, 0.0f},
    };

    u8 i;
    for (i = 0; i < 3; i++)
        GXSetIndTexMtx((GXIndTexMtxID)(GX_ITM_0 + i), indTexMtx, 1);

    GXSetChanMatColor(GX_COLOR0A0, j3dDefaultColInfo);
    GXSetChanMatColor(GX_COLOR1A1, j3dDefaultColInfo);

    GXSetNumChans(data_804563C8);
    GXSetNumTexGens(1);
    GXSetNumTevStages(1);
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_CLAMP, GX_AF_NONE);
    GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_CLAMP, GX_AF_NONE);

    for (i = 0; i < GX_MAX_TEXMAP; i++)
        GXSetTexCoordGen2((GXTexCoordID)i, (GXTexGenType)j3dDefaultTexCoordInfo[i].mTexGenType,
                          (GXTexGenSrc)j3dDefaultTexCoordInfo[i].mTexGenSrc,
                          j3dDefaultTexCoordInfo[i].mTexGenMtx, GX_FALSE, GX_PTIDENTITY);

    for (i = 0; i < GX_MAX_INDTEXSTAGE; i++)
        GXSetIndTexCoordScale((GXIndTexStageID)i, GX_ITS_1, GX_ITS_1);

    for (i = 0; i < GX_MAX_TEVREG; i++)
        GXSetTevKColor((GXTevKColorID)i, j3dDefaultTevKColor);

    for (i = 0; i < GX_MAX_TEVREG; i++)
        GXSetTevColorS10((GXTevRegID)i, j3dDefaultTevColor);

    for (i = 0; i < GX_MAX_TEVSTAGE; i++) {
        GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
        GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
        GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
        GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
    }

    for (i = 0; i < GX_MAX_TEVSTAGE; i++)
        GXSetTevSwapMode((GXTevStageID)i, GX_TEV_SWAP0, GX_TEV_SWAP0);

    GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);

    for (i = 0; i < GX_MAX_TEVSTAGE; i++)
        GXSetTevIndirect((GXTevStageID)i, GX_INDTEXSTAGE0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF,
                         GX_ITW_OFF, GX_ITW_OFF, GX_FALSE, GX_FALSE, GX_ITBA_OFF);

    OSInitFastCast();
    setTexCacheRegion(GX_TEXCACHE_32K);
}

/* 8031073C-8031079C 30B07C 0060+00 0/0 16/16 6/6 .text            reinitGX__6J3DSysFv */
void J3DSys::reinitGX() {
    reinitGenMode();
    reinitLighting();
    reinitTransform();
    reinitTexture();
    reinitTevStages();
    reinitIndStages();
    reinitPixelProc();
    GXFlush();
}

/* 8031079C-803107E8 30B0DC 004C+00 1/1 0/0 0/0 .text            reinitGenMode__6J3DSysFv */
void J3DSys::reinitGenMode() {
    GXSetNumChans(0);
    GXSetNumTexGens(1);
    GXSetNumTevStages(1);
    GXSetNumIndStages(0);
    GXSetCullMode(GX_CULL_BACK);
    GXSetCoPlanar(GX_FALSE);
}

/* ############################################################################################## */
/* 80450950-80450954 0003D0 0004+00 2/2 0/0 0/0 .sdata           ColorBlack */
SECTION_SDATA static GXColor ColorBlack = {0x00, 0x00, 0x00, 0x00};

/* 80450954-80450958 0003D4 0004+00 2/2 0/0 0/0 .sdata           ColorWhite */
SECTION_SDATA static GXColor ColorWhite = {0xFF, 0xFF, 0xFF, 0xFF};

/* 803107E8-80310894 30B128 00AC+00 1/1 0/0 0/0 .text            reinitLighting__6J3DSysFv */
void J3DSys::reinitLighting() {
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    GXSetChanAmbColor(GX_COLOR0A0, ColorBlack);
    GXSetChanAmbColor(GX_COLOR1A1, ColorBlack);
    GXSetChanMatColor(GX_COLOR0A0, ColorWhite);
    GXSetChanMatColor(GX_COLOR1A1, ColorWhite);
}

/* 80310894-80310998 30B1D4 0104+00 1/1 0/0 0/0 .text            reinitTransform__6J3DSysFv */
void J3DSys::reinitTransform() {
    GXSetCurrentMtx(GX_PNMTX0);
    GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX2x4, GX_TG_TEX1, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD2, GX_TG_MTX2x4, GX_TG_TEX2, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD3, GX_TG_MTX2x4, GX_TG_TEX3, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD4, GX_TG_MTX2x4, GX_TG_TEX4, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD5, GX_TG_MTX2x4, GX_TG_TEX5, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD6, GX_TG_MTX2x4, GX_TG_TEX6, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD7, GX_TG_MTX2x4, GX_TG_TEX7, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
}

/* 80310998-80310A3C 30B2D8 00A4+00 2/2 0/0 0/0 .text            reinitTexture__6J3DSysFv */
void J3DSys::reinitTexture() {
    GXTexObj texObj;
    GXInitTexObj(&texObj, NullTexData, 4, 4, GX_TF_IA8, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GXLoadTexObj(&texObj, GX_TEXMAP0);
    GXLoadTexObj(&texObj, GX_TEXMAP1);
    GXLoadTexObj(&texObj, GX_TEXMAP2);
    GXLoadTexObj(&texObj, GX_TEXMAP3);
    GXLoadTexObj(&texObj, GX_TEXMAP4);
    GXLoadTexObj(&texObj, GX_TEXMAP5);
    GXLoadTexObj(&texObj, GX_TEXMAP6);
    GXLoadTexObj(&texObj, GX_TEXMAP7);
}

/* 80310A3C-80310D44 30B37C 0308+00 1/1 0/0 0/0 .text            reinitTevStages__6J3DSysFv */
void J3DSys::reinitTevStages() {
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);

    GXSetTevColor(GX_TEVREG0, ColorWhite);
    GXSetTevColor(GX_TEVREG1, ColorWhite);
    GXSetTevColor(GX_TEVREG2, ColorWhite);
    GXSetTevKColor(GX_KCOLOR0, ColorWhite);
    GXSetTevKColor(GX_KCOLOR1, ColorWhite);
    GXSetTevKColor(GX_KCOLOR2, ColorWhite);
    GXSetTevKColor(GX_KCOLOR3, ColorWhite);

    for (u32 i = 0; i < GX_MAX_TEVSTAGE; i++) {
        GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
        GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
        GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
        GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
        GXSetTevKColorSel((GXTevStageID)i, GX_TEV_KCSEL_1_4);
        GXSetTevKAlphaSel((GXTevStageID)i, GX_TEV_KASEL_1);
        GXSetTevSwapMode((GXTevStageID)i, GX_TEV_SWAP0, GX_TEV_SWAP0);
    }

    GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
}

/* ############################################################################################## */
/* 803CD8E0-803CD8F8 02AA00 0018+00 1/1 0/0 0/0 .data            IndMtx */
SECTION_DATA static Mtx23 IndMtx = {0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f};

/* 80310D44-80310E3C 30B684 00F8+00 1/1 0/0 0/0 .text            reinitIndStages__6J3DSysFv */
void J3DSys::reinitIndStages() {
    for (u32 i = 0; i < GX_MAX_TEVSTAGE; i++) {
        GXSetTevDirect((GXTevStageID)i);
    }

    GXSetIndTexOrder(GX_INDTEXSTAGE0, GX_TEXCOORD0, GX_TEXMAP0);
    GXSetIndTexOrder(GX_INDTEXSTAGE1, GX_TEXCOORD1, GX_TEXMAP1);
    GXSetIndTexOrder(GX_INDTEXSTAGE2, GX_TEXCOORD2, GX_TEXMAP2);
    GXSetIndTexOrder(GX_INDTEXSTAGE3, GX_TEXCOORD3, GX_TEXMAP3);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE0, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE1, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE2, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE3, GX_ITS_1, GX_ITS_1);
    GXSetIndTexMtx(GX_ITM_0, IndMtx, 1);
    GXSetIndTexMtx(GX_ITM_1, IndMtx, 1);
    GXSetIndTexMtx(GX_ITM_2, IndMtx, 1);
}

/* 80310E3C-80310ED0 30B77C 0094+00 1/1 0/0 0/0 .text            reinitPixelProc__6J3DSysFv */
void J3DSys::reinitPixelProc() {
    GXSetBlendMode(GX_BM_NONE, GX_BL_SRC_ALPHA, GX_BL_INV_SRC_ALPHA, GX_LO_CLEAR);
    GXSetColorUpdate(GX_TRUE);
    GXSetAlphaUpdate(GX_FALSE);
    GXSetDither(GX_TRUE);
    GXSetFog(GX_FOG_NONE, 0.0f, 1.0f, 0.1f, 1.0f, ColorBlack);
    GXSetFogRangeAdj(GX_FALSE, 0, NULL);
    GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
    GXSetZCompLoc(GX_TRUE);
}

/* ############################################################################################## */
/* 80451598-804515A0 000A98 0004+04 0/0 1/1 0/0 .sbss            j3dDefaultViewNo */
extern u8 j3dDefaultViewNo[4 + 4 /* padding */];
u8 j3dDefaultViewNo[4 + 4 /* padding */];
