/**
 * @file d_a_obj_carry.cpp
 * @brief Actor - Various carriable objects
 */

#include "rel/d/a/obj/d_a_obj_carry/d_a_obj_carry.h"
#include "rel/d/a/obj/d_a_obj_swBallA/d_a_obj_swBallA.h"
#include "rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB.h"
#include "rel/d/a/tag/d_a_tag_setBall/d_a_tag_setBall.h"
#include "d/d_stage.h"
#include "d/d_lib.h"
#include "dol2asm.h"
#include "dolphin/os.h"
#include "d/d_procname.h"
#include "SSystem/SComponent/c_math.h"
#include "JSystem/JKernel/JKRHeap.h"

//
// Types:
//

struct dTres_c {
    /* 8009C3CC */ void setPosition(int, u8, Vec const*, int);
};

//
// Forward References:
//

extern "C" static void bound__FP4cXyzRC13cBgS_PolyInfof();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void
TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
TgHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
CoHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void s_swA_sub__FPvPv();
extern "C" static void s_sw_sub__FPvPv();
extern "C" static void s_setA_sub__FPvPv();
extern "C" static void s_setB_sub__FPvPv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void data__12daObjCarry_cFv();
extern "C" void getArcName__12daObjCarry_cFv();
extern "C" void getBmdName__12daObjCarry_cFv();
extern "C" void checkFlag__12daObjCarry_cFUc();
extern "C" void initBaseMtx__12daObjCarry_cFv();
extern "C" void setBaseMtx__12daObjCarry_cFv();
extern "C" void preInit__12daObjCarry_cFv();
extern "C" void __ct__12daObjCarry_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void checkBreakWolfAttack__12daObjCarry_cFv();
extern "C" void checkCarryBoomerang__12daObjCarry_cFv();
extern "C" void checkCarryHookshot__12daObjCarry_cFv();
extern "C" void checkCarryWolf__12daObjCarry_cFv();
extern "C" void checkCarryOneHand__12daObjCarry_cFv();
extern "C" void Create__12daObjCarry_cFv();
extern "C" void CreateInit_tsubo__12daObjCarry_cFv();
extern "C" void CreateInit_ootubo__12daObjCarry_cFv();
extern "C" void CreateInit_kibako__12daObjCarry_cFv();
extern "C" void CreateInit_ironball__12daObjCarry_cFv();
extern "C" void CreateInit_taru__12daObjCarry_cFv();
extern "C" void CreateInit_dokuro__12daObjCarry_cFv();
extern "C" void CreateInit_bokkuri__12daObjCarry_cFv();
extern "C" void CreateInit_LightBall__12daObjCarry_cFv();
extern "C" void CreateInit_Lv8Ball__12daObjCarry_cFv();
extern "C" void CreateHeap__12daObjCarry_cFv();
extern "C" void create__12daObjCarry_cFv();
extern "C" void checkCreate_LightBallA__12daObjCarry_cFv();
extern "C" void checkCreate_LightBallB__12daObjCarry_cFv();
extern "C" void checkCreate_Lv8Ball__12daObjCarry_cFv();
extern "C" void resetIconPosForLightBallA__12daObjCarry_cFv();
extern "C" void setIconPosForLightBallAAtR00__12daObjCarry_cFv();
extern "C" void setIconPosForLightBallBAtR00__12daObjCarry_cFv();
extern "C" void resetIconPosForLightBallB__12daObjCarry_cFv();
extern "C" void execute__12daObjCarry_cFv();
extern "C" void checkCulling__12daObjCarry_cFv();
extern "C" void draw__12daObjCarry_cFv();
extern "C" void debugDraw__12daObjCarry_cFv();
extern "C" void _delete__12daObjCarry_cFv();
extern "C" void crr_pos__12daObjCarry_cFv();
extern "C" void check_sink__12daObjCarry_cFPf();
extern "C" void calc_gravity__12daObjCarry_cFv();
extern "C" void checkRollAngle__12daObjCarry_cFv();
extern "C" void mode_proc_call__12daObjCarry_cFv();
extern "C" void mode_init_wait__12daObjCarry_cFv();
extern "C" void mode_proc_wait__12daObjCarry_cFv();
extern "C" void mode_init_walk__12daObjCarry_cFUc();
extern "C" void mode_proc_walk__12daObjCarry_cFv();
extern "C" void mode_init_carry__12daObjCarry_cFv();
extern "C" void mode_proc_carry__12daObjCarry_cFv();
extern "C" void mode_init_drop__12daObjCarry_cFUc();
extern "C" void mode_proc_drop__12daObjCarry_cFv();
extern "C" void mode_init_float__12daObjCarry_cFv();
extern "C" void mode_proc_float__12daObjCarry_cFv();
extern "C" void mode_init_sink__12daObjCarry_cFv();
extern "C" void mode_proc_sink__12daObjCarry_cFv();
extern "C" void mode_init_yogan__12daObjCarry_cFv();
extern "C" void mode_proc_yogan__12daObjCarry_cFv();
extern "C" bool mode_proc_magne__12daObjCarry_cFv();
extern "C" bool mode_proc_magneCarry__12daObjCarry_cFv();
extern "C" void mode_init_boomCarry__12daObjCarry_cFv();
extern "C" void mode_proc_boomCarry__12daObjCarry_cFv();
extern "C" void mode_init_growth__12daObjCarry_cFv();
extern "C" void mode_proc_growth__12daObjCarry_cFv();
extern "C" bool mode_proc_end__12daObjCarry_cFv();
extern "C" void mode_init_dbDrop__12daObjCarry_cFUc();
extern "C" void mode_proc_dbDrop__12daObjCarry_cFv();
extern "C" void mode_init_hookCarry__12daObjCarry_cFv();
extern "C" void mode_proc_hookCarry__12daObjCarry_cFv();
extern "C" void mode_init_fit__12daObjCarry_cFv();
extern "C" void mode_proc_fit__12daObjCarry_cFv();
extern "C" void mode_proc_controled__12daObjCarry_cFv();
extern "C" void mode_init_resetLightBall__12daObjCarry_cFv();
extern "C" void mode_proc_resetLightBall__12daObjCarry_cFv();
extern "C" void chkSinkAll__12daObjCarry_cFv();
extern "C" void chkWaterLineIn__12daObjCarry_cFv();
extern "C" void chkSinkObj__12daObjCarry_cFv();
extern "C" void bg_check__12daObjCarry_cFv();
extern "C" void check_bg_damage_proc_base__12daObjCarry_cFv();
extern "C" void bg_damage_proc_kotubo__12daObjCarry_cFv();
extern "C" void bg_damage_proc_ootubo__12daObjCarry_cFv();
extern "C" void bg_damage_proc_kibako__12daObjCarry_cFv();
extern "C" bool bg_damage_proc_ironball__12daObjCarry_cFv();
extern "C" void bg_damage_proc_taru__12daObjCarry_cFv();
extern "C" void bg_damage_proc_dokuro__12daObjCarry_cFv();
extern "C" void bg_damage_proc_bokkuri__12daObjCarry_cFv();
extern "C" bool bg_damage_proc_LightBall__12daObjCarry_cFv();
extern "C" bool bg_damage_proc_Lv8Ball__12daObjCarry_cFv();
extern "C" void obj_break__12daObjCarry_cFbbb();
extern "C" void check_cc_damage_proc_base__12daObjCarry_cFb();
extern "C" void cc_damage_proc_kotubo__12daObjCarry_cFv();
extern "C" void cc_damage_proc_ootubo__12daObjCarry_cFv();
extern "C" void cc_damage_proc_kibako__12daObjCarry_cFv();
extern "C" void cc_damage_proc_ironball__12daObjCarry_cFv();
extern "C" void cc_damage_proc_taru__12daObjCarry_cFv();
extern "C" void cc_damage_proc_dokuro__12daObjCarry_cFv();
extern "C" void cc_damage_proc_bokkuri__12daObjCarry_cFv();
extern "C" bool cc_damage_proc_LightBall__12daObjCarry_cFv();
extern "C" bool cc_damage_proc_Lv8Ball__12daObjCarry_cFv();
extern "C" void eff_break_tuboBmd__12daObjCarry_cFUs4cXyz();
extern "C" void eff_break_kibakoBmd__12daObjCarry_cF4cXyz();
extern "C" void eff_break_tsubo__12daObjCarry_cFv();
extern "C" void eff_break_ootubo__12daObjCarry_cFv();
extern "C" void eff_break_kibako__12daObjCarry_cFv();
extern "C" void eff_break_ironball__12daObjCarry_cFv();
extern "C" void eff_break_taru__12daObjCarry_cFv();
extern "C" void eff_break_dokuro__12daObjCarry_cFv();
extern "C" void eff_break_bokkuri__12daObjCarry_cFv();
extern "C" void eff_break_kotubo2__12daObjCarry_cFv();
extern "C" void eff_break_LightBall__12daObjCarry_cFv();
extern "C" void eff_break_ootubo2__12daObjCarry_cFv();
extern "C" void eff_break_Lv8Ball__12daObjCarry_cFv();
extern "C" void eff_break_tsuboL8__12daObjCarry_cFv();
extern "C" void eff_break_ootuboL8__12daObjCarry_cFv();
extern "C" void se_break__12daObjCarry_cFP13cBgS_PolyInfo();
extern "C" void se_put__12daObjCarry_cFP13cBgS_PolyInfo();
extern "C" void se_put_water__12daObjCarry_cFv();
extern "C" void se_fall_water__12daObjCarry_cFv();
extern "C" void calc_rot_axis_base__12daObjCarry_cFUc();
extern "C" void calc_rot_axis_tsubo__12daObjCarry_cFv();
extern "C" void calc_rot_axis_ootubo__12daObjCarry_cFv();
extern "C" void calc_rot_axis_kibako__12daObjCarry_cFv();
extern "C" void calc_rot_axis_ironball__12daObjCarry_cFv();
extern "C" void calc_rot_axis_taru__12daObjCarry_cFv();
extern "C" void calc_rot_axis_dokuro__12daObjCarry_cFv();
extern "C" void calc_rot_axis_bokkuri__12daObjCarry_cFv();
extern "C" void calc_rot_axis_kotubo2__12daObjCarry_cFv();
extern "C" void calc_rot_axis_LightBall__12daObjCarry_cFv();
extern "C" void calc_rot_axis_Lv8Ball__12daObjCarry_cFv();
extern "C" void set_wind_power__12daObjCarry_cFv();
extern "C" void exec_proc_tsubo__12daObjCarry_cFv();
extern "C" void exec_proc_ootubo__12daObjCarry_cFv();
extern "C" void exec_proc_kibako__12daObjCarry_cFv();
extern "C" void exec_proc_ironball__12daObjCarry_cFv();
extern "C" void exec_proc_taru__12daObjCarry_cFv();
extern "C" void exec_proc_dokuro__12daObjCarry_cFv();
extern "C" void exec_proc_bokkuri__12daObjCarry_cFv();
extern "C" void exec_proc_LightBall__12daObjCarry_cFv();
extern "C" void exec_proc_Lv8Ball__12daObjCarry_cFv();
extern "C" void bg_damage_proc_call__12daObjCarry_cFv();
extern "C" void cc_damage_proc_call__12daObjCarry_cFv();
extern "C" void eff_break_call__12daObjCarry_cFv();
extern "C" void calc_rot_call__12daObjCarry_cFv();
extern "C" void obj_execute_proc_call__12daObjCarry_cFv();
extern "C" void setTgHitCallBack__12daObjCarry_cFv();
extern "C" void setCoHitCallBack__12daObjCarry_cFv();
extern "C" void CreateInitCall__12daObjCarry_cFv();
extern "C" static void daObjCarry_Draw__FP12daObjCarry_c();
extern "C" static void daObjCarry_Execute__FP12daObjCarry_c();
extern "C" static void daObjCarry_Delete__FP12daObjCarry_c();
extern "C" static void daObjCarry_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_804798D8(void* _this, s8*);
extern "C" static void func_804798F4();
extern "C" static void func_804798FC();
extern "C" u8 const mData__12daObjCarry_c[2072];
extern "C" extern char const* const d_a_obj_carry__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void quatM__14mDoMtx_stack_cFPC10Quaternion();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeSphere__FP10fopAc_ac_cffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void fopAcM_setCarryNow__FP10fopAc_ac_ci();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopAcM_getWaterY__FPC4cXyzPf();
extern "C" void fopAcM_getWaterStream__FPC4cXyzRC13cBgS_PolyInfoP4cXyzPii();
extern "C" void lineCheck__11fopAcM_lc_cFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void checkRoomDisp__20dStage_roomControl_cCFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void chkSaveFlag__12daObjCarry_cFv();
extern "C" void getPos__12daObjCarry_cFi();
extern "C" void savePos__12daObjCarry_cFi4cXyz();
extern "C" void onSttsFlag__12daObjCarry_cFiUc();
extern "C" void offSttsFlag__12daObjCarry_cFiUc();
extern "C" void chkSttsFlag__12daObjCarry_cFiUc();
extern "C" void setRoomNo__12daObjCarry_cFiSc();
extern "C" void getRoomNo__12daObjCarry_cFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void offActor__10dSv_info_cFii();
extern "C" void __ct__9dJntCol_cFv();
extern "C" void init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void
setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void GetActorPointer__4cBgSCFi();
extern "C" void ChkPolySafe__4cBgSFRC13cBgS_PolyInfo();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void ChkMoveBG_NoDABg__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void SplGrpChk__4dBgSFP14dBgS_SplGrpChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void ClrMoveBGOnly__9dBgS_AcchFv();
extern "C" void Set__14dBgS_SplGrpChkFR4cXyzf();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void ClrObj__16dBgS_PolyPassChkFv();
extern "C" void SetLink__16dBgS_PolyPassChkFv();
extern "C" void SetIronBall__16dBgS_PolyPassChkFv();
extern "C" void ClrIronBall__16dBgS_PolyPassChkFv();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Set__12dCcMassS_MngFP8cCcD_ObjUc();
extern "C" void setPosition__7dTres_cFiUcPC3Veci();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void wolfGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c();
extern "C" void checkCarryStartLightBallA__9daPy_py_cFv();
extern "C" void checkCarryStartLightBallB__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_dalkmist_inf_set__FP18DALKMIST_INFLUENCE();
extern "C" void dKy_dalkmist_inf_cut__FP18DALKMIST_INFLUENCE();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void ClrCcMove__9cCcD_SttsFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void normalizeRS__4cXyzFv();
extern "C" bool __ne__4cXyzCFRC3Vec();
extern "C" void isZero__4cXyzCFv();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC4cXyzRC4cXyzf();
extern "C" void Set__8cM3dGCylFRC9cM3dGCylS();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void cLib_chaseS__FPsss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" u8 mTsubo__13dPa_control_c[64];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 BaseX__4cXyz[12];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 mEcallback__18dPa_modelEcallBack[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8047990C-80479A24 000000 0118+00 29/29 0/0 0/0 .rodata          l_cyl_info */
SECTION_RODATA static u8 const l_cyl_info[280] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x14, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xC0, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x20, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8047990C, &l_cyl_info);

