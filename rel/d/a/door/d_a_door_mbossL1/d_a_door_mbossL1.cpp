/**
 * @file d_a_door_mbossL1.cpp
 * 
*/

#include "rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1.h"
#include "rel/d/a/obj/d_a_obj_stopper/d_a_obj_stopper.h"
#include "rel/d/a/obj/d_a_obj_keyhole/d_a_obj_keyhole.h"
#include "d/d_door_param2.h"
#include "d/com/d_com_inf_game.h"
#include "d/a/d_a_player.h"
#include "f_op/f_op_actor_mng.h"
#include "SSystem/SComponent/c_lib.h"
#include "SSystem/SComponent/c_math.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" static void getNowLevel__FP10fopAc_ac_c();
extern "C" static void searchStop__FPvPv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void calcMtx__13dDoor_stop2_cFP10fopAc_ac_c();
extern "C" void closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc();
extern "C" void closeProc__13dDoor_stop2_cFP10fopAc_ac_c();
extern "C" void openInit__13dDoor_stop2_cFP10fopAc_ac_cUc();
extern "C" void openProc__13dDoor_stop2_cFP10fopAc_ac_c();
extern "C" void create__13dDoor_stop2_cFP12J3DModelData();
extern "C" void draw__13dDoor_stop2_cFP10fopAc_ac_c();
extern "C" void getHeight__13dDoor_stop2_cFv();
extern "C" void getAnmArcName__12daMBdoorL1_cFv();
extern "C" void getArcName__12daMBdoorL1_cFv();
extern "C" void getAlwaysArcName__12daMBdoorL1_cFv();
extern "C" void getDoorType__12daMBdoorL1_cFv();
extern "C" void getOpenAnm__12daMBdoorL1_cFv();
extern "C" void getCloseAnm__12daMBdoorL1_cFv();
extern "C" void getBmd__12daMBdoorL1_cFv();
extern "C" void getBtk__12daMBdoorL1_cFv();
extern "C" void getDzb__12daMBdoorL1_cFv();
extern "C" void getDoorModelData__12daMBdoorL1_cFv();
extern "C" void CreateHeap__12daMBdoorL1_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void calcMtx__12daMBdoorL1_cFv();
extern "C" void createKey__12daMBdoorL1_cFv();
extern "C" void CreateInit__12daMBdoorL1_cFv();
extern "C" void create__12daMBdoorL1_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void getDemoAction__12daMBdoorL1_cFv();
extern "C" void demoProc__12daMBdoorL1_cFv();
extern "C" void openInit__12daMBdoorL1_cFv();
extern "C" void openProc__12daMBdoorL1_cFv();
extern "C" void openEnd__12daMBdoorL1_cFv();
extern "C" void closeInit__12daMBdoorL1_cFv();
extern "C" void closeProc__12daMBdoorL1_cFv();
extern "C" void closeEnd__12daMBdoorL1_cFv();
extern "C" void unlockInit__12daMBdoorL1_cFv();
extern "C" void unlock__12daMBdoorL1_cFv();
extern "C" void openInitKnob__12daMBdoorL1_cFi();
extern "C" void openProcKnob__12daMBdoorL1_cFi();
extern "C" void openEndKnob__12daMBdoorL1_cFi();
extern "C" void calcGoal__12daMBdoorL1_cFP4cXyzi();
extern "C" void setAngle__12daMBdoorL1_cFv();
extern "C" void setAngleQuickly__12daMBdoorL1_cFv();
extern "C" void adjustmentProc__12daMBdoorL1_cFv();
extern "C" void setPos__12daMBdoorL1_cFv();
extern "C" void setStart__12daMBdoorL1_cFff();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void smokeInit2__12daMBdoorL1_cFv();
extern "C" void checkArea__12daMBdoorL1_cFv();
extern "C" void checkFront__12daMBdoorL1_cFv();
extern "C" void checkOpen__12daMBdoorL1_cFv();
extern "C" void checkFrontKey__12daMBdoorL1_cFv();
extern "C" bool checkBackKey__12daMBdoorL1_cFv();
extern "C" void checkFrontStop__12daMBdoorL1_cFv();
extern "C" void checkBackStop__12daMBdoorL1_cFv();
extern "C" void checkFrontSw__12daMBdoorL1_cFv();
extern "C" void checkBackSw__12daMBdoorL1_cFv();
extern "C" void checkStopOpen__12daMBdoorL1_cFv();
extern "C" void startDemoEnd__12daMBdoorL1_cFv();
extern "C" void checkMBossRoom__12daMBdoorL1_cFv();
extern "C" void checkStopClose__12daMBdoorL1_cFv();
extern "C" void checkMakeStop__12daMBdoorL1_cFv();
extern "C" void checkMakeKey__12daMBdoorL1_cFv();
extern "C" bool actionWait__12daMBdoorL1_cFv();
extern "C" void actionCloseWait__12daMBdoorL1_cFv();
extern "C" void actionStopClose__12daMBdoorL1_cFv();
extern "C" void actionDemo__12daMBdoorL1_cFv();
extern "C" void actionOpen__12daMBdoorL1_cFv();
extern "C" void actionInit__12daMBdoorL1_cFv();
extern "C" void actionStartDemo__12daMBdoorL1_cFv();
extern "C" void execute__12daMBdoorL1_cFv();
extern "C" void draw__12daMBdoorL1_cFv();
extern "C" void draw_sub0__12daMBdoorL1_cFv();
extern "C" void draw_sub1__12daMBdoorL1_cFv();
extern "C" void Delete__12daMBdoorL1_cFv();
extern "C" static void daMBdoorL1_Draw__FP12daMBdoorL1_c();
extern "C" static void daMBdoorL1_Execute__FP12daMBdoorL1_c();
extern "C" static void daMBdoorL1_Delete__FP12daMBdoorL1_c();
extern "C" static void daMBdoorL1_Create__FP10fopAc_ac_c();
extern "C" void func_8067750C(void* _this, int*);
extern "C" static void func_80677528();
extern "C" static void func_80677530();
extern "C" static void func_80677538();
extern "C" static void func_80677540();
extern "C" static void func_80677548();
extern "C" extern char const* const d_a_door_mbossL1__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_createChildFromOffset__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void setRoom__13dSv_restart_cFRC4cXyzsSc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getFrontOption__13door_param2_cFP10fopAc_ac_c();
extern "C" void getBackOption__13door_param2_cFP10fopAc_ac_c();
extern "C" void getFRoomNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getSwbit__13door_param2_cFP10fopAc_ac_c();
extern "C" void getSwbit2__13door_param2_cFP10fopAc_ac_c();
extern "C" void getSwbit3__13door_param2_cFP10fopAc_ac_c();
extern "C" void getEventNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getExitNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getMFLightInf__13door_param2_cFP10fopAc_ac_c();
extern "C" void getMBLightInf__13door_param2_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFPCcUcl();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80677D38[4];

//
// Declarations:
//

/* 80672838-80672844 000078 000C+00 15/15 0/0 0/0 .text            getNowLevel__FP10fopAc_ac_c */
static int getNowLevel(fopAc_ac_c* i_this) {
    return static_cast<daMBdoorL1_c*>(i_this)->subtype;
}

/* 80672844-80672894 000084 0050+00 1/1 0/0 0/0 .text            searchStop__FPvPv */
static void* searchStop(void* param_1, void* param_2) {
    if (param_1 != NULL && fopAcM_IsActor(param_1) &&
        fopAcM_GetProfName(param_1) == PROC_Obj_Stopper)
    {
        return param_1;
    }
    return NULL;
}

/* 80672894-806728B4 0000D4 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
static int CheckCreateHeap(fopAc_ac_c* i_this) {
    return static_cast<daMBdoorL1_c*>(i_this)->CreateHeap();
}

/* 806728B4-80672970 0000F4 00BC+00 6/6 0/0 0/0 .text calcMtx__13dDoor_stop2_cFP10fopAc_ac_c */
void dDoor_stop2_c::calcMtx(fopAc_ac_c* param_1) {
    if (field_0x8 == 0 || mModel == NULL) {
        return;
    }
    cXyz local_18(param_1->current.pos);
    mDoMtx_stack_c::transS(local_18.x, local_18.y + field_0x4, local_18.z);
    mDoMtx_stack_c::YrotM(param_1->current.angle.y);
    if (field_0x9 == 1) {
        mDoMtx_stack_c::YrotM(0x7fff);
    }
    mModel->setBaseTRMtx(mDoMtx_stack_c::get());
}

/* ############################################################################################## */
/* 80677558-80677568 000000 000D+03 19/19 0/0 0/0 .rodata          l_staff_name */
SECTION_RODATA static char const l_staff_name[13] = "SHUTTER_DOOR";
COMPILER_STRIP_GATE(0x80677558, &l_staff_name);

/* 80677568-80677580 000010 0018+00 1/1 0/0 0/0 .rodata          l_door_heap_size */
SECTION_RODATA static u16 const l_door_heap_size[12] = {
    0x0000, 0x0AE0, 0x1820, 0x1180, 0x1820, 0x1310,
    0x0AE0, 0x0AE0, 0x13A0, 0x1820, 0x0AE0, 0x1310,
};
COMPILER_STRIP_GATE(0x80677568, &l_door_heap_size);

/* 80677580-80677598 000028 0018+00 1/1 0/0 0/0 .rodata          l_stop_heap_size */
SECTION_RODATA static u16 const l_stop_heap_size[12] = {
    0x0000, 0x0000, 0x0800, 0x0000, 0x1540, 0x1BD0,
    0x0EA0, 0x0800, 0x0EB0, 0x0800, 0x0800, 0x1BD0,
};
COMPILER_STRIP_GATE(0x80677580, &l_stop_heap_size);

/* 80677598-8067759C 000040 0004+00 3/16 0/0 0/0 .rodata          @3740 */
SECTION_RODATA static u8 const lit_3740[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80677598, &lit_3740);

/* 8067759C-806775A0 000044 0004+00 1/9 0/0 0/0 .rodata          @3741 */
SECTION_RODATA static f32 const lit_3741 = 1.0f;
COMPILER_STRIP_GATE(0x8067759C, &lit_3741);

/* 806775A0-806775A4 000048 0004+00 1/7 0/0 0/0 .rodata          @3742 */
SECTION_RODATA static f32 const lit_3742 = -1.0f;
COMPILER_STRIP_GATE(0x806775A0, &lit_3742);

/* 80677970-8067797C 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8067797C-80677990 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80677990-806779BC -00001 002C+00 0/1 0/0 0/0 .data            l_door_open_demo */
#pragma push
#pragma force_active on
SECTION_DATA static char* l_door_open_demo[11] = {
    NULL,
    "DEFAULT_MBS_SHUTTER_L1_F",
    "DEFAULT_MBS_SHUTTER_L1_F",
    "DEFAULT_MBS_SHUTTER_L3_F",
    "DEFAULT_MBS_SHUTTER_L3_F",
    NULL,
    "DEFAULT_MBS_SHUTTER_L3_F",
    "DEFAULT_MBS_SHUTTER_L7_F",
    "DEFAULT_MBS_SHUTTER_L8_F",
    "DEFAULT_MBS_SHUTTER_L1_F",
    "DEFAULT_MBS_SHUTTER_L7_F",
};
#pragma pop

/* 806779BC-806779E8 -00001 002C+00 0/1 0/0 0/0 .data            l_door_open_demoB */
#pragma push
#pragma force_active on
SECTION_DATA static char* l_door_open_demoB[11] = {
    NULL,
    "DEFAULT_MBS_SHUTTER_L1_B",
    "DEFAULT_MBS_SHUTTER_L1_B",
    "DEFAULT_MBS_SHUTTER_L3_B",
    "DEFAULT_MBS_SHUTTER_L3_B",
    NULL,
    "DEFAULT_MBS_SHUTTER_L3_B",
    "DEFAULT_MBS_SHUTTER_L7_B",
    "DEFAULT_MBS_SHUTTER_L8_B",
    "DEFAULT_MBS_SHUTTER_L1_B",
    "DEFAULT_MBS_SHUTTER_L7_B",
};
#pragma pop

