//
// Generated By: dol2asm
// Translation Unit: J3DSkinDeform
//

#include "JSystem/J3DGraphAnimator/J3DSkinDeform.h"
#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "dol2asm.h"
#include "dolphin/os/OS.h"
#include "dolphin/types.h"
#include "MSL_C/MSL_Common/Src/string.h"

//
// Types:
//

//
// Forward References:
//

extern "C" void __ct__12J3DSkinNListFv();
extern "C" static void J3DPSWeightMTXMultVec__FPA4_ffP3VecP3Vec();
extern "C" static void J3DPSWeightMTXMultVecSR__FPA4_ffP3VecP3Vec();
extern "C" void calcSkin_VtxPosF32__12J3DSkinNListFPA4_fPvPv();
extern "C" void calcSkin_VtxNrmF32__12J3DSkinNListFPA4_fPvPv();
extern "C" void __ct__13J3DSkinDeformFv();
extern "C" void initSkinInfo__13J3DSkinDeformFP12J3DModelData();
extern "C" void initMtxIndexArray__13J3DSkinDeformFP12J3DModelData();
extern "C" void changeFastSkinDL__13J3DSkinDeformFP12J3DModelData();
extern "C" void calcNrmMtx__13J3DSkinDeformFP12J3DMtxBuffer();
extern "C" void transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData();
extern "C" void calcAnmInvJointMtx__13J3DSkinDeformFP12J3DMtxBuffer();
extern "C" void deformFastVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformFastVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer();
extern "C" void deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer();
extern "C" void deform__13J3DSkinDeformFP8J3DModel();
extern "C" void deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void calc__15J3DVtxColorCalcFP8J3DModel();
extern "C" void __dt__13J3DSkinDeformFv();
extern "C" extern char const* const J3DSkinDeform__stringBase0;
extern "C" u8 sWorkArea_WEvlpMixMtx__13J3DSkinDeform[4096];
extern "C" u8 sWorkArea_WEvlpMixWeight__13J3DSkinDeform[4096];
extern "C" u16 sWorkArea_MtxReg__13J3DSkinDeform[1024 + 4 /* padding */];

//
// External References:
//

extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void J3DGQRSetup7__FUlUlUlUl();
extern "C" void J3DPSCalcInverseTranspose__FPA4_fPA3_f();
extern "C" void makeVcdVatCmd__8J3DShapeFv();
extern "C" void __construct_new_array();
extern "C" void __save_gpr();
extern "C" void _savegpr_17();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_17();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern f32 PSMulUnit01[2];

//
// Declarations:
//

/* 8032C6E4-8032C704 327024 0020+00 1/1 0/0 0/0 .text            __ct__12J3DSkinNListFv */
J3DSkinNList::J3DSkinNList() {
    field_0x0 = NULL;
    field_0x4 = NULL;
    field_0x8 = NULL;
    field_0xc = NULL;
    field_0x10 = 0;
    field_0x12 = 0;
}

/* 8032C704-8032C7BC 327044 00B8+00 1/1 0/0 0/0 .text J3DPSWeightMTXMultVec__FPA4_ffP3VecP3Vec */
static void J3DPSWeightMTXMultVec(f32 (*param_0)[4], f32 param_1, Vec* param_2, Vec* param_3) {
    f32 f4 = param_0[0][3] + param_0[0][0] * param_2->x;
    f32 f5 = param_0[1][3] + param_0[1][0] * param_2->x;
    f32 f3 = param_0[2][3] + param_0[2][0] * param_2->x;
    f4 += param_0[0][1] * param_2->y;
    f5 += param_0[1][1] * param_2->y;
    f3 += param_0[2][1] * param_2->y;
    f4 += param_0[0][2] * param_2->z;
    f5 += param_0[1][2] * param_2->z;
    f3 += param_0[2][2] * param_2->z;
    param_3->x += f4 * param_1;
    param_3->y += f5 * param_1;
    param_3->z += f3 * param_1;
}

/* 8032C7BC-8032C85C 3270FC 00A0+00 1/1 0/0 0/0 .text J3DPSWeightMTXMultVecSR__FPA4_ffP3VecP3Vec
 */