/* 80479A24-8047A23C 000118 0818+00 1/1 0/0 0/0 .rodata          mData__12daObjCarry_c */
SECTION_RODATA u8 const daObjCarry_c::mData[2072] = {
    0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00,
    0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x2A, 0x00, 0xC8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0x40, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x21,
    0x00, 0x08, 0x00, 0x35, 0x00, 0x08, 0x00, 0xF8, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29,
    0x00, 0x00, 0x00, 0x0D, 0x42, 0x20, 0x00, 0x00, 0x00, 0x50, 0x00, 0x2D, 0x00, 0x2D, 0x00, 0x00,
    0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x0A, 0x00, 0x41, 0xB0, 0x00, 0x00, 0x42, 0x2C, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xD0, 0x00, 0x00,
    0x40, 0x40, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x42, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x2A, 0x04, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x88, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x22, 0x00, 0x08, 0x00, 0x36, 0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2D,
    0x00, 0x08, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x0D, 0x42, 0x48, 0x00, 0x00, 0x00, 0x50, 0x00, 0x14,
    0x00, 0x14, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0xC0, 0x00, 0x00,
    0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A,
    0xC0, 0xC0, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x16, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x2A, 0x01, 0xC8, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0x16, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x4E, 0x00, 0x08, 0x01, 0x52, 0x00, 0x08, 0x00, 0xF8,
    0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0B, 0x42, 0xAE, 0x00, 0x00,
    0x00, 0x59, 0x00, 0x2D, 0x00, 0x2D, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD,
    0x3F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x41, 0xC8, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD,
    0x3F, 0x0C, 0xCC, 0xCD, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x2A, 0x08, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x49, 0x74, 0x24, 0x00, 0x42, 0x48, 0x00, 0x00, 0x00, 0x08, 0x01, 0x4E, 0x00, 0x08, 0x01, 0xD4,
    0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0B,
    0x42, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x8C, 0x00, 0x8C, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x41, 0xB0, 0x00, 0x00, 0x42, 0x2C, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xD0, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00,
    0x3E, 0xCC, 0xCC, 0xCD, 0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x2A, 0x04, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x88, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x2E,
    0x00, 0x08, 0x01, 0x52, 0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2D, 0x00, 0x08, 0x00, 0x2A,
    0x00, 0x00, 0x00, 0x0D, 0x42, 0x48, 0x00, 0x00, 0x00, 0x59, 0x00, 0x28, 0x00, 0x28, 0x00, 0x00,
    0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x40, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x0A, 0x00, 0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xC0, 0x00, 0x00,
    0x40, 0x80, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x2A, 0x00, 0xC8, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x00, 0xF6, 0x00, 0x08, 0x00, 0xF7, 0x00, 0x08, 0x00, 0xF8, 0x00, 0x08, 0x00, 0x2C,
    0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0D, 0x42, 0x20, 0x00, 0x00, 0x00, 0x59, 0x00, 0x32,
    0x00, 0x32, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0x80, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3E, 0x99, 0x99, 0x9A,
    0xC0, 0xD0, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x2A, 0x00, 0xC8, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
    0x42, 0x34, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xB9, 0x00, 0x08, 0x00, 0xB8, 0x00, 0x08, 0x00, 0xF8,
    0x00, 0x08, 0x00, 0x2D, 0x00, 0x08, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x0D, 0x42, 0x34, 0x00, 0x00,
    0x00, 0x50, 0x00, 0x1E, 0x00, 0x1E, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3E, 0x19, 0x99, 0x9A,
    0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x41, 0xD8, 0x00, 0x00,
    0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A,
    0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD,
    0x41, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x2A, 0x00, 0xC8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x40, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00,
    0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x21, 0x00, 0x08, 0x00, 0x35,
    0x00, 0x08, 0x00, 0xF8, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0D,
    0x42, 0x20, 0x00, 0x00, 0x00, 0x50, 0x00, 0x2D, 0x00, 0x2D, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00,
    0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00,
    0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
    0x3F, 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00,
    0x3E, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x2D, 0x00, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0x70, 0x00, 0x00, 0x49, 0x74, 0x24, 0x00, 0x42, 0x48, 0x00, 0x00, 0x00, 0x08, 0x01, 0x4E,
    0x00, 0x08, 0x02, 0x07, 0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29,
    0x00, 0x00, 0x00, 0x0B, 0x42, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x4B, 0x00, 0x6E, 0x00, 0x00,
    0x41, 0x20, 0x00, 0x00, 0x3C, 0x75, 0xC2, 0x8F, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0xC0, 0xC0, 0x00, 0x00,
    0x40, 0x20, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x2D, 0x00, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x49, 0x74, 0x24, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x00, 0x08, 0x01, 0x4E, 0x00, 0x08, 0x02, 0x07, 0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2C,
    0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0B, 0x42, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x4B,
    0x00, 0x6E, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3C, 0x75, 0xC2, 0x8F, 0x40, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xB0, 0x00, 0x00, 0x42, 0x2C, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A,
    0xC0, 0xD0, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x42, 0x0C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x2A, 0x04, 0xC8, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x88, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0x88, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x22, 0x00, 0x08, 0x00, 0x36, 0x00, 0x08, 0x00, 0xF9,
    0x00, 0x08, 0x00, 0x2D, 0x00, 0x08, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x0D, 0x42, 0x48, 0x00, 0x00,
    0x00, 0x50, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD,
    0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x41, 0xD8, 0x00, 0x00,
    0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33,
    0x3F, 0x33, 0x33, 0x33, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x2D, 0x00, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x70, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
    0x49, 0x74, 0x24, 0x00, 0x42, 0x48, 0x00, 0x00, 0x00, 0x08, 0x01, 0x4E, 0x00, 0x08, 0x02, 0x07,
    0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0B,
    0x42, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x4B, 0x00, 0x6E, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00,
    0x3C, 0x75, 0xC2, 0x8F, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x41, 0xD8, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xA0, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00,
    0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x2A, 0x00, 0xC8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x41, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x40, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0x40, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x21,
    0x00, 0x08, 0x00, 0x35, 0x00, 0x08, 0x00, 0xF8, 0x00, 0x08, 0x00, 0x2C, 0x00, 0x08, 0x00, 0x29,
    0x00, 0x00, 0x00, 0x0D, 0x42, 0x20, 0x00, 0x00, 0x00, 0x50, 0x00, 0x2D, 0x00, 0x2D, 0x00, 0x00,
    0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x0A, 0x00, 0x41, 0xB0, 0x00, 0x00, 0x42, 0x2C, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x19, 0x99, 0x9A, 0xC0, 0xD0, 0x00, 0x00,
    0x40, 0x40, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x42, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x2A, 0x04, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x42, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x88, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x22, 0x00, 0x08, 0x00, 0x36, 0x00, 0x08, 0x00, 0xF9, 0x00, 0x08, 0x00, 0x2D,
    0x00, 0x08, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x0D, 0x42, 0x48, 0x00, 0x00, 0x00, 0x50, 0x00, 0x14,
    0x00, 0x14, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3F, 0xC0, 0x00, 0x00,
    0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00,
};
COMPILER_STRIP_GATE(0x80479A24, &daObjCarry_c::mData);

/* 8047A23C-8047A280 000930 0044+00 0/1 0/0 0/0 .rodata          l_cyl_src */
#pragma push
#pragma force_active on
const static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{AT_TYPE_THROW_OBJ, 0x2, 0x1f}, {0xd8fbfdff, 0x1f}, 0x79}}, // mObj
        {dCcD_SE_THROW_OBJ, 0x1, 0x0, 0x0, 0x1}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        10.0f, // mRadius
        50.0f // mHeight
    } // mCyl
};
#pragma pop

/* 8047A280-8047A2C0 000974 0040+00 0/1 0/0 0/0 .rodata          l_light_at_sph_src */
#pragma push
#pragma force_active on
const static dCcD_SrcSph l_light_at_sph_src = {
    {
        {0x0, {{AT_TYPE_LANTERN_SWING, 0x0, 0x11}, {0x0, 0x10}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x4, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 500.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 8047A2C0-8047A30C 0009B4 004C+00 0/1 0/0 0/0 .rodata          l_atCpsSrc */
#pragma push
#pragma force_active on
const static dCcD_SrcCps l_atCpsSrc = {
    {
        {0x0, {{AT_TYPE_IRON_BALL, 0x64, 0x1f}, {0x0, 0x10}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, 40.0f}, // mCps
    } // mCpsAttr
};
#pragma pop

/* 8047A30C-8047A350 000A00 0044+00 0/1 0/0 0/0 .rodata          l_tg_cyl */
#pragma push
#pragma force_active on
const static dCcD_SrcCyl l_tg_cyl = {
    {
        {0x0, {{0x0, 0x0, 0x1e}, {0x200, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1}, // mGObjAt
        {dCcD_SE_WOLF_KICK, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        40.0f, // mRadius
        60.0f // mHeight
    } // mCyl
};
#pragma pop

/* 8047A350-8047A354 000A44 0004+00 0/0 0/0 0/0 .rodata          l_light_color */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const l_light_color = 0xFFFFFFFF;
COMPILER_STRIP_GATE(0x8047A350, &l_light_color);
#pragma pop

/* 8047A354-8047A35C 000A48 0004+04 7/28 0/0 0/0 .rodata          @3899 */
SECTION_RODATA static u8 const lit_3899[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8047A354, &lit_3899);

/* 8047A35C-8047A364 000A50 0008+00 0/7 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3900[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8047A35C, &lit_3900);
#pragma pop

/* 8047A364-8047A36C 000A58 0008+00 0/7 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3901[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8047A364, &lit_3901);
#pragma pop

/* 8047A36C-8047A374 000A60 0008+00 0/7 0/0 0/0 .rodata          @3902 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3902[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8047A36C, &lit_3902);
#pragma pop

/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A4BC = "J_tubo_00";
SECTION_DEAD static char const* const stringBase_8047A4C6 = "J_tubo_01";
SECTION_DEAD static char const* const stringBase_8047A4D0 = "Kkiba_00";
SECTION_DEAD static char const* const stringBase_8047A4D9 = "Y_ironbal";
SECTION_DEAD static char const* const stringBase_8047A4E3 = "J_taru00";
SECTION_DEAD static char const* const stringBase_8047A4EC = "J_doku00";
SECTION_DEAD static char const* const stringBase_8047A4F5 = "Obj_bkl";
SECTION_DEAD static char const* const stringBase_8047A4FD = "K_tubo02";
SECTION_DEAD static char const* const stringBase_8047A506 = "Obj_ballS";
SECTION_DEAD static char const* const stringBase_8047A510 = "D_aotubo0";
SECTION_DEAD static char const* const stringBase_8047A51A = "Obj_tama";
SECTION_DEAD static char const* const stringBase_8047A523 = "O_tuboS";
SECTION_DEAD static char const* const stringBase_8047A52B = "O_tuboB";
SECTION_DEAD static char const* const stringBase_8047A533 = "J_tubo_00.bmd";
SECTION_DEAD static char const* const stringBase_8047A541 = "J_tubo_01.bmd";
SECTION_DEAD static char const* const stringBase_8047A54F = "J_hako_00.bmd";
SECTION_DEAD static char const* const stringBase_8047A55D = "Yironball.bmd";
SECTION_DEAD static char const* const stringBase_8047A56B = "J_taru_00.bmd";
SECTION_DEAD static char const* const stringBase_8047A579 = "J_doku_00.bmd";
SECTION_DEAD static char const* const stringBase_8047A587 = "K_hb00.bmd";
SECTION_DEAD static char const* const stringBase_8047A592 = "K_tubo02.bmd";
SECTION_DEAD static char const* const stringBase_8047A59F = "LV8_OBJ_HikariS.bmd";
SECTION_DEAD static char const* const stringBase_8047A5B3 = "D_aotubo00.bmd";
SECTION_DEAD static char const* const stringBase_8047A5C2 = "LV8_tama.bmd";
SECTION_DEAD static char const* const stringBase_8047A5CF = "O_tuboS_LV8.bmd";
SECTION_DEAD static char const* const stringBase_8047A5DF = "O_tuboB_LV8.bmd";
#pragma pop

/* 8047A650-8047A65C 000000 000C+00 7/7 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8047A65C-8047A670 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8047A670-8047A6A8 -00001 0038+00 1/1 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[14] = {
    (void*)&d_a_obj_carry__stringBase0,
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xA),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x14),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x1D),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x27),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x30),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x39),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x41),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x4A),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x4A),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x54),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x5E),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x67),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x6F),
};

/* 8047A6A8-8047A6E0 -00001 0038+00 1/1 0/0 0/0 .data            l_bmdName */
SECTION_DATA static void* l_bmdName[14] = {
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x77),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x85),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x93),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xA1),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xAF),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xBD),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xCB),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xD6),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xE3),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xE3),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0xF7),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x106),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x113),
    (void*)(((char*)&d_a_obj_carry__stringBase0) + 0x123),
};

