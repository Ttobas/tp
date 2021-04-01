//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_node
//

#include "f_pc/f_pc_node.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_layer_iter.h"

//
// Declarations:
//

/* 800224F0-80022514 0024+00 s=1 e=1 z=0  None .text fpcNd_DrawMethod__FP21nodedraw_method_classPv
 */
s32 fpcNd_DrawMethod(nodedraw_method_class* pNodeMethod, void* pData) {
    return fpcMtd_Method(pNodeMethod->mNodedrawFunc, pData);
}

/* 80022514-80022580 006C+00 s=1 e=0 z=0  None .text      fpcNd_Draw__FP18process_node_class */
s32 fpcNd_Draw(process_node_class* pProcNode) {
    s32 uVar2 = 0x0;
    if (pProcNode->mUnk0 == 0) {
        layer_class* uVar1 = fpcLy_CurrentLayer();
        fpcLy_SetCurrentLayer(&pProcNode->mLayer);
        uVar2 = fpcNd_DrawMethod(pProcNode->mpNodeMtd, pProcNode);
        fpcLy_SetCurrentLayer(uVar1);
    }
    return uVar2;
}

/* 80022580-800225DC 005C+00 s=1 e=0 z=0  None .text      fpcNd_Execute__FP18process_node_class */
s32 fpcNd_Execute(process_node_class* pProcNode) {
    s32 ret;
    layer_class* uVar1 = fpcLy_CurrentLayer();
    fpcLy_SetCurrentLayer(&pProcNode->mLayer);
    ret = fpcMtd_Execute(&pProcNode->mpNodeMtd->mBase, pProcNode);
    fpcLy_SetCurrentLayer(uVar1);
    return ret;
}

/* ############################################################################################## */
/* 80450D40-80450D48 0004+04 s=2 e=11 z=0  None .sbss      g_fpcNd_type */
int g_fpcNd_type;

/* 800225DC-8002265C 0080+00 s=1 e=0 z=0  None .text      fpcNd_IsCreatingFromUnder__FPv */
void* fpcNd_IsCreatingFromUnder(void* pProcNodeV) {
    layer_class* layer;
    process_node_class* pProcNode = static_cast<process_node_class*>(pProcNodeV);
    if (pProcNode != NULL &&
        fpcBs_Is_JustOfType(g_fpcNd_type, pProcNode->mBase.mSubType) != FALSE) {
        layer = &pProcNode->mLayer;
        if (fpcLy_IsCreatingMesg(layer) == 0x0) {
            return (process_node_class*)fpcLyIt_Judge(
                layer, (fpcLyIt_JudgeFunc)fpcNd_IsCreatingFromUnder, NULL);
        } else {
            return pProcNode;
        }
    } else {
        return NULL;
    }
}

/* ############################################################################################## */
/* 804505E0-804505E8 0004+04 s=1 e=0 z=0  None .sdata     g_fpcNd_IsCheckOfDeleteTiming */
static s32 g_fpcNd_IsCheckOfDeleteTiming = 1;

/* 8002265C-8002269C 0040+00 s=0 e=2 z=0  None .text fpcNd_IsDeleteTiming__FP18process_node_class
 */
s32 fpcNd_IsDeleteTiming(process_node_class* pProcNode) {
    if (g_fpcNd_IsCheckOfDeleteTiming == 0x1 && fpcNd_IsCreatingFromUnder(pProcNode) != NULL) {
        return 0;
    } else {
        return 1;
    }
}

/* 8002269C-800226C4 0028+00 s=1 e=0 z=0  None .text      fpcNd_IsDelete__FP18process_node_class */
s32 fpcNd_IsDelete(process_node_class* pProcNode) {
    return fpcMtd_IsDelete(&pProcNode->mpNodeMtd->mBase, pProcNode);
}

/* 800226C4-80022728 0064+00 s=1 e=0 z=0  None .text      fpcNd_Delete__FP18process_node_class */
s32 fpcNd_Delete(process_node_class* pProcNode) {
    if ((fpcLy_IsDeletingMesg(&pProcNode->mLayer) == 0x0) &&
        fpcMtd_Delete(&pProcNode->mpNodeMtd->mBase, pProcNode) == 0x1) {
        pProcNode->mBase.mSubType = 0x0;
        return fpcLy_Delete(&pProcNode->mLayer);
    } else {
        return 0;
    }
}

/* 80022728-800227C4 009C+00 s=1 e=0 z=0  None .text      fpcNd_Create__FP18process_node_class */
s32 fpcNd_Create(process_node_class* pProcNode1) {
    // this cast looks like a fake match, but it doesn't match without the cast, naive approach
    // swaps r31 and r30 most likely it gets casted to another unknown struct
    process_node_class* pProcNode = (process_node_class*)pProcNode1;
    layer_class* uVar2;
    s32 uVar3;
    if (pProcNode->mBase.mInitState == 0) {
        node_process_profile_definition* pProcProfileDef =
            (node_process_profile_definition*)pProcNode->mBase.mpProf;
        pProcNode->mBase.mSubType = fpcBs_MakeOfType(&g_fpcNd_type);
        pProcNode->mpNodeMtd = pProcProfileDef->mNDrwMthCls;
        fpcLy_Create(&pProcNode->mLayer, pProcNode, pProcNode->mLayerNodeLists, 0x10);
        pProcNode->mUnk0 = 0;
    }
    uVar2 = fpcLy_CurrentLayer();
    fpcLy_SetCurrentLayer(&pProcNode->mLayer);
    uVar3 = fpcMtd_Create(&pProcNode->mpNodeMtd->mBase, pProcNode);
    fpcLy_SetCurrentLayer(uVar2);
    return uVar3;
}

/* ############################################################################################## */
/* 803A3A20-803A3A38 0014+04 s=0 e=9 z=0  None .data      g_fpcNd_Method */
nodedraw_method_class g_fpcNd_Method = {
    (process_method_func)fpcNd_Create,
    (process_method_func)fpcNd_Delete,
    (process_method_func)fpcNd_Execute,
    (process_method_func)fpcNd_IsDelete,
    (process_method_func)fpcNd_Draw,
};