/* 806779E8-806779F8 -00001 0010+00 0/1 0/0 0/0 .data            l_door_open_demoLv5 */
#pragma push
#pragma force_active on
SECTION_DATA static char* l_door_open_demoLv5[4] = {
    "DEFAULT_MBS_KNOB_OPEN_B",
    "DEFAULT_MBS_KNOB_OPEN_F",
    "DEFAULT_MBS_KNOB_NOTOPEN_B",
    "DEFAULT_MBS_KNOB_NOTOPEN_F",
};
#pragma pop

/* 806779F8-80677A28 -00001 0030+00 1/1 0/0 0/0 .data            @3743 */
SECTION_DATA static void* lit_3743[12] = {
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x15C),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x70),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x15C),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x110),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x15C),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
    (void*)(((char*)closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xC0),
};

/* 80672970-80672AE4 0001B0 0174+00 3/2 0/0 0/0 .text closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc
 */
// Matches with literals
#ifdef NONMATCHING
void dDoor_stop2_c::closeInit(fopAc_ac_c* param_1, u8 param_2) {
    field_0x4 = getHeight();
    param_1->speedF = 0.0f;
    field_0xb = 1;
    if (param_2 != 0) {
        switch (getNowLevel(param_1)) {
        case 1:
            fopAcM_seStart(param_1, Z2SE_OBJ_DOOR_WOOD_BAR_CL, 0);
            break;
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
            fopAcM_seStart(param_1, Z2SE_OBJ_DOOR_STEEL_BAR_CL, 0);
            break;
        case 8:
            fopAcM_seStart(param_1, Z2SE_OBJ_L8_MBOSS_SHTR_CL, 0);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDoor_stop2_c::closeInit(fopAc_ac_c* param_0, u8 param_1) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/closeInit__13dDoor_stop2_cFP10fopAc_ac_cUc.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 806775A4-806775A8 00004C 0004+00 0/1 0/0 0/0 .rodata          @3752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3752 = 60.0f;
COMPILER_STRIP_GATE(0x806775A4, &lit_3752);
#pragma pop

/* 806775A8-806775AC 000050 0004+00 0/1 0/0 0/0 .rodata          @3753 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3753 = 6.0f;
COMPILER_STRIP_GATE(0x806775A8, &lit_3753);
#pragma pop

/* 80672AE4-80672B70 000324 008C+00 2/2 0/0 0/0 .text closeProc__13dDoor_stop2_cFP10fopAc_ac_c */
// Matches with literals
#ifdef NONMATCHING
int dDoor_stop2_c::closeProc(fopAc_ac_c* param_1) {
    if (field_0xb == 0) {
        return 1;
    } 
    cLib_chaseF(&param_1->speedF, 60.0f, 6.0f);
    if (cLib_chaseF(&field_0x4, 0.0f, param_1->speedF)) {
        field_0xb = 0;
        return 2;
    } 
    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dDoor_stop2_c::closeProc(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/closeProc__13dDoor_stop2_cFP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80677A28-80677A58 -00001 0030+00 1/1 0/0 0/0 .data            @3792 */
SECTION_DATA static void* lit_3792[12] = {
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x150),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x64),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x150),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x104),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0x150),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
    (void*)(((char*)openInit__13dDoor_stop2_cFP10fopAc_ac_cUc) + 0xB4),
};

/* 80672B70-80672CD8 0003B0 0168+00 2/1 0/0 0/0 .text openInit__13dDoor_stop2_cFP10fopAc_ac_cUc */
// Matches with literals
#ifdef NONMATCHING
void dDoor_stop2_c::openInit(fopAc_ac_c* param_1, u8 param_2) {
    field_0x4 = 0;
    param_1->speedF = 0.0f;
    field_0xb = 1;
    if (param_2 != 0) {
        switch (getNowLevel(param_1)) {
        case 1:
            fopAcM_seStart(param_1, Z2SE_OBJ_DOOR_WOOD_BAR_OP, 0);
            break;
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 0xb:
            fopAcM_seStart(param_1, Z2SE_OBJ_DOOR_STEEL_BAR, 0);
            break;
        case 8:
            fopAcM_seStart(param_1, Z2SE_OBJ_L8_MBOSS_SHTR_OP, 0);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDoor_stop2_c::openInit(fopAc_ac_c* param_0, u8 param_1) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openInit__13dDoor_stop2_cFP10fopAc_ac_cUc.s"
}
#pragma pop
#endif

/* 80672CD8-80672D80 000518 00A8+00 1/1 0/0 0/0 .text openProc__13dDoor_stop2_cFP10fopAc_ac_c */
int dDoor_stop2_c::openProc(fopAc_ac_c* param_1) {
    if (field_0xb == 0) {
        return 1;
    }
    f32 height = getHeight();
    cLib_chaseF(&param_1->speedF, 30.0f, 4.0f);
    if (cLib_chaseF(&field_0x4, height, param_1->speedF)) {
        field_0xb = 0;
        field_0x8 = 0;
        return 2;
    } else {
        return 0;
    }
}

/* 80672D80-80672DCC 0005C0 004C+00 1/1 0/0 0/0 .text create__13dDoor_stop2_cFP12J3DModelData */
int dDoor_stop2_c::create(J3DModelData* modelData) {
    mModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
    if (mModel == NULL) {
        return 0;
    }
    return 1;
}

/* 80672DCC-80672E44 00060C 0078+00 2/2 0/0 0/0 .text            draw__13dDoor_stop2_cFP10fopAc_ac_c
 */
void dDoor_stop2_c::draw(fopAc_ac_c* param_1) {
    if (mModel != NULL) {
        g_env_light.settingTevStruct(16, &param_1->current.pos, &param_1->tevStr);
        g_env_light.setLightTevColorType_MAJI(mModel, &param_1->tevStr);
        mDoExt_modelUpdateDL(mModel);
    }
}

/* ############################################################################################## */
/* 806775B4-806775B8 00005C 0004+00 2/3 0/0 0/0 .rodata          @3834 */
SECTION_RODATA static f32 const lit_3834 = 300.0f;
COMPILER_STRIP_GATE(0x806775B4, &lit_3834);

/* 80672E44-80672E70 000684 002C+00 2/2 0/0 0/0 .text            getHeight__13dDoor_stop2_cFv */
// Matches with literals
#ifdef NONMATCHING
f32 dDoor_stop2_c::getHeight() {
    if (mModel != NULL) {
        J3DJoint* root_jnt = mModel->getModelData()->getJointNodePointer(0);
        JUT_ASSERT(360, root_jnt != 0);
        return root_jnt->getMax()->y;
    }
    return 300.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm f32 dDoor_stop2_c::getHeight() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/getHeight__13dDoor_stop2_cFv.s"
}
#pragma pop
#endif

/* 80672E70-80672EE8 0006B0 0078+00 5/5 0/0 0/0 .text            getAnmArcName__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getAnmArcName() {
    switch(getDoorType()) {
    case 0:
        return "DoorY00";
    case 1:
        return "DoorT00";
    case 2:
        return NULL;
    }
    return "DoorT00";
}

/* ############################################################################################## */
/* 80677660-80677660 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8067779E = "L1MBdoor";
SECTION_DEAD static char const* const stringBase_806777A7 = "L3MBdoor";
SECTION_DEAD static char const* const stringBase_806777B0 = "L5MBdoor";
SECTION_DEAD static char const* const stringBase_806777B9 = "L8MBdoor";
SECTION_DEAD static char const* const stringBase_806777C2 = "L7MBdoor";
#pragma pop

/* 80677A58-80677A88 -00001 0030+00 1/1 0/0 0/0 .data            @3859 */
SECTION_DATA static void* lit_3859[12] = {
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x30),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x30),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x30),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x40),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x40),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x50),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x40),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x70),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x60),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x30),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x70),
    (void*)(((char*)getArcName__12daMBdoorL1_cFv) + 0x50),
};