/* 8047A6E0-8047A6F8 000090 0018+00 1/0 0/0 0/0 .data            kibako_jv_offset */
SECTION_DATA static u8 kibako_jv_offset[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8047A6F8-8047A710 0000A8 0018+00 1/0 0/0 0/0 .data            taru_jv_offset */
SECTION_DATA static u8 taru_jv_offset[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8047A710-8047A71C -00001 000C+00 1/1 0/0 0/0 .data            kibako_jc_data */
// box joint col data
static dJntColData_c kibako_jc_data = {
    1,
    1,
    0,
    45.0f,
    (Vec*)kibako_jv_offset
};

/* 8047A71C-8047A728 -00001 000C+00 1/1 0/0 0/0 .data            taru_jc_data */
static dJntColData_c taru_jc_data = {
    1,
    1,
    0,
    45.0f,
    (Vec*)taru_jv_offset
};

/* 8047A728-8047A734 -00001 000C+00 0/1 0/0 0/0 .data            @5956 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5956[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_wait__12daObjCarry_cFv,
};
#pragma pop

/* 8047A734-8047A740 -00001 000C+00 0/1 0/0 0/0 .data            @5957 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5957[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_walk__12daObjCarry_cFv,
};
#pragma pop

/* 8047A740-8047A74C -00001 000C+00 0/1 0/0 0/0 .data            @5958 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5958[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_carry__12daObjCarry_cFv,
};
#pragma pop

/* 8047A74C-8047A758 -00001 000C+00 0/1 0/0 0/0 .data            @5959 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5959[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_drop__12daObjCarry_cFv,
};
#pragma pop

/* 8047A758-8047A764 -00001 000C+00 0/1 0/0 0/0 .data            @5960 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5960[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_float__12daObjCarry_cFv,
};
#pragma pop

/* 8047A764-8047A770 -00001 000C+00 0/1 0/0 0/0 .data            @5961 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5961[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_sink__12daObjCarry_cFv,
};
#pragma pop

/* 8047A770-8047A77C -00001 000C+00 0/1 0/0 0/0 .data            @5962 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5962[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_yogan__12daObjCarry_cFv,
};
#pragma pop

/* 8047A77C-8047A788 -00001 000C+00 0/1 0/0 0/0 .data            @5963 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5963[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_magne__12daObjCarry_cFv,
};
#pragma pop

/* 8047A788-8047A794 -00001 000C+00 0/1 0/0 0/0 .data            @5964 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5964[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_magneCarry__12daObjCarry_cFv,
};
#pragma pop

/* 8047A794-8047A7A0 -00001 000C+00 0/1 0/0 0/0 .data            @5965 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5965[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_boomCarry__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7A0-8047A7AC -00001 000C+00 0/1 0/0 0/0 .data            @5966 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5966[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_growth__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7AC-8047A7B8 -00001 000C+00 0/1 0/0 0/0 .data            @5967 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5967[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_dbDrop__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7B8-8047A7C4 -00001 000C+00 0/1 0/0 0/0 .data            @5968 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5968[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_hookCarry__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7C4-8047A7D0 -00001 000C+00 0/1 0/0 0/0 .data            @5969 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5969[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_end__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7D0-8047A7DC -00001 000C+00 0/1 0/0 0/0 .data            @5970 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5970[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_fit__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7DC-8047A7E8 -00001 000C+00 0/1 0/0 0/0 .data            @5971 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5971[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_controled__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7E8-8047A7F4 -00001 000C+00 0/1 0/0 0/0 .data            @5972 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5972[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_proc_resetLightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047A7F4-8047A8C0 0001A4 00CC+00 0/1 0/0 0/0 .data            l_mode_func$5955 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_mode_func[204] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047A8C0-8047A8CC -00001 000C+00 0/1 0/0 0/0 .data            @8582 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8582[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A8CC-8047A8D8 -00001 000C+00 0/1 0/0 0/0 .data            @8583 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8583[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A8D8-8047A8E4 -00001 000C+00 0/1 0/0 0/0 .data            @8584 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8584[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047A8E4-8047A8F0 -00001 000C+00 0/1 0/0 0/0 .data            @8585 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8585[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047A8F0-8047A8FC -00001 000C+00 0/1 0/0 0/0 .data            @8586 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8586[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047A8FC-8047A908 -00001 000C+00 0/1 0/0 0/0 .data            @8587 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8587[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047A908-8047A914 -00001 000C+00 0/1 0/0 0/0 .data            @8588 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8588[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047A914-8047A920 -00001 000C+00 0/1 0/0 0/0 .data            @8589 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8589[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A920-8047A92C -00001 000C+00 0/1 0/0 0/0 .data            @8590 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8590[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047A92C-8047A938 -00001 000C+00 0/1 0/0 0/0 .data            @8591 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8591[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047A938-8047A944 -00001 000C+00 0/1 0/0 0/0 .data            @8592 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8592[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A944-8047A950 -00001 000C+00 0/1 0/0 0/0 .data            @8593 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8593[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047A950-8047A95C -00001 000C+00 0/1 0/0 0/0 .data            @8594 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8594[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A95C-8047A968 -00001 000C+00 0/1 0/0 0/0 .data            @8595 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8595[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)bg_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047A968-8047AA10 000318 00A8+00 0/1 0/0 0/0 .data            l_type_func$8581 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_type_func_8581[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047AA10-8047AA1C -00001 000C+00 0/1 0/0 0/0 .data            @8605 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8605[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA1C-8047AA28 -00001 000C+00 0/1 0/0 0/0 .data            @8606 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8606[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA28-8047AA34 -00001 000C+00 0/1 0/0 0/0 .data            @8607 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8607[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA34-8047AA40 -00001 000C+00 0/1 0/0 0/0 .data            @8608 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8608[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA40-8047AA4C -00001 000C+00 0/1 0/0 0/0 .data            @8609 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8609[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA4C-8047AA58 -00001 000C+00 0/1 0/0 0/0 .data            @8610 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8610[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA58-8047AA64 -00001 000C+00 0/1 0/0 0/0 .data            @8611 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8611[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA64-8047AA70 -00001 000C+00 0/1 0/0 0/0 .data            @8612 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8612[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA70-8047AA7C -00001 000C+00 0/1 0/0 0/0 .data            @8613 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8613[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA7C-8047AA88 -00001 000C+00 0/1 0/0 0/0 .data            @8614 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8614[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA88-8047AA94 -00001 000C+00 0/1 0/0 0/0 .data            @8615 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8615[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AA94-8047AAA0 -00001 000C+00 0/1 0/0 0/0 .data            @8616 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8616[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AAA0-8047AAAC -00001 000C+00 0/1 0/0 0/0 .data            @8617 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8617[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_kotubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AAAC-8047AAB8 -00001 000C+00 0/1 0/0 0/0 .data            @8618 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8618[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cc_damage_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AAB8-8047AB60 000468 00A8+00 0/1 0/0 0/0 .data            l_type_func$8604 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_type_func_8604[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047AB60-8047AB6C -00001 000C+00 0/1 0/0 0/0 .data            @8628 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8628[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AB6C-8047AB78 -00001 000C+00 0/1 0/0 0/0 .data            @8629 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8629[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AB78-8047AB84 -00001 000C+00 0/1 0/0 0/0 .data            @8630 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8630[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047AB84-8047AB90 -00001 000C+00 0/1 0/0 0/0 .data            @8631 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8631[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AB90-8047AB9C -00001 000C+00 0/1 0/0 0/0 .data            @8632 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8632[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047AB9C-8047ABA8 -00001 000C+00 0/1 0/0 0/0 .data            @8633 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8633[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABA8-8047ABB4 -00001 000C+00 0/1 0/0 0/0 .data            @8634 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8634[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABB4-8047ABC0 -00001 000C+00 0/1 0/0 0/0 .data            @8635 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8635[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_kotubo2__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABC0-8047ABCC -00001 000C+00 0/1 0/0 0/0 .data            @8636 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8636[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABCC-8047ABD8 -00001 000C+00 0/1 0/0 0/0 .data            @8637 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8637[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABD8-8047ABE4 -00001 000C+00 0/1 0/0 0/0 .data            @8638 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8638[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_ootubo2__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABE4-8047ABF0 -00001 000C+00 0/1 0/0 0/0 .data            @8639 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8639[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABF0-8047ABFC -00001 000C+00 0/1 0/0 0/0 .data            @8640 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8640[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_tsuboL8__12daObjCarry_cFv,
};
#pragma pop

/* 8047ABFC-8047AC08 -00001 000C+00 0/1 0/0 0/0 .data            @8641 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8641[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)eff_break_ootuboL8__12daObjCarry_cFv,
};
#pragma pop

/* 8047AC08-8047ACB0 0005B8 00A8+00 0/1 0/0 0/0 .data            l_type_func$8627 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_type_func_8627[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047ACB0-8047ACBC -00001 000C+00 0/1 0/0 0/0 .data            @8649 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8649[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACBC-8047ACC8 -00001 000C+00 0/1 0/0 0/0 .data            @8650 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8650[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACC8-8047ACD4 -00001 000C+00 0/1 0/0 0/0 .data            @8651 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8651[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACD4-8047ACE0 -00001 000C+00 0/1 0/0 0/0 .data            @8652 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8652[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACE0-8047ACEC -00001 000C+00 0/1 0/0 0/0 .data            @8653 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8653[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACEC-8047ACF8 -00001 000C+00 0/1 0/0 0/0 .data            @8654 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8654[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047ACF8-8047AD04 -00001 000C+00 0/1 0/0 0/0 .data            @8655 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8655[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD04-8047AD10 -00001 000C+00 0/1 0/0 0/0 .data            @8656 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8656[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_kotubo2__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD10-8047AD1C -00001 000C+00 0/1 0/0 0/0 .data            @8657 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8657[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD1C-8047AD28 -00001 000C+00 0/1 0/0 0/0 .data            @8658 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8658[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD28-8047AD34 -00001 000C+00 0/1 0/0 0/0 .data            @8659 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8659[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD34-8047AD40 -00001 000C+00 0/1 0/0 0/0 .data            @8660 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8660[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD40-8047AD4C -00001 000C+00 0/1 0/0 0/0 .data            @8661 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8661[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD4C-8047AD58 -00001 000C+00 0/1 0/0 0/0 .data            @8662 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8662[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)calc_rot_axis_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AD58-8047AE00 000708 00A8+00 0/1 0/0 0/0 .data            l_type_func$8648 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_type_func_8648[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047AE00-8047AE0C -00001 000C+00 0/1 0/0 0/0 .data            @8670 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8670[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE0C-8047AE18 -00001 000C+00 0/1 0/0 0/0 .data            @8671 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8671[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE18-8047AE24 -00001 000C+00 0/1 0/0 0/0 .data            @8672 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8672[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE24-8047AE30 -00001 000C+00 0/1 0/0 0/0 .data            @8673 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8673[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE30-8047AE3C -00001 000C+00 0/1 0/0 0/0 .data            @8674 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8674[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE3C-8047AE48 -00001 000C+00 0/1 0/0 0/0 .data            @8675 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8675[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE48-8047AE54 -00001 000C+00 0/1 0/0 0/0 .data            @8676 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8676[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE54-8047AE60 -00001 000C+00 0/1 0/0 0/0 .data            @8677 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8677[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE60-8047AE6C -00001 000C+00 0/1 0/0 0/0 .data            @8678 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8678[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE6C-8047AE78 -00001 000C+00 0/1 0/0 0/0 .data            @8679 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8679[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE78-8047AE84 -00001 000C+00 0/1 0/0 0/0 .data            @8680 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8680[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE84-8047AE90 -00001 000C+00 0/1 0/0 0/0 .data            @8681 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8681[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE90-8047AE9C -00001 000C+00 0/1 0/0 0/0 .data            @8682 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8682[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AE9C-8047AEA8 -00001 000C+00 0/1 0/0 0/0 .data            @8683 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8683[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)exec_proc_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AEA8-8047AF50 000858 00A8+00 0/1 0/0 0/0 .data            l_type_func$8669 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_type_func_8669[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047AF50-8047AF88 -00001 0038+00 1/1 0/0 0/0 .data            l_callback$8690 */
SECTION_DATA static void* l_callback_8690[14] = {
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
};

/* 8047AF88-8047AFC0 -00001 0038+00 1/1 0/0 0/0 .data            l_callback$8698 */
SECTION_DATA static void* l_callback_8698[14] = {
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
    (void*)CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf,
};

/* 8047AFC0-8047AFCC -00001 000C+00 0/1 0/0 0/0 .data            @8707 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8707[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AFCC-8047AFD8 -00001 000C+00 0/1 0/0 0/0 .data            @8708 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8708[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047AFD8-8047AFE4 -00001 000C+00 0/1 0/0 0/0 .data            @8709 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8709[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_kibako__12daObjCarry_cFv,
};
#pragma pop

/* 8047AFE4-8047AFF0 -00001 000C+00 0/1 0/0 0/0 .data            @8710 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8710[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_ironball__12daObjCarry_cFv,
};
#pragma pop

/* 8047AFF0-8047AFFC -00001 000C+00 0/1 0/0 0/0 .data            @8711 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8711[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_taru__12daObjCarry_cFv,
};
#pragma pop

/* 8047AFFC-8047B008 -00001 000C+00 0/1 0/0 0/0 .data            @8712 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8712[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_dokuro__12daObjCarry_cFv,
};
#pragma pop

/* 8047B008-8047B014 -00001 000C+00 0/1 0/0 0/0 .data            @8713 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8713[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_bokkuri__12daObjCarry_cFv,
};
#pragma pop

/* 8047B014-8047B020 -00001 000C+00 0/1 0/0 0/0 .data            @8714 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8714[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047B020-8047B02C -00001 000C+00 0/1 0/0 0/0 .data            @8715 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8715[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047B02C-8047B038 -00001 000C+00 0/1 0/0 0/0 .data            @8716 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8716[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_LightBall__12daObjCarry_cFv,
};
#pragma pop

/* 8047B038-8047B044 -00001 000C+00 0/1 0/0 0/0 .data            @8717 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8717[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047B044-8047B050 -00001 000C+00 0/1 0/0 0/0 .data            @8718 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8718[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_Lv8Ball__12daObjCarry_cFv,
};
#pragma pop

/* 8047B050-8047B05C -00001 000C+00 0/1 0/0 0/0 .data            @8719 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8719[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_tsubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047B05C-8047B068 -00001 000C+00 0/1 0/0 0/0 .data            @8720 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_8720[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)CreateInit_ootubo__12daObjCarry_cFv,
};
#pragma pop

/* 8047B068-8047B110 000A18 00A8+00 0/1 0/0 0/0 .data            l_func$8706 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[168] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 8047B110-8047B130 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCarry_Method */
static actor_method_class l_daObjCarry_Method = {
    (process_method_func)daObjCarry_Create__FP10fopAc_ac_c,
    (process_method_func)daObjCarry_Delete__FP12daObjCarry_c,
    (process_method_func)daObjCarry_Execute__FP12daObjCarry_c,
    0,
    (process_method_func)daObjCarry_Draw__FP12daObjCarry_c
};

/* 8047B130-8047B160 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Carry */
extern actor_process_profile_definition g_profile_Obj_Carry = {
    fpcLy_CURRENT_e,        // mLayerID
    8,                      // mListID
    fpcPi_CURRENT_e,        // mListPrio
    PROC_Obj_Carry,         // mProcName
    &g_fpcLf_Method.mBase,  // sub_method
    sizeof(daObjCarry_c),   // mSize
    0,                      // mSizeOther
    0,                      // mParameters
    &g_fopAc_Method.base,   // sub_method
    244,                    // mPriority
    &l_daObjCarry_Method,   // sub_method
    0x40500,                // mStatus
    fopAc_ACTOR_e,          // mActorType
    fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8047B160-8047B16C 000B10 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8047B16C-8047B178 000B1C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8047B178-8047B184 000B28 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8047B184-8047B190 000B34 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8047B190-8047B19C 000B40 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8047B19C-8047B1A8 000B4C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8047B1A8-8047B1CC 000B58 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804798FC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804798F4,
};

/* 8047B1CC-8047B1D8 000B7C 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 8046EFF8-8046F2F4 000078 02FC+00 1/1 0/0 0/0 .text            bound__FP4cXyzRC13cBgS_PolyInfof */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bound(cXyz* param_0, cBgS_PolyInfo const& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bound__FP4cXyzRC13cBgS_PolyInfof.s"
}
#pragma pop

/* 8046F2F4-8046F33C 000374 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__8cM3dGPlaFv() {
    // asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 8046F33C-8046F340 0003BC 0004+00 1/0 0/0 0/0 .text
 * TgHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void TgHitCallBackBase(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                              dCcD_GObjInf* param_3) {
    /* empty function */
}

/* ############################################################################################## */
/* 8047A374-8047A378 000A68 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 6000.0f;
COMPILER_STRIP_GATE(0x8047A374, &lit_3927);
#pragma pop

/* 8047A378-8047A37C 000A6C 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 2000.0f;
COMPILER_STRIP_GATE(0x8047A378, &lit_3928);
#pragma pop

/* 8047A37C-8047A380 000A70 0004+00 0/3 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 4000.0f;
COMPILER_STRIP_GATE(0x8047A37C, &lit_3929);
#pragma pop

/* 8047A380-8047A384 000A74 0004+00 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = 1500.0f;
COMPILER_STRIP_GATE(0x8047A380, &lit_3930);
#pragma pop

/* 8046F340-8046F3E0 0003C0 00A0+00 1/0 0/0 0/0 .text
 * TgHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void TgHitCallBackBokkuri(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                     fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {

        daObjCarry_c* obj_carry = static_cast<daObjCarry_c*>(param_0);
      if (obj_carry && param_2 && 
            param_3->ChkAtType(AT_TYPE_SHIELD_ATTACK) && 
            fopAcM_IsActor(param_2) && 
            fopAcM_GetName(param_2) == PROC_ALINK) {
        obj_carry->field_0xd5c = FLOAT_LABEL(lit_3927) + cM_rndF(FLOAT_LABEL(lit_3928));
        obj_carry->field_0xd60 = FLOAT_LABEL(lit_3929) + cM_rndF(FLOAT_LABEL(lit_3930));
        obj_carry->field_0xd68 = 4000;
      }
}

/* 8046F3E0-8046F3E4 000460 0004+00 1/0 0/0 0/0 .text
 * CoHitCallBackBase__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void CoHitCallBackBase(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                              dCcD_GObjInf* param_3) {
    /* empty function */
}