static void J3DPSWeightMTXMultVecSR(f32 (*param_0)[4], f32 param_1, Vec* param_2,
                                    Vec* param_3) {
    f32 f4 = param_0[0][0] * param_2->x;
    f32 f5 = param_0[1][0] * param_2->x;
    f32 f3 = param_0[2][0] * param_2->x;
    f4 += param_0[0][1] * param_2->y;
    f5 += param_0[1][1] * param_2->y;
    f3 += param_0[2][1] * param_2->y;
    f4 += param_0[0][2] * param_2->z;
    f5 += param_0[1][2] * param_2->z;
    f3 += param_0[2][2] * param_2->z;
    param_3->x += f4 * param_1;
    param_3->y += f5 * param_1;
    param_3->z += f3 * param_1;
}

/* 8032C85C-8032C8E4 32719C 0088+00 1/1 0/0 0/0 .text calcSkin_VtxPosF32__12J3DSkinNListFPA4_fPvPv
 */
void J3DSkinNList::calcSkin_VtxPosF32(f32 (*param_0)[4], void* param_1, void* param_2) {
    u16 r29 = field_0x10;
    for (int i = 0; i < r29; i++) {
        u16 ind = field_0x0[i];
        J3DPSWeightMTXMultVec(param_0, field_0x8[i], ((Vec*)param_1 + ind), ((Vec*)param_2 + ind));
    }
}

/* 8032C8E4-8032C96C 327224 0088+00 1/1 0/0 0/0 .text calcSkin_VtxNrmF32__12J3DSkinNListFPA4_fPvPv
 */
void J3DSkinNList::calcSkin_VtxNrmF32(f32 (*param_0)[4], void* param_1, void* param_2) {
    u16 r29 = field_0x12;
    for (int i = 0; i < r29; i++) {
        u16 ind = field_0x4[i];
        J3DPSWeightMTXMultVecSR(param_0, field_0xc[i], ((Vec*)param_1 + ind), ((Vec*)param_2 + ind));
    }
}

/* ############################################################################################## */

/* 8032C96C-8032C9B0 3272AC 0044+00 0/0 0/0 2/2 .text            __ct__13J3DSkinDeformFv */
J3DSkinDeform::J3DSkinDeform() {
    mPosData = NULL;
    mNrmData = NULL;
    mPosMtx = NULL;
    mNrmMtx = NULL;
    mFlags = 3;
    field_0x18 = 1;
    field_0x19 = 0;
    field_0x1c = 0;
    field_0x20 = 0;
    mSkinNList = NULL;
}

/* ############################################################################################## */
/* 80437218-80438218 063F38 1000+00 1/1 0/0 0/0 .bss sWorkArea_WEvlpMixMtx__13J3DSkinDeform */
u16* J3DSkinDeform::sWorkArea_WEvlpMixMtx[1024];

/* 80438218-80439218 064F38 1000+00 1/1 0/0 0/0 .bss sWorkArea_WEvlpMixWeight__13J3DSkinDeform */
f32* J3DSkinDeform::sWorkArea_WEvlpMixWeight[1024];

/* 8032C9B0-8032CF44 3272F0 0594+00 0/0 1/1 0/0 .text
 * initSkinInfo__13J3DSkinDeformFP12J3DModelData                */
