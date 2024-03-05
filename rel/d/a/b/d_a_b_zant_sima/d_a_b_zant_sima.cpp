//
// Generated By: dol2asm
// Translation Unit: d_a_b_zant_sima
//

#include "rel/d/a/b/d_a_b_zant_sima/d_a_b_zant_sima.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "SSystem/SComponent/c_math.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"

//
// Forward References:
//

static int daB_ZANTS_Draw(daB_ZANTS_c*);
static int daB_ZANTS_Execute(daB_ZANTS_c*);
static int daB_ZANTS_IsDelete(daB_ZANTS_c*);
static int daB_ZANTS_Delete(daB_ZANTS_c*);
static int daB_ZANTS_Create(daB_ZANTS_c*);

//
// Declarations:
//

/* 806529D8-80652AAC 000078 00D4+00 1/1 0/0 0/0 .text   draw__11daB_ZANTS_cFv */
int daB_ZANTS_c::draw() {
    g_env_light.settingTevStruct(16, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(mpModel, &tevStr);
    dComIfGd_setListBG();
    mpBtkAnm->entry(mpModel->getModelData());
    mpBrkAnm->entry(mpModel->getModelData());
    mDoExt_modelUpdateDL(mpModel);
    dComIfGd_setList();
    return 1;
}

/* 80652AAC-80652ACC 00014C 0020+00 1/0 0/0 0/0 .text   daB_ZANTS_Draw__FP11daB_ZANTS_c */
static int daB_ZANTS_Draw(daB_ZANTS_c* i_this) {
    return i_this->draw();
}

/* 80652ACC-80652B28 00016C 005C+00 1/1 0/0 0/0 .text
 * zants_ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c      */
static void zants_ride_call_back(dBgW* param_0, fopAc_ac_c* i_this, fopAc_ac_c* i_target) {
    if (fopAcM_GetName(i_target) == PROC_ALINK) {
        ((daB_ZANTS_c*)i_this)->mPlayerID = fopAcM_GetID(i_target);
        ((daB_ZANTS_c*)i_this)->field_0x584[0] = 3;
    } else if (fopAcM_GetName(i_target) == PROC_B_ZANT) {
        ((daB_ZANTS_c*)i_this)->mBossID = fopAcM_GetID(i_target);
        ((daB_ZANTS_c*)i_this)->field_0x584[1] = 3;
    }
}

/* 80652B28-80652DA8 0001C8 0280+00 1/1 0/0 0/0 .text   action__11daB_ZANTS_cFv */
void daB_ZANTS_c::action() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    if (player->i_checkMagneBootsOn()) {
        field_0x584[0] = 3;
        mPlayerID = fopAcM_GetID(player);
    }
    cXyz pos = current.pos;
    fopAc_ac_c* target;
    if (field_0x584[1] != 0) {
        if (fopAcM_SearchByID(mBossID, &target), target != NULL) {
            pos = target->current.pos;
        }
    }
    u8 temp = field_0x584[3];
    field_0x584[3] = 0;
    field_0x584[2] = 0;
    if (field_0x584[1]) {
        field_0x584[3] = 1;
    }
    if (field_0x584[0]) {
        field_0x584[2] = 1;
    }
    f32 x = pos.x - current.pos.x;
    f32 z = pos.z - current.pos.z;
    pos.absXZ(current.pos);
    cLib_addCalcAngleS2(&field_0x58c.y, cM_atan2s(x, z), 8, 1024);
    if (temp == 0 && field_0x584[3] != 0) {
        if (field_0x58c.x == 0) {
            field_0x58c.y = cM_atan2s(x, z);
        }
        field_0x58c.z = 0x400;
    }
    cLib_addCalcAngleS2(&field_0x58c.x, 0, 8, 64);
    field_0x58c.x += field_0x58c.z;
    if (0x1400 < field_0x58c.x) {
        field_0x58c.x = 0x1400;
        field_0x58c.z = 0;
    }
    cLib_chaseAngleS(&field_0x58c.z, 0, 128);
    f32 temp2 = 150.0f;
    if (field_0x584[0] || field_0x584[1]) {
        temp2 = 130.0f;
    }
    cLib_addCalc2(&field_0x588, temp2, 0.2f, 20.0f);
    for (int i = 0; i < 2; i++) {
        if (field_0x584[i] != 0) {
            field_0x584[i] -= 1;
        }
    }
}

/* 80652DA8-80652E98 000448 00F0+00 1/1 0/0 0/0 .text   execute__11daB_ZANTS_cFv */
int daB_ZANTS_c::execute() {
    mpBrkAnm->play();
    mpBtkAnm->play();
    mDoMtx_stack_c::transS(current.pos.x, current.pos.y + field_0x588, current.pos.z);
    mDoMtx_stack_c::YrotM(field_0x58c.y);
    mDoMtx_stack_c::XrotM(field_0x58c.x);
    mDoMtx_stack_c::YrotM(-field_0x58c.y);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    mDoMtx_stack_c::transM(0.0f, -30.0f, 0.0f);
    mpModel->i_setBaseTRMtx(mDoMtx_stack_c::get());
    cMtx_copy(mDoMtx_stack_c::get(), field_0x594);
    if (mpBgW) {
        mpBgW->Move();
    }
    action();
    return 1;
}