/* ############################################################################################## */
/* 8047A384-8047A388 000A78 0004+00 2/7 0/0 0/0 .rodata          @3958 */
SECTION_RODATA static f32 const lit_3958 = 0.5f;
COMPILER_STRIP_GATE(0x8047A384, &lit_3958);

/* 8047A388-8047A38C 000A7C 0004+00 0/2 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 800.0f;
COMPILER_STRIP_GATE(0x8047A388, &lit_3959);
#pragma pop

/* 8047A38C-8047A390 000A80 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 400.0f;
COMPILER_STRIP_GATE(0x8047A38C, &lit_3960);
#pragma pop

/* 8047A390-8047A394 000A84 0004+00 0/4 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 500.0f;
COMPILER_STRIP_GATE(0x8047A390, &lit_3961);
#pragma pop

/* 8047A394-8047A398 000A88 0004+00 0/1 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 300.0f;
COMPILER_STRIP_GATE(0x8047A394, &lit_3962);
#pragma pop

/* 8046F3E4-8046F4AC 000464 00C8+00 1/0 0/0 0/0 .text
 * CoHitCallBackBokkuri__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
#ifdef NONMATCHING
// literals
static void CoHitCallBackBokkuri(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                     fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {
    daObjCarry_c* _param_0 = static_cast<daObjCarry_c*>(param_0);

    if (_param_0 && param_2 && _param_0->mStts.GetCCMoveP()) {
        if ((f32)fabs(_param_0->mStts.GetCCMoveP()->x) > FLOAT_LABEL(lit_3958)) {
            if ((f32)fabs(_param_0->mStts.GetCCMoveP()->z) > FLOAT_LABEL(lit_3958)) {

                _param_0->field_0xd5c = FLOAT_LABEL(lit_3959) + cM_rndF(FLOAT_LABEL(lit_3960));
                _param_0->field_0xd60 = FLOAT_LABEL(lit_3961) + cM_rndF(FLOAT_LABEL(lit_3962));
                
                if (_param_0->field_0xdb0 != 0) {
                    _param_0->field_0xd5c *= FLOAT_LABEL(lit_3958);
                    _param_0->field_0xd60 *= FLOAT_LABEL(lit_3958);
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CoHitCallBackBokkuri(fopAc_ac_c* param_0, dCcD_GObjInf* param_1,
                                     fopAc_ac_c* param_2, dCcD_GObjInf* param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/func_8046F3E4.s"
}
#pragma pop
#endif

/* 8046F4AC-8046F52C 00052C 0080+00 1/1 0/0 0/0 .text            s_swA_sub__FPvPv */
static void* s_swA_sub(void* param_0, void* param_1) {
    daObjSwBallA_c* ball = static_cast<daObjSwBallA_c*>(param_0);
    daObjCarry_c* carry = static_cast<daObjCarry_c*>(param_1);

    if (fopAcM_IsActor(ball) && 
        fopAcM_GetName(ball) == PROC_Obj_SwBallA &&
        ball && carry) {
            if (ball->getSwbit() == carry->getSwbit2()) {
                return param_0;
            }
        }
    return 0;
}

/* ############################################################################################## */
/* 8047B1D8-8047B1DC 000000 0004+00 3/3 0/0 0/0 .bss             l_sw_id */
static s32 l_sw_id;

/* 8046F52C-8046F59C 0005AC 0070+00 2/2 0/0 0/0 .text            s_sw_sub__FPvPv */
static void* s_sw_sub(void* param_0, void* param_1) {
    daObjSwBallB_c* ball = static_cast<daObjSwBallB_c*>(param_0);

    if (fopAcM_IsActor(ball) && 
        fopAcM_GetName(ball) == PROC_Obj_SwBallB &&
        ball && ball->getID() == l_sw_id) {
            return param_0;
        }
    return 0;
}

/* 8046F59C-8046F610 00061C 0074+00 1/1 0/0 0/0 .text            s_setA_sub__FPvPv */
static void* s_setA_sub(void* param_0, void* param_1) {
    daTagSetBall_c* ball = static_cast<daTagSetBall_c*>(param_0);

    if (fopAcM_IsActor(ball) && 
        fopAcM_GetName(ball) == PROC_Tag_SetBall &&
        ball && param_1 && ball->getType() == 0xF) {
            return param_0;
        }
    return 0;
}

/* 8046F610-8046F684 000690 0074+00 1/1 0/0 0/0 .text            s_setB_sub__FPvPv */
static void* s_setB_sub(void* param_0, void* param_1) {
    daTagSetBall_c* ball = static_cast<daTagSetBall_c*>(param_0);

    if (fopAcM_IsActor(ball) && 
        fopAcM_GetName(ball) == PROC_Tag_SetBall &&
        ball && param_1 && ball->getType() == 0) {
            return param_0;
        }
    return 0;
}