/* 80672EE8-80672F74 000728 008C+00 4/3 0/0 0/0 .text            getArcName__12daMBdoorL1_cFv */
#ifdef NONMATCHING
char* daMBdoorL1_c::getArcName() {
    switch (getNowLevel(this)) {
    case 0:
    case 1:
    case 2:
    case 9:
    default:
        return "L1MBdoor";
    case 3:
    case 4:
    case 6:
        return "L3MBdoor";
    case 5:
    case 11:
        return "L5MBdoor";
    case 7:
    case 10:
        return "L8MBdoor";
    case 8:
        return "L7MBdoor";
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm char* daMBdoorL1_c::getArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/getArcName__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80672F74-80672F84 0007B4 0010+00 4/4 0/0 0/0 .text            getAlwaysArcName__12daMBdoorL1_cFv
 */
char* daMBdoorL1_c::getAlwaysArcName() {
    return "static";
}

/* 80672F84-80672FE4 0007C4 0060+00 15/15 0/0 0/0 .text            getDoorType__12daMBdoorL1_cFv */
int daMBdoorL1_c::getDoorType() {
    switch(getNowLevel(this)) {
    case 1:
    case 2:
        return DOOR_TYPE_0;
    case 5:
    case 11:
        return DOOR_TYPE_2;
    default:
        return DOOR_TYPE_1;
    }
}

/* 80672FE4-80673048 000824 0064+00 2/2 0/0 0/0 .text            getOpenAnm__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getOpenAnm() {
    if (getDoorType() == DOOR_TYPE_1) {
        return"oj_DoorOpD.bck";
    }
    if (getDoorType() == DOOR_TYPE_0) {
        return "oj_DoorOpC.bck";
    } 
    return NULL;
}

/* 80673048-806730AC 000888 0064+00 1/1 0/0 0/0 .text            getCloseAnm__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getCloseAnm() {
    if (getDoorType() == DOOR_TYPE_1) {
        return"oj_DoorCloseD.bck";
    }
    if (getDoorType() == DOOR_TYPE_0) {
        return "oj_DoorCloseC.bck";
    } 
    return NULL;
}

/* 806730AC-80673100 0008EC 0054+00 1/1 0/0 0/0 .text            getBmd__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getBmd() {
    switch(getNowLevel(this)) {
    case 5:
    case 11:
        return "door-knob_00.bmd";
    default:
        return"door-shutter_00.bmd";
    }
}

/* 80673100-80673110 000940 0010+00 1/1 0/0 0/0 .text            getBtk__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getBtk() {
    return "door-shutter_00.btk";
}

/* 80673110-80673140 000950 0030+00 1/1 0/0 0/0 .text            getDzb__12daMBdoorL1_cFv */
char* daMBdoorL1_c::getDzb() {
    if (getNowLevel(this) == 5) {
        return "door-shutter.dzb";
    }
    return "door-shutter.dzb";
}

/* 80673140-80673164 000980 0024+00 1/1 0/0 0/0 .text            getDoorModelData__12daMBdoorL1_cFv
 */
J3DModelData* daMBdoorL1_c::getDoorModelData() {
    return static_cast<J3DModelData*>(dComIfG_getStageRes(getBmd()));
}

/* ############################################################################################## */
/* 806775B8-806775BC 000060 0004+00 0/2 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4033 = -75.0f;
COMPILER_STRIP_GATE(0x806775B8, &lit_4033);
#pragma pop

/* 806775BC-806775C0 000064 0004+00 0/1 0/0 0/0 .rodata          @4034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4034 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x806775BC, &lit_4034);
#pragma pop

/* 80677660-80677660 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8067785E = "FDoorA.bck";
SECTION_DEAD static char const* const stringBase_80677869 = "door-stop.bmd";
SECTION_DEAD static char const* const stringBase_80677877 = "WAIT";
SECTION_DEAD static char const* const stringBase_8067787C = "SETANGLE";
SECTION_DEAD static char const* const stringBase_80677885 = "UNLOCK";
SECTION_DEAD static char const* const stringBase_8067788C = "OPEN";
SECTION_DEAD static char const* const stringBase_80677891 = "SETGOAL";
SECTION_DEAD static char const* const stringBase_80677899 = "SETGOAL2";
SECTION_DEAD static char const* const stringBase_806778A2 = "CLOSE";
SECTION_DEAD static char const* const stringBase_806778A8 = "STOP_CLOSE";
SECTION_DEAD static char const* const stringBase_806778B3 = "STOP_OPEN";
SECTION_DEAD static char const* const stringBase_806778BD = "SMOKE";
SECTION_DEAD static char const* const stringBase_806778C3 = "SMOKE_END";
SECTION_DEAD static char const* const stringBase_806778CD = "END";
SECTION_DEAD static char const* const stringBase_806778D1 = "END_CHECK";
SECTION_DEAD static char const* const stringBase_806778DB = "CHG_SCENE";
SECTION_DEAD static char const* const stringBase_806778E5 = "OPEN_PULL";
SECTION_DEAD static char const* const stringBase_806778EF = "OPEN_PUSH";
SECTION_DEAD static char const* const stringBase_806778F9 = "";
SECTION_DEAD static char const* const stringBase_806778FA = "ADJUSTMENT";
SECTION_DEAD static char const* const stringBase_80677905 = "OPEN_PUSH2";
SECTION_DEAD static char const* const stringBase_80677910 = "OPEN_PULL2";
SECTION_DEAD static char const* const stringBase_8067791B = "SETSTART_PUSH";
SECTION_DEAD static char const* const stringBase_80677929 = "SETSTART_PULL";
SECTION_DEAD static char const* const stringBase_80677937 = "SETPOS";
SECTION_DEAD static char const* const stringBase_8067793E = "LIGHT_ANM";
SECTION_DEAD static char const* const stringBase_80677948 = "INIT";
SECTION_DEAD static char const* const stringBase_8067794D = "Timer";
SECTION_DEAD static char const* const stringBase_80677953 = "FDoorB.bck";
#pragma pop

/* 80677A88-80677AF0 -00001 0068+00 1/1 0/0 0/0 .data            action_table$4271 */
SECTION_DATA static char* action_table[26] = {
    "WAIT",
    "SETANGLE",
    "UNLOCK",
    "OPEN",
    "SETGOAL",
    "SETGOAL2",
    "CLOSE",
    "STOP_CLOSE",
    "STOP_OPEN",
    "SMOKE",
    "SMOKE_END",
    "END",
    "END_CHECK",
    "CHG_SCENE",
    "OPEN_PULL",
    "OPEN_PUSH",
    "",
    "",
    "ADJUSTMENT",
    "OPEN_PUSH2",
    "OPEN_PULL2",
    "SETSTART_PUSH",
    "SETSTART_PULL",
    "SETPOS",
    "LIGHT_ANM",
    "INIT",
};

/* 80677AF0-80677B58 -00001 0068+00 1/1 0/0 0/0 .data            @4679 */
SECTION_DATA static void* lit_4679[26] = {
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x614),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x634),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x674),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x694),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x6BC),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x6BC),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x6CC),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x7C8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x88C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x8C4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC10),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC1C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x8D4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x958),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x9C8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x9C8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC10),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC1C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x9A8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x9D8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x9D8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC10),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC10),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xC10),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xBB8),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xBD8),
};

/* 80677B58-80677BC0 -00001 0068+00 1/1 0/0 0/0 .data            @4678 */
SECTION_DATA static void* lit_4678[26] = {
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xA4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0xE0),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x120),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x1F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x210),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x250),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x290),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x29C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x30C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x5F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x5F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x5F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x32C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x320),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x354),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x344),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x5F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x5F4),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x338),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x364),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x374),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x44C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x384),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x514),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x52C),
    (void*)(((char*)demoProc__12daMBdoorL1_cFv) + 0x588),
};

/* 80677BC0-80677BD0 -00001 0010+00 1/1 0/0 0/0 .data            bck_table$4947 */
SECTION_DATA static char* bck_table[4] = {
    "FDoorA.bck",
    "FDoorB.bck",
    "FDoorA.bck",
    "FDoorB.bck",
};

/* 80677BD0-80677BDC -00001 000C+00 0/1 0/0 0/0 .data            @5724 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5724[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionInit__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677BDC-80677BE8 -00001 000C+00 0/1 0/0 0/0 .data            @5725 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5725[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionStartDemo__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677BE8-80677BF4 -00001 000C+00 0/1 0/0 0/0 .data            @5726 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5726[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677BF4-80677C00 -00001 000C+00 0/1 0/0 0/0 .data            @5727 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5727[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionCloseWait__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677C00-80677C0C -00001 000C+00 0/1 0/0 0/0 .data            @5728 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5728[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOpen__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677C0C-80677C18 -00001 000C+00 0/1 0/0 0/0 .data            @5729 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5729[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDemo__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677C18-80677C24 -00001 000C+00 0/1 0/0 0/0 .data            @5730 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5730[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionStopClose__12daMBdoorL1_cFv,
};
#pragma pop

/* 80677C24-80677C78 0002B4 0054+00 0/1 0/0 0/0 .data            l_action$5723 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_action[84] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80677C78-80677C98 -00001 0020+00 1/0 0/0 0/0 .data            l_daMBdoorL1_Method */
static actor_method_class l_daMBdoorL1_Method = {
    (process_method_func)daMBdoorL1_Create__FP10fopAc_ac_c,
    (process_method_func)daMBdoorL1_Delete__FP12daMBdoorL1_c,
    (process_method_func)daMBdoorL1_Execute__FP12daMBdoorL1_c,
    0,
    (process_method_func)daMBdoorL1_Draw__FP12daMBdoorL1_c,
};

/* 80677C98-80677CC8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_L1MBOSS_DOOR */
extern actor_process_profile_definition g_profile_L1MBOSS_DOOR = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_L1MBOSS_DOOR,     // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  sizeof(daMBdoorL1_c),  // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  299,                   // mPriority
  &l_daMBdoorL1_Method,  // sub_method
  0x00044000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_6_e,     // cullType
};

/* 80677CC8-80677CF8 000358 0030+00 1/1 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80677538,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80677548,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80677540,
};

/* 80677CF8-80677D04 000388 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80677D04-80677D28 000394 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80677530,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80677528,
};

/* 80677D28-80677D34 0003B8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80673164-806735B0 0009A4 044C+00 1/1 0/0 0/0 .text            CreateHeap__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::CreateHeap() {
    int level = getNowLevel(this);
    J3DModelData* modelData = getDoorModelData();
    JUT_ASSERT(579. modelData != 0);
    if (getDoorType() == DOOR_TYPE_2) {
        for (int i = 0; i < 2; i++) {
            mModels[i] = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
            if (mModels[i] == NULL) {
                return 0;
            }
            J3DAnmTransform* anm = (J3DAnmTransform*)dComIfG_getObjectRes(
                getAlwaysArcName(), "FDoorA.bck");
            JUT_ASSERT(597, anm != 0);
            mBckAnms[i] = new mDoExt_bckAnm();
            if (mBckAnms[i] == NULL || !mBckAnms[i]->init(anm, 1, 0, 1.0f, 0, -1, false)) {
                return 0;
            }
            mBckAnms[i]->entry(mModels[0]->getModelData());
            mModels[i]->calc();
        }
    } else {
        int local_38 = 0x11000084;
        int local_3c = 0x80000;
        if (level == 8) {
            local_38 |= 0x200;
            local_3c = 0;
        }
        mModels[0] = mDoExt_J3DModel__create(modelData, local_3c, local_38);
        if (mModels[0] == NULL) {
            return 0;
        }
        J3DAnmTransform* anm =
            (J3DAnmTransform*)dComIfG_getObjectRes(getAnmArcName(), getOpenAnm());
        JUT_ASSERT(628, anm != 0);
        mBckAnms[0] = new mDoExt_bckAnm();
        if (mBckAnms[0] == NULL || !mBckAnms[0]->init(anm, 1, 0, 1.0f, 0, -1, false)) {
            return 0;
        }
        mBckAnms[0]->entry(mModels[0]->getModelData());
        mModels[0]->calc();
    }
    if (level == 8) {
        J3DAnmTextureSRTKey* pbtk = (J3DAnmTextureSRTKey*)dComIfG_getStageRes(getBtk());
        JUT_ASSERT(646, pbtk != 0);
        field_0x594 = new mDoExt_btkAnm();
        if (field_0x594 == NULL ||
            !field_0x594->init(mModels[0]->getModelData(), pbtk, 1, 0, 1.0f, 0, -1))
        {
            return 0;
        }
    }
    if (checkMakeStop()) {
        J3DModelData* mdl = (J3DModelData*)dComIfG_getStageRes("door-stop.bmd");
        JUT_ASSERT(671, mdl != 0);
        if (!mDoorStop.create(mdl)) {
            return 0;
        }
        mDoorStop.field_0x9 = field_0x5df;
        mDoorStop.field_0x4 = 300.0f;
        mDoorStop.field_0x8 = 1;
        mDoorStop.calcMtx(this);
        mDoorStop.field_0x8 = 0;
    }
    calcMtx();
    cXyz cStack_20(-75.0f, 0.0f, 0.0f);
    mDoMtx_stack_c::transS(home.pos);
    mDoMtx_stack_c::YrotM(home.angle.y);
    if (getDoorType() == DOOR_TYPE_2) {
        mDoMtx_stack_c::scaleM(1.0f, 1.4f, 1.0f);
    }
    MTXCopy(mDoMtx_stack_c::get(), field_0x59c);
    field_0x598 = new dBgW();
    if (field_0x598 == NULL || field_0x598->Set((cBgD_t*)dComIfG_getObjectRes(getAlwaysArcName(), getDzb()), 1, &field_0x59c)) {
        return 0;
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/CreateHeap__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806735B0-806735F8 000DF0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __dt__12J3DFrameCtrlFv() {
//asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806775C0-806775C4 000068 0004+00 0/1 0/0 0/0 .rodata          @4083 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4083 = 220.0f;
COMPILER_STRIP_GATE(0x806775C0, &lit_4083);
#pragma pop

/* 806775C4-806775C8 00006C 0004+00 0/1 0/0 0/0 .rodata          @4084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4084 = -220.0f;
COMPILER_STRIP_GATE(0x806775C4, &lit_4084);
#pragma pop

/* 806735F8-80673790 000E38 0198+00 4/4 0/0 0/0 .text            calcMtx__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
void daMBdoorL1_c::calcMtx() {
    cXyz cStack_1c(220.0f, 0.0f, 0.0f);
    cXyz cStack_28(-220.0f, 0.0f, 0.0f);
    switch(getDoorType()) {
    case 0:
    default:
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::YrotM(home.angle.y);
        if (field_0x5df == 0) {
            mDoMtx_stack_c::YrotM(0x7fff);
        }
        mModels[0]->setBaseTRMtx(mDoMtx_stack_c::get());
        break;
    case 1:
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::YrotM(home.angle.y);
        mModels[0]->setBaseTRMtx(mDoMtx_stack_c::get());
        break;
    case 2:
        mDoMtx_stack_c::YrotS(home.angle.y);
        mDoMtx_stack_c::multVec(&cStack_1c, &cStack_1c);
        mDoMtx_stack_c::multVec(&cStack_28, &cStack_28);
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::transM(cStack_1c);
        mDoMtx_stack_c::YrotM(home.angle.y);
        mModels[0]->setBaseTRMtx(mDoMtx_stack_c::get());
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::transM(cStack_28);
        mDoMtx_stack_c::YrotM(home.angle.y + 0x7fff);
        mModels[1]->setBaseTRMtx(mDoMtx_stack_c::get());
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMBdoorL1_c::calcMtx() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/calcMtx__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 806775C8-806775CC 000070 0004+00 1/1 0/0 0/0 .rodata          @4122 */
SECTION_RODATA static f32 const lit_4122 = 35.0f;
COMPILER_STRIP_GATE(0x806775C8, &lit_4122);