/* 80652E98-80652EB8 000538 0020+00 2/1 0/0 0/0 .text   daB_ZANTS_Execute__FP11daB_ZANTS_c */
static int daB_ZANTS_Execute(daB_ZANTS_c* i_this) {
    return i_this->execute();
}

/* 80652EB8-80652EC0 000558 0008+00 1/0 0/0 0/0 .text   daB_ZANTS_IsDelete__FP11daB_ZANTS_c */
static int daB_ZANTS_IsDelete(daB_ZANTS_c* i_this) {
    return 1;
}

/* 80652EC0-80652F18 000560 0058+00 1/1 0/0 0/0 .text   _delete__11daB_ZANTS_cFv */
int daB_ZANTS_c::_delete() {
    dComIfG_resDelete(&mPhase, "MAGNESIMA");
    if (mpBgW) {
        dComIfG_Bgsp().Release(mpBgW);
    }
    return 1;
}

/* 80652F18-80652F38 0005B8 0020+00 1/0 0/0 0/0 .text   daB_ZANTS_Delete__FP11daB_ZANTS_c */
static int daB_ZANTS_Delete(daB_ZANTS_c* i_this) {
    return i_this->_delete();
}

/* 80653370-80653390 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_ZANTS_Method */
static actor_method_class l_daB_ZANTS_Method = {
    (process_method_func)daB_ZANTS_Create,  (process_method_func)daB_ZANTS_Delete,
    (process_method_func)daB_ZANTS_Execute, (process_method_func)daB_ZANTS_IsDelete,
    (process_method_func)daB_ZANTS_Draw,
};

/* 80653390-806533C0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_ZANTS */
extern actor_process_profile_definition g_profile_B_ZANTS = {
    fpcLy_CURRENT_e,
    3,
    fpcPi_CURRENT_e,
    PROC_B_ZANTS,
    &g_fpcLf_Method.mBase,
    sizeof(daB_ZANTS_c),
    0,
    0,
    &g_fopAc_Method.base,
    229,
    &l_daB_ZANTS_Method,
    0x40000,
    fopAc_ACTOR_e,
    fopAc_CULLBOX_CUSTOM_e,
};

/* 80652F38-80653180 0005D8 0248+00 1/1 0/0 0/0 .text   CreateHeap__11daB_ZANTS_cFv */
int daB_ZANTS_c::CreateHeap() {
    J3DModelData* model_data = (J3DModelData*)dComIfG_getObjectRes("MAGNESIMA", 7);
    mpModel = mDoExt_J3DModel__create(model_data, 0x80000, 0x11000084);
    if (mpModel == NULL) {
        return 0;
    }
    mpBtkAnm = new mDoExt_btkAnm();
    if (mpBtkAnm == NULL) {
        return 0;
    }
    J3DAnmTextureSRTKey* srtkey = (J3DAnmTextureSRTKey*)dComIfG_getObjectRes("MAGNESIMA", 13);
    if (!mpBtkAnm->init(mpModel->getModelData(), srtkey, 1, 2, 1.0f, 0, -1)) {
        return 0;
    }
    mpBrkAnm = new mDoExt_brkAnm();
    if (mpBrkAnm == NULL) {
        return 0;
    }
    J3DAnmTevRegKey* tevkey = (J3DAnmTevRegKey*)dComIfG_getObjectRes("MAGNESIMA", 10);
    if (!mpBrkAnm->init(mpModel->getModelData(), tevkey, 1, 2, 1.0f, 0, -1)) {
        return 0;
    }
    mpBgW = new dBgW();
    if (mpBgW == NULL) {
        return 0;
    }
    cBgD_t* bgt = (cBgD_t*)dComIfG_getObjectRes("MAGNESIMA", 16);
    if (mpBgW->Set(bgt, 1, &field_0x594)) {
        return 0;
    }
    mpBgW->SetCrrFunc(dBgS_MoveBGProc_Typical);
    mpBgW->SetRideCallback(zants_ride_call_back);
    return 1;
}

/* 806531C8-806531E8 000868 0020+00 1/1 0/0 0/0 .text   useHeapInit__FP10fopAc_ac_c */
static int useHeapInit(fopAc_ac_c* i_this) {
    return static_cast<daB_ZANTS_c*>(i_this)->CreateHeap();
}

/* 806531E8-80653304 000888 011C+00 1/1 0/0 0/0 .text   create__11daB_ZANTS_cFv */
int daB_ZANTS_c::create() {
    fopAcM_SetupActor(this, daB_ZANTS_c);
    int result = dComIfG_resLoad(&mPhase, "MAGNESIMA");
    if (result == cPhs_COMPLEATE_e) {
        if (!fopAcM_entrySolidHeap(this, useHeapInit, 0x3AA0)) {
            return cPhs_ERROR_e;
        }
        if (mpBgW && dComIfG_Bgsp().Regist(mpBgW, this)) {
            return cPhs_ERROR_e;
        }
        attention_info.flags = 0;
        field_0x588 = 150.0f;
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
        fopAcM_SetMin(this, -200.0f, -500.0f, -500.0f);
        fopAcM_SetMax(this, 200.0f, 500.0f, 500.0f);
        daB_ZANTS_Execute(this);
    }
    return result;
}

/* 80653304-80653324 0009A4 0020+00 1/0 0/0 0/0 .text   daB_ZANTS_Create__FP11daB_ZANTS_c */
static int daB_ZANTS_Create(daB_ZANTS_c* i_this) {
    return i_this->create();
}