void J3DSkinDeform::initSkinInfo(J3DModelData* param_0) {
    u16 wevlpMtxNum = param_0->getWEvlpMtxNum();
    u16* wevlpMtxIndex = param_0->getWEvlpMixMtxIndex();
    f32* wevlpMixWeights = param_0->getWEvlpMixWeight();
    int currentOffset = 0;
    for (int i = 0; i < wevlpMtxNum; i++) {
        sWorkArea_WEvlpMixMtx[i] = wevlpMtxIndex + currentOffset;
        sWorkArea_WEvlpMixWeight[i] = wevlpMixWeights + currentOffset;
        currentOffset += param_0->getWEvlpMixMtxNum(i);
    }

    if (param_0->getJointNum() != 0) {
        mSkinNList = new J3DSkinNList[param_0->getJointNum()];
    }

    for (int i = 0; i < param_0->getVtxNum(); i++) {
        u16 uVar8 = mPosData[i];
        if (uVar8 != 0xffff) {
            if (param_0->getDrawMtxFlag(uVar8) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                mSkinNList[drawMtxIndex].field_0x10++;
            } else {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                wevlpMtxNum = param_0->getWEvlpMixMtxNum(drawMtxIndex);
                u16* indices = sWorkArea_WEvlpMixMtx[drawMtxIndex];
                for (int j = 0; j < wevlpMtxNum; j++) {
                    mSkinNList[indices[j]].field_0x10++;
                }
            }
        }
    }
    for (int i = 0; i < param_0->getNrmNum(); i++) {
        u16 uVar8 = mNrmData[i];
        if (uVar8 != 0xffff) {
            if (param_0->getDrawMtxFlag(uVar8) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                mSkinNList[drawMtxIndex].field_0x12++;
            } else {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                wevlpMtxNum = param_0->getWEvlpMixMtxNum(drawMtxIndex);
                u16* indices = sWorkArea_WEvlpMixMtx[drawMtxIndex];
                for (int j = 0; j < wevlpMtxNum; j++) {
                    mSkinNList[indices[j]].field_0x12++;
                }
            }
        }
    }
    for (u16 i = 0; i < param_0->getJointNum(); i++) {
        if (mSkinNList[i].field_0x10) {
            mSkinNList[i].field_0x0 = new u16[mSkinNList[i].field_0x10];
            mSkinNList[i].field_0x8 = new f32[mSkinNList[i].field_0x10];
            mSkinNList[i].field_0x10 = 0;
        }
        if (mSkinNList[i].field_0x12) {
            mSkinNList[i].field_0x4 = new u16[mSkinNList[i].field_0x12];
            mSkinNList[i].field_0xc = new f32[mSkinNList[i].field_0x12];
            mSkinNList[i].field_0x12 = 0;
        }
    }
    for (int i = 0; i < param_0->getVtxNum(); i++) {
        u16 uVar8 = mPosData[i];
        if (uVar8 != 0xffff) {
            if (param_0->getDrawMtxFlag(uVar8) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                u16 uVar9 = mSkinNList[drawMtxIndex].field_0x10++;
                mSkinNList[drawMtxIndex].field_0x0[uVar9] = i;
                mSkinNList[drawMtxIndex].field_0x8[uVar9] = 1.0f;
            } else {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                wevlpMtxNum = param_0->getWEvlpMixMtxNum(drawMtxIndex);
                u16* indices = sWorkArea_WEvlpMixMtx[drawMtxIndex];
                f32* weights = sWorkArea_WEvlpMixWeight[drawMtxIndex];
                for (int j = 0; j < wevlpMtxNum; j++) {
                    u16 uVar9 = mSkinNList[indices[j]].field_0x10++;
                    mSkinNList[indices[j]].field_0x0[uVar9] = i;
                    mSkinNList[indices[j]].field_0x8[uVar9] = weights[j];
                }
            }
        }
    }
    for (int i = 0; i < param_0->getNrmNum(); i++) {
        u16 uVar8 = mNrmData[i];
        if (uVar8 != 0xffff) {
            if (param_0->getDrawMtxFlag(uVar8) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                u16 uVar9 = mSkinNList[drawMtxIndex].field_0x12++;
                mSkinNList[drawMtxIndex].field_0x4[uVar9] = i;
                mSkinNList[drawMtxIndex].field_0xc[uVar9] = 1.0f;
            } else {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(uVar8);
                wevlpMtxNum = param_0->getWEvlpMixMtxNum(drawMtxIndex);
                u16* indices = sWorkArea_WEvlpMixMtx[drawMtxIndex];
                f32* weights = sWorkArea_WEvlpMixWeight[drawMtxIndex];
                for (int j = 0; j < wevlpMtxNum; j++) {
                    u16 uVar9 = mSkinNList[indices[j]].field_0x12++;
                    mSkinNList[indices[j]].field_0x4[uVar9] = i;
                    mSkinNList[indices[j]].field_0xc[uVar9] = weights[j];
                }
            }
        }
    }
}

/* ############################################################################################## */
/* 803A2008-803A2018 02E668 0010+00 1/1 0/0 0/0 .rodata          @1142 */
SECTION_RODATA static u32 const lit_1142[4] = {
    0, 1, 1, 2,
};
COMPILER_STRIP_GATE(0x803A2008, &lit_1142);

/* 803A2028-803A2028 02E688 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803A2028 =
    " Invlid Data : CPU Pipeline process GX_INDEX16 D"
    "ata Only\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A2062 = "\0\0\0\0\0";
#pragma pop

/* 80439218-80439A20 065F38 0800+08 1/1 0/0 0/0 .bss             sWorkArea_MtxReg__13J3DSkinDeform
 */
u16 J3DSkinDeform::sWorkArea_MtxReg[1024 + 4 /* padding */];

/* 8032CF44-8032D378 327884 0434+00 0/0 1/1 0/0 .text
 * initMtxIndexArray__13J3DSkinDeformFP12J3DModelData           */