/* 8046F684-8046F6A4 000704 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
static void CheckCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daObjCarry_c*>(i_this)->CreateHeap();
}

/* 8046F6A4-8046F6BC 000724 0018+00 40/40 0/0 0/0 .text            data__12daObjCarry_cFv */
#ifdef NONMATCHING
u8 daObjCarry_c::data() {
    return mData[mType]; // mData needs to be setup properly first
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u8 daObjCarry_c::data() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/data__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 8046F6BC-8046F6D4 00073C 0018+00 3/3 0/0 0/0 .text            getArcName__12daObjCarry_cFv */
char* daObjCarry_c::getArcName() {
    return (char*)l_arcName[mType]; // l_arcName needs to be setup properly at some point
}

/* 8046F6D4-8046F6EC 000754 0018+00 1/1 0/0 0/0 .text            getBmdName__12daObjCarry_cFv */
int daObjCarry_c::getBmdName() {
    return (int)l_bmdName[mType]; // l_bmdName needs to be setup properly at some point
}

/* 8046F6EC-8046F724 00076C 0038+00 2/2 0/0 0/0 .text            checkFlag__12daObjCarry_cFUc */
#ifdef NONMATCHING
// need to finish data() first
u8 daObjCarry_c::checkFlag(u8 param_0) {
    return cLib_checkBit(data(), param_0);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::checkFlag(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkFlag__12daObjCarry_cFUc.s"
}
#pragma pop
#endif

/* 8046F724-8046F7AC 0007A4 0088+00 1/1 0/0 0/0 .text            initBaseMtx__12daObjCarry_cFv */
void daObjCarry_c::initBaseMtx() {
    field_0xcf4 = cXyz::Zero;
    field_0xd00 = 0;
    field_0xd3c = ZeroQuat;
    field_0xd4c = field_0xd3c;
    setBaseMtx();
}

/* ############################################################################################## */
/* 8047A398-8047A39C 000A8C 0004+00 0/1 0/0 0/0 .rodata          @4166 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4166 = 0x38C90FDB;
COMPILER_STRIP_GATE(0x8047A398, &lit_4166);
#pragma pop

/* 8047A39C-8047A3A0 000A90 0004+00 0/1 0/0 0/0 .rodata          @4167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4167 = 35.0f;
COMPILER_STRIP_GATE(0x8047A39C, &lit_4167);
#pragma pop

/* 8047A3A0-8047A3A4 000A94 0004+00 0/1 0/0 0/0 .rodata          @4168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4168 = -25.0f;
COMPILER_STRIP_GATE(0x8047A3A0, &lit_4168);
#pragma pop

/* 8047A3A4-8047A3AC 000A98 0004+04 0/1 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4169[1 + 1 /* padding */] = {
    16384.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8047A3A4, &lit_4169);
#pragma pop

/* 8047A3AC-8047A3B4 000AA0 0008+00 2/8 0/0 0/0 .rodata          @4171 */
SECTION_RODATA static u8 const lit_4171[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8047A3AC, &lit_4171);

/* 8046F7AC-8046FACC 00082C 0320+00 3/4 0/0 0/0 .text            setBaseMtx__12daObjCarry_cFv */
#ifdef NONMATCHING
// literals + data setup
void daObjCarry_c::setBaseMtx() {
    Mtx mStack_0x58;
     
    if (field_0xcf4.isZero()) {
        mDoMtx_identity(mStack_0x58);
    } else {
        C_MTXRotAxisRad(mStack_0x58,&field_0xcf4,cM_s2rad(field_0xd00));
    }

    if (mType == TYPE_BOKKURI) {
        mDoMtx_stack_c::transS(current.pos.x,current.pos.y + (f32)data(),current.pos.z);
        mDoMtx_stack_c::transM(0.0f,scale.x*(f32)data(),0.0f);
        mDoMtx_stack_c::concat(mStack_0x58);
        mDoMtx_stack_c::transM(0.0f,-scale.x*(f32)data(),0.0f);
        mDoMtx_stack_c::ZXYrotM(shape_angle.x+field_0xd64,shape_angle.y+field_0xd6a,shape_angle.z+field_0xd66);
        mDoMtx_stack_c::transM(0.0f,scale.x * 35.0f * field_0xd84,field_0xd84 * -25.0f);
        mDoMtx_stack_c::XrotM(field_0xd84*16384.0f);

    } else if (mType == TYPE_KIBAKO || mType == TYPE_TARU || mType == TYPE_DOKURO) {
        mDoMtx_stack_c::transS(current.pos.x,current.pos.y + (f32)data(),current.pos.z);
        mDoMtx_stack_c::transM(0.0f,(f32)data(),0.0f);
        mDoMtx_stack_c::concat(mStack_0x58);
        mDoMtx_stack_c::transM(0.0f,-(f32)data(),0.0f);
        mDoMtx_stack_c::ZXYrotM(shape_angle);
    } else {
        mDoMtx_quatMultiply(&field_0xd4c,&field_0xd3c,&field_0xd4c);
        mDoMtx_stack_c::transS(current.pos.x,(f32)data() + current.pos.y + field_0xddc,current.pos.z);
        mDoMtx_stack_c::transM(0.0f,(f32)data(),0.0f);
        mDoMtx_stack_c::quatM(&field_0xd4c);
        mDoMtx_stack_c::transM(0.0,(f32)data(),0.0);
        mDoMtx_stack_c::ZXYrotM(shape_angle);
        field_0xd3c = field_0xd4c;
    }
    
    mpModel->i_setBaseTRMtx(mDoMtx_stack_c::get());
    mpModel->setBaseScale(scale);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/setBaseMtx__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 8046FACC-8046FB78 000B4C 00AC+00 1/1 0/0 0/0 .text            preInit__12daObjCarry_cFv */
s32 daObjCarry_c::preInit() {
    fopAcM_SetupActor(this, daObjCarry_c);
    if (field_0xd15 == 0) {
        mItemNo = home.angle.x;
        field_0xd18 = home.angle.z;
        home.angle.z = 0;
        home.angle.x = 0;
        current.angle.z = 0;
        current.angle.x = 0;
        shape_angle.z = 0;
        shape_angle.x = 0;
        mOnMoveBG = checkOnMoveBg();
        field_0xd15 = 1;
    }
    mType = getType_private();
    return 1;
}

/* 8046FB78-8046FD90 000BF8 0218+00 1/1 0/0 0/0 .text            __ct__12daObjCarry_cFv */
#ifdef NONMATCHING
// matches, but can't uncomment until explicitly defined vtables are removed
daObjCarry_c::daObjCarry_c() {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjCarry_c::daObjCarry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__ct__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 8046FD90-8046FDD8 000E10 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__8cM3dGSphFv() {
    // asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8046FDD8-8046FE20 000E58 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__8cM3dGCylFv() {
    // asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8046FE20-8046FE68 000EA0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__8cM3dGAabFv() {
    // asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8046FE68-8046FEC4 000EE8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8046FEC4-8046FF34 000F44 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    // asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8046FF34-8046FFA4 000FB4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    // asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8046FFA4-8046FFF8 001024 0054+00 1/1 0/0 0/0 .text checkBreakWolfAttack__12daObjCarry_cFv */
s32 daObjCarry_c::checkBreakWolfAttack() {
    if (mType == TYPE_TSUBO || 
        mType == TYPE_TSUBO_2 || 
        mType == TYPE_OOTSUBO ||
        mType == TYPE_KIBAKO || 
        mType == TYPE_DOKURO ||
        mType == TYPE_AOTSUBO ||
        mType == TYPE_TSUBO_S ||
        mType == TYPE_TSUBO_B) {
            return 1;
        }

    return 0;
}

/* 8046FFF8-80470054 001078 005C+00 1/1 0/0 0/0 .text checkCarryBoomerang__12daObjCarry_cFv */
s32 daObjCarry_c::checkCarryBoomerang() {
    if (mType == TYPE_TSUBO || 
        mType == TYPE_TSUBO_2 || 
        mType == TYPE_OOTSUBO ||
        mType == TYPE_KIBAKO || 
        mType == TYPE_DOKURO ||
        mType == TYPE_BOKKURI ||
        mType == TYPE_AOTSUBO ||
        mType == TYPE_TSUBO_S ||
        mType == TYPE_TSUBO_B) {
            return 1;
        }

    return 0;
}

/* 80470054-80470080 0010D4 002C+00 1/1 0/0 0/0 .text checkCarryHookshot__12daObjCarry_cFv */
s32 daObjCarry_c::checkCarryHookshot() {
    if (mType == TYPE_BALL_S|| 
        mType == TYPE_BALL_S_2 || 
        mType == TYPE_LV8_BALL) {
            return 1;
        }

    return 0;
}

/* 80470080-804700B4 001100 0034+00 1/1 0/0 0/0 .text            checkCarryWolf__12daObjCarry_cFv */
s32 daObjCarry_c::checkCarryWolf() {
    if (mType == TYPE_TSUBO || 
        mType == TYPE_DOKURO || 
        mType == TYPE_TSUBO_2 || 
        mType == TYPE_TSUBO_S) {
            return 1;
        }

    return 0;
}

/* 804700B4-804700F0 001134 003C+00 1/1 0/0 0/0 .text            checkCarryOneHand__12daObjCarry_cFv
 */
s32 daObjCarry_c::checkCarryOneHand() {
    if (mType == TYPE_TSUBO || 
        mType == TYPE_DOKURO || 
        mType == TYPE_TSUBO_2 ||
        mType == TYPE_BOKKURI || 
        mType == TYPE_TSUBO_S) {
            return 1;
        }

    return 0;
}

/* ############################################################################################## */
/* 8047A3B4-8047A3B8 000AA8 0004+00 0/1 0/0 0/0 .rodata          @4594 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4594 = 80.0f;
COMPILER_STRIP_GATE(0x8047A3B4, &lit_4594);
#pragma pop

/* 8047A3B8-8047A3BC 000AAC 0004+00 1/6 0/0 0/0 .rodata          @4595 */
SECTION_RODATA static f32 const lit_4595 = 100.0f;
COMPILER_STRIP_GATE(0x8047A3B8, &lit_4595);

/* 8047A3BC-8047A3C0 000AB0 0004+00 0/4 0/0 0/0 .rodata          @4596 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4596 = 10.0f;
COMPILER_STRIP_GATE(0x8047A3BC, &lit_4596);
#pragma pop

/* 8047A3C0-8047A3C4 000AB4 0004+00 0/3 0/0 0/0 .rodata          @4597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4597 = 30.0f;
COMPILER_STRIP_GATE(0x8047A3C0, &lit_4597);
#pragma pop

/* 804700F0-804705DC 001170 04EC+00 1/1 0/0 0/0 .text            Create__12daObjCarry_cFv */
#ifdef NONMATCHING
// need to map data() first
void daObjCarry_c::Create() {
    scale.set((f32)data(), (f32)data(), (f32)data()); // need to map data
    fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
    mAcchCir.SetWall((f32)data(), (f32)data()); // need to map data

    mAcch.Set(fopAcM_GetPosition_p(this), fopAcM_GetOldPosition_p(this), this, 1, &mAcchCir, fopAcM_GetSpeed_p(this), &current.angle, &shape_angle);
    mAcch.SetWtrChkMode(2);
    mAcch.ClrRoofNone();
    mAcch.SetRoofCrrHeight(80.0f);

    mStts.Init(data(),0xFF,this); // need to map data
    field_0x7c8.Set(l_cyl_src);


}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/Create__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 804705DC-80470650 00165C 0074+00 3/0 0/0 0/0 .text            CreateInit_tsubo__12daObjCarry_cFv
 */
s32 daObjCarry_c::CreateInit_tsubo() {
    if (!checkCrashRoll()) {
        mCrashRoll = 1;
    }

    mode_init_wait();

    if (!strcmp(dComIfGp_getStartStageName(), "D_MN05A")) {
        field_0xe25 = 1;
    }

    return 1;
}

/* 80470650-80470674 0016D0 0024+00 3/0 0/0 0/0 .text            CreateInit_ootubo__12daObjCarry_cFv
 */
s32 daObjCarry_c::CreateInit_ootubo() {
    mode_init_wait();
    return 1;
}

/* 80470674-804706D4 0016F4 0060+00 1/0 0/0 0/0 .text            CreateInit_kibako__12daObjCarry_cFv
 */
s32 daObjCarry_c::CreateInit_kibako() {
    if (!field_0xe10.init(this,&kibako_jc_data,mpModel,1)) {
        return 0;
    }

    mode_init_wait();
    return 1;
}

/* 804706D4-804707E0 001754 010C+00 1/0 0/0 0/0 .text CreateInit_ironball__12daObjCarry_cFv */
s32 daObjCarry_c::CreateInit_ironball() {
    if (chkSaveFlag()) {
        u8 l_saveID = getSaveID();

        current.pos = getPos(l_saveID);
        old.pos = current.pos;
        attention_info.position = current.pos;
        eyePos = current.pos;

        fopAcM_SetRoomNo(this,getRoomNo(l_saveID));
        tevStr.mRoomNo = fopAcM_GetRoomNo(this);

        if (chkSttsFlag(l_saveID,1)) {
            mDraw = 1;
        }
    }

    mAcch.SetLink();
    mAcch.ClrObj();
    mode_init_wait();
    field_0x7c8.SetAtType(field_0x7c8.GetAtType() | AT_TYPE_IRON_BALL);
    field_0x7c8.SetAtSe(6);

    return 1;
}

/* 804707E0-80470840 001860 0060+00 1/0 0/0 0/0 .text            CreateInit_taru__12daObjCarry_cFv
 */
s32 daObjCarry_c::CreateInit_taru() {
    if (!field_0xe10.init(this,&taru_jc_data,mpModel,1)) {
        return 0;
    }

    mode_init_wait();
    return 1;
}

/* 80470840-80470890 0018C0 0050+00 1/0 0/0 0/0 .text            CreateInit_dokuro__12daObjCarry_cFv
 */
bool daObjCarry_c::CreateInit_dokuro() {
    mode_init_wait();
    return !i_fopAcM_isSwitch(this,getSwbit());
}

/* ############################################################################################## */
/* 8047A3C4-8047A3C8 000AB8 0004+00 0/1 0/0 0/0 .rodata          @4683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4683 = 15.0f;
COMPILER_STRIP_GATE(0x8047A3C4, &lit_4683);
#pragma pop

/* 8047A3C8-8047A3CC 000ABC 0004+00 0/2 0/0 0/0 .rodata          @4684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4684 = 20.0f;
COMPILER_STRIP_GATE(0x8047A3C8, &lit_4684);
#pragma pop

/* 8047A3CC-8047A3D0 000AC0 0004+00 13/24 0/0 0/0 .rodata          @4685 */
SECTION_RODATA static f32 const lit_4685 = 1.0f;
COMPILER_STRIP_GATE(0x8047A3CC, &lit_4685);

/* 80470890-804709DC 001910 014C+00 1/0 0/0 0/0 .text CreateInit_bokkuri__12daObjCarry_cFv */
#ifndef NONMATCHING
s32 daObjCarry_c::CreateInit_bokkuri() {
    field_0x7c8.SetTgHitMark((CcG_Tg_HitMark)0);
    field_0x7c8.OnTgNoHitMark();
    field_0xd76 = 0;
    field_0xd79 = 3;
    field_0xd7a = 100;
    field_0xd88.init(&current.pos,1);

    switch(getSetType()) {
    case 0:
        mode_init_wait();
        break;
    case 1:
        field_0xd76 = 255;
        speedF = FLOAT_LABEL(lit_4683);
        speed.y = FLOAT_LABEL(lit_4684);
        scale.set(FLOAT_LABEL(lit_4685),FLOAT_LABEL(lit_4685),FLOAT_LABEL(lit_4685));
        mode_init_dbDrop(1);
        break;
    case 2:
        fopAcM_OnCarryType(this,fopAcM_CARRY_TYPE_1);
        field_0xdb0 = 1;
        field_0xd7a = 0;
        mode_init_wait();
        break;
    case 3:
        fopAcM_OnCarryType(this,fopAcM_CARRY_TYPE_1);
        field_0xd76 = 255;
        field_0xd7a = 0;
        mode_init_growth();
        break;
    default:
        mode_init_wait();
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::CreateInit_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/CreateInit_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8047A3D0-8047A3D4 000AC4 0004+00 1/1 0/0 0/0 .rodata          @4707 */
SECTION_RODATA static f32 const lit_4707 = 750.0f;
COMPILER_STRIP_GATE(0x8047A3D0, &lit_4707);

/* 804709DC-80470AB4 001A5C 00D8+00 2/0 0/0 0/0 .text CreateInit_LightBall__12daObjCarry_cFv */
#ifndef NONMATCHING
s32 daObjCarry_c::CreateInit_LightBall() {
    field_0xd88.init(&current.pos,1);

    if (dComIfGp_roomControl_getStayNo()) {
        fopAcM_OnStatus(this,0x2000000);
    }

    field_0xdf8.mPos = current.pos;
    field_0xdf8.field_0xc = FLOAT_LABEL(lit_4707);
    dKy_dalkmist_inf_set(&field_0xdf8);
    field_0xe0c = 1;
    fopAcM_OnStatus(this,0x20000);
    field_0x7c8.SetTgSe(9);
    field_0x7c8.SetTgHitMark((CcG_Tg_HitMark)2);
    field_0x7c8.OffTgNoHitMark();
    field_0x7c8.OnTgShieldHit();
    field_0x7c8.SetAtSe(1);
    mode_init_wait();
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::CreateInit_LightBall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/CreateInit_LightBall__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 80470AB4-80470B5C 001B34 00A8+00 1/0 0/0 0/0 .text CreateInit_Lv8Ball__12daObjCarry_cFv */
s32 daObjCarry_c::CreateInit_Lv8Ball() {
    field_0xd88.init(&current.pos,1);
    field_0x7c8.SetTgSe(9);
    field_0x7c8.SetTgHitMark((CcG_Tg_HitMark)2);
    field_0x7c8.OffTgNoHitMark();
    field_0x7c8.OnTgShieldHit();

    if (i_fopAcM_isSwitch(this,getSwbit())) {
        mode_init_fit();
    } else {
        mode_init_wait();
    }

    return 1;
}

/* 80470B5C-80470BF4 001BDC 0098+00 1/1 0/0 0/0 .text            CreateHeap__12daObjCarry_cFv */
#ifdef NONMATCHING
// 1 instruction in wrong place
s32 daObjCarry_c::CreateHeap() {
    s32 l_modelFlag;
    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(getArcName(),getBmdName());    

    l_modelFlag = 0x80000;

    if (prm_chk_type_ironball()) {
        l_modelFlag = 0;
    }

    mpModel = mDoExt_J3DModel__create(modelData,l_modelFlag,0x11000084);

    if (mpModel == 0) {
        return 0;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/CreateHeap__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 80470BF4-80470CF0 001C74 00FC+00 1/1 0/0 0/0 .text            create__12daObjCarry_cFv */
#ifdef NONMATCHING
cPhs__Step daObjCarry_c::create() {
    cPhs__Step step;
    preInit();

    switch(mType) {
        case TYPE_BALL_S:
            step = (cPhs__Step)checkCreate_LightBallA();
        case TYPE_BALL_S_2:
            step = (cPhs__Step)checkCreate_LightBallB();
        case TYPE_LV8_BALL:
            step = (cPhs__Step)checkCreate_Lv8Ball();
    }

    if (step == cPhs_NEXT_e) {
        return;
    }

    return step;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cPhs__Step daObjCarry_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/func_80470BF4.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8047A3D4-8047A3E0 000AC8 000C+00 1/1 0/0 0/0 .rodata          l_event_bitA$4815 */
SECTION_RODATA static u8 const l_event_bitA[12] = {
    0x43, 0x04, 0x43, 0x02, 0x43, 0x01, 0x44, 0x80, 0x44, 0x40, 0x44, 0x20,
};
COMPILER_STRIP_GATE(0x8047A3D4, &l_event_bitA);

/* 80470CF0-8047114C 001D70 045C+00 1/1 0/0 0/0 .text checkCreate_LightBallA__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::checkCreate_LightBallA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkCreate_LightBallA__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A3E0-8047A3EC 000AD4 000C+00 1/1 0/0 0/0 .rodata          l_event_bitB$4966 */
SECTION_RODATA static u8 const l_event_bitB[12] = {
    0x44, 0x10, 0x44, 0x08, 0x44, 0x04, 0x44, 0x02, 0x44, 0x01, 0x45, 0x80,
};
COMPILER_STRIP_GATE(0x8047A3E0, &l_event_bitB);

/* 8047114C-804715A8 0021CC 045C+00 1/1 0/0 0/0 .text checkCreate_LightBallB__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::checkCreate_LightBallB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkCreate_LightBallB__12daObjCarry_cFv.s"
}
#pragma pop

/* 804715A8-80471680 002628 00D8+00 1/1 0/0 0/0 .text checkCreate_Lv8Ball__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 daObjCarry_c::checkCreate_Lv8Ball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkCreate_Lv8Ball__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A3EC-8047A3F0 000AE0 0004+00 0/3 0/0 0/0 .rodata          @5096 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5096 = -3930.0f;
COMPILER_STRIP_GATE(0x8047A3EC, &lit_5096);
#pragma pop

/* 80471680-804716D4 002700 0054+00 1/1 0/0 0/0 .text resetIconPosForLightBallA__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::resetIconPosForLightBallA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/resetIconPosForLightBallA__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A3F0-8047A3F4 000AE4 0004+00 0/2 0/0 0/0 .rodata          @5121 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5121 = -210.0f;
COMPILER_STRIP_GATE(0x8047A3F0, &lit_5121);
#pragma pop

/* 8047A3F4-8047A3F8 000AE8 0004+00 0/2 0/0 0/0 .rodata          @5122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5122 = 11000.0f;
COMPILER_STRIP_GATE(0x8047A3F4, &lit_5122);
#pragma pop

/* 8047A3F8-8047A3FC 000AEC 0004+00 0/1 0/0 0/0 .rodata          @5123 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5123 = -4700.0f;
COMPILER_STRIP_GATE(0x8047A3F8, &lit_5123);
#pragma pop

/* 8047A3FC-8047A400 000AF0 0004+00 0/2 0/0 0/0 .rodata          @5124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5124 = -590.0f;
COMPILER_STRIP_GATE(0x8047A3FC, &lit_5124);
#pragma pop

/* 8047A400-8047A404 000AF4 0004+00 0/2 0/0 0/0 .rodata          @5125 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5125 = 11600.0f;
COMPILER_STRIP_GATE(0x8047A400, &lit_5125);
#pragma pop

/* 804716D4-804717B4 002754 00E0+00 1/1 0/0 0/0 .text
 * setIconPosForLightBallAAtR00__12daObjCarry_cFv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setIconPosForLightBallAAtR00() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/setIconPosForLightBallAAtR00__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A404-8047A408 000AF8 0004+00 0/1 0/0 0/0 .rodata          @5150 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5150 = 5100.0f;
COMPILER_STRIP_GATE(0x8047A404, &lit_5150);
#pragma pop

/* 804717B4-80471894 002834 00E0+00 1/1 0/0 0/0 .text
 * setIconPosForLightBallBAtR00__12daObjCarry_cFv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setIconPosForLightBallBAtR00() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/setIconPosForLightBallBAtR00__12daObjCarry_cFv.s"
}
#pragma pop

/* 80471894-804718E8 002914 0054+00 1/1 0/0 0/0 .text resetIconPosForLightBallB__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::resetIconPosForLightBallB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/resetIconPosForLightBallB__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A408-8047A40C 000AFC 0004+00 0/1 0/0 0/0 .rodata          @5174 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5174 = 0x5F5F5FFF;
COMPILER_STRIP_GATE(0x8047A408, &lit_5174);
#pragma pop

/* 8047A40C-8047A410 000B00 0004+00 5/9 0/0 0/0 .rodata          @5550 */
SECTION_RODATA static f32 const lit_5550 = -1.0f;
COMPILER_STRIP_GATE(0x8047A40C, &lit_5550);

/* 8047A410-8047A414 000B04 0004+00 1/6 0/0 0/0 .rodata          @5551 */
SECTION_RODATA static f32 const lit_5551 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8047A410, &lit_5551);

/* 8047A414-8047A418 000B08 0004+00 1/6 0/0 0/0 .rodata          @5552 */
SECTION_RODATA static f32 const lit_5552 = 2.0f;
COMPILER_STRIP_GATE(0x8047A414, &lit_5552);

/* 8047A418-8047A41C 000B0C 0004+00 0/1 0/0 0/0 .rodata          @5553 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5553 = 10000.0f;
COMPILER_STRIP_GATE(0x8047A418, &lit_5553);
#pragma pop

/* 804718E8-8047233C 002968 0A54+00 1/1 0/0 0/0 .text            execute__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/execute__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047233C-80472460 0033BC 0124+00 1/1 0/0 0/0 .text            checkCulling__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::checkCulling() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkCulling__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A5F7 = "cc_ball";
SECTION_DEAD static char const* const stringBase_8047A5FF = "aa_hikari";
#pragma pop

/* 80472460-80472730 0034E0 02D0+00 1/1 0/0 0/0 .text            draw__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/draw__12daObjCarry_cFv.s"
}
#pragma pop

/* 80472730-80472734 0037B0 0004+00 1/1 0/0 0/0 .text            debugDraw__12daObjCarry_cFv */
void daObjCarry_c::debugDraw() {
    /* empty function */
}

/* ############################################################################################## */
/* 8047A41C-8047A420 000B10 0004+00 1/4 0/0 0/0 .rodata          @5812 */
SECTION_RODATA static f32 const lit_5812 = -1000000000.0f;
COMPILER_STRIP_GATE(0x8047A41C, &lit_5812);

/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A609 = "ミドナヒント用スイッチ立てました！\n";
#pragma pop

/* 80472734-80472B54 0037B4 0420+00 1/1 0/0 0/0 .text            _delete__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/_delete__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A420-8047A424 000B14 0004+00 0/1 0/0 0/0 .rodata          @5875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5875 = 5000.0f;
COMPILER_STRIP_GATE(0x8047A420, &lit_5875);
#pragma pop

/* 8047A424-8047A428 000B18 0004+00 0/2 0/0 0/0 .rodata          @5876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5876 = -20.0f;
COMPILER_STRIP_GATE(0x8047A424, &lit_5876);
#pragma pop

/* 80472B54-80472D8C 003BD4 0238+00 1/1 0/0 0/0 .text            crr_pos__12daObjCarry_cFv */
#ifdef NONMATCHING
void daObjCarry_c::crr_pos() {
    
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::crr_pos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/crr_pos__12daObjCarry_cFv.s"
}
#pragma pop
#endif

/* 80472D8C-80472E5C 003E0C 00D0+00 1/1 0/0 0/0 .text            check_sink__12daObjCarry_cFPf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::check_sink(f32* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/check_sink__12daObjCarry_cFPf.s"
}
#pragma pop

/* 80472E5C-80472EF0 003EDC 0094+00 4/4 0/0 0/0 .text            calc_gravity__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_gravity() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_gravity__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A428-8047A42C 000B1C 0004+00 0/4 0/0 0/0 .rodata          @5949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5949 = 50.0f;
COMPILER_STRIP_GATE(0x8047A428, &lit_5949);
#pragma pop

/* 8047A42C-8047A430 000B20 0004+00 0/2 0/0 0/0 .rodata          @5950 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5950 = 0x43360B61;
COMPILER_STRIP_GATE(0x8047A42C, &lit_5950);
#pragma pop

/* 80472EF0-80473050 003F70 0160+00 1/1 0/0 0/0 .text            checkRollAngle__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::checkRollAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/checkRollAngle__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A430-8047A434 000B24 0004+00 1/1 0/0 0/0 .rodata          @6023 */
SECTION_RODATA static f32 const lit_6023 = 250.0f;
COMPILER_STRIP_GATE(0x8047A430, &lit_6023);

/* 8047B1DC-8047B1E0 -00001 0004+00 4/4 0/0 0/0 .bss             None */
/* 8047B1DC 0001+00 data_8047B1DC None */
/* 8047B1DD 0001+00 data_8047B1DD None */
/* 8047B1DE 0001+00 data_8047B1DE None */
/* 8047B1DF 0001+00 data_8047B1DF None */
static u8 struct_8047B1DC[4];

/* 80473050-804733E8 0040D0 0398+00 1/1 0/0 0/0 .text            mode_proc_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_call__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A434-8047A438 000B28 0004+00 8/9 0/0 0/0 .rodata          @6043 */
SECTION_RODATA static f32 const lit_6043 = -100.0f;
COMPILER_STRIP_GATE(0x8047A434, &lit_6043);

/* 804733E8-804734B0 004468 00C8+00 15/15 0/0 0/0 .text            mode_init_wait__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_wait__12daObjCarry_cFv.s"
}
#pragma pop

/* 804734B0-80473718 004530 0268+00 1/0 0/0 0/0 .text            mode_proc_wait__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_wait__12daObjCarry_cFv.s"
}
#pragma pop

/* 80473718-804737CC 004798 00B4+00 5/5 0/0 0/0 .text            mode_init_walk__12daObjCarry_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_walk(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_walk__12daObjCarry_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A438-8047A43C 000B2C 0004+00 0/2 0/0 0/0 .rodata          @6324 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6324 = 25.0f;
COMPILER_STRIP_GATE(0x8047A438, &lit_6324);
#pragma pop

/* 8047A43C-8047A440 000B30 0004+00 0/3 0/0 0/0 .rodata          @6325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6325 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8047A43C, &lit_6325);
#pragma pop

/* 8047A440-8047A444 000B34 0004+00 0/5 0/0 0/0 .rodata          @6326 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6326 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8047A440, &lit_6326);
#pragma pop

/* 8047A444-8047A448 000B38 0004+00 0/3 0/0 0/0 .rodata          @6327 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6327 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x8047A444, &lit_6327);
#pragma pop

/* 8047A448-8047A44C 000B3C 0004+00 0/1 0/0 0/0 .rodata          @6328 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6328 = 0x3C23D70B;
COMPILER_STRIP_GATE(0x8047A448, &lit_6328);
#pragma pop

/* 804737CC-80473ED8 00484C 070C+00 1/0 0/0 0/0 .text            mode_proc_walk__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_walk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_walk__12daObjCarry_cFv.s"
}
#pragma pop

/* 80473ED8-804741A8 004F58 02D0+00 2/2 0/0 0/0 .text            mode_init_carry__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_carry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_carry__12daObjCarry_cFv.s"
}
#pragma pop

/* 804741A8-80474448 005228 02A0+00 1/0 0/0 0/0 .text            mode_proc_carry__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_carry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_carry__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A44C-8047A450 000B40 0004+00 2/2 0/0 0/0 .rodata          @6496 */
SECTION_RODATA static f32 const lit_6496 = -2.0f;
COMPILER_STRIP_GATE(0x8047A44C, &lit_6496);

/* 80474448-80474540 0054C8 00F8+00 3/3 0/0 1/1 .text            mode_init_drop__12daObjCarry_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_drop(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_drop__12daObjCarry_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A450-8047A454 000B44 0004+00 1/1 0/0 0/0 .rodata          @6526 */
SECTION_RODATA static f32 const lit_6526 = 40.0f;
COMPILER_STRIP_GATE(0x8047A450, &lit_6526);

/* 80474540-80474618 0055C0 00D8+00 1/0 0/0 0/0 .text            mode_proc_drop__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_drop__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A454-8047A458 000B48 0004+00 0/2 0/0 0/0 .rodata          @6564 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6564 = 3000.0f;
COMPILER_STRIP_GATE(0x8047A454, &lit_6564);
#pragma pop

/* 8047A458-8047A45C 000B4C 0004+00 0/1 0/0 0/0 .rodata          @6565 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6565 = -12.0f;
COMPILER_STRIP_GATE(0x8047A458, &lit_6565);
#pragma pop

/* 8047A45C-8047A460 000B50 0004+00 0/1 0/0 0/0 .rodata          @6566 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6566 = -10.0f;
COMPILER_STRIP_GATE(0x8047A45C, &lit_6566);
#pragma pop

/* 80474618-80474734 005698 011C+00 2/2 0/0 0/0 .text            mode_init_float__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_float() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_float__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A460-8047A464 000B54 0004+00 0/2 0/0 0/0 .rodata          @6619 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6619 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8047A460, &lit_6619);
#pragma pop

/* 8047A464-8047A468 000B58 0004+00 0/3 0/0 0/0 .rodata          @6620 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6620 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8047A464, &lit_6620);
#pragma pop

/* 8047A468-8047A46C 000B5C 0004+00 0/1 0/0 0/0 .rodata          @6621 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6621 = 1200.0f;
COMPILER_STRIP_GATE(0x8047A468, &lit_6621);
#pragma pop

/* 8047A46C-8047A470 000B60 0004+00 0/1 0/0 0/0 .rodata          @6622 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6622 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x8047A46C, &lit_6622);
#pragma pop

/* 80474734-80474A08 0057B4 02D4+00 1/0 0/0 0/0 .text            mode_proc_float__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_float() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_float__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A470-8047A474 000B64 0004+00 0/1 0/0 0/0 .rodata          @6683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6683 = -5.0f;
COMPILER_STRIP_GATE(0x8047A470, &lit_6683);
#pragma pop

/* 8047A474-8047A478 000B68 0004+00 0/2 0/0 0/0 .rodata          @6684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6684 = 5.0f;
COMPILER_STRIP_GATE(0x8047A474, &lit_6684);
#pragma pop

/* 8047A478-8047A47C 000B6C 0004+00 0/3 0/0 0/0 .rodata          @6685 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6685 = -15.0f;
COMPILER_STRIP_GATE(0x8047A478, &lit_6685);
#pragma pop

/* 8047A47C-8047A480 000B70 0004+00 0/2 0/0 0/0 .rodata          @6686 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6686 = 13.0f;
COMPILER_STRIP_GATE(0x8047A47C, &lit_6686);
#pragma pop

/* 8047A480-8047A484 000B74 0004+00 0/2 0/0 0/0 .rodata          @6687 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6687 = -0.25f;
COMPILER_STRIP_GATE(0x8047A480, &lit_6687);
#pragma pop

/* 80474A08-80474B8C 005A88 0184+00 2/2 0/0 0/0 .text            mode_init_sink__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_sink() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_sink__12daObjCarry_cFv.s"
}
#pragma pop

/* 80474B8C-80474D64 005C0C 01D8+00 1/0 0/0 0/0 .text            mode_proc_sink__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_sink() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_sink__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A484-8047A488 000B78 0004+00 1/1 0/0 0/0 .rodata          @6757 */
SECTION_RODATA static f32 const lit_6757 = -6.0f;
COMPILER_STRIP_GATE(0x8047A484, &lit_6757);

/* 80474D64-80474E08 005DE4 00A4+00 1/1 0/0 0/0 .text            mode_init_yogan__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_yogan() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_yogan__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A488-8047A48C 000B7C 0004+00 1/1 0/0 0/0 .rodata          @6767 */
SECTION_RODATA static f32 const lit_6767 = 200.0f;
COMPILER_STRIP_GATE(0x8047A488, &lit_6767);

/* 8047A48C-8047A490 000B80 0004+00 1/1 0/0 0/0 .rodata          @6768 */
SECTION_RODATA static f32 const lit_6768 = 13.0f / 20.0f;
COMPILER_STRIP_GATE(0x8047A48C, &lit_6768);

/* 80474E08-80474E98 005E88 0090+00 1/0 0/0 0/0 .text            mode_proc_yogan__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_yogan() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_yogan__12daObjCarry_cFv.s"
}
#pragma pop

/* 80474E98-80474EA0 005F18 0008+00 1/0 0/0 0/0 .text            mode_proc_magne__12daObjCarry_cFv
 */
bool daObjCarry_c::mode_proc_magne() {
    return true;
}

/* 80474EA0-80474EA8 005F20 0008+00 1/0 0/0 0/0 .text mode_proc_magneCarry__12daObjCarry_cFv */
bool daObjCarry_c::mode_proc_magneCarry() {
    return true;
}

/* 80474EA8-80474FA8 005F28 0100+00 1/1 0/0 0/0 .text mode_init_boomCarry__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_boomCarry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_boomCarry__12daObjCarry_cFv.s"
}
#pragma pop

/* 80474FA8-80475014 006028 006C+00 1/0 0/0 0/0 .text mode_proc_boomCarry__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_boomCarry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_boomCarry__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475014-804750C8 006094 00B4+00 1/1 0/0 0/0 .text            mode_init_growth__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_growth() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_growth__12daObjCarry_cFv.s"
}
#pragma pop

/* 804750C8-8047515C 006148 0094+00 1/0 0/0 0/0 .text            mode_proc_growth__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_growth() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_growth__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047515C-80475164 0061DC 0008+00 1/0 0/0 0/0 .text            mode_proc_end__12daObjCarry_cFv */
bool daObjCarry_c::mode_proc_end() {
    return true;
}

/* 80475164-80475210 0061E4 00AC+00 1/1 0/0 0/0 .text            mode_init_dbDrop__12daObjCarry_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_dbDrop(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_dbDrop__12daObjCarry_cFUc.s"
}
#pragma pop

/* 80475210-80475238 006290 0028+00 1/0 0/0 0/0 .text            mode_proc_dbDrop__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_dbDrop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_dbDrop__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475238-80475354 0062B8 011C+00 1/1 0/0 0/0 .text mode_init_hookCarry__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_hookCarry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_hookCarry__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475354-80475384 0063D4 0030+00 1/0 0/0 0/0 .text mode_proc_hookCarry__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_hookCarry() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_hookCarry__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475384-80475450 006404 00CC+00 2/2 0/0 0/0 .text            mode_init_fit__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_fit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_fit__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475450-80475478 0064D0 0028+00 1/0 0/0 0/0 .text            mode_proc_fit__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_fit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_fit__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475478-804754D0 0064F8 0058+00 1/0 0/0 0/0 .text mode_proc_controled__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_controled() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_controled__12daObjCarry_cFv.s"
}
#pragma pop

/* 804754D0-80475598 006550 00C8+00 1/1 0/0 0/0 .text mode_init_resetLightBall__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_init_resetLightBall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_init_resetLightBall__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475598-80475618 006618 0080+00 1/0 0/0 0/0 .text mode_proc_resetLightBall__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::mode_proc_resetLightBall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/mode_proc_resetLightBall__12daObjCarry_cFv.s"
}
#pragma pop

/* 80475618-8047567C 006698 0064+00 1/1 0/0 0/0 .text            chkSinkAll__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::chkSinkAll() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/chkSinkAll__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047567C-804756D4 0066FC 0058+00 3/3 0/0 0/0 .text            chkWaterLineIn__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::chkWaterLineIn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/chkWaterLineIn__12daObjCarry_cFv.s"
}
#pragma pop

/* 804756D4-8047573C 006754 0068+00 2/2 0/0 0/0 .text            chkSinkObj__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::chkSinkObj() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/chkSinkObj__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A490-8047A494 000B84 0004+00 0/1 0/0 0/0 .rodata          @7451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7451 = 8.0f;
COMPILER_STRIP_GATE(0x8047A490, &lit_7451);
#pragma pop

/* 8047A494-8047A498 000B88 0004+00 0/1 0/0 0/0 .rodata          @7452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7452 = 1000.0f;
COMPILER_STRIP_GATE(0x8047A494, &lit_7452);
#pragma pop

/* 8047A498-8047A49C 000B8C 0004+00 0/1 0/0 0/0 .rodata          @7453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7453 = 900.0f;
COMPILER_STRIP_GATE(0x8047A498, &lit_7453);
#pragma pop

/* 8047573C-80476618 0067BC 0EDC+00 1/1 0/0 0/0 .text            bg_check__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_check() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_check__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A62D = "R_SP160";
#pragma pop

/* 80476618-80476764 007698 014C+00 2/2 0/0 0/0 .text check_bg_damage_proc_base__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::check_bg_damage_proc_base() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/check_bg_damage_proc_base__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476764-804767C4 0077E4 0060+00 7/4 0/0 0/0 .text bg_damage_proc_kotubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_kotubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_kotubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 804767C4-804767E4 007844 0020+00 3/0 0/0 0/0 .text bg_damage_proc_ootubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_ootubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_ootubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 804767E4-80476804 007864 0020+00 1/0 0/0 0/0 .text bg_damage_proc_kibako__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_kibako() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_kibako__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476804-8047680C 007884 0008+00 1/0 0/0 0/0 .text bg_damage_proc_ironball__12daObjCarry_cFv */
bool daObjCarry_c::bg_damage_proc_ironball() {
    return false;
}

/* 8047680C-8047682C 00788C 0020+00 1/0 0/0 0/0 .text bg_damage_proc_taru__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_taru() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_taru__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047682C-8047684C 0078AC 0020+00 1/0 0/0 0/0 .text bg_damage_proc_dokuro__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_dokuro() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_dokuro__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047684C-80476930 0078CC 00E4+00 1/0 0/0 0/0 .text bg_damage_proc_bokkuri__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476930-80476938 0079B0 0008+00 2/0 0/0 0/0 .text bg_damage_proc_LightBall__12daObjCarry_cFv
 */
bool daObjCarry_c::bg_damage_proc_LightBall() {
    return false;
}

/* 80476938-80476940 0079B8 0008+00 1/0 0/0 0/0 .text bg_damage_proc_Lv8Ball__12daObjCarry_cFv */
bool daObjCarry_c::bg_damage_proc_Lv8Ball() {
    return false;
}

/* 80476940-80476A5C 0079C0 011C+00 6/6 0/0 0/0 .text            obj_break__12daObjCarry_cFbbb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::obj_break(bool param_0, bool param_1, bool param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/obj_break__12daObjCarry_cFbbb.s"
}
#pragma pop

/* 80476A5C-80476B04 007ADC 00A8+00 1/1 0/0 0/0 .text check_cc_damage_proc_base__12daObjCarry_cFb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::check_cc_damage_proc_base(bool param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/check_cc_damage_proc_base__12daObjCarry_cFb.s"
}
#pragma pop

/* 80476B04-80476B68 007B84 0064+00 5/2 0/0 0/0 .text cc_damage_proc_kotubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_kotubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_kotubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476B68-80476B88 007BE8 0020+00 3/0 0/0 0/0 .text cc_damage_proc_ootubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_ootubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_ootubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476B88-80476CE4 007C08 015C+00 1/0 0/0 0/0 .text cc_damage_proc_kibako__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_kibako() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_kibako__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476CE4-80476E04 007D64 0120+00 1/0 0/0 0/0 .text cc_damage_proc_ironball__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_ironball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_ironball__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476E04-80476F88 007E84 0184+00 1/0 0/0 0/0 .text cc_damage_proc_taru__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_taru() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_taru__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476F88-80476FA8 008008 0020+00 1/0 0/0 0/0 .text cc_damage_proc_dokuro__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_dokuro() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_dokuro__12daObjCarry_cFv.s"
}
#pragma pop

/* 80476FA8-804771B0 008028 0208+00 1/0 0/0 0/0 .text cc_damage_proc_bokkuri__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop

/* 804771B0-804771B8 008230 0008+00 2/0 0/0 0/0 .text cc_damage_proc_LightBall__12daObjCarry_cFv
 */
bool daObjCarry_c::cc_damage_proc_LightBall() {
    return false;
}

/* 804771B8-804771C0 008238 0008+00 1/0 0/0 0/0 .text cc_damage_proc_Lv8Ball__12daObjCarry_cFv */
bool daObjCarry_c::cc_damage_proc_Lv8Ball() {
    return false;
}

/* ############################################################################################## */
/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A635 = "Always";
#pragma pop

/* 804771C0-8047731C 008240 015C+00 7/7 0/0 0/0 .text eff_break_tuboBmd__12daObjCarry_cFUs4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_tuboBmd(u16 param_0, cXyz param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_tuboBmd__12daObjCarry_cFUs4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A49C-8047A4A4 000B90 0006+02 1/1 0/0 0/0 .rodata          particle_id$7795 */
SECTION_RODATA static u8 const particle_id_7795[6 + 2 /* padding */] = {
    0x82,
    0xAB,
    0x82,
    0xAC,
    0x82,
    0xAD,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8047A49C, &particle_id_7795);

/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8047A63C = "BreakWoodBox.bmd";
#pragma pop

/* 8047731C-8047747C 00839C 0160+00 2/2 0/0 0/0 .text eff_break_kibakoBmd__12daObjCarry_cF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_kibakoBmd(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_kibakoBmd__12daObjCarry_cF4cXyz.s"
}
#pragma pop

/* 8047747C-804774D4 0084FC 0058+00 1/0 0/0 0/0 .text            eff_break_tsubo__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_tsubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_tsubo__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4A4-8047A4A8 000B98 0004+00 3/3 0/0 0/0 .rodata          @7860 */
SECTION_RODATA static f32 const lit_7860 = 1.5f;
COMPILER_STRIP_GATE(0x8047A4A4, &lit_7860);

/* 804774D4-8047752C 008554 0058+00 1/0 0/0 0/0 .text            eff_break_ootubo__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_ootubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_ootubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047752C-80477574 0085AC 0048+00 1/0 0/0 0/0 .text            eff_break_kibako__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_kibako() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_kibako__12daObjCarry_cFv.s"
}
#pragma pop

/* 80477574-80477578 0085F4 0004+00 1/0 0/0 0/0 .text eff_break_ironball__12daObjCarry_cFv */
void daObjCarry_c::eff_break_ironball() {
    /* empty function */
}

/* ############################################################################################## */
/* 8047A4A8-8047A4AC 000B9C 0004+00 1/1 0/0 0/0 .rodata          @7891 */
SECTION_RODATA static f32 const lit_7891 = 0.75f;
COMPILER_STRIP_GATE(0x8047A4A8, &lit_7891);

/* 80477578-804775BC 0085F8 0044+00 1/0 0/0 0/0 .text            eff_break_taru__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_taru() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_taru__12daObjCarry_cFv.s"
}
#pragma pop

/* 804775BC-80477614 00863C 0058+00 1/0 0/0 0/0 .text            eff_break_dokuro__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_dokuro() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_dokuro__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4AC-8047A4B4 000BA0 0006+02 0/1 0/0 0/0 .rodata          particle_id$7914 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const particle_id_7914[6 + 2 /* padding */] = {
    0x82,
    0x68,
    0x82,
    0x69,
    0x82,
    0x6A,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8047A4AC, &particle_id_7914);
#pragma pop

/* 80477614-80477798 008694 0184+00 1/0 0/0 0/0 .text            eff_break_bokkuri__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop

/* 80477798-804777F0 008818 0058+00 1/0 0/0 0/0 .text            eff_break_kotubo2__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_kotubo2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_kotubo2__12daObjCarry_cFv.s"
}
#pragma pop

/* 804777F0-804777F4 008870 0004+00 2/0 0/0 0/0 .text eff_break_LightBall__12daObjCarry_cFv */
void daObjCarry_c::eff_break_LightBall() {
    /* empty function */
}

/* 804777F4-8047784C 008874 0058+00 1/0 0/0 0/0 .text            eff_break_ootubo2__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_ootubo2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_ootubo2__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047784C-80477850 0088CC 0004+00 1/0 0/0 0/0 .text            eff_break_Lv8Ball__12daObjCarry_cFv
 */
void daObjCarry_c::eff_break_Lv8Ball() {
    /* empty function */
}

/* 80477850-804778A8 0088D0 0058+00 1/0 0/0 0/0 .text            eff_break_tsuboL8__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_tsuboL8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_tsuboL8__12daObjCarry_cFv.s"
}
#pragma pop

/* 804778A8-80477900 008928 0058+00 1/0 0/0 0/0 .text eff_break_ootuboL8__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_ootuboL8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_ootuboL8__12daObjCarry_cFv.s"
}
#pragma pop

/* 80477900-80477990 008980 0090+00 1/1 0/0 0/0 .text se_break__12daObjCarry_cFP13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::se_break(cBgS_PolyInfo* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/se_break__12daObjCarry_cFP13cBgS_PolyInfo.s"
}
#pragma pop

/* 80477990-80477A14 008A10 0084+00 1/1 0/0 0/0 .text se_put__12daObjCarry_cFP13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::se_put(cBgS_PolyInfo* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/se_put__12daObjCarry_cFP13cBgS_PolyInfo.s"
}
#pragma pop

/* 80477A14-80477A98 008A94 0084+00 1/1 0/0 0/0 .text            se_put_water__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::se_put_water() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/se_put_water__12daObjCarry_cFv.s"
}
#pragma pop

/* 80477A98-80477B1C 008B18 0084+00 1/1 0/0 0/0 .text            se_fall_water__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::se_fall_water() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/se_fall_water__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4B4-8047A4B8 000BA8 0004+00 0/1 0/0 0/0 .rodata          @8198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8198 = 0.25f;
COMPILER_STRIP_GATE(0x8047A4B4, &lit_8198);
#pragma pop

/* 80477B1C-80477FE0 008B9C 04C4+00 7/7 0/0 0/0 .text calc_rot_axis_base__12daObjCarry_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_base(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_base__12daObjCarry_cFUc.s"
}
#pragma pop

/* 80477FE0-80478004 009060 0024+00 2/0 0/0 0/0 .text calc_rot_axis_tsubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_tsubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_tsubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478004-80478028 009084 0024+00 3/0 0/0 0/0 .text calc_rot_axis_ootubo__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_ootubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_ootubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478028-8047814C 0090A8 0124+00 2/1 0/0 0/0 .text calc_rot_axis_kibako__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_kibako() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_kibako__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047814C-80478170 0091CC 0024+00 1/0 0/0 0/0 .text calc_rot_axis_ironball__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_ironball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_ironball__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478170-80478190 0091F0 0020+00 1/0 0/0 0/0 .text calc_rot_axis_taru__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_taru() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_taru__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478190-804781B4 009210 0024+00 1/0 0/0 0/0 .text calc_rot_axis_dokuro__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_dokuro() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_dokuro__12daObjCarry_cFv.s"
}
#pragma pop

/* 804781B4-804783C0 009234 020C+00 1/0 0/0 0/0 .text calc_rot_axis_bokkuri__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop

/* 804783C0-804783E4 009440 0024+00 1/0 0/0 0/0 .text calc_rot_axis_kotubo2__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_kotubo2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_kotubo2__12daObjCarry_cFv.s"
}
#pragma pop

/* 804783E4-80478408 009464 0024+00 2/0 0/0 0/0 .text calc_rot_axis_LightBall__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_LightBall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_LightBall__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478408-8047842C 009488 0024+00 1/0 0/0 0/0 .text calc_rot_axis_Lv8Ball__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_axis_Lv8Ball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_axis_Lv8Ball__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047842C-80478808 0094AC 03DC+00 2/2 0/0 0/0 .text            set_wind_power__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::set_wind_power() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/set_wind_power__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478808-80478828 009888 0020+00 3/0 0/0 0/0 .text            exec_proc_tsubo__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_tsubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_tsubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478828-80478848 0098A8 0020+00 3/0 0/0 0/0 .text            exec_proc_ootubo__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_ootubo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_ootubo__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478848-8047884C 0098C8 0004+00 1/0 0/0 0/0 .text            exec_proc_kibako__12daObjCarry_cFv
 */
void daObjCarry_c::exec_proc_kibako() {
    /* empty function */
}

/* 8047884C-804788C4 0098CC 0078+00 1/0 0/0 0/0 .text exec_proc_ironball__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_ironball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_ironball__12daObjCarry_cFv.s"
}
#pragma pop

/* 804788C4-804788C8 009944 0004+00 1/0 0/0 0/0 .text            exec_proc_taru__12daObjCarry_cFv */
void daObjCarry_c::exec_proc_taru() {
    /* empty function */
}

/* 804788C8-804788CC 009948 0004+00 1/0 0/0 0/0 .text            exec_proc_dokuro__12daObjCarry_cFv
 */
void daObjCarry_c::exec_proc_dokuro() {
    /* empty function */
}

/* 804788CC-80478C18 00994C 034C+00 1/0 0/0 0/0 .text            exec_proc_bokkuri__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_bokkuri() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_bokkuri__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478C18-80478CE4 009C98 00CC+00 2/0 0/0 0/0 .text exec_proc_LightBall__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_LightBall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_LightBall__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478CE4-80478D78 009D64 0094+00 1/0 0/0 0/0 .text            exec_proc_Lv8Ball__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::exec_proc_Lv8Ball() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/exec_proc_Lv8Ball__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478D78-80478F50 009DF8 01D8+00 1/1 0/0 0/0 .text bg_damage_proc_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::bg_damage_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/bg_damage_proc_call__12daObjCarry_cFv.s"
}
#pragma pop

/* 80478F50-80479128 009FD0 01D8+00 1/1 0/0 0/0 .text cc_damage_proc_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::cc_damage_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/cc_damage_proc_call__12daObjCarry_cFv.s"
}
#pragma pop

/* 80479128-804792D4 00A1A8 01AC+00 1/1 0/0 0/0 .text            eff_break_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::eff_break_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/eff_break_call__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047B1E0-8047B1E4 -00001 0004+00 3/3 0/0 0/0 .bss             None */
/* 8047B1E0 0001+00 data_8047B1E0 None */
/* 8047B1E1 0001+00 data_8047B1E1 None */
/* 8047B1E2 0002+00 data_8047B1E2 None */
static u8 struct_8047B1E0[4];

/* 804792D4-80479480 00A354 01AC+00 2/2 0/0 0/0 .text            calc_rot_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::calc_rot_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/calc_rot_call__12daObjCarry_cFv.s"
}
#pragma pop

/* 80479480-8047962C 00A500 01AC+00 1/1 0/0 0/0 .text obj_execute_proc_call__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::obj_execute_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/obj_execute_proc_call__12daObjCarry_cFv.s"
}
#pragma pop

/* 8047962C-80479648 00A6AC 001C+00 1/1 0/0 0/0 .text            setTgHitCallBack__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setTgHitCallBack() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/setTgHitCallBack__12daObjCarry_cFv.s"
}
#pragma pop

/* 80479648-80479664 00A6C8 001C+00 1/1 0/0 0/0 .text            setCoHitCallBack__12daObjCarry_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setCoHitCallBack() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/setCoHitCallBack__12daObjCarry_cFv.s"
}
#pragma pop

/* 80479664-80479810 00A6E4 01AC+00 1/1 0/0 0/0 .text            CreateInitCall__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::CreateInitCall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/CreateInitCall__12daObjCarry_cFv.s"
}
#pragma pop

/* 80479810-80479830 00A890 0020+00 1/0 0/0 0/0 .text            daObjCarry_Draw__FP12daObjCarry_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCarry_Draw(daObjCarry_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/daObjCarry_Draw__FP12daObjCarry_c.s"
}
#pragma pop

/* 80479830-80479850 00A8B0 0020+00 1/0 0/0 0/0 .text daObjCarry_Execute__FP12daObjCarry_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCarry_Execute(daObjCarry_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/daObjCarry_Execute__FP12daObjCarry_c.s"
}
#pragma pop

/* 80479850-80479870 00A8D0 0020+00 1/0 0/0 0/0 .text            daObjCarry_Delete__FP12daObjCarry_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCarry_Delete(daObjCarry_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/daObjCarry_Delete__FP12daObjCarry_c.s"
}
#pragma pop

/* 80479870-80479890 00A8F0 0020+00 1/0 0/0 0/0 .text            daObjCarry_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCarry_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/daObjCarry_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80479890-804798D8 00A910 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 804798D8-804798F4 00A958 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Sc>__FPSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_804798D8(void* _this, s8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/func_804798D8.s"
}
#pragma pop

/* 804798F4-804798FC 00A974 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804798F4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/func_804798F4.s"
}
#pragma pop

/* 804798FC-80479904 00A97C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804798FC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_carry/d_a_obj_carry/func_804798FC.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047A4B8-8047A4BC 000BAC 0004+00 0/0 0/0 0/0 .rodata          @8553 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8553 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x8047A4B8, &lit_8553);
#pragma pop

/* 8047A4BC-8047A4BC 000BB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