/* 80673790-806738CC 000FD0 013C+00 1/1 0/0 0/0 .text            createKey__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::createKey() {
    if (mKeyHoleId == 0xffffffff) {
        cXyz cStack_1c(current.pos);
        current.pos = home.pos;
        csXyz cStack_30(0, 0, 0);
        cXyz cStack_28;
        u8 unaff_r29;
        if ((u8)door_param2_c::getFrontOption(this) == 2) {
            cStack_28.set(0.0f, 0.0f, 35.0f);
            cStack_30.y = 0;
            unaff_r29 = (u8)door_param2_c::getFRoomNo(this);
        }
        mKeyHoleId = fopAcM_createChildFromOffset(PROC_OBJ_KEYHOLE, fopAcM_GetID(this), 0xffffffff, &cStack_28,
                                                             unaff_r29, &cStack_30, &scale,
                                                             0xffffffff, NULL);
        current.pos = cStack_1c;
        if (mKeyHoleId == 0xffffffff) {
            return 0;
        }
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::createKey() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/createKey__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 806775CC-806775D0 000074 0004+00 0/1 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 150.0f;
COMPILER_STRIP_GATE(0x806775CC, &lit_4179);
#pragma pop

/* 806738CC-80673B9C 00110C 02D0+00 1/1 0/0 0/0 .text            CreateInit__12daMBdoorL1_cFv */
// rodata/data register load order
#ifdef NONMATCHING
int daMBdoorL1_c::CreateInit() {
    field_0x81c = home.pos;
    field_0x828 = field_0x81c;
    field_0x7dc.SetWall(30.0f, 30.0f);
    field_0x604.Set(&field_0x81c, &field_0x828, this, 1, &field_0x7dc, fopAcM_GetSpeed_p(this),
                    NULL, NULL);
    shape_angle.z = 0;
    shape_angle.x = 0;
    current.angle.z = 0;
    current.angle.x = 0;
    int rt = dComIfG_Bgsp().Regist(field_0x598, this);
    JUT_ASSERT(851, rt == 0);
    setAction(ACTION_INIT);
    attention_info.position.y += 150.0f;
    eyePos.y += 150.0f;
    attention_info.flags = 0x20;
    calcMtx();
    field_0x598->Move();
    eventInfo.setArchiveName(getArcName());
    if (getDoorType() == DOOR_TYPE_2) {
        for (int i = 0; i < 4; i++) {
            field_0x5d4[i] =
                dComIfGp_getEventManager().getEventIdx(this, l_door_open_demoLv5[i], 0xff);
        }
    } else {
        field_0x5de = 0;
        if (field_0x5df == 0) {
            field_0x5d4[field_0x5de] = dComIfGp_getEventManager().getEventIdx(
                this, l_door_open_demo[getNowLevel(this)], 0xff);
        } else {
            field_0x5d4[field_0x5de] = dComIfGp_getEventManager().getEventIdx(
                this, l_door_open_demoB[getNowLevel(this)], 0xff);
        }
    }
    mKeyHoleId = 0xffffffff;
    if (checkMakeKey()) {
        createKey();
    }
    switch(getNowLevel(this)) {
    case 2:
        if ((u8)door_param2_c::getFRoomNo(this) == 11) {
            if (!fopAcM_isSwitch(this, (u8)door_param2_c::getSwbit2(this))) {
                mDoorStop.field_0x8 = 1;
                mDoorStop.field_0x4 = 0.0f;
                mDoorStop.calcMtx(this);
            }
        }
        break;
    case 8:
        break;
    }
    u32 lightInf;
    if (dComIfGp_roomControl_getStayNo() == (u8)door_param2_c::getFRoomNo(this)) {
        lightInf = door_param2_c::getMFLightInf(this);
    } else {
        lightInf = door_param2_c::getMBLightInf(this);
    }
    tevStr.mLightInf = lightInf;
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/CreateInit__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80673B9C-80673D98 0013DC 01FC+00 1/1 0/0 0/0 .text            create__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::create() {
    fopAcM_SetupActor(this, daMBdoorL1_c);
    int rv = dComIfG_resLoad(&mPhase1, getArcName());
    if (rv != cPhs_COMPLEATE_e) {
        return rv;
    }
    rv = dComIfG_resLoad(&mPhase2, getAlwaysArcName());
    if (rv != cPhs_COMPLEATE_e) {
        return rv;
    }
    if (getAnmArcName() != NULL) {
        rv = dComIfG_resLoad(&mPhase3, getAnmArcName());
        if (rv != cPhs_COMPLEATE_e) {
            return rv;
        }
    }
    if (getNowLevel(this) == 1 && fopAcM_GetRoomNo(this) == 51) {
        base_process_class* processClass = fpcM_Search(searchStop, this);
        if (processClass == 0) {
            return 0;
        }
        mStopperId = fopAcM_GetID(processClass);
    }
    if (fopAcM_GetRoomNo(this) == (u8)door_param2_c::getFRoomNo(this)) {
        field_0x5df = 0;
    } else {
        field_0x5df = 1;
    }
    int heapSize = l_door_heap_size[getNowLevel(this)];
    if (checkMakeStop()) {
        heapSize += l_stop_heap_size[getNowLevel(this)];
    }
    if (fopAcM_entrySolidHeap(this, CheckCreateHeap, heapSize) == 0) {
        return cPhs_ERROR_e;
    } 
    if (CreateInit()) {
        return cPhs_COMPLEATE_e;
    } else {
        return cPhs_ERROR_e;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::create() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/create__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80673D98-80673E08 0015D8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __dt__12dBgS_AcchCirFv() {
//asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80673E08-80673E78 001648 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __dt__12dBgS_ObjAcchFv() {
//asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80673E78-80673EC0 0016B8 0048+00 1/1 0/0 0/0 .text            getDemoAction__12daMBdoorL1_cFv */
int daMBdoorL1_c::getDemoAction() {
    return dComIfGp_evmng_getMyActIdx(field_0x5e8, action_table, 26, 0, 0);
}

/* 80673EC0-80674AF4 001700 0C34+00 6/4 0/0 0/0 .text            demoProc__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
void daMBdoorL1_c::demoProc() {
    int demoAction = getDemoAction();
    cXyz cStack_20;
    daObjStopper_c* stopper = (daObjStopper_c*)fopAcM_SearchByID(mStopperId);
    u32 cVar10 = door_param2_c::getSwbit2(this);
    bool bVar2 = false;
    int level = getNowLevel(this);
    if (dComIfGp_evmng_getIsAddvance(field_0x5e8)) {
        switch (demoAction) {
        case 0:
            int* puVar6 = dComIfGp_evmng_getMyIntegerP(field_0x5e8, "Timer");
            if (puVar6 == NULL) {
                field_0x5ec = 1;
            } else {
                field_0x5ec = *puVar6;
            }
            break;
        case 1:
            if (level == 5 || level == 11) {
                setAngleQuickly();
                if (field_0x5df == 1) {
                    shape_angle.y += 0x7fff;
                }
            } else {
                field_0x5cd = 5;
            }
            break;
        case 2:
            if (checkFrontKey()) {
                cVar10 = door_param2_c::getSwbit(this);
            } else {
                cVar10 = 0xff;
            }
            if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10))
            {
                unlockInit();
                fopAcM_onSwitch(this, (u8)cVar10);
                dComIfGp_setItemKeyNumCount(0xffffffff);
                fopAcM_seStart(this, Z2SE_OBJ_DOOR_CHAIN_LOCK_OPEN, 0);
            }
            break;
        case 3:
            if (stopper != NULL) {
                stopper->setOpen();
            }
            openInit();
            break;
        case 4:
            if (field_0x5df == 1) {
                calcGoal(&cStack_20, 1);
            } else {
                calcGoal(&cStack_20, 0);
            }
            dComIfGp_evmng_setGoal(&cStack_20);
            break;
        case 5:
            if (field_0x5df == 1) {
                calcGoal(&cStack_20, 2);
            } else {
                calcGoal(&cStack_20, 3);
            }
            dComIfGp_evmng_setGoal(&cStack_20);
            break;
        case 6:
            closeInit();
            break;
        case 7:
            if (field_0x5df == 0) {
                cVar10 = door_param2_c::getSwbit(this);
            } else {
                cVar10 = door_param2_c::getSwbit2(this);
            }
            if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10)) {
                mDoorStop.closeInit(this, 1);
                if (level != 1) {
                    mDoorStop.field_0x8 = 1;
                }
            }
            break;
        case 8:
            mDoorStop.openInit(this, 1);
            break;
        case 13:
            field_0x5ce = 0;
            break;
        case 12:
            field_0x5ec = 30;
            break;
        case 18:
            field_0x5cd = 10;
            break;
        case 15:
            openInitKnob(0);
            break;
        case 14:
            openInitKnob(1);
            break;
        case 19:
            openInitKnob(2);
            break;
        case 20:
            openInitKnob(3);
            break;
        case 21:
            if (field_0x5df == 0) {
                shape_angle.y += 0x7fff;
            }
            setStart(37.5f, -70.0f);
            if (field_0x598->ChkUsed()) {
                dComIfG_Bgsp().Release(field_0x598);
            }
            if (level == 5 || level == 11) {
                if (field_0x5df == 0) {
                    cVar10 = door_param2_c::getSwbit(this);
                } else {
                    cVar10 = door_param2_c::getSwbit2(this);
                }
                if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10)) {
                    mDoorStop.closeInit(this, 0);
                    mDoorStop.field_0x8 = 1;
                } else {
                    mDoorStop.field_0x8 = 0;
                }
            }
            break;
        case 22:
            if (field_0x5df == 0) {
                shape_angle.y += 0x7fff;
            }
            setStart(-37.5f, -70.0f);
            if (field_0x598->ChkUsed()) {
                dComIfG_Bgsp().Release(field_0x598);
            }
            if (level == 5 || level == 11) {
                if (field_0x5df == 0) {
                    cVar10 = door_param2_c::getSwbit(this);
                } else {
                    cVar10 = door_param2_c::getSwbit2(this);
                }
                if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10)) {
                    mDoorStop.closeInit(this, 0);
                    mDoorStop.field_0x8 = 1;
                } else {
                    mDoorStop.field_0x8 = 0;
                }
            }
            break;
        case 23:
            dComIfG_Bgsp().Release(field_0x598);
            setPos();
            break;
        case 24:
            fopAcM_seStart(this, Z2SE_OBJ_L8_SHTR_CREST_ON, 0);
            field_0x594->setPlaySpeed(1.0f);
            break;
        case 25:
            if (level == 8) {
                fopAcM_seStart(this, Z2SE_OBJ_L8_SHTR_CREST_ON, 0);
                field_0x594->setFrame(0.0f);
                field_0x594->setPlaySpeed(1.0f);
            }
        }
    }
    switch (demoAction) {
    case 0:
        if (cLib_calcTimer(&field_0x5ec) == 0) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 1:
        if (level == 5 || level == 11) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        } else if (setAngle()) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 2:
        if (unlock()) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 3:
        if (openProc()) {
            openEnd();
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 4:
    case 5:
        dComIfGp_evmng_cutEnd(field_0x5e8);
        break;
    case 6:
        if (closeProc()) {
            if (level == 8) {
                if (field_0x594->getPlaySpeed() == 0.0f) {
                    fopAcM_seStart(this, Z2SE_OBJ_L8_SHTR_CREST_OFF, 0);
                    closeEnd();
                }
                field_0x594->setPlaySpeed(-1.0f);
                if (field_0x594->play()) {
                    dComIfGp_evmng_cutEnd(field_0x5e8);
                }
            } else {
                closeEnd();
                if (level == 1 && stopper != NULL && !fopAcM_isSwitch(this, (u8)cVar10)) {
                    stopper->startClose();
                }
                dComIfGp_evmng_cutEnd(field_0x5e8);
            }
        }
        break;
    case 7:
        if (field_0x5df == 0) {
            cVar10 = door_param2_c::getSwbit(this);
        } else {
            cVar10 = door_param2_c::getSwbit2(this);
        }
        if (((u8)cVar10 != 0xff && fopAcM_isSwitch(this, (u8)cVar10)) || level == 1) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        } else {
            if (mDoorStop.closeProc(this) == 2) {
                daPy_getPlayerActorClass()->changeOriginalDemo();
                daPy_getPlayerActorClass()->changeDemoMode(25, 0, 0, 0);
                dComIfGp_evmng_cutEnd(field_0x5e8);
            }
            mDoorStop.calcMtx(this);
        }
        break;
    case 8:
        if (mDoorStop.openProc(this) == 2) {
            mDoorStop.field_0x8 = 0;
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        mDoorStop.calcMtx(this);
        break;
    case 9:
        dComIfGp_evmng_cutEnd(field_0x5e8);
        break;
    case 11:
    case 17:
        break;
    case 12:
        if (field_0x5df == 0) {
            cVar10 = door_param2_c::getSwbit(this);
        } else {
            cVar10 = door_param2_c::getSwbit2(this);
        }
        if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10)) {
            if (cLib_calcTimer(&field_0x5ec) == 0) {
                bVar2 = true;
            }
        } else {
            bVar2 = true;
        }
        if (bVar2) {
            startDemoEnd();
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 13:
        if (field_0x5ce == 0) {
            daPy_py_c* player = daPy_getPlayerActorClass();
            player->onSceneChangeArea(door_param2_c::getExitNo(this), 0xff, 0);
        }
        field_0x5ce--;
        break;
    case 18:
        if (adjustmentProc()) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 14:
    case 15:
        openProcKnob(demoAction);
        break;
    case 19:
    case 20:
        if (level == 5 || level == 11) {
            switch(field_0x5e0) {
            case 0:
                if (openProcKnob(demoAction)) {
                    shape_angle.y = current.angle.y;
                    openEndKnob(0);
                    if (field_0x5df == 1) {
                        cVar10 = door_param2_c::getSwbit2(this);
                    } else {
                        cVar10 = door_param2_c::getSwbit(this);
                    }
                    if ((u8)cVar10 != 0xff && !fopAcM_isSwitch(this, (u8)cVar10)) {
                        field_0x5ec = 15;
                        field_0x5e0 = 1;
                    } else {
                        dComIfGp_evmng_cutEnd(field_0x5e8);
                    }
                }
                break;
            case 1:
                if (cLib_calcTimer(&field_0x5ec) == 0) {
                    field_0x5e0 = 3;
                    mDoorStop.closeInit(this, 1);
                }
                break;
            case 3:
                if (mDoorStop.closeProc(this) == 2) {
                    daPy_getPlayerActorClass()->changeOriginalDemo();
                    daPy_getPlayerActorClass()->changeDemoMode(25, 0, 0, 0);
                    field_0x5ec = 15;
                    field_0x5e0 = 4;
                }
                mDoorStop.calcMtx(this);
                break;
            case 4:
                if (cLib_calcTimer(&field_0x5ec) == 0) {
                    dComIfGp_evmng_cutEnd(field_0x5e8);
                }
                break;
            case 100:
                dComIfGp_evmng_cutEnd(field_0x5e8);
                break;
            }
        } else {
            if (openProcKnob(demoAction)) {
                shape_angle.y = current.angle.y;
                openEndKnob(0);
                dComIfGp_evmng_cutEnd(field_0x5e8);
            }
        }
        break;
    case 24:
        if (field_0x594->play()) {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    case 25:
        if (level == 8) {
            if (field_0x594->play()) {
                dComIfGp_evmng_cutEnd(field_0x5e8);
            }
        } else {
            dComIfGp_evmng_cutEnd(field_0x5e8);
        }
        break;
    default:
        dComIfGp_evmng_cutEnd(field_0x5e8);
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMBdoorL1_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/demoProc__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 806775D0-806775D4 000078 0004+00 0/0 0/0 0/0 .rodata          @4675 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4675 = -37.5f;
COMPILER_STRIP_GATE(0x806775D0, &lit_4675);
#pragma pop

/* 806775D4-806775D8 00007C 0004+00 0/2 0/0 0/0 .rodata          @4676 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4676 = -70.0f;
COMPILER_STRIP_GATE(0x806775D4, &lit_4676);
#pragma pop

/* 806775D8-806775DC 000080 0004+00 0/0 0/0 0/0 .rodata          @4677 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4677 = 37.5f;
COMPILER_STRIP_GATE(0x806775D8, &lit_4677);
#pragma pop

/* 806775DC-806775E0 000084 0004+00 0/1 0/0 0/0 .rodata          l_eff_id$4696 */
#pragma push
#pragma force_active on
SECTION_RODATA static u16 const l_eff_id[2] = {
    0x8295,
    0x8296,
};
COMPILER_STRIP_GATE(0x806775DC, &l_eff_id);
#pragma pop

/* 806775E0-806775EC 000088 000A+02 0/1 0/0 0/0 .rodata          l_eff_id_lv3$4705 */
#pragma push
#pragma force_active on
SECTION_RODATA static u16 const l_eff_id_lv3[5] = {
    0x8762,
    0x8763,
    0x8764,
    0x8765,
    0x8766,
};
COMPILER_STRIP_GATE(0x806775E0, &l_eff_id_lv3);
#pragma pop

/* 806775EC-806775F8 000094 000A+02 0/1 0/0 0/0 .rodata          l_eff_id_lv4$4706 */
#pragma push
#pragma force_active on
SECTION_RODATA static u16 const l_eff_id_lv4[5] = {
    0x8AEB,
    0x8AEC,
    0x8AED,
    0x8AEE,
    0x8AEF,
};
COMPILER_STRIP_GATE(0x806775EC, &l_eff_id_lv4);
#pragma pop

/* 80674AF4-80674DA4 002334 02B0+00 1/1 0/0 0/0 .text            openInit__12daMBdoorL1_cFv */
// regalloc
#ifdef NONMATCHING
int daMBdoorL1_c::openInit() {
    if (field_0x598->ChkUsed()) {
        dComIfG_Bgsp().Release(field_0x598);
    }
    J3DAnmTransform* anm = (J3DAnmTransform*)dComIfG_getObjectRes(getAnmArcName(), getOpenAnm());
    JUT_ASSERT(1550, anm != 0);
    int rt = mBckAnms[0]->init(anm, 1, 0, 1.0f, 0, -1, true);
    JUT_ASSERT(1552, rt == 0);
    int level = getNowLevel(this);
    u8 swBit3 = door_param2_c::getSwbit3(this);
    if (swBit3 != 0xff && !fopAcM_isSwitch(this, swBit3)) {
        csXyz acStack_3c(0, home.angle.y, 0);
        if (field_0x5df == 1) {
            acStack_3c.y += 0x7fff;
        }
        if (getDoorType() == 0) {
            for (int i = 0; i < 2; i++) {
                s32 roomNo = fopAcM_GetRoomNo(this);
                dComIfGp_particle_set(
                    l_eff_id[i],
                    &current.pos, &acStack_3c, 0, 0xff, 0, roomNo, NULL, NULL, NULL);
            }
        } else {
            if (getDoorType() == 1) {
                for (u32 k = 0; k < 5; k++) {
                    switch (level) {
                    case 4: {
                        s32 roomNo = fopAcM_GetRoomNo(this);
                        dComIfGp_particle_set(
                            l_eff_id_lv4[k],
                            &current.pos, &acStack_3c, 0, 0xff, 0, roomNo, NULL, NULL, NULL);
                        break;
                    }
                    default: {
                        s32 roomNo = fopAcM_GetRoomNo(this);
                        dComIfGp_particle_set(
                            l_eff_id_lv3[k],
                            &current.pos, &acStack_3c, 0, 0xff, 0, roomNo, NULL, NULL, NULL);
                        break;
                    }
                    }
                }
            }
        }
        if (fopAcM_checkStatus(this, 0x1000)) {
            fopAcM_onSwitch(this, swBit3);
        }
        field_0x5e1 = 1;
    } else {
        field_0x5e1 = 0;
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::openInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openInit__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 806775F8-806775FC 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4829 = 17.0f;
COMPILER_STRIP_GATE(0x806775F8, &lit_4829);
#pragma pop

/* 806775FC-80677600 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4830 = 18.0f;
COMPILER_STRIP_GATE(0x806775FC, &lit_4830);
#pragma pop

/* 80677600-80677604 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4831 = 20.0f;
COMPILER_STRIP_GATE(0x80677600, &lit_4831);
#pragma pop

/* 80674DA4-80674FDC 0025E4 0238+00 1/1 0/0 0/0 .text            openProc__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::openProc() {
    int rv = mBckAnms[0]->play();
    if (getDoorType() == DOOR_TYPE_0) {
        if (mBckAnms[0]->getFrame() == 17.0f) {
            dComIfGp_getVibration().StartShock(4, 15, cXyz(0.0f, 1.0f, 0.0f));
        }
    } else {
        if (getDoorType() == DOOR_TYPE_1 && mBckAnms[0]->getFrame() == 17.0f) {
            switch(getNowLevel(this)) {
            case 3:
            case 4:
            case 6:
                dComIfGp_getVibration().StartShock(4, 15, cXyz(0.0f, 1.0f, 0.0f));
                break;
            }
        }
    }
    if (getDoorType() == DOOR_TYPE_0) {
        if (mBckAnms[0]->getFrame() == 18.0f) {
            mDoAud_seStart(Z2SE_OBJ_WOOD_DOOR_ROLLOPEN, &current.pos, 0,
                           dComIfGp_getReverb(fopAcM_GetRoomNo(this)));
        }
    } else {

        if (getDoorType() == DOOR_TYPE_1 && mBckAnms[0]->getFrame() == 20.0f) {
            u32 sfxId;
            if (getNowLevel(this) == 8) {
                sfxId = Z2SE_OBJ_L8_SHTR_OP;
            } else {
                sfxId = field_0x5e1 != 0 ? Z2SE_OBJ_LV3_SHTR_OP_FX : Z2SE_OBJ_LV3_SHTR_OP;
            }
            fopAcM_seStart(this, sfxId, 0);
        }
    }
    calcMtx();
    return rv;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::openProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openProc__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80674FDC-80675068 00281C 008C+00 1/1 0/0 0/0 .text            openEnd__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::openEnd() {
    if (getDoorType() == DOOR_TYPE_0) {
        mDoAud_seStart(Z2SE_OBJ_WOOD_DOOR_OPEN_STOP, &current.pos, 0, dComIfGp_getReverb(fopAcM_GetRoomNo(this)));
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::openEnd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openEnd__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80677604-80677608 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4901 = 200.0f;
COMPILER_STRIP_GATE(0x80677604, &lit_4901);
#pragma pop

/* 80675068-806752BC 0028A8 0254+00 1/1 0/0 0/0 .text            closeInit__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::closeInit() {
    if (getDoorType() == 0) {
        mDoAud_seStart(Z2SE_OBJ_WOOD_DOOR_ROLLCLOSE, &current.pos, 0, dComIfGp_getReverb(fopAcM_GetRoomNo(this)));
    } else if (getDoorType() == 1) {
        cXyz acStack_48(home.pos.x, home.pos.y + 200.0f,
                    home.pos.z);
        bool waterCheck = fopAcM_wt_c::waterCheck(&acStack_48);
        fopAcM_gc_c::gndCheck(&acStack_48);
        if (waterCheck && fopAcM_wt_c::getWaterY() > fopAcM_gc_c::getGroundY()) {
            fopAcM_seStart(this, Z2SE_OBJ_LV3_SHTR_CL_WTR, 0);
        }
        else if (getNowLevel(this) == 8) {
            fopAcM_seStart(this, Z2SE_OBJ_L8_SHTR_CL, 0);
        } else {
            fopAcM_seStart(this, Z2SE_OBJ_LV3_SHTR_CL, 0);
        }
        smokeInit2();
    }
    J3DAnmTransform* anm = (J3DAnmTransform*)dComIfG_getObjectRes(getAnmArcName(), getCloseAnm());
    JUT_ASSERT(1762, anm != 0);
    int rt = mBckAnms[0]->init(anm, 1, 0, 1.0f, 0, -1, true);
    JUT_ASSERT(1764, rt != 0);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::closeInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/closeInit__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806752BC-80675304 002AFC 0048+00 1/1 0/0 0/0 .text            closeProc__12daMBdoorL1_cFv */
int daMBdoorL1_c::closeProc() {
    int rv = mBckAnms[0]->play();
    calcMtx();
    return rv;
}

/* 80675304-806753CC 002B44 00C8+00 1/1 0/0 0/0 .text            closeEnd__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::closeEnd() {
    ;
    dComIfGp_getVibration().StartShock(4, 15, cXyz(0.0f, 1.0f, 0.0f));
    if (getDoorType() == DOOR_TYPE_0) {
        mDoAud_seStart(Z2SE_OBJ_WOOD_DOOR_CLOSE_STOP, &current.pos, 0, dComIfGp_getReverb(fopAcM_GetRoomNo(this)));
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::closeEnd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/closeEnd__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806753CC-80675414 002C0C 0048+00 1/1 0/0 0/0 .text            unlockInit__12daMBdoorL1_cFv */
int daMBdoorL1_c::unlockInit() {
    obj_keyhole_class* keyHole = (obj_keyhole_class*)fopAcM_SearchByID(mKeyHoleId);
    if (keyHole != NULL) {
        keyHole->setOpen();
    }
    return 1;
}

/* 80675414-80675470 002C54 005C+00 1/1 0/0 0/0 .text            unlock__12daMBdoorL1_cFv */
int daMBdoorL1_c::unlock() {
    obj_keyhole_class* keyHole = (obj_keyhole_class*)fopAcM_SearchByID(mKeyHoleId);
    if ((keyHole != NULL && keyHole->checkOpenEnd()) || keyHole == NULL) {
        return 1;
    }
    return 0;
}

/* ############################################################################################## */
/* 80677608-8067760C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5000 = 38.0f;
COMPILER_STRIP_GATE(0x80677608, &lit_5000);
#pragma pop

/* 80675470-80675678 002CB0 0208+00 1/1 0/0 0/0 .text            openInitKnob__12daMBdoorL1_cFi */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::openInitKnob(int param_1) {
    J3DAnmTransform* anm = (J3DAnmTransform*)dComIfG_getObjectRes(
        getAlwaysArcName(), bck_table[param_1]);
    JUT_ASSERT(1847, anm != 0);
    if ((field_0x5df == 0 && param_1 == 0) || (field_0x5df == 1 && param_1 == 2)) {
        field_0x590 = mBckAnms[0];
    } else if ((field_0x5df == 1 && param_1 == 0) || (field_0x5df == 0 && param_1 == 2)) {
        field_0x590 = mBckAnms[1];
    } else if ((field_0x5df == 0 && param_1 == 1) || (field_0x5df == 1 && param_1 == 3)) {
        field_0x590 = mBckAnms[1];
    } else if ((field_0x5df == 1 && param_1 == 1) || (field_0x5df == 0 && param_1 == 3)) {
        field_0x590 = mBckAnms[0];
    }
    int rt = field_0x590->init(anm, 1, 0, 1.0f, 0, -1, true);
    JUT_ASSERT(1901, rt != 0);
    if (param_1 >= 2) {
        field_0x590->setFrame(38.0f);
        fopAcM_seStart(this, Z2SE_OBJ_KNOB_DOOR_CLOSE, 0);
    } else {
        dComIfG_Bgsp().Release(field_0x598);
        fopAcM_seStart(this, Z2SE_OBJ_KNOB_DOOR_OPEN, 0);
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::openInitKnob(int param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openInitKnob__12daMBdoorL1_cFi.s"
}
#pragma pop
#endif

/* 80675678-80675734 002EB8 00BC+00 1/1 0/0 0/0 .text            openProcKnob__12daMBdoorL1_cFi */
int daMBdoorL1_c::openProcKnob(int param_1) {
    if (field_0x590->play()) {
        return 1;
    }
    if ((param_1 == 0xe || param_1 == 0xf) && field_0x590->checkFrame(15.0f)) {
        u8 bVar4 = door_param2_c::getExitNo(this);
        if (param_1 == 0xe) {
            bVar4++;
        }
        daPy_getPlayerActorClass()->onSceneChangeArea(bVar4, 0xff, 0);
    }
    return 0;
}

/* ############################################################################################## */
/* 80677610-80677614 0000B8 0004+00 0/2 0/0 0/0 .rodata          @5069 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5069 = 180.0f;
COMPILER_STRIP_GATE(0x80677610, &lit_5069);
#pragma pop

/* 80677614-80677618 0000BC 0004+00 0/2 0/0 0/0 .rodata          @5070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5070 = -180.0f;
COMPILER_STRIP_GATE(0x80677614, &lit_5070);
#pragma pop

/* 80675734-80675894 002F74 0160+00 1/1 0/0 0/0 .text            openEndKnob__12daMBdoorL1_cFi */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::openEndKnob(int param_1) {
    if (field_0x598 != NULL && !field_0x598->ChkUsed()) {
        int rt = dComIfG_Bgsp().Regist(field_0x598, this);
        JUT_ASSERT(1978, !rt);
    }
    cXyz local_70(cM_ssin(home.angle.y), 0.0f, cM_scos(home.angle.y));
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    cXyz dist = player->current.pos - current.pos;
    f32 dVar11 = dist.inprodXZ(local_70);
    f32 fVar1 = dVar11 < 0.0f ? 180.0f : -180.0f;
    cXyz cStack_88(current.pos.x - fVar1 * local_70.x, current.pos.y,
                 current.pos.z - fVar1 * local_70.z);
    s32 roomNo = fopAcM_GetRoomNo(player);
    s16 sVar6;
    if (dVar11 > 0.0f) {
        sVar6 = current.angle.y;
    } else {
        sVar6 = current.angle.y + 0x8000;
    }
    dComIfGs_setRestartRoom(cStack_88, sVar6, roomNo);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::openEndKnob(int param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/openEndKnob__12daMBdoorL1_cFi.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80677618-8067761C 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5096 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5096 = 0.5f;
COMPILER_STRIP_GATE(0x80677618, &lit_5096);
#pragma pop

/* 8067761C-80677620 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5097 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5097 = -1000.0f;
COMPILER_STRIP_GATE(0x8067761C, &lit_5097);
#pragma pop

/* 80677620-80677624 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5098 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5098 = 1000.0f;
COMPILER_STRIP_GATE(0x80677620, &lit_5098);
#pragma pop

/* 80677624-80677628 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5099 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5099 = -240.0f;
COMPILER_STRIP_GATE(0x80677624, &lit_5099);
#pragma pop

/* 80677628-8067762C 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5100 = 240.0f;
COMPILER_STRIP_GATE(0x80677628, &lit_5100);
#pragma pop

/* 80675894-806759E4 0030D4 0150+00 1/1 0/0 0/0 .text            calcGoal__12daMBdoorL1_cFP4cXyzi */
// Matches with literals
#ifdef NONMATCHING
void daMBdoorL1_c::calcGoal(cXyz* param_1, int param_2) {
    cXyz dist = dComIfGp_getPlayer(0)->current.pos - current.pos;
    mDoMtx_stack_c::YrotS(-current.angle.y);
    mDoMtx_stack_c::multVec(&dist, &dist);
    dist.x = dist.x * 0.5f;
    dist.y = 0.0f;
    switch(param_2) {
    case 0:
        dist.z = -1000.0f;
        break;
    case 1:
        dist.z = 1000.0f;
        break;
    case 2:
        dist.z = -240.0f;
        break;
    case 3:
        dist.z = 240.0;
        break;
    }
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::YrotM(current.angle.y);
    mDoMtx_stack_c::multVec(&dist, &dist);
    param_1->x = dist.x;
    param_1->y = 0.0f;
    param_1->z = dist.z;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMBdoorL1_c::calcGoal(cXyz* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/calcGoal__12daMBdoorL1_cFP4cXyzi.s"
}
#pragma pop
#endif

/* 806759E4-80675ADC 003224 00F8+00 1/1 0/0 0/0 .text            setAngle__12daMBdoorL1_cFv */
int daMBdoorL1_c::setAngle() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    cXyz playerPos;
    playerPos = player->current.pos;
    s16 playerAngle = player->shape_angle.y;
    s16 doorAngle = shape_angle.y;
    if (field_0x5df == 1) {
        doorAngle += 0x7fff;
    }
    cLib_addCalcAngleS2(&playerAngle, doorAngle + 0x7fff, 5, 3000);
    if (field_0x5cd != 0) {
        player->setPlayerPosAndAngle(&playerPos, playerAngle, 0);
        field_0x5cd--;
    } else {
        player->setPlayerPosAndAngle(&playerPos, doorAngle + 0x7fff, 0);
        return 1;
    }
    return 0;
}

/* 80675ADC-80675B30 00331C 0054+00 1/1 0/0 0/0 .text            setAngleQuickly__12daMBdoorL1_cFv
 */
void daMBdoorL1_c::setAngleQuickly() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    s16 doorAngle = shape_angle.y;
    if (checkFront()) {
        doorAngle += 0x7fff;
    }
    player->changeDemoMoveAngle(doorAngle);
}

/* ############################################################################################## */
/* 8067762C-80677630 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5195 = 75.0f;
COMPILER_STRIP_GATE(0x8067762C, &lit_5195);
#pragma pop

/* 80677630-80677634 0000D8 0004+00 0/2 0/0 0/0 .rodata          @5196 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5196 = 70.0f;
COMPILER_STRIP_GATE(0x80677630, &lit_5196);
#pragma pop

/* 80677634-80677638 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5197 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80677634, &lit_5197);
#pragma pop

/* 80677638-8067763C 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5198 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80677638, &lit_5198);
#pragma pop

/* 80675B30-80675DB0 003370 0280+00 1/1 0/0 0/0 .text            adjustmentProc__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::adjustmentProc() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    cXyz local_24;
    cXyz local_30;
    local_30 = player->current.pos;
    local_24.y = 0.0f;
    if (field_0x5df == 0) {
        if (getDoorType() == DOOR_TYPE_2) {
            if (field_0x5de == 0 || field_0x5de == 2) {
                local_24.x = 75.0f;
            } else {
                local_24.x = -75.0f;
            }
        } else {
            cXyz local_3c = player->current.pos - current.pos;
            mDoMtx_stack_c::YrotS(-shape_angle.y);
            mDoMtx_stack_c::multVec(&local_3c, &local_3c);
            local_24.x = local_3c.x;
        }
        local_24.z = 70.0f;
    } else {
        if (getDoorType() == DOOR_TYPE_2) {
            if (field_0x5de == 0 || field_0x5de == 2) {
                local_24.x = -75.0f;
            } else {
                local_24.x = 75.0f;
            }
        } else {
            cXyz local_48 =player->current.pos - current.pos;
            mDoMtx_stack_c::YrotS(-shape_angle.y);
            mDoMtx_stack_c::multVec(&local_48, &local_48);
            local_24.x = local_48.x;
        }
        local_24.z = -70.0f;
    }
    mDoMtx_stack_c::YrotS(home.angle.y);
    mDoMtx_stack_c::multVec(&local_24, &local_24);
    local_24 += current.pos;
    if (field_0x5cd != 0) {
        local_30.x = local_30.x * 0.8f + local_24.x * 0.2f;
        local_30.z = local_30.z * 0.8f + local_24.z * 0.2f;
        player->setPlayerPosAndAngle(&local_30, player->current.angle.y, 0);
        field_0x5cd--;
    } else {
        player->setPlayerPosAndAngle(&local_24, player->current.angle.y, 0);
        return 1;
    }
    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::adjustmentProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/adjustmentProc__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8067763C-80677640 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5229 = 100.0f;
COMPILER_STRIP_GATE(0x8067763C, &lit_5229);
#pragma pop

/* 80677640-80677644 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5230 = -100.0f;
COMPILER_STRIP_GATE(0x80677640, &lit_5230);
#pragma pop

/* 80675DB0-80675EE4 0035F0 0134+00 1/1 0/0 0/0 .text            setPos__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
void daMBdoorL1_c::setPos() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    cXyz local_1c;
    local_1c.y = 0.0f;
    cXyz dist = player->current.pos - current.pos;
    mDoMtx_stack_c::YrotS(-shape_angle.y);
    mDoMtx_stack_c::multVec(&dist, &dist);
    local_1c.x = dist.x;
    if (dist.x > 100.0f) {
        local_1c.x = 100.0f;
    }
    if (local_1c.x < -100.0f) {
        local_1c.x = -100.0f;
    }
    if (field_0x5df == 0) {
        local_1c.z = 70.0f;
    } else {
        local_1c.z = -70.0f;
    }
    mDoMtx_stack_c::YrotS(home.angle.y);
    mDoMtx_stack_c::multVec(&local_1c, &local_1c);
    local_1c += current.pos;
    dComIfGp_evmng_setGoal(&local_1c);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMBdoorL1_c::setPos() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/setPos__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80675EE4-80675F8C 003724 00A8+00 1/1 0/0 0/0 .text            setStart__12daMBdoorL1_cFff */
void daMBdoorL1_c::setStart(f32 param_1, f32 param_2) {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    cXyz pos(current.pos);
    s16 angle = shape_angle.y + 0x7fff;
    pos.x += (param_2 * cM_ssin(angle)) - (param_1 * cM_scos(angle));
    pos.z += (param_2 * cM_scos(angle)) + (param_1 * cM_ssin(angle));
    player->setPlayerPosAndAngle(&pos, player->shape_angle.y, 0);
}

/* 80675F8C-80676004 0037CC 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __dt__14dBgS_ObjGndChkFv() {
//asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80677644-80677648 0000EC 0004+00 0/0 0/0 0/0 .rodata          @5279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5279 = 50.0f;
COMPILER_STRIP_GATE(0x80677644, &lit_5279);
#pragma pop

/* 80677648-8067764C 0000F0 0004+00 0/0 0/0 0/0 .rodata          @5280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5280 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80677648, &lit_5280);
#pragma pop

/* 80676004-806760B4 003844 00B0+00 1/1 0/0 0/0 .text            smokeInit2__12daMBdoorL1_cFv */
void daMBdoorL1_c::smokeInit2() {
    if (getDoorType() == DOOR_TYPE_1) {
        field_0x81c.y -= 10.0f;
        field_0x828.y += 10.0f;
        field_0x604.CrrPos(dComIfG_Bgsp());
        s32 roomNo = fopAcM_GetRoomNo(this);
        dComIfGp_particle_setPolyColor(0x8c50, field_0x604.m_gnd, &current.pos, &tevStr,
                                       &shape_angle, NULL, 0, NULL, roomNo, 0);
    }
}

/* ############################################################################################## */
/* 80677650-80677654 0000F8 0004+00 1/1 0/0 0/0 .rodata          @5381 */
SECTION_RODATA static f32 const lit_5381 = 130.0f;
COMPILER_STRIP_GATE(0x80677650, &lit_5381);

/* 80677654-80677658 0000FC 0004+00 1/1 0/0 0/0 .rodata          @5382 */
SECTION_RODATA static f32 const lit_5382 = 110.0f;
COMPILER_STRIP_GATE(0x80677654, &lit_5382);

/* 80677658-80677660 000100 0008+00 1/1 0/0 0/0 .rodata          @5384 */
SECTION_RODATA static u8 const lit_5384[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80677658, &lit_5384);

/* 806760B4-806762A4 0038F4 01F0+00 1/1 0/0 0/0 .text            checkArea__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::checkArea() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    cXyz local_48;
    cXyz local_54;
    if (daPy_py_c::i_checkNowWolf()) {
        local_48 = player->attention_info.position - current.pos;
        local_54 = player->current.pos - current.pos;
    } else {
        local_48 = player->current.pos - current.pos;
    }
    s16 angle = current.angle.y;
    if (field_0x5df == 1) {
        angle += 0x7fff;
    }
    mDoMtx_stack_c::YrotS(-angle);
    mDoMtx_stack_c::multVec(&local_48, &local_48);
    if (fabsf(local_48.x) > 130.0f) {
        return 0;
    }
    if (daPy_py_c::i_checkNowWolf()) {
        mDoMtx_stack_c::multVec(&local_54, &local_54);
        if (fabsf(local_54.x) > 130.0f) {
            return 0;
        }
    }
    if (fabsf(local_48.z) > 110.0f) {
        return 0;
    }
    
    if ((s16)fabs(angle - 0x7fff - player->current.angle.y) > 0x4000) {
        return 0;
    } else {
        return 1;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/checkArea__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806762A4-80676308 003AE4 0064+00 8/8 0/0 0/0 .text            checkFront__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkFront() {
    if (checkMBossRoom()) {
        return 0;
    }
    if (fopAcM_GetRoomNo(this) == (u8)door_param2_c::getFRoomNo(this)) {
        return 1;
    } else {
        return 0;
    }
}

/* 80676308-806764D0 003B48 01C8+00 1/1 0/0 0/0 .text            checkOpen__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::checkOpen() {
    daPy_py_c* player = daPy_getPlayerActorClass();
    if (getDoorType() == DOOR_TYPE_2 && daPy_py_c::i_checkNowWolf()) {
        return 0;
    }
    if ((checkFrontKey() || checkBackKey()) && dComIfGs_getKeyNum() == 0) {
        return 0;
    }
    if (checkFrontStop() || checkBackStop()) {
        return 0;
    }

    if (checkFrontSw() || checkBackSw()) {
        return 0;
    }
    if (!checkArea()) {
        return 0;
    }
    if (getDoorType() == DOOR_TYPE_2) {
        cXyz dist = player->current.pos - current.pos;
        mDoMtx_stack_c::YrotS(-home.angle.y);
        mDoMtx_stack_c::multVec(&dist, &dist);
        if ((field_0x5df == 0 && dist.x >= 0.0f) || (field_0x5df == 1 && dist.x < 0.0f)) {
            field_0x5de = 0;
        } else {
            field_0x5de = 1;
        }
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::checkOpen() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/checkOpen__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806764D0-80676568 003D10 0098+00 2/2 0/0 0/0 .text            checkFrontKey__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkFrontKey() {
    if (!checkFront()) {
        return 0;
    }
    u8 frontOption = door_param2_c::getFrontOption(this);
    u8 swBit = door_param2_c::getSwbit(this);
    if (frontOption == 2 && swBit != 0xff && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 80676568-80676570 003DA8 0008+00 1/1 0/0 0/0 .text            checkBackKey__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkBackKey() {
    return 0;
}

/* 80676570-80676610 003DB0 00A0+00 1/1 0/0 0/0 .text            checkFrontStop__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkFrontStop() {
    if (!checkFront()) {
        return 0;
    }
    u8 frontOption = door_param2_c::getFrontOption(this);
    u8 swBit = door_param2_c::getSwbit(this);
    if ((frontOption == 1 || frontOption == 3) && swBit != 0xff && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 80676610-806766B0 003E50 00A0+00 1/1 0/0 0/0 .text            checkBackStop__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkBackStop() {
    if (checkFront()) {
        return 0;
    }
    u8 backOption = door_param2_c::getBackOption(this);
    u8 swBit = door_param2_c::getSwbit2(this);
    if ((backOption == 1 || backOption == 3) && swBit != 0xff && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 806766B0-80676744 003EF0 0094+00 1/1 0/0 0/0 .text            checkFrontSw__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkFrontSw() {
    if (!checkFront()) {
        return 0;
    }
    u8 frontOption = door_param2_c::getFrontOption(this);
    u8 swBit = door_param2_c::getSwbit(this);
    if (frontOption == 0 && swBit != 0xff && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 80676744-806767D8 003F84 0094+00 1/1 0/0 0/0 .text            checkBackSw__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkBackSw() {
    if (checkFront()) {
        return 0;
    }
    u8 backOption = door_param2_c::getBackOption(this);
    u8 swBit = door_param2_c::getSwbit2(this);
    if (backOption == 0 && swBit != 0xff && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 806767D8-8067684C 004018 0074+00 1/1 0/0 0/0 .text            checkStopOpen__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkStopOpen() {
    u8 swBit;
    if (field_0x5df == 0) {
        swBit = door_param2_c::getSwbit(this);
    } else {
        swBit = door_param2_c::getSwbit2(this);
    }
    if (fopAcM_isSwitch(this, swBit)) {
        return 1;
    }
    return 0;
}

/* 8067684C-806769A4 00408C 0158+00 1/1 0/0 0/0 .text            startDemoEnd__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::startDemoEnd() {
    if (!field_0x598->ChkUsed()) {
        int rt = dComIfG_Bgsp().Regist(field_0x598, this);
        JUT_ASSERT(2671, !rt)
    }
    cXyz local_70(cM_ssin(home.angle.y), 0.0f, cM_scos(home.angle.y));
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    cXyz dist = player->current.pos - current.pos;
    f32 dVar12 = dist.inprodXZ(local_70);
    f32 fVar1 = dVar12 < 0.0f ? 180.0f : -180.0f;
    cXyz cStack_88(current.pos.x - fVar1 * local_70.x, current.pos.y,
                 current.pos.z - fVar1 * local_70.z);
    s32 roomNo = fopAcM_GetRoomNo(player);
    dComIfGs_setRestartRoom(cStack_88, dVar12 > 0.0f ? current.angle.y : (s16)(current.angle.y + 0x8000), roomNo);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::startDemoEnd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/startDemoEnd__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 806769A4-806769D0 0041E4 002C+00 1/1 0/0 0/0 .text            checkMBossRoom__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkMBossRoom() {
    s32 stayNo = dComIfGp_roomControl_getStayNo();
    if (stayNo == 0x33 || stayNo == 0x34) {
        return 1;
    }
    return 0;
}

/* 806769D0-80676AB4 004210 00E4+00 1/1 0/0 0/0 .text            checkStopClose__12daMBdoorL1_cFv */
// regalloc
#ifdef NONMATCHING
int daMBdoorL1_c::checkStopClose() {
    s32 FRoomNo = door_param2_c::getFRoomNo(this);
    door_param2_c::getFRoomNo(this);
    s32 roomNo = fopAcM_GetRoomNo(this);
    if (mDoorStop.mModel == NULL) {
        return 0;
    }
    int frontOption = door_param2_c::getFrontOption(this);
    int backOption = door_param2_c::getBackOption(this);
    u8 swBit;
    if (roomNo == (u8)FRoomNo) {
        if (frontOption != 1) {
            return 0;
        }
        swBit = door_param2_c::getSwbit(this);
    } else {
        if (backOption != 1) {
            return 0;
        }
        swBit = door_param2_c::getSwbit2(this);
    }
    if (swBit == 0xff) {
        return 0;
    }
    if (dComIfGs_isSwitch(swBit, fopAcM_GetRoomNo(this))) {
        return 0;
    } else {
        return 1;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::checkStopClose() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/checkStopClose__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80676AB4-80676B64 0042F4 00B0+00 2/2 0/0 0/0 .text            checkMakeStop__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkMakeStop() {
    u8 option;
    u8 swBit;

    if (checkFront()) {
        option = door_param2_c::getFrontOption(this);
        swBit = door_param2_c::getSwbit(this);
    }
    else {
        option = door_param2_c::getBackOption(this);
        swBit = door_param2_c::getSwbit2(this);
    }
    if (option == 1 || (option == 3 && !fopAcM_isSwitch(this, swBit))) {
        return 1;
    }
    return 0;
}

/* 80676B64-80676BE0 0043A4 007C+00 1/1 0/0 0/0 .text            checkMakeKey__12daMBdoorL1_cFv */
int daMBdoorL1_c::checkMakeKey() {
    u8 frontOption = door_param2_c::getFrontOption(this);
    u8 swBit = door_param2_c::getSwbit(this);
    if (frontOption == 2 && !fopAcM_isSwitch(this, swBit)) {
        return 1;
    } 
    return 0;
}

/* 80676BE0-80676BE8 004420 0008+00 1/0 0/0 0/0 .text            actionWait__12daMBdoorL1_cFv */
int daMBdoorL1_c::actionWait() {
    return 1;
}

/* 80676BE8-80676DEC 004428 0204+00 2/1 0/0 0/0 .text            actionCloseWait__12daMBdoorL1_cFv
 */
int daMBdoorL1_c::actionCloseWait() {
    if (eventInfo.i_checkCommandDoor()) {
        field_0x5e8 = dComIfGp_evmng_getMyStaffId(l_staff_name, 0, 0);
        demoProc();
        setAction(ACTION_OPEN);
    } else {
        if (mDoorStop.field_0x8 != 0) {
            if (eventInfo.checkCommandDemoAccrpt()) {
                if (field_0x5df == 1) {
                    shape_angle.y += 0x7fff;
                }
                field_0x5e8 = dComIfGp_evmng_getMyStaffId(l_staff_name, 0, 0);
                demoProc();
                setAction(ACTION_DEMO);
                return 1;
            }
            if (checkStopOpen()) {
                u8 eventNo = door_param2_c::getEventNo(this);
                if (eventNo != 0xff) {
                    field_0x5d2 = dComIfGp_getEventManager().getEventIdx(this, eventNo);
                } else {
                    field_0x5d2 = dComIfGp_evmng_getEventIdx("DEFAULT_STOP_OPEN", 0xff);
                }
                fopAcM_orderOtherEventId(this, field_0x5d2, eventNo, 0xffff, 0, 1);
            }
        }
        if (getNowLevel(this) != 1 && mDoorStop.field_0x8 == 0 && checkStopClose()) {
            mDoorStop.field_0x8 = 1;
            mDoorStop.closeInit(this, 1);
            mDoorStop.calcMtx(this);
            setAction(ACTION_STOP_CLOSE);
            return 1;
        } else {
            if (checkOpen()) {
                eventInfo.setEventId(field_0x5d4[field_0x5de]);
                eventInfo.setMapToolId(0xff);
                eventInfo.i_onCondition(4);
            }
        }
    }
    return 1;
}

/* 80676DEC-80676E40 00462C 0054+00 1/0 0/0 0/0 .text            actionStopClose__12daMBdoorL1_cFv
 */
int daMBdoorL1_c::actionStopClose() {
    if (mDoorStop.closeProc(this)) {
        setAction(ACTION_CLOSE_WAIT);
    }
    mDoorStop.calcMtx(this);
    return 1;
}

/* 80676E40-80676EB4 004680 0074+00 1/0 0/0 0/0 .text            actionDemo__12daMBdoorL1_cFv */
int daMBdoorL1_c::actionDemo() {
    if (dComIfGp_evmng_endCheck(field_0x5d2)) {
        shape_angle.y = current.angle.y;
        setAction(ACTION_CLOSE_WAIT);
        dComIfGp_event_reset();
    } else {
        demoProc();
    }
    return 1;
}

/* 80676EB4-80676ED8 0046F4 0024+00 1/0 0/0 0/0 .text            actionOpen__12daMBdoorL1_cFv */
int daMBdoorL1_c::actionOpen() {
    demoProc();
    return 1;
}

/* 80676ED8-80676FE4 004718 010C+00 1/0 0/0 0/0 .text            actionInit__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::actionInit() {
    if (fopAcM_checkStatus(this, 0x1000)) {
        setAction(ACTION_START_DEMO);
        actionStartDemo();
    } else {
        if (getNowLevel(this) != 1) {
            if ((checkFront() && !fopAcM_isSwitch(this, door_param2_c::getSwbit(this))) ||
                (!checkFront() && !fopAcM_isSwitch(this, door_param2_c::getSwbit2(this))))
            {
                mDoorStop.field_0x8 = 1;
                mDoorStop.field_0x4 = 0.0f;
            } else {
                mDoorStop.field_0x8 = 0;
                mDoorStop.field_0x4 = 300.0f;
            }
            mDoorStop.calcMtx(this);
        }
        setAction(ACTION_CLOSE_WAIT);
        actionCloseWait();
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::actionInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/actionInit__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80676FE4-80677050 004824 006C+00 2/1 0/0 0/0 .text            actionStartDemo__12daMBdoorL1_cFv
 */
int daMBdoorL1_c::actionStartDemo() {
    field_0x5e8 = dComIfGp_evmng_getMyStaffId(l_staff_name, NULL, 0);
    demoProc();
    if (!fopAcM_checkStatus(this, 0x1000)) {
        setAction(ACTION_CLOSE_WAIT);
    }
    return 1;
}

/* 80677050-80677158 004890 0108+00 1/1 0/0 0/0 .text            execute__12daMBdoorL1_cFv */
// Matches with literals
#ifdef NONMATCHING
int daMBdoorL1_c::execute() {
    static actionFunc l_action[7] = {
        &daMBdoorL1_c::actionInit,
        &daMBdoorL1_c::actionStartDemo,
        &daMBdoorL1_c::actionWait,
        &daMBdoorL1_c::actionCloseWait,
        &daMBdoorL1_c::actionOpen,
        &daMBdoorL1_c::actionDemo,
        &daMBdoorL1_c::actionStopClose,
    };
    (this->*(l_action[mAction]))();
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daMBdoorL1_c::execute() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/execute__12daMBdoorL1_cFv.s"
}
#pragma pop
#endif

/* 80677158-806771B4 004998 005C+00 1/1 0/0 0/0 .text            draw__12daMBdoorL1_cFv */
int daMBdoorL1_c::draw() {
    switch(getDoorType()) {
    case DOOR_TYPE_0:
    case DOOR_TYPE_1:
        draw_sub0();
        break;
    case DOOR_TYPE_2:
        draw_sub1();
        break;
    }
    return 1;
}

/* 806771B4-806772C4 0049F4 0110+00 1/1 0/0 0/0 .text            draw_sub0__12daMBdoorL1_cFv */
void daMBdoorL1_c::draw_sub0() {
    g_env_light.settingTevStruct( 20, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(mModels[0], &tevStr);
    dComIfGd_setListBG();
    if (field_0x594 != NULL) {
        field_0x594->entry(mModels[0]->getModelData());
    }
    mBckAnms[0]->entry(mModels[0]->getModelData());
    mDoExt_modelUpdateDL(mModels[0]);
    mDoExt_bckAnmRemove(mModels[0]->getModelData());
    mDoExt_btkAnmRemove(mModels[0]->getModelData());
    dComIfGd_setList();
    if (mDoorStop.field_0x8 != 0) {
        mDoorStop.draw(this);
    }
}

/* 806772C4-806773DC 004B04 0118+00 1/1 0/0 0/0 .text            draw_sub1__12daMBdoorL1_cFv */
void daMBdoorL1_c::draw_sub1() {
    g_env_light.settingTevStruct( 20, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(mModels[0], &tevStr);
    g_env_light.setLightTevColorType_MAJI(mModels[1], &tevStr);
    dComIfGd_setListBG();
    mBckAnms[0]->entry(mModels[0]->getModelData());
    mDoExt_modelUpdateDL(mModels[0]);
    mBckAnms[1]->entry(mModels[1]->getModelData());
    mDoExt_modelUpdateDL(mModels[1]);
    mDoExt_bckAnmRemove(mModels[0]->getModelData());
    dComIfGd_setList();
    if (mDoorStop.field_0x8 != 0) {
        mDoorStop.draw(this);
    }
}

/* 806773DC-80677484 004C1C 00A8+00 1/1 0/0 0/0 .text            Delete__12daMBdoorL1_cFv */
int daMBdoorL1_c::Delete() {
    if (heap != NULL && field_0x598->ChkUsed()) {
        dComIfG_Bgsp().Release(field_0x598);
    }
    dComIfG_resDelete(&mPhase1, getArcName());
    dComIfG_resDelete(&mPhase2, getAlwaysArcName());
    if (getAnmArcName() != 0) {
        dComIfG_resDelete(&mPhase3, getAnmArcName());
    }
    return 1;
}

/* 80677484-806774A4 004CC4 0020+00 1/0 0/0 0/0 .text            daMBdoorL1_Draw__FP12daMBdoorL1_c
 */
static int daMBdoorL1_Draw(daMBdoorL1_c* i_this) {
    return i_this->draw();
}

/* 806774A4-806774C8 004CE4 0024+00 1/0 0/0 0/0 .text daMBdoorL1_Execute__FP12daMBdoorL1_c */
static int daMBdoorL1_Execute(daMBdoorL1_c* i_this) {
    i_this->execute();
    return 1;
}

/* 806774C8-806774EC 004D08 0024+00 1/0 0/0 0/0 .text            daMBdoorL1_Delete__FP12daMBdoorL1_c
 */
static int daMBdoorL1_Delete(daMBdoorL1_c* i_this) {
    i_this->Delete();
    return 1;
}

/* 806774EC-8067750C 004D2C 0020+00 1/0 0/0 0/0 .text            daMBdoorL1_Create__FP10fopAc_ac_c
 */
static int daMBdoorL1_Create(fopAc_ac_c* i_this) {
    return static_cast<daMBdoorL1_c*>(i_this)->create();
}

/* 8067750C-80677528 004D4C 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8067750C(void* _this, int* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_8067750C.s"
}
#pragma pop

/* 80677528-80677530 004D68 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80677528() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_80677528.s"
}
#pragma pop

/* 80677530-80677538 004D70 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80677530() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_80677530.s"
}
#pragma pop

/* 80677538-80677540 004D78 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80677538() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_80677538.s"
}
#pragma pop

/* 80677540-80677548 004D80 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80677540() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_80677540.s"
}
#pragma pop

/* 80677548-80677550 004D88 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80677548() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_mbossL1/d_a_door_mbossL1/func_80677548.s"
}
#pragma pop

/* 80677660-80677660 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