// Several register order and regalloc issues
#ifdef NONMATCHING
int J3DSkinDeform::initMtxIndexArray(J3DModelData* param_0) {
    if (mPosData != NULL && mNrmData != NULL) {
        return 0;
    }

    mPosData = new u16[param_0->getVtxNum()];
    if (mPosData == NULL) {
        return 4;
    }

    for (int i = 0; i < param_0->getVtxNum(); i++) {
        mPosData[i] = 0xffff;
    }

    if (param_0->getNrmNum()) {
        mNrmData = new u16[param_0->getNrmNum()];
        if (mNrmData == NULL) {
            return 4;
        }
        for (int i = 0; i < param_0->getNrmNum(); i++) {
            mNrmData[i] = 0;
        }
    } else {
        mNrmData = NULL;
    }

    mPosMtx = new Mtx[param_0->getJointNum()];
    mNrmMtx = new (32) Mtx33[param_0->getDrawMtxNum()];
    if (mPosMtx == NULL) {
        return 4;
    }
    if (mNrmMtx == NULL) {
        return 4;
    }

    for (u16 local_6c = 0; local_6c < param_0->getShapeNum(); local_6c++) {
        u32 local_28[4] = {0,1,1,2};
        int r26 = -1;
        int r25 = -1;
        int r24 = -1;
        int r23 = 0;
        for (GXVtxDescList* local_4c = param_0->getShapeNodePointer(local_6c)->getVtxDesc(); local_4c->attr != 0xff; local_4c++) {
            switch (local_4c->attr) {
            case GX_VA_PNMTXIDX:
                r26 = r23;
                break;
            case GX_VA_POS:
                r25 = r23;
                if (local_4c->type != GX_INDEX16) {
                    OSReport(" Invlid Data : CPU Pipeline process GX_INDEX16 Data Only\n");
                    return 6;
                }
                break;
            case GX_VA_NRM:
                r24 = r23;
                if (local_4c->type != GX_INDEX16) {
                    OSReport(" Invlid Data : CPU Pipeline process GX_INDEX16 Data Only\n");
                    return 6;
                }
                break;
            case GX_VA_TEX0:
                if (local_4c->type != GX_INDEX16) {
                    OSReport(" Invlid Data : CPU Pipeline process GX_INDEX16 Data Only\n");
                    return 6;
                }
                break;
            }
            r23 += local_28[(int)local_4c->type];
        }
        for (u16 local_6e = 0; local_6e < param_0->getShapeNodePointer(local_6c)->getMtxGroupNum(); local_6e++) {
            J3DShapeMtx* piVar8 = param_0->getShapeNodePointer(local_6c)->getShapeMtx(local_6e);
            u8* pcVar10 = param_0->getShapeNodePointer(local_6c)->getShapeDraw(local_6e)->getDisplayList();
            u16 uVar13;
            for (u8* local_58 = pcVar10;
                (int)local_58 - (int)pcVar10 < param_0->getShapeNodePointer(local_6c)->getShapeDraw(local_6e)->getDisplayListSize();
                local_58 += r23 * uVar13, local_58 += 3) {
                if (*local_58 != 0xA0 && *local_58 != 0x98) {
                    break;
                }
                
                uVar13 = *(u16*)(local_58 + 1);
                for (int local_60 = 0; local_60 < uVar13; local_60++) {
                    u8* iVar5 = local_58;
                    iVar5 += r23 * local_60 + 3;
                    u8 bVar3 = *(iVar5 + r26) / 3U;
                    u16 uVar1 = *(u16*)(iVar5 + r25);
                    u16 uVar2 = *(u16*)(iVar5 + r24);
                    u32 local_76 = piVar8->getUseMtxIndex(bVar3);
                    if ((u16)local_76 == 0xffff) {
                        local_76 = sWorkArea_MtxReg[bVar3];
                    } else if (r26 != -1) {
                        sWorkArea_MtxReg[bVar3] = local_76;
                    }
                    mPosData[uVar1] = local_76;
                    if (r24 != -1) {
                        mNrmData[uVar2] = local_76;
                    }
                }
            }
            if (r24 == -1) {
                param_0->getShapeNodePointer(local_6c)->onFlag(0x100);
                param_0->getShapeNodePointer(local_6c)->offFlag(8);
            }
        }
    }

    for (int local_68 = 0; local_68 < param_0->getVtxNum(); local_68++) {
        if (mPosData[local_68] == 0xffff) {
            field_0x18 = 0x0;
            mPosData[local_68] = 0;
        }
    }

    return 0;
}
#else   
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int J3DSkinDeform::initMtxIndexArray(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/initMtxIndexArray__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803A2018-803A2028 02E678 0010+00 1/1 0/0 0/0 .rodata          @1270 */
SECTION_RODATA static u8 const lit_1270[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
};
COMPILER_STRIP_GATE(0x803A2018, &lit_1270);

/* 8032D378-8032D5C4 327CB8 024C+00 0/0 1/1 0/0 .text
 * changeFastSkinDL__13J3DSkinDeformFP12J3DModelData            */
// regalloc, display list access issues
#ifdef NONMATCHING
void J3DSkinDeform::changeFastSkinDL(J3DModelData* param_0) {
    for (u16 i = 0; i < param_0->getShapeNum(); i++) {
        u32 local_28[4] = {0,1,1,2};
        s32 local_30 = -1;
        s32 local_34 = 0;
        J3DShape* pShapeNode = param_0->getShapeNodePointer(i);
        for (GXVtxDescList* local_3c = pShapeNode->getVtxDesc(); local_3c->attr != GX_VA_NULL; local_3c++) {
            if (local_3c->attr == GX_VA_PNMTXIDX) {
                local_30 = local_34;
            }
            local_34 += local_28[(int)local_3c->type];
        }
        if (local_30 != -1) {
            for (u16 j = 0; j < pShapeNode->getMtxGroupNum(); j++) {
                u8* puVar5 = pShapeNode->getShapeDraw(j)->getDisplayList();
                u8* puVar10 = puVar5;
                u8* local_44 = puVar5;
                while ((int)local_44 - (int)puVar5 < pShapeNode->getShapeDraw(j)->getDisplayListSize()) {
                    u8 cVar1 = *(u8*)local_44;
                    *puVar10++ = cVar1;
                    if ((cVar1 != 0xA0) && (cVar1 != 0x98))
                        break;
                    u16 uVar9 = *(u16*)((int)local_44 + 1);
                    *(u16*)puVar10 = uVar9;
                    puVar10 += 2;
                    for (int local_4c = 0; local_4c < uVar9; local_4c++) {
                        u8* dst;
                        memcpy(puVar10, &local_44[(local_34 * local_4c) + 4], local_34 - 1);
                        puVar10 = (u8*)((int)puVar10 + local_34 - 1);
                    }
                    local_44 += local_34 * uVar9;
                    local_44 += 3;
                }
                int pcVar2 = ((int)puVar10 - (int)puVar5 + 0x1f) & ~0x1f;
                while ((int)puVar10 - (int)puVar5 < pShapeNode->getShapeDraw(j)->getDisplayListSize()) {
                    *puVar10++ = 0;
                }
                pShapeNode->getShapeDraw(j)->setDisplayListSize(pcVar2);
                DCStoreRange(puVar5, pShapeNode->getShapeDraw(j)->getDisplayListSize());
            }
        }
    }

    for (u16 i = 0; i < param_0->getShapeNum(); i++) {
        J3DShape* pShape = param_0->getShapeNodePointer(i);
        GXVtxDescList* local_60 = pShape->getVtxDesc();
        for (GXVtxDescList*local_5c = local_60; local_5c->attr != GX_VA_NULL; local_5c++) {
            if (local_5c->attr != GX_VA_PNMTXIDX) {
                local_60->attr = local_5c->attr;
                local_60->type = local_5c->type;
                local_60++;
            }
        }
        local_60->attr = GX_VA_NULL;
        local_60->type = GX_NONE;
        pShape->makeVcdVatCmd();
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::changeFastSkinDL(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/changeFastSkinDL__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop
#endif

/* 8032D5C4-8032D738 327F04 0174+00 1/1 0/0 0/0 .text calcNrmMtx__13J3DSkinDeformFP12J3DMtxBuffer
 */
void J3DSkinDeform::calcNrmMtx(J3DMtxBuffer* param_0) {
    J3DJointTree* jointTree = param_0->getJointTree();
    u16 drawMtxNum = jointTree->getDrawMtxNum();
    for (u16 i = 0; i < drawMtxNum; i++) {
        if (jointTree->getDrawMtxFlag(i) == 0) {
            if (param_0->getScaleFlag(jointTree->getDrawMtxIndex(i)) == 1) {
                setNrmMtx(i, param_0->getAnmMtx(jointTree->getDrawMtxIndex(i)));
            } else {
                J3DPSCalcInverseTranspose(param_0->getAnmMtx(jointTree->getDrawMtxIndex(i)), getNrmMtx(i));
            }
        } else {
            if (param_0->getEnvScaleFlag(jointTree->getDrawMtxIndex(i)) == 1) {
                setNrmMtx(i, param_0->getWeightAnmMtx(jointTree->getDrawMtxIndex(i)));
            } else {
                J3DPSCalcInverseTranspose(param_0->getWeightAnmMtx(jointTree->getDrawMtxIndex(i)), getNrmMtx(i));
            }
        }
    }
}

/* 8032D738-8032D87C 328078 0144+00 0/0 1/1 0/0 .text
 * transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData          */
void J3DSkinDeform::transformVtxPosNrm(J3DModelData* param_0) {
    if (param_0->getWEvlpMtxNum() != 0 && field_0x19 == 0) {
        int vtmNum = param_0->getVtxNum();
        int nrmNum = param_0->getNrmNum();
        for (int i = 0; i < vtmNum; i++) {
            u16 posIndex = mPosData[i];
            if (param_0->getDrawMtxFlag(posIndex) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(posIndex);
                Vec* pos = ((Vec*)param_0->getVtxPosArray()) + i;
                Mtx invMtx;
                PSMTXInverse(param_0->getInvJointMtx(drawMtxIndex), invMtx);
                PSMTXMultVec(invMtx, pos, pos);
            }
        }
        for (int i = 0; i < nrmNum; i++) {
            u16 nrmIndex = mNrmData[i];
            if (param_0->getDrawMtxFlag(nrmIndex) == 0) {
                u16 drawMtxIndex = param_0->getDrawMtxIndex(nrmIndex);
                Vec* nrm = ((Vec*)param_0->getVtxNrmArray()) + i;
                Mtx invMtx;
                PSMTXInverse(param_0->getInvJointMtx(drawMtxIndex), invMtx);
                PSMTXMultVecSR(invMtx, nrm, nrm);
            }
        }
        field_0x19 = 1;
    }
}

/* 8032D87C-8032D8F4 3281BC 0078+00 1/1 0/0 0/0 .text
 * calcAnmInvJointMtx__13J3DSkinDeformFP12J3DMtxBuffer          */
void J3DSkinDeform::calcAnmInvJointMtx(J3DMtxBuffer* param_0) {
    if (param_0->getJointTree()->getWEvlpMtxNum() != 0) {
        u16 jointNum = param_0->getJointTree()->getJointNum();
        Mtx* anmMtx = (Mtx*)param_0->getAnmMtx(0);
        Mtx* invJointMtx = &param_0->getJointTree()->getInvJointMtx(0);
        Mtx* posMtx = mPosMtx;
        for (int i = 0; i < jointNum; i++) {
            PSMTXConcat(anmMtx[i], invJointMtx[i], posMtx[i]);
        }
    }
}

/* 8032D8F4-8032DA1C 328234 0128+00 1/1 0/0 0/0 .text
 * deformFastVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
void J3DSkinDeform::deformFastVtxPos_F32(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    param_0->swapTransformedVtxPos();
    J3DJointTree* jointTree = param_1->getJointTree();
    u32 vtxNum = param_0->getVertexData()->getVtxNum();
    void* currentVtxPos = param_0->getCurrentVtxPos();
    void* transformedVtxPos = param_0->getTransformedVtxPos(0);
    J3DFillZero32B(transformedVtxPos, (vtxNum * sizeof(Vec) + 0x1f) & ~0x1f);
    if (jointTree->getWEvlpMtxNum() != 0) {
        u16 jointNum = jointTree->getJointNum();
        for (u16 i = 0; i < jointNum; i++) {
            mSkinNList[i].calcSkin_VtxPosF32(mPosMtx[i], currentVtxPos, transformedVtxPos);
        }
    } else {
        u16 jointNum = jointTree->getJointNum();
        for (u16 i = 0; i < jointNum; i++) {
            J3DSkinNList* skinList = mSkinNList + i;
            skinList->calcSkin_VtxPosF32(param_1->getAnmMtx(i), currentVtxPos, transformedVtxPos);
        }
    }
    DCStoreRange(param_0->getTransformedVtxPos(0), param_0->getVertexData()->getVtxNum() * sizeof(Vec));
    param_0->setCurrentVtxPos(transformedVtxPos);
}

/* ############################################################################################## */

/* 8032DA1C-8032DB50 32835C 0134+00 1/1 0/0 0/0 .text
 * deformFastVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
void J3DSkinDeform::deformFastVtxNrm_F32(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    param_0->swapTransformedVtxNrm();
    J3DJointTree* jointTree = param_1->getJointTree();
    int nrmNum = param_0->getVertexData()->getNrmNum();
    void* currentVtxNrm = param_0->getCurrentVtxNrm();
    void* transformedVtxNrm = param_0->getTransformedVtxNrm(0);
    for (int i = 0; i < nrmNum; i++) {
        ((Vec*)transformedVtxNrm)[i].x = 0.0f;
        ((Vec*)transformedVtxNrm)[i].y = 0.0f;
        ((Vec*)transformedVtxNrm)[i].z = 0.0f;
    }
    if (jointTree->getWEvlpMtxNum() != 0) {
        u16 jointNum = jointTree->getJointNum();
        for (u16 i = 0; i < jointNum; i++) {
            mSkinNList[i].calcSkin_VtxNrmF32(mPosMtx[i], currentVtxNrm, transformedVtxNrm);
        }
    } else {
        u16 jointNum = jointTree->getJointNum();
        for (u16 i = 0; i < jointNum; i++) {
            J3DSkinNList* skinList = mSkinNList + i;
            skinList->calcSkin_VtxNrmF32(param_1->getAnmMtx(i), currentVtxNrm, transformedVtxNrm);
        }
    }
    DCStoreRange(param_0->getTransformedVtxNrm(0), param_0->getVertexData()->getNrmNum() * sizeof(Vec));
    param_0->setCurrentVtxNrm(transformedVtxNrm);
}

/* 8032DB50-8032DC74 328490 0124+00 1/1 0/0 0/0 .text
 * deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
// J3DPSMulMtxVec regalloc
#ifdef NONMATCHING
void J3DSkinDeform::deformVtxPos_F32(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    Mtx* anmMtxs[2];
    anmMtxs[0] = (Mtx*)param_1->getAnmMtx(0);
    anmMtxs[1] = (Mtx*)param_1->getWeightAnmMtx(0);
    param_0->swapTransformedVtxPos();
    J3DJointTree* jointTree = param_1->getJointTree();
    int vtxNum = param_0->getVertexData()->getVtxNum();
    void* currentVtxPos = param_0->getCurrentVtxPos();
    void* transformedVtxPos = param_0->getTransformedVtxPos(0);
    for (int i = 0; i < vtxNum; i++) {
        Mtx* anmMtx = anmMtxs[jointTree->getDrawMtxFlag(mPosData[i])];
        J3DPSMulMtxVec(anmMtx[jointTree->getDrawMtxIndex(mPosData[i])], ((Vec*)currentVtxPos) + i, ((Vec*)transformedVtxPos) + i);
    }
    DCStoreRange(param_0->getTransformedVtxPos(0), param_0->getVertexData()->getVtxNum() * sizeof(Vec));
    param_0->setCurrentVtxPos(transformedVtxPos);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxPos_F32(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop
#endif

/* 8032DC74-8032DDB8 3285B4 0144+00 1/1 0/0 0/0 .text
 * deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
// J3DPSMulMtxVec regalloc
#ifdef NONMATCHING
void J3DSkinDeform::deformVtxPos_S16(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    Mtx* anmMtxs[2];
    anmMtxs[0] = (Mtx*)param_1->getAnmMtx(0);
    anmMtxs[1] = (Mtx*)param_1->getWeightAnmMtx(0);
    u8 vtxPosFrac = param_0->getVertexData()->getVtxPosFrac();
    J3DGQRSetup7(vtxPosFrac, 7, vtxPosFrac, 7);
    param_0->swapTransformedVtxPos();
    J3DJointTree* jointTree = param_1->getJointTree();
    int vtxNum = param_0->getVertexData()->getVtxNum();
    void* currentVtxPos = param_0->getCurrentVtxPos();
    void* transformedVtxPos = param_0->getTransformedVtxPos(0);
    for (int i = 0; i < vtxNum; i++) {
        Mtx* anmMtx = anmMtxs[jointTree->getDrawMtxFlag(mPosData[i])];
        J3DPSMulMtxVec(anmMtx[jointTree->getDrawMtxIndex(mPosData[i])], ((SVec*)currentVtxPos) + i, ((SVec*)transformedVtxPos) + i);
    }
    DCStoreRange(param_0->getTransformedVtxPos(0), param_0->getVertexData()->getVtxNum() * sizeof(SVec));
    param_0->setCurrentVtxPos(transformedVtxPos);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxPos_S16(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop
#endif

/* 8032DDB8-8032DEBC 3286F8 0104+00 1/1 0/0 0/0 .text
 * deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer        */
// J3DPSMulMtxVec regalloc
#ifdef NONMATCHING
void J3DSkinDeform::deformVtxNrm_F32(J3DVertexBuffer* param_0) const {
    param_0->swapTransformedVtxNrm();
    int nrmNum = param_0->getVertexData()->getNrmNum();
    void* currentVtxNrm = param_0->getCurrentVtxNrm();
    void* transformedVtxNrm = param_0->getTransformedVtxNrm(0);
    for (int i = 0; i < nrmNum; i++) {
        J3DPSMulMtxVec(mNrmMtx[mNrmData[i]], ((Vec*)currentVtxNrm) + i, ((Vec*)transformedVtxNrm) + i);
    }
    DCStoreRange(param_0->getTransformedVtxNrm(0), param_0->getVertexData()->getNrmNum() * sizeof(Vec));
    param_0->setCurrentVtxNrm(transformedVtxNrm);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxNrm_F32(J3DVertexBuffer* param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer.s"
}
#pragma pop
#endif

/* 8032DEBC-8032DFDC 3287FC 0120+00 1/1 0/0 0/0 .text
 * deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer        */
// J3DPSMulMtxVec regalloc
#ifdef NONMATCHING
void J3DSkinDeform::deformVtxNrm_S16(J3DVertexBuffer* param_0) const {
    u8 vtxNrmFrac = param_0->getVertexData()->getVtxNrmFrac();
    J3DGQRSetup7(vtxNrmFrac, 7, vtxNrmFrac, 7);
    param_0->swapTransformedVtxNrm();
    int nrmNum = param_0->getVertexData()->getNrmNum();
    void* currentVtxNrm = param_0->getCurrentVtxNrm();
    void* transformedVtxNrm = param_0->getTransformedVtxNrm(0);
    for (int i = 0; i < nrmNum; i++) {
        J3DPSMulMtxVec(mNrmMtx[mNrmData[i]], ((SVec*)currentVtxNrm) + i, ((SVec*)transformedVtxNrm) + i);
    }
    DCStoreRange(param_0->getTransformedVtxNrm(0), param_0->getVertexData()->getNrmNum() * sizeof(SVec));
    param_0->setCurrentVtxNrm(transformedVtxNrm);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxNrm_S16(J3DVertexBuffer* param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer.s"
}
#pragma pop
#endif

/* 8032DFDC-8032E064 32891C 0088+00 0/0 1/1 0/0 .text            deform__13J3DSkinDeformFP8J3DModel
 */
void J3DSkinDeform::deform(J3DModel* param_0) {
    if (param_0->checkFlag(4)) {
        onFlag(2);
    } else {
        offFlag(2);
    }
    
    if (param_0->checkFlag(8)) {
        onFlag(1);
    } else {
        offFlag(1);
    }
    deform(param_0->getVertexBuffer(), param_0->getMtxBuffer());
}

/* 8032E064-8032E180 3289A4 011C+00 1/0 0/0 0/0 .text
 * deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer    */
void J3DSkinDeform::deform(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) {
    if (param_1->getJointTree()->checkFlag(0x100)) {
        calcAnmInvJointMtx(param_1);
    }
    if (checkFlag(2) != 0) {
        if (param_1->getJointTree()->checkFlag(0x100)) {
            deformFastVtxPos_F32(param_0, param_1);
        } else {
            if (param_0->getVertexData()->getVtxPosType() == 4) {
                deformVtxPos_F32(param_0, param_1);
            } else {
                deformVtxPos_S16(param_0, param_1);
            }
        }
    }
    if (checkFlag(1) != 0) {
        if (param_1->getJointTree()->checkFlag(0x100)) {
            deformFastVtxNrm_F32(param_0, param_1);
        } else {
            calcNrmMtx(param_1);
            if (param_0->getVertexData()->getVtxNrmType() == 4) {
                deformVtxNrm_F32(param_0);
            } else {
                deformVtxNrm_S16(param_0);
            }
        }
    }
}

/* 8032E180-8032E1B0 328AC0 0030+00 0/0 1/1 0/0 .text            calc__15J3DVtxColorCalcFP8J3DModel
 */
void J3DVtxColorCalc::calc(J3DModel* param_0) {
    calc(param_0->getVertexBuffer());
}

/* 8032E1B0-8032E1F8 328AF0 0048+00 1/0 0/0 0/0 .text            __dt__13J3DSkinDeformFv */
J3DSkinDeform::~J3DSkinDeform() {}

/* 803A2028-803A2028 02E688 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
