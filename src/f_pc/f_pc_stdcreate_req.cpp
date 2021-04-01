//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_stdcreate_req
//

#include "f_pc/f_pc_stdcreate_req.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_load.h"
#include "f_pc/f_pc_base.h"
#include "f_pc/f_pc_node.h"

//
// Declarations:
//

/* 80023B70-80023BC4 0054+00 s=1 e=0 z=5  None .text
 * fpcSCtRq_phase_Load__FP29standard_create_request_class       */
s32 fpcSCtRq_phase_Load(standard_create_request_class* pStdCreateReq) {
    switch (fpcLd_Load(pStdCreateReq->mLoadID)) {
    case 0:
        return cPhs_ZERO_e;
    case 4:
        return 2;
    case 5:
    default:
        return cPhs_ERROR_e;
    }
}

/* 80023BC4-80023C2C 0068+00 s=1 e=0 z=9  None .text
 * fpcSCtRq_phase_CreateProcess__FP29standard_create_request_class */
s32 fpcSCtRq_phase_CreateProcess(standard_create_request_class* pStdCreateReq) {
    fpcLy_SetCurrentLayer(pStdCreateReq->mBase.mpLayer);
    pStdCreateReq->mBase.mpRes =
        fpcBs_Create(pStdCreateReq->mLoadID, pStdCreateReq->mBase.mBsPcId, pStdCreateReq->unk_0x54);
    if (pStdCreateReq->mBase.mpRes == NULL) {
        fpcLd_Free(pStdCreateReq->mLoadID);
        return cPhs_ERROR_e;
    } else {
        pStdCreateReq->mBase.mpRes->mpCtRq = (struct create_request*)pStdCreateReq;
        return 2;
    }
}

/* 80023C2C-80023C64 0038+00 s=1 e=0 z=3  None .text
 * fpcSCtRq_phase_SubCreateProcess__FP29standard_create_request_class */
s32 fpcSCtRq_phase_SubCreateProcess(standard_create_request_class* pStdCreateReq) {
    fpcLy_SetCurrentLayer(pStdCreateReq->mBase.mpLayer);
    return fpcBs_SubCreate(pStdCreateReq->mBase.mpRes);
}

/* 80023C64-80023CBC 0058+00 s=1 e=0 z=14  None .text
 * fpcSCtRq_phase_IsComplete__FP29standard_create_request_class */
s32 fpcSCtRq_phase_IsComplete(standard_create_request_class* pStdCreateReq) {
    process_node_class* procNode = (process_node_class*)pStdCreateReq->mBase.mpRes;
    if (fpcBs_Is_JustOfType(g_fpcNd_type, procNode->mBase.mSubType) == 1) {
        if (fpcLy_IsCreatingMesg(&procNode->mLayer) == 1) {
            return cPhs_ZERO_e;
        }
    }
    return 2;
}

/* 80023CBC-80023D0C 0050+00 s=1 e=0 z=5  None .text
 * fpcSCtRq_phase_PostMethod__FP29standard_create_request_class */
s32 fpcSCtRq_phase_PostMethod(standard_create_request_class* pStdCreateReq) {
    if (pStdCreateReq->unk_0x58 != NULL &&
        pStdCreateReq->unk_0x58(pStdCreateReq->mBase.mpRes, pStdCreateReq->unk_0x5C) == 0) {
        return cPhs_ZERO_e;
    } else {
        return 2;
    }
}

/* 80023D0C-80023D14 0008+00 s=1 e=0 z=0  None .text
 * fpcSCtRq_phase_Done__FP29standard_create_request_class       */
s32 fpcSCtRq_phase_Done(standard_create_request_class* param_0) {
    return 2;
}

/* 80023D14-80023D84 0070+00 s=1 e=0 z=2  None .text
 * fpcSCtRq_Handler__FP29standard_create_request_class          */
s32 fpcSCtRq_Handler(standard_create_request_class* pStdCreateReq) {
    s32 result = cPhs_Do(&pStdCreateReq->unk_0x48, pStdCreateReq);
    switch (result) {
    case 2:
        return fpcSCtRq_Handler(pStdCreateReq);
    case 4:
        return 4;
    case 1:
    case 5:
    default:
        return result;
    }
}

/* 80023D84-80023D8C 0008+00 s=1 e=0 z=0  None .text
 * fpcSCtRq_Delete__FP29standard_create_request_class           */
s32 fpcSCtRq_Delete(standard_create_request_class* param_0) {
    return 1;
}

/* 80023D8C-80023D94 0008+00 s=1 e=0 z=1  None .text
 * fpcSCtRq_Cancel__FP29standard_create_request_class           */
s32 fpcSCtRq_Cancel(standard_create_request_class* param_0) {
    return 1;
}

/* ############################################################################################## */
/* 803A3AF0-803A3AFC 000C+00 s=1 e=0 z=0  None .data      submethod$2261 */
static create_request_method_class submethod = {
    (cPhs__Handler)fpcSCtRq_Handler,
    (process_method_func)fpcSCtRq_Cancel,
    (process_method_func)fpcSCtRq_Delete,
};

/* 803A3AFC-803A3B18 001C+00 s=1 e=0 z=0  None .data      method$2262 */
static cPhs__Handler method[7] = {
    (cPhs__Handler)fpcSCtRq_phase_Load,
    (cPhs__Handler)fpcSCtRq_phase_CreateProcess,
    (cPhs__Handler)fpcSCtRq_phase_SubCreateProcess,
    (cPhs__Handler)fpcSCtRq_phase_IsComplete,
    (cPhs__Handler)fpcSCtRq_phase_PostMethod,
    (cPhs__Handler)fpcSCtRq_phase_Done,
    NULL,
};

/* 80023D94-80023E28 0094+00 s=0 e=12 z=1  None .text
 * fpcSCtRq_Request__FP11layer_classsPFPvPv_iPvPv               */
s32 fpcSCtRq_Request(layer_class* param_1, s16 pProcName, stdCreateFunc param_3, void* param_4,
                     void* param_5) {
    if (pProcName >= 0x7FFF) {
        return -1;
    } else {
        standard_create_request_class* request =
            (standard_create_request_class*)fpcCtRq_Create(param_1, 0x60, &submethod);
        if (request == NULL) {
            return -1;
        } else {
            cPhs_Set(&request->unk_0x48, method);
            request->mLoadID = pProcName;
            request->unk_0x58 = param_3;
            request->unk_0x5C = param_4;
            request->unk_0x54 = param_5;
            return request->mBase.mBsPcId;
        }
    }
}
