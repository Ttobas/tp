/**
 * @file d_a_npc_zrz.cpp
 * 
*/

#include "rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__11daNpc_zrZ_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__11daNpc_zrZ_cFv();
extern "C" void create__11daNpc_zrZ_cFv();
extern "C" void CreateHeap__11daNpc_zrZ_cFv();
extern "C" void __dt__15J3DTevKColorAnmFv();
extern "C" void __ct__15J3DTevKColorAnmFv();
extern "C" void __dt__14J3DTevColorAnmFv();
extern "C" void __ct__14J3DTevColorAnmFv();
extern "C" void __dt__11J3DTexNoAnmFv();
extern "C" void __ct__11J3DTexNoAnmFv();
extern "C" void __dt__12J3DTexMtxAnmFv();
extern "C" void __ct__12J3DTexMtxAnmFv();
extern "C" void __dt__14J3DMatColorAnmFv();
extern "C" void __ct__14J3DMatColorAnmFv();
extern "C" void Delete__11daNpc_zrZ_cFv();
extern "C" void Execute__11daNpc_zrZ_cFv();
extern "C" void Draw__11daNpc_zrZ_cFv();
extern "C" void draw__11daNpc_zrZ_cFiifP11_GXColorS10i();
extern "C" void ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel();
extern "C" void createHeapCallBack__11daNpc_zrZ_cFP10fopAc_ac_c();
extern "C" void ctrlJointCallBack__11daNpc_zrZ_cFP8J3DJointi();
extern "C" static void s_sub__FPvPv();
extern "C" static void s_subCloth__FPvPv();
extern "C" static void s_subRock__FPvPv();
extern "C" void setParam__11daNpc_zrZ_cFv();
extern "C" void main__11daNpc_zrZ_cFv();
extern "C" void ctrlBtk__11daNpc_zrZ_cFv();
extern "C" void setAttnPos__11daNpc_zrZ_cFv();
extern "C" void setMtx__11daNpc_zrZ_cFv();
extern "C" void setExpressionAnm__11daNpc_zrZ_cFib();
extern "C" void setExpressionBtp__11daNpc_zrZ_cFi();
extern "C" void setExpression__11daNpc_zrZ_cFif();
extern "C" void setMotionAnm__11daNpc_zrZ_cFif();
extern "C" void setMotion__11daNpc_zrZ_cFifi();
extern "C" bool drawDbgInfo__11daNpc_zrZ_cFv();
extern "C" void drawOtherMdls__11daNpc_zrZ_cFv();
extern "C" void getTypeFromParam__11daNpc_zrZ_cFv();
extern "C" void isDelete__11daNpc_zrZ_cFv();
extern "C" void reset__11daNpc_zrZ_cFv();
extern "C" void playExpression__11daNpc_zrZ_cFv();
extern "C" void playMotion__11daNpc_zrZ_cFv();
extern "C" void chkAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i();
extern "C" void setAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i();
extern "C" void selectAction__11daNpc_zrZ_cFv();
extern "C" void doNormalAction__11daNpc_zrZ_cFi();
extern "C" void doEvent__11daNpc_zrZ_cFv();
extern "C" void setSkipZev__11daNpc_zrZ_cFii();
extern "C" void setLookMode__11daNpc_zrZ_cFi();
extern "C" void lookat__11daNpc_zrZ_cFv();
extern "C" void setExpressionTalkAfter__11daNpc_zrZ_cFv();
extern "C" void lightReady__11daNpc_zrZ_cFv();
extern "C" void setLightPos__11daNpc_zrZ_cFv();
extern "C" void lightPowerCalc__11daNpc_zrZ_cFi();
extern "C" void lightColorProc__11daNpc_zrZ_cFv();
extern "C" void ECut_helpPrince__11daNpc_zrZ_cFi();
extern "C" void ECut_comeHere__11daNpc_zrZ_cFi();
extern "C" void ECut_restoreLink__11daNpc_zrZ_cFi();
extern "C" void ECut_clothesGet__11daNpc_zrZ_cFi();
extern "C" void ECut_getAfter__11daNpc_zrZ_cFi();
extern "C" void ECut_sealRelease__11daNpc_zrZ_cFi();
extern "C" void ECut_srSkip__11daNpc_zrZ_cFi();
extern "C" void pullbackPlayer__11daNpc_zrZ_cFf();
extern "C" void wait__11daNpc_zrZ_cFPv();
extern "C" void comeHere__11daNpc_zrZ_cFPv();
extern "C" void comeHere2__11daNpc_zrZ_cFPv();
extern "C" void talk__11daNpc_zrZ_cFPv();
extern "C" void test__11daNpc_zrZ_cFPv();
extern "C" void himoCalc__11daNpc_zrZ_cFv();
extern "C" static void daNpc_zrZ_Create__FPv();
extern "C" static void daNpc_zrZ_Delete__FPv();
extern "C" static void daNpc_zrZ_Execute__FPv();
extern "C" static void daNpc_zrZ_Draw__FPv();
extern "C" static bool daNpc_zrZ_IsDelete__FPv();
extern "C" void calc__11J3DTexNoAnmCFPUs();
extern "C" void __dt__13daNpcF_Path_cFv();
extern "C" void __dt__16daNpcF_SPCurve_cFv();
extern "C" void __dt__18daNpcF_ActorMngr_cFv();
extern "C" void __ct__18daNpcF_ActorMngr_cFv();
extern "C" void __dt__15daNpcF_Lookat_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8daNpcF_cFv();
extern "C" void __ct__8daNpcF_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void setCollisions__8daNpcF_cFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80B9AE44(void* _this, int*);
extern "C" void __sinit_d_a_npc_zrz_cpp();
extern "C" void adjustShapeAngle__11daNpc_zrZ_cFv();
extern "C" void __dt__17daNpc_zrZ_Param_cFv();
extern "C" static void func_80B9AFC8();
extern "C" static void func_80B9AFD0();
extern "C" u8 const m__17daNpc_zrZ_Param_c[132];
extern "C" extern char const* const d_a_npc_zrz__stringBase0;
extern "C" void* mEvtCutNameList__11daNpc_zrZ_c[8];
extern "C" u8 mEvtCutList__11daNpc_zrZ_c[96];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void changeBckOnly__13mDoExt_bckAnmFP15J3DAnmTransform();
extern "C" void create__21mDoExt_invisibleModelFP8J3DModelUc();
extern "C" void entryDL__21mDoExt_invisibleModelFP4cXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_defaultSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setSkipZev__14dEvt_control_cFPvPc();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void setPtT__14dEvt_control_cFPv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getRunEventName__16dEvent_manager_cFv();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void initialize__18daNpcF_ActorMngr_cFv();
extern "C" void entry__18daNpcF_ActorMngr_cFP10fopAc_ac_c();
extern "C" void remove__18daNpcF_ActorMngr_cFv();
extern "C" void getActorP__18daNpcF_ActorMngr_cFv();
extern "C" void initialize__15daNpcF_MatAnm_cFv();
extern "C" void initialize__16daNpcF_SPCurve_cFP5dPathi();
extern "C" void initialize__13daNpcF_Path_cFv();
extern "C" void setPathInfo__13daNpcF_Path_cFUcScUc();
extern "C" void chkPassedDst__13daNpcF_Path_cF4cXyz();
extern "C" void getNextIdx__13daNpcF_Path_cFv();
extern "C" void getBeforeIdx__13daNpcF_Path_cFv();
extern "C" void setNextIdxDst__13daNpcF_Path_cF4cXyz();
extern "C" void initialize__15daNpcF_Lookat_cFv();
extern "C" void setParam__15daNpcF_Lookat_cFffffffffffffsP4cXyz();
extern "C" void calc__15daNpcF_Lookat_cFP10fopAc_ac_cPA4_fPP5csXyziii();
extern "C" void execute__8daNpcF_cFv();
extern "C" void draw__8daNpcF_cFiifP11_GXColorS10i();
extern "C" void tgHitCallBack__8daNpcF_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void srchAttnActor1__8daNpcF_cFPvPv();
extern "C" void setMtx2__8daNpcF_cFv();
extern "C" void initialize__8daNpcF_cFv();
extern "C" void getTrnsfrmKeyAnmP__8daNpcF_cFPci();
extern "C" void getTexPtrnAnmP__8daNpcF_cFPci();
extern "C" void getTexSRTKeyAnmP__8daNpcF_cFPci();
extern "C" void setMcaMorfAnm__8daNpcF_cFP18J3DAnmTransformKeyffiii();
extern "C" void setBckAnm__8daNpcF_cFP15J3DAnmTransformfiiib();
extern "C" void setBtpAnm__8daNpcF_cFP16J3DAnmTexPatternP12J3DModelDatafi();
extern "C" void setBtkAnm__8daNpcF_cFP19J3DAnmTextureSRTKeyP12J3DModelDatafi();
extern "C" void setEnvTevColor__8daNpcF_cFv();
extern "C" void setRoomNo__8daNpcF_cFv();
extern "C" void playExpressionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData();
extern "C" void playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData();
extern "C" void setLookatMtx__8daNpcF_cFiPif();
extern "C" void hitChk2__8daNpcF_cFP8dCcD_Cylii();
extern "C" void setDamage__8daNpcF_cFiii();
extern "C" void ctrlMsgAnm__8daNpcF_cFRiRiP10fopAc_ac_ci();
extern "C" void orderEvent__8daNpcF_cFiPcUsUsUcUs();
extern "C" void initTalk__8daNpcF_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcF_cFPiiPP10fopAc_ac_c();
extern "C" void step__8daNpcF_cFsiii();
extern "C" void setAngle__8daNpcF_cFs();
extern "C" void getDistTableIdx__8daNpcF_cFii();
extern "C" void getAttnActorP__8daNpcF_cFiPFPvPv_Pvffffsii();
extern "C" void chkFindPlayer2__8daNpcF_cFis();
extern "C" void daNpcF_offTmpBit__FUl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_efplight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_efplight_cut__FP15LIGHT_INFLUENCE();
extern "C" void dKy_set_allcol_ratio__Ff();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalize__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseS__FPsss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStop__7Z2SeMgrF10JAISoundIDUl();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void getTexNo__16J3DAnmTexPatternCFUsPUs();
extern "C" void initialize__14J3DMaterialAnmFv();
extern "C" void removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern();
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
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
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" u8 mCcDCyl__8daNpcF_c[68];
extern "C" extern void* __vt__8daNpcF_c[18];
extern "C" extern void* __vt__15daNpcF_MatAnm_c[4 + 6 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__14J3DMaterialAnm[4];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B9B220-80B9B220 000234 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9B220 = "zrZ";
SECTION_DEAD static char const* const stringBase_80B9B224 = "zrZ_GT";
SECTION_DEAD static char const* const stringBase_80B9B22B = "HELP_PRINCE";
SECTION_DEAD static char const* const stringBase_80B9B237 = "COME_HERE";
SECTION_DEAD static char const* const stringBase_80B9B241 = "RESTORE_LINK";
SECTION_DEAD static char const* const stringBase_80B9B24E = "CLOTHES_GET";
SECTION_DEAD static char const* const stringBase_80B9B25A = "GET_AFTER";
SECTION_DEAD static char const* const stringBase_80B9B264 = "SEAL_RELEASE";
SECTION_DEAD static char const* const stringBase_80B9B271 = "SR_SKIP";
SECTION_DEAD static char const* const stringBase_80B9B279 = "";
#pragma pop

/* 80B9B284-80B9B290 000000 000C+00 9/9 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B9B290-80B9B2A4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80B9B2A4-80B9B2AC 000020 0008+00 0/1 0/0 0/0 .data            l_bmdGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_bmdGetParamList[8] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9B2AC-80B9B2B4 000028 0008+00 0/1 0/0 0/0 .data            l_bmdGTGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_bmdGTGetParamList[8] = {
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80B9B2B4-80B9B2DC 000030 0028+00 0/2 0/0 0/0 .data            l_bckGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_bckGetParamList[40] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9B2DC-80B9B304 000058 0028+00 0/2 0/0 0/0 .data            l_bckGTGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_bckGTGetParamList[40] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80B9B304-80B9B30C 000080 0008+00 0/1 0/0 0/0 .data            l_btpGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_btpGetParamList[8] = {
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9B30C-80B9B314 000088 0008+00 0/1 0/0 0/0 .data            l_btpGTGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_btpGTGetParamList[8] = {
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80B9B314-80B9B31C 000090 0008+00 0/2 0/0 0/0 .data            l_btkGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_btkGetParamList[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9B31C-80B9B324 000098 0008+00 0/2 0/0 0/0 .data            l_btkGTGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_btkGTGetParamList[8] = {
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80B9B324-80B9B364 0000A0 0040+00 0/1 0/0 0/0 .data            l_evtGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_evtGetParamList[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80B9B364-80B9B370 0000E0 000C+00 1/0 0/0 0/0 .data            l_loadRes_ZRZa */
SECTION_DATA static u8 l_loadRes_ZRZa[12] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80B9B370-80B9B37C 0000EC 000C+00 1/0 0/0 0/0 .data            l_loadRes_ZRZ_GT */
SECTION_DATA static u8 l_loadRes_ZRZ_GT[12] = {
    0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80B9B37C-80B9B388 0000F8 000C+00 1/0 0/0 0/0 .data            l_loadRes_ZRZ0 */
SECTION_DATA static u8 l_loadRes_ZRZ0[12] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80B9B388-80B9B394 -00001 000C+00 2/2 0/0 0/0 .data            l_loadRes_list */
SECTION_DATA static void* l_loadRes_list[3] = {
    (void*)&l_loadRes_ZRZa,
    (void*)&l_loadRes_ZRZ_GT,
    (void*)&l_loadRes_ZRZ0,
};

/* 80B9B394-80B9B39C -00001 0008+00 2/8 0/0 0/0 .data            l_resNames */
SECTION_DATA static void* l_resNames[2] = {
    (void*)&d_a_npc_zrz__stringBase0,
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x4),
};

/* 80B9B39C-80B9B3BC -00001 0020+00 1/2 0/0 0/0 .data            l_evtNames */
SECTION_DATA static void* l_evtNames[8] = {
    (void*)NULL,
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0xB),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x17),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x21),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x2E),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x3A),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x44),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x51),
};

/* 80B9B3BC-80B9B3C0 -00001 0004+00 0/1 0/0 0/0 .data            l_myName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_myName = (void*)&d_a_npc_zrz__stringBase0;
#pragma pop

/* 80B9B3C0-80B9B3E0 -00001 0020+00 0/1 0/0 0/0 .data            mEvtCutNameList__11daNpc_zrZ_c */
#pragma push
#pragma force_active on
SECTION_DATA void* daNpc_zrZ_c::mEvtCutNameList[8] = {
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x59),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0xB),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x17),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x21),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x2E),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x3A),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x44),
    (void*)(((char*)&d_a_npc_zrz__stringBase0) + 0x51),
};
#pragma pop

/* 80B9B3E0-80B9B3EC -00001 000C+00 0/1 0/0 0/0 .data            @4022 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4022[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_helpPrince__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B3EC-80B9B3F8 -00001 000C+00 0/1 0/0 0/0 .data            @4023 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4023[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_comeHere__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B3F8-80B9B404 -00001 000C+00 0/1 0/0 0/0 .data            @4024 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4024[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_restoreLink__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B404-80B9B410 -00001 000C+00 0/1 0/0 0/0 .data            @4025 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4025[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_clothesGet__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B410-80B9B41C -00001 000C+00 0/1 0/0 0/0 .data            @4026 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4026[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_getAfter__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B41C-80B9B428 -00001 000C+00 0/1 0/0 0/0 .data            @4027 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4027[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_sealRelease__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B428-80B9B434 -00001 000C+00 0/1 0/0 0/0 .data            @4028 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4028[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_srSkip__11daNpc_zrZ_cFi,
};
#pragma pop

/* 80B9B434-80B9B494 0001B0 0060+00 0/2 0/0 0/0 .data            mEvtCutList__11daNpc_zrZ_c */
#pragma push
#pragma force_active on
SECTION_DATA u8 daNpc_zrZ_c::mEvtCutList[96] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B9B494-80B9B4A0 -00001 000C+00 1/1 0/0 0/0 .data            @4555 */
SECTION_DATA static void* lit_4555[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_zrZ_cFPv,
};

/* 80B9B4A0-80B9B4AC -00001 000C+00 1/1 0/0 0/0 .data            @4558 */
SECTION_DATA static void* lit_4558[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_zrZ_cFPv,
};

/* 80B9B4AC-80B9B524 -00001 0078+00 1/1 0/0 0/0 .data            @4796 */
SECTION_DATA static void* lit_4796[30] = {
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x134),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x134),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x134),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x150),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x150),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x200),
    (void*)(((char*)ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel) + 0x150),
};

/* 80B9B524-80B9B530 -00001 000C+00 1/1 0/0 0/0 .data            @5325 */
SECTION_DATA static void* lit_5325[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_zrZ_cFPv,
};

/* 80B9B530-80B9B53C -00001 000C+00 0/1 0/0 0/0 .data            @5430 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5430[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B53C-80B9B548 -00001 000C+00 0/1 0/0 0/0 .data            @5434 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5434[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)comeHere__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B548-80B9B554 -00001 000C+00 0/1 0/0 0/0 .data            @5436 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5436[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)comeHere2__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B554-80B9B560 -00001 000C+00 0/1 0/0 0/0 .data            @5438 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5438[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B560-80B9B56C -00001 000C+00 0/1 0/0 0/0 .data            @5478 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5478[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B56C-80B9B578 -00001 000C+00 0/1 0/0 0/0 .data            @5486 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5486[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_zrZ_cFPv,
};
#pragma pop

/* 80B9B578-80B9B714 -00001 019C+00 1/1 0/0 0/0 .data            @5908 */
SECTION_DATA static void* lit_5908[103] = {
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x3A0),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x598),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x5B0),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x40C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x414),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x438),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x598),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x45C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x480),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x488),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x490),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4B4),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4BC),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4C4),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4CC),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4F0),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x4F8),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x500),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x61C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x69C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x524),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x52C),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x534),
    (void*)(((char*)ECut_helpPrince__11daNpc_zrZ_cFi) + 0x53C),
};

/* 80B9B714-80B9B734 -00001 0020+00 1/0 0/0 0/0 .data            daNpc_zrZ_MethodTable */
static actor_method_class daNpc_zrZ_MethodTable = {
    (process_method_func)daNpc_zrZ_Create__FPv,
    (process_method_func)daNpc_zrZ_Delete__FPv,
    (process_method_func)daNpc_zrZ_Execute__FPv,
    (process_method_func)daNpc_zrZ_IsDelete__FPv,
    (process_method_func)daNpc_zrZ_Draw__FPv,
};

/* 80B9B734-80B9B764 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_ZRZ */
extern actor_process_profile_definition g_profile_NPC_ZRZ = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_NPC_ZRZ,           // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daNpc_zrZ_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  390,                    // mPriority
  &daNpc_zrZ_MethodTable, // sub_method
  0x08044100,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B9B764-80B9B770 0004E0 000C+00 2/2 0/0 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 80B9B770-80B9B7B8 0004EC 0048+00 2/2 0/0 0/0 .data            __vt__11daNpc_zrZ_c */
SECTION_DATA extern void* __vt__11daNpc_zrZ_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daNpc_zrZ_cFv,
    (void*)setParam__11daNpc_zrZ_cFv,
    (void*)main__11daNpc_zrZ_cFv,
    (void*)ctrlBtk__11daNpc_zrZ_cFv,
    (void*)adjustShapeAngle__11daNpc_zrZ_cFv,
    (void*)setMtx__11daNpc_zrZ_cFv,
    (void*)setMtx2__8daNpcF_cFv,
    (void*)setAttnPos__11daNpc_zrZ_cFv,
    (void*)setCollisions__8daNpcF_cFv,
    (void*)setExpressionAnm__11daNpc_zrZ_cFib,
    (void*)setExpressionBtp__11daNpc_zrZ_cFi,
    (void*)setExpression__11daNpc_zrZ_cFif,
    (void*)setMotionAnm__11daNpc_zrZ_cFif,
    (void*)setMotion__11daNpc_zrZ_cFifi,
    (void*)drawDbgInfo__11daNpc_zrZ_cFv,
    (void*)drawOtherMdls__11daNpc_zrZ_cFv,
};

/* 80B9B7B8-80B9B7C4 000534 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80B9B7C4-80B9B7E8 000540 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9AFD0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B9AFC8,
};

/* 80B9B7E8-80B9B7F4 000564 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80B9B7F4-80B9B800 000570 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80B9B800-80B9B80C 00057C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80B9B80C-80B9B818 000588 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcF_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcF_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcF_ActorMngr_cFv,
};

/* 80B9B818-80B9B824 000594 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80B9B824-80B9B830 0005A0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B9B830-80B9B83C 0005AC 000C+00 4/4 0/0 0/0 .data            __vt__16daNpcF_SPCurve_c */
SECTION_DATA extern void* __vt__16daNpcF_SPCurve_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daNpcF_SPCurve_cFv,
};

/* 80B9B83C-80B9B848 0005B8 000C+00 3/3 0/0 0/0 .data            __vt__13daNpcF_Path_c */
SECTION_DATA extern void* __vt__13daNpcF_Path_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daNpcF_Path_cFv,
};

/* 80B9B848-80B9B854 0005C4 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcF_Lookat_c */
SECTION_DATA extern void* __vt__15daNpcF_Lookat_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcF_Lookat_cFv,
};

/* 80B93DCC-80B93F84 0000EC 01B8+00 1/1 0/0 0/0 .text            __ct__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrZ_c::daNpc_zrZ_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B93F84-80B93FCC 0002A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80B93FCC-80B94014 0002EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80B94014-80B9423C 000334 0228+00 1/0 0/0 0/0 .text            __dt__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrZ_c::~daNpc_zrZ_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9AFEC-80B9B070 000000 0084+00 22/22 0/0 0/0 .rodata          m__17daNpc_zrZ_Param_c */
SECTION_RODATA u8 const daNpc_zrZ_Param_c::m[132] = {
    0x44, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x44, 0xAF, 0x00,
    0x00, 0x43, 0x7F, 0x00, 0x00, 0x44, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0xC1,
    0x20, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0xC2, 0x34, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x41, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x06, 0x00, 0x05, 0x00, 0x06, 0x42, 0xA0, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x43, 0x96,
    0x00, 0x00, 0xC3, 0x96, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x44, 0x96, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00, 0x45, 0x3B, 0x80, 0x00,
    0x41, 0xC8, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9AFEC, &daNpc_zrZ_Param_c::m);

/* 80B9B070-80B9B074 000084 0004+00 0/1 0/0 0/0 .rodata          @4449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4449 = -300.0f;
COMPILER_STRIP_GATE(0x80B9B070, &lit_4449);
#pragma pop

/* 80B9B074-80B9B078 000088 0004+00 0/1 0/0 0/0 .rodata          @4450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4450 = -50.0f;
COMPILER_STRIP_GATE(0x80B9B074, &lit_4450);
#pragma pop

/* 80B9B078-80B9B07C 00008C 0004+00 0/1 0/0 0/0 .rodata          @4451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4451 = 300.0f;
COMPILER_STRIP_GATE(0x80B9B078, &lit_4451);
#pragma pop

/* 80B9B07C-80B9B080 000090 0004+00 0/1 0/0 0/0 .rodata          @4452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4452 = 800.0f;
COMPILER_STRIP_GATE(0x80B9B07C, &lit_4452);
#pragma pop

/* 80B9423C-80B9453C 00055C 0300+00 1/1 0/0 0/0 .text            create__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/create__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B080-80B9B084 000094 0004+00 5/10 0/0 0/0 .rodata          @4521 */
SECTION_RODATA static f32 const lit_4521 = 1.0f;
COMPILER_STRIP_GATE(0x80B9B080, &lit_4521);

/* 80B9B084-80B9B088 000098 0004+00 6/15 0/0 0/0 .rodata          @4522 */
SECTION_RODATA static u8 const lit_4522[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9B084, &lit_4522);

/* 80B9453C-80B94838 00085C 02FC+00 1/1 0/0 0/0 .text            CreateHeap__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/CreateHeap__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B94838-80B94874 000B58 003C+00 1/1 0/0 0/0 .text            __dt__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::~J3DTevKColorAnm() {
extern "C" asm void __dt__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80B94874-80B9488C 000B94 0018+00 1/1 0/0 0/0 .text            __ct__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::J3DTevKColorAnm() {
extern "C" asm void __ct__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80B9488C-80B948C8 000BAC 003C+00 1/1 0/0 0/0 .text            __dt__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::~J3DTevColorAnm() {
extern "C" asm void __dt__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 80B948C8-80B948E0 000BE8 0018+00 1/1 0/0 0/0 .text            __ct__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::J3DTevColorAnm() {
extern "C" asm void __ct__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 80B948E0-80B94928 000C00 0048+00 1/1 0/0 0/0 .text            __dt__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::~J3DTexNoAnm() {
extern "C" asm void __dt__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80B94928-80B9494C 000C48 0024+00 1/1 0/0 0/0 .text            __ct__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::J3DTexNoAnm() {
extern "C" asm void __ct__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80B9494C-80B94988 000C6C 003C+00 1/1 0/0 0/0 .text            __dt__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::~J3DTexMtxAnm() {
extern "C" asm void __dt__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80B94988-80B949A0 000CA8 0018+00 1/1 0/0 0/0 .text            __ct__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::J3DTexMtxAnm() {
extern "C" asm void __ct__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80B949A0-80B949DC 000CC0 003C+00 1/1 0/0 0/0 .text            __dt__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::~J3DMatColorAnm() {
extern "C" asm void __dt__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 80B949DC-80B949F4 000CFC 0018+00 1/1 0/0 0/0 .text            __ct__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::J3DMatColorAnm() {
extern "C" asm void __ct__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 80B949F4-80B94A28 000D14 0034+00 1/1 0/0 0/0 .text            Delete__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::Delete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/Delete__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B94A28-80B94A48 000D48 0020+00 2/2 0/0 0/0 .text            Execute__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::Execute() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/Execute__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B94A48-80B94B34 000D68 00EC+00 1/1 0/0 0/0 .text            Draw__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::Draw() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/Draw__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B088-80B9B08C 00009C 0004+00 1/1 0/0 0/0 .rodata          @4675 */
SECTION_RODATA static f32 const lit_4675 = 20.0f;
COMPILER_STRIP_GATE(0x80B9B088, &lit_4675);

/* 80B9B08C-80B9B094 0000A0 0008+00 3/4 0/0 0/0 .rodata          @4677 */
SECTION_RODATA static u8 const lit_4677[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B08C, &lit_4677);

/* 80B94B34-80B94E18 000E54 02E4+00 1/1 0/0 0/0 .text draw__11daNpc_zrZ_cFiifP11_GXColorS10i */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::draw(int param_0, int param_1, f32 param_2, _GXColorS10* param_3,
                           int param_4) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/draw__11daNpc_zrZ_cFiifP11_GXColorS10i.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B094-80B9B0A0 0000A8 000C+00 0/1 0/0 0/0 .rodata          @4682 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4682[12] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x80B9B094, &lit_4682);
#pragma pop

/* 80B94E18-80B950F4 001138 02DC+00 2/1 0/0 0/0 .text
 * ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ctrlJoint__11daNpc_zrZ_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 80B950F4-80B95114 001414 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daNpc_zrZ_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/createHeapCallBack__11daNpc_zrZ_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80B95114-80B95160 001434 004C+00 1/1 0/0 0/0 .text ctrlJointCallBack__11daNpc_zrZ_cFP8J3DJointi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ctrlJointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ctrlJointCallBack__11daNpc_zrZ_cFP8J3DJointi.s"
}
#pragma pop

/* 80B95160-80B951AC 001480 004C+00 3/3 0/0 0/0 .text            s_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/s_sub__FPvPv.s"
}
#pragma pop

/* 80B951AC-80B951F8 0014CC 004C+00 1/1 0/0 0/0 .text            s_subCloth__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_subCloth(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/s_subCloth__FPvPv.s"
}
#pragma pop

/* 80B951F8-80B95244 001518 004C+00 1/1 0/0 0/0 .text            s_subRock__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_subRock(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/s_subRock__FPvPv.s"
}
#pragma pop

/* 80B95244-80B953CC 001564 0188+00 1/0 0/0 0/0 .text            setParam__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setParam__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B0A0-80B9B0A4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4945 = 8.5f;
COMPILER_STRIP_GATE(0x80B9B0A0, &lit_4945);
#pragma pop

/* 80B953CC-80B95598 0016EC 01CC+00 1/0 0/0 0/0 .text            main__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::main() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/main__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B0A4-80B9B0A8 0000B8 0004+00 5/9 0/0 0/0 .rodata          @4991 */
SECTION_RODATA static f32 const lit_4991 = -1.0f;
COMPILER_STRIP_GATE(0x80B9B0A4, &lit_4991);

/* 80B9B0A8-80B9B0AC 0000BC 0004+00 1/2 0/0 0/0 .rodata          @4992 */
SECTION_RODATA static f32 const lit_4992 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B9B0A8, &lit_4992);

/* 80B95598-80B956B4 0018B8 011C+00 1/1 0/0 0/0 .text            ctrlBtk__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ctrlBtk() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ctrlBtk__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B0AC-80B9B0B0 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5127 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5127 = -10.0f;
COMPILER_STRIP_GATE(0x80B9B0AC, &lit_5127);
#pragma pop

/* 80B9B0B0-80B9B0B4 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5128 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5128 = 10.0f;
COMPILER_STRIP_GATE(0x80B9B0B0, &lit_5128);
#pragma pop

/* 80B9B0B4-80B9B0B8 0000C8 0004+00 0/4 0/0 0/0 .rodata          @5129 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5129 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B9B0B4, &lit_5129);
#pragma pop

/* 80B9B0B8-80B9B0BC 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5130 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5130 = 125.0f;
COMPILER_STRIP_GATE(0x80B9B0B8, &lit_5130);
#pragma pop

/* 80B9B0BC-80B9B0C4 0000D0 0008+00 0/3 0/0 0/0 .rodata          @5131 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5131[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0BC, &lit_5131);
#pragma pop

/* 80B9B0C4-80B9B0CC 0000D8 0008+00 0/3 0/0 0/0 .rodata          @5132 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5132[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0C4, &lit_5132);
#pragma pop

/* 80B9B0CC-80B9B0D4 0000E0 0008+00 0/3 0/0 0/0 .rodata          @5133 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5133[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0CC, &lit_5133);
#pragma pop

/* 80B9B868-80B9B86C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80B9B86C-80B9B870 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80B9B870-80B9B874 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80B9B874-80B9B878 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80B9B878-80B9B87C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80B9B87C-80B9B880 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80B9B880-80B9B884 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80B9B884-80B9B888 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80B9B888-80B9B88C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80B9B88C-80B9B890 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80B9B890-80B9B894 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80B9B894-80B9B898 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80B9B898-80B9B89C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80B9B89C-80B9B8A0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80B9B8A0-80B9B8A4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80B9B8A4-80B9B8A8 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80B9B8A8-80B9B8B4 000048 000C+00 1/1 0/0 0/0 .bss             @4021 */
static u8 lit_4021[12];

/* 80B9B8B4-80B9B8B8 000054 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80B9B8B8-80B9B8C8 000058 000C+04 0/1 0/0 0/0 .bss             @4997 */
#pragma push
#pragma force_active on
static u8 lit_4997[12 + 4 /* padding */];
#pragma pop

/* 80B9B8C8-80B9B8D4 000068 000C+00 0/1 0/0 0/0 .bss             eyeOffset$4996 */
#pragma push
#pragma force_active on
static u8 eyeOffset[12];
#pragma pop

/* 80B956B4-80B95BB8 0019D4 0504+00 1/0 0/0 0/0 .text            setAttnPos__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setAttnPos__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B95BB8-80B95C6C 001ED8 00B4+00 1/0 0/0 0/0 .text            setMtx__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setMtx__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B95C6C-80B95DD0 001F8C 0164+00 1/0 0/0 0/0 .text            setExpressionAnm__11daNpc_zrZ_cFib
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setExpressionAnm(int param_0, bool param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setExpressionAnm__11daNpc_zrZ_cFib.s"
}
#pragma pop

/* 80B95DD0-80B95F10 0020F0 0140+00 1/0 0/0 0/0 .text            setExpressionBtp__11daNpc_zrZ_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setExpressionBtp(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setExpressionBtp__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* 80B95F10-80B95F3C 002230 002C+00 1/0 0/0 0/0 .text            setExpression__11daNpc_zrZ_cFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setExpression(int param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setExpression__11daNpc_zrZ_cFif.s"
}
#pragma pop

/* 80B95F3C-80B9612C 00225C 01F0+00 1/0 0/0 0/0 .text            setMotionAnm__11daNpc_zrZ_cFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setMotionAnm(int param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setMotionAnm__11daNpc_zrZ_cFif.s"
}
#pragma pop

/* 80B9612C-80B96170 00244C 0044+00 1/0 0/0 0/0 .text            setMotion__11daNpc_zrZ_cFifi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setMotion(int param_0, f32 param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setMotion__11daNpc_zrZ_cFifi.s"
}
#pragma pop

/* 80B96170-80B96178 002490 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__11daNpc_zrZ_cFv */
bool daNpc_zrZ_c::drawDbgInfo() {
    return false;
}

/* 80B96178-80B9617C 002498 0004+00 1/0 0/0 0/0 .text            drawOtherMdls__11daNpc_zrZ_cFv */
void daNpc_zrZ_c::drawOtherMdls() {
    /* empty function */
}

/* 80B9617C-80B961B4 00249C 0038+00 1/1 0/0 0/0 .text            getTypeFromParam__11daNpc_zrZ_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::getTypeFromParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/getTypeFromParam__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B961B4-80B96268 0024D4 00B4+00 1/1 0/0 0/0 .text            isDelete__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/isDelete__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B0D4-80B9B0D8 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5371 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5371 = 100.0f;
COMPILER_STRIP_GATE(0x80B9B0D4, &lit_5371);
#pragma pop

/* 80B96268-80B9652C 002588 02C4+00 1/1 0/0 0/0 .text            reset__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::reset() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/reset__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B0D8-80B9B0E4 0000EC 000C+00 0/1 0/0 0/0 .rodata          @5375 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5375[12] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9B0D8, &lit_5375);
#pragma pop

/* 80B9B0E4-80B9B0F0 0000F8 000C+00 0/1 0/0 0/0 .rodata          @5376 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5376[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0E4, &lit_5376);
#pragma pop

/* 80B9B0F0-80B9B0F8 000104 0008+00 0/1 0/0 0/0 .rodata          @5377 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5377[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0F0, &lit_5377);
#pragma pop

/* 80B9B0F8-80B9B104 00010C 000C+00 0/1 0/0 0/0 .rodata          @5378 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5378[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B0F8, &lit_5378);
#pragma pop

/* 80B9B104-80B9B108 000118 0004+00 0/1 0/0 0/0 .rodata          @5379 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5379[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9B104, &lit_5379);
#pragma pop

/* 80B9B108-80B9B110 00011C 0008+00 0/1 0/0 0/0 .rodata          @5380 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5380[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B108, &lit_5380);
#pragma pop

/* 80B9652C-80B96618 00284C 00EC+00 1/1 0/0 0/0 .text            playExpression__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::playExpression() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/playExpression__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B110-80B9B11C 000124 000C+00 0/1 0/0 0/0 .rodata          @5393 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5393[12] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B110, &lit_5393);
#pragma pop

/* 80B9B11C-80B9B120 000130 0004+00 0/1 0/0 0/0 .rodata          @5394 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5394[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9B11C, &lit_5394);
#pragma pop

/* 80B9B120-80B9B12C 000134 000C+00 0/1 0/0 0/0 .rodata          @5395 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5395[12] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9B120, &lit_5395);
#pragma pop

/* 80B9B12C-80B9B138 000140 000C+00 0/1 0/0 0/0 .rodata          @5396 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5396[12] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B12C, &lit_5396);
#pragma pop

/* 80B9B138-80B9B140 00014C 0008+00 0/1 0/0 0/0 .rodata          @5397 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5397[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B138, &lit_5397);
#pragma pop

/* 80B9B140-80B9B14C 000154 000C+00 0/1 0/0 0/0 .rodata          @5398 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5398[12] = {
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B140, &lit_5398);
#pragma pop

/* 80B9B14C-80B9B150 000160 0004+00 0/1 0/0 0/0 .rodata          @5399 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5399[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B9B14C, &lit_5399);
#pragma pop

/* 80B9B150-80B9B15C 000164 000C+00 0/1 0/0 0/0 .rodata          @5400 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5400[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B150, &lit_5400);
#pragma pop

/* 80B96618-80B96740 002938 0128+00 1/1 0/0 0/0 .text            playMotion__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::playMotion() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/playMotion__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B96740-80B9676C 002A60 002C+00 2/2 0/0 0/0 .text
 * chkAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::chkAction(int (daNpc_zrZ_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/chkAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i.s"
}
#pragma pop

/* 80B9676C-80B96814 002A8C 00A8+00 2/2 0/0 0/0 .text
 * setAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setAction(int (daNpc_zrZ_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setAction__11daNpc_zrZ_cFM11daNpc_zrZ_cFPCvPvPv_i.s"
}
#pragma pop

/* 80B96814-80B968E0 002B34 00CC+00 1/1 0/0 0/0 .text            selectAction__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::selectAction() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/selectAction__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B968E0-80B969F4 002C00 0114+00 1/1 0/0 0/0 .text            doNormalAction__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::doNormalAction(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/doNormalAction__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* 80B969F4-80B96DF0 002D14 03FC+00 1/1 0/0 0/0 .text            doEvent__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::doEvent() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/doEvent__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B96DF0-80B96E7C 003110 008C+00 1/1 0/0 0/0 .text            setSkipZev__11daNpc_zrZ_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setSkipZev(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setSkipZev__11daNpc_zrZ_cFii.s"
}
#pragma pop

/* 80B96E7C-80B96EA0 00319C 0024+00 11/11 0/0 0/0 .text            setLookMode__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setLookMode(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setLookMode__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B15C-80B9B168 000170 000C+00 0/1 0/0 0/0 .rodata          @5576 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5576[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B15C, &lit_5576);
#pragma pop

/* 80B9B168-80B9B16C 00017C 0004+00 0/1 0/0 0/0 .rodata          @5629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5629 = -80.0f;
COMPILER_STRIP_GATE(0x80B9B168, &lit_5629);
#pragma pop

/* 80B9B16C-80B9B170 000180 0004+00 0/1 0/0 0/0 .rodata          @5630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5630 = 80.0f;
COMPILER_STRIP_GATE(0x80B9B16C, &lit_5630);
#pragma pop

/* 80B9B170-80B9B174 000184 0004+00 0/1 0/0 0/0 .rodata          @5631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5631 = 40.0f;
COMPILER_STRIP_GATE(0x80B9B170, &lit_5631);
#pragma pop

/* 80B96EA0-80B97128 0031C0 0288+00 1/1 0/0 0/0 .text            lookat__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::lookat() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/lookat__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B97128-80B97160 003448 0038+00 1/1 0/0 0/0 .text setExpressionTalkAfter__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setExpressionTalkAfter() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setExpressionTalkAfter__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B97160-80B971BC 003480 005C+00 1/1 0/0 0/0 .text            lightReady__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::lightReady() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/lightReady__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B971BC-80B9723C 0034DC 0080+00 1/1 0/0 0/0 .text            setLightPos__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::setLightPos() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/setLightPos__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B174-80B9B178 000188 0004+00 0/1 0/0 0/0 .rodata          @5697 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5697 = 70.0f;
COMPILER_STRIP_GATE(0x80B9B174, &lit_5697);
#pragma pop

/* 80B9B178-80B9B17C 00018C 0004+00 0/1 0/0 0/0 .rodata          @5698 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5698 = 50.0f;
COMPILER_STRIP_GATE(0x80B9B178, &lit_5698);
#pragma pop

/* 80B9B17C-80B9B180 000190 0004+00 0/1 0/0 0/0 .rodata          @5699 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5699 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80B9B17C, &lit_5699);
#pragma pop

/* 80B9B180-80B9B184 000194 0004+00 0/1 0/0 0/0 .rodata          @5700 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5700 = 5.0f;
COMPILER_STRIP_GATE(0x80B9B180, &lit_5700);
#pragma pop

/* 80B9B184-80B9B188 000198 0004+00 0/1 0/0 0/0 .rodata          @5701 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5701 = 14.0f;
COMPILER_STRIP_GATE(0x80B9B184, &lit_5701);
#pragma pop

/* 80B9723C-80B972EC 00355C 00B0+00 1/1 0/0 0/0 .text            lightPowerCalc__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::lightPowerCalc(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/lightPowerCalc__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B188-80B9B198 00019C 0010+00 1/1 0/0 0/0 .rodata          key_frame$5706 */
SECTION_RODATA static u8 const key_frame[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0xBE, 0x00, 0x00, 0x00, 0xDC,
};
COMPILER_STRIP_GATE(0x80B9B188, &key_frame);

/* 80B9B198-80B9B1B8 0001AC 0020+00 1/1 0/0 0/0 .rodata          key_color$5707 */
SECTION_RODATA static u8 const key_color[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xC3, 0x00, 0x8A, 0x00, 0xFF,
    0x00, 0xFF, 0x00, 0xC3, 0x00, 0x8A, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
};
COMPILER_STRIP_GATE(0x80B9B198, &key_color);

/* 80B972EC-80B974BC 00360C 01D0+00 1/1 0/0 0/0 .text            lightColorProc__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::lightColorProc() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/lightColorProc__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B1B8-80B9B1C0 0001CC 0008+00 0/0 0/0 0/0 .rodata          @5782 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5782[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80B9B1B8, &lit_5782);
#pragma pop

/* 80B9B1C0-80B9B1C4 0001D4 0004+00 0/1 0/0 0/0 .rodata          @5900 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5900 = 0xC4608148;
COMPILER_STRIP_GATE(0x80B9B1C0, &lit_5900);
#pragma pop

/* 80B9B1C4-80B9B1C8 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5901 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5901 = 0x41690A3D;
COMPILER_STRIP_GATE(0x80B9B1C4, &lit_5901);
#pragma pop

/* 80B9B1C8-80B9B1CC 0001DC 0004+00 0/1 0/0 0/0 .rodata          @5902 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5902 = 0xC47AA117;
COMPILER_STRIP_GATE(0x80B9B1C8, &lit_5902);
#pragma pop

/* 80B9B1CC-80B9B1D0 0001E0 0004+00 1/1 0/0 0/0 .rodata          @5903 */
SECTION_RODATA static f32 const lit_5903 = 255.0f;
COMPILER_STRIP_GATE(0x80B9B1CC, &lit_5903);

/* 80B9B1D0-80B9B1D4 0001E4 0004+00 0/0 0/0 0/0 .rodata          @5904 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5904 = 60.0f;
COMPILER_STRIP_GATE(0x80B9B1D0, &lit_5904);
#pragma pop

/* 80B9B1D4-80B9B1DC 0001E8 0004+04 0/0 0/0 0/0 .rodata          @5905 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5905[1 + 1 /* padding */] = {
    30.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80B9B1D4, &lit_5905);
#pragma pop

/* 80B9B1DC-80B9B1E4 0001F0 0008+00 0/1 0/0 0/0 .rodata          @5907 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5907[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9B1DC, &lit_5907);
#pragma pop

/* 80B9B220-80B9B220 000234 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9B27A = "prm";
SECTION_DEAD static char const* const stringBase_80B9B27E = "timer";
#pragma pop

/* 80B974BC-80B97B78 0037DC 06BC+00 2/0 0/0 0/0 .text            ECut_helpPrince__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_helpPrince(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_helpPrince__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* 80B97B78-80B97D7C 003E98 0204+00 1/0 0/0 0/0 .text            ECut_comeHere__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_comeHere(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_comeHere__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B1E4-80B9B1E8 0001F8 0004+00 1/1 0/0 0/0 .rodata          @5984 */
SECTION_RODATA static f32 const lit_5984 = 500.0f;
COMPILER_STRIP_GATE(0x80B9B1E4, &lit_5984);

/* 80B97D7C-80B97EB4 00409C 0138+00 1/0 0/0 0/0 .text            ECut_restoreLink__11daNpc_zrZ_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_restoreLink(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_restoreLink__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B1E8-80B9B1EC 0001FC 0004+00 0/0 0/0 0/0 .rodata          @6066 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6066 = 0xFFC38AFF;
COMPILER_STRIP_GATE(0x80B9B1E8, &lit_6066);
#pragma pop

/* 80B9B1EC-80B9B1F0 000200 0004+00 0/1 0/0 0/0 .rodata          @6098 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6098 = -2.0f;
COMPILER_STRIP_GATE(0x80B9B1EC, &lit_6098);
#pragma pop

/* 80B97EB4-80B98540 0041D4 068C+00 1/0 0/0 0/0 .text            ECut_clothesGet__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_clothesGet(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_clothesGet__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B1F0-80B9B1F4 000204 0004+00 0/0 0/0 0/0 .rodata          @6099 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6099 = 11.0f / 20.0f;
COMPILER_STRIP_GATE(0x80B9B1F0, &lit_6099);
#pragma pop

/* 80B9B1F4-80B9B1F8 000208 0004+00 0/0 0/0 0/0 .rodata          @6100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6100 = 9.0f / 20.0f;
COMPILER_STRIP_GATE(0x80B9B1F4, &lit_6100);
#pragma pop

/* 80B9B1F8-80B9B1FC 00020C 0004+00 1/1 0/0 0/0 .rodata          @6101 */
SECTION_RODATA static f32 const lit_6101 = 120.0f;
COMPILER_STRIP_GATE(0x80B9B1F8, &lit_6101);

/* 80B98540-80B9877C 004860 023C+00 1/0 0/0 0/0 .text            ECut_getAfter__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_getAfter(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_getAfter__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B1FC-80B9B200 000210 0004+00 0/0 0/0 0/0 .rodata          @6102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6102 = 21105.0f;
COMPILER_STRIP_GATE(0x80B9B1FC, &lit_6102);
#pragma pop

/* 80B9B200-80B9B204 000214 0004+00 0/0 0/0 0/0 .rodata          @6103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6103 = 750.0f;
COMPILER_STRIP_GATE(0x80B9B200, &lit_6103);
#pragma pop

/* 80B9B204-80B9B208 000218 0004+00 0/0 0/0 0/0 .rodata          @6104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6104 = 1.5f;
COMPILER_STRIP_GATE(0x80B9B204, &lit_6104);
#pragma pop

/* 80B9B208-80B9B20C 00021C 0004+00 0/3 0/0 0/0 .rodata          @6231 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6231 = 3.0f;
COMPILER_STRIP_GATE(0x80B9B208, &lit_6231);
#pragma pop

/* 80B9877C-80B98ACC 004A9C 0350+00 1/0 0/0 0/0 .text            ECut_sealRelease__11daNpc_zrZ_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_sealRelease(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_sealRelease__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* 80B98ACC-80B98C34 004DEC 0168+00 1/0 0/0 0/0 .text            ECut_srSkip__11daNpc_zrZ_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::ECut_srSkip(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/ECut_srSkip__11daNpc_zrZ_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B20C-80B9B210 000220 0004+00 1/1 0/0 0/0 .rodata          @6287 */
SECTION_RODATA static f32 const lit_6287 = 1000.0f;
COMPILER_STRIP_GATE(0x80B9B20C, &lit_6287);

/* 80B98C34-80B98D04 004F54 00D0+00 1/1 0/0 0/0 .text            pullbackPlayer__11daNpc_zrZ_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::pullbackPlayer(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/pullbackPlayer__11daNpc_zrZ_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B210-80B9B214 000224 0004+00 0/1 0/0 0/0 .rodata          @6342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6342 = -120.0f;
COMPILER_STRIP_GATE(0x80B9B210, &lit_6342);
#pragma pop

/* 80B98D04-80B98F84 005024 0280+00 2/0 0/0 0/0 .text            wait__11daNpc_zrZ_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/wait__11daNpc_zrZ_cFPv.s"
}
#pragma pop

/* 80B98F84-80B998BC 0052A4 0938+00 1/0 0/0 0/0 .text            comeHere__11daNpc_zrZ_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::comeHere(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/comeHere__11daNpc_zrZ_cFPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B214-80B9B218 000228 0004+00 0/1 0/0 0/0 .rodata          @6785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6785 = 450.0f;
COMPILER_STRIP_GATE(0x80B9B214, &lit_6785);
#pragma pop

/* 80B998BC-80B9A0EC 005BDC 0830+00 1/0 0/0 0/0 .text            comeHere2__11daNpc_zrZ_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::comeHere2(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/comeHere2__11daNpc_zrZ_cFPv.s"
}
#pragma pop

/* 80B9A0EC-80B9A29C 00640C 01B0+00 2/0 0/0 0/0 .text            talk__11daNpc_zrZ_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::talk(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/talk__11daNpc_zrZ_cFPv.s"
}
#pragma pop

/* 80B9A29C-80B9A380 0065BC 00E4+00 3/0 0/0 0/0 .text            test__11daNpc_zrZ_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::test(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/test__11daNpc_zrZ_cFPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B218-80B9B21C 00022C 0004+00 0/1 0/0 0/0 .rodata          @6891 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6891 = 470.0f;
COMPILER_STRIP_GATE(0x80B9B218, &lit_6891);
#pragma pop

/* 80B9B21C-80B9B220 000230 0004+00 0/1 0/0 0/0 .rodata          @6892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6892 = 25.0f;
COMPILER_STRIP_GATE(0x80B9B21C, &lit_6892);
#pragma pop

/* 80B9A380-80B9A504 0066A0 0184+00 1/1 0/0 0/0 .text            himoCalc__11daNpc_zrZ_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrZ_c::himoCalc() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/himoCalc__11daNpc_zrZ_cFv.s"
}
#pragma pop

/* 80B9A504-80B9A524 006824 0020+00 1/0 0/0 0/0 .text            daNpc_zrZ_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrZ_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/daNpc_zrZ_Create__FPv.s"
}
#pragma pop

/* 80B9A524-80B9A544 006844 0020+00 1/0 0/0 0/0 .text            daNpc_zrZ_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrZ_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/daNpc_zrZ_Delete__FPv.s"
}
#pragma pop

/* 80B9A544-80B9A564 006864 0020+00 1/0 0/0 0/0 .text            daNpc_zrZ_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrZ_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/daNpc_zrZ_Execute__FPv.s"
}
#pragma pop

/* 80B9A564-80B9A584 006884 0020+00 1/0 0/0 0/0 .text            daNpc_zrZ_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrZ_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/daNpc_zrZ_Draw__FPv.s"
}
#pragma pop

/* 80B9A584-80B9A58C 0068A4 0008+00 1/0 0/0 0/0 .text            daNpc_zrZ_IsDelete__FPv */
static bool daNpc_zrZ_IsDelete(void* param_0) {
    return true;
}

/* 80B9A58C-80B9A5BC 0068AC 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void J3DTexNoAnm::calc(u16* param_0) const {
extern "C" asm void calc__11J3DTexNoAnmCFPUs() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/calc__11J3DTexNoAnmCFPUs.s"
}
#pragma pop

/* 80B9A5BC-80B9A61C 0068DC 0060+00 1/0 0/0 0/0 .text            __dt__13daNpcF_Path_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_Path_c::~daNpcF_Path_c() {
extern "C" asm void __dt__13daNpcF_Path_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__13daNpcF_Path_cFv.s"
}
#pragma pop

/* 80B9A61C-80B9A664 00693C 0048+00 1/0 0/0 0/0 .text            __dt__16daNpcF_SPCurve_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_SPCurve_c::~daNpcF_SPCurve_c() {
extern "C" asm void __dt__16daNpcF_SPCurve_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__16daNpcF_SPCurve_cFv.s"
}
#pragma pop

/* 80B9A664-80B9A6AC 006984 0048+00 5/4 0/0 0/0 .text            __dt__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c() {
extern "C" asm void __dt__18daNpcF_ActorMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80B9A6AC-80B9A6E8 0069CC 003C+00 2/2 0/0 0/0 .text            __ct__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_ActorMngr_c::daNpcF_ActorMngr_c() {
extern "C" asm void __ct__18daNpcF_ActorMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80B9A6E8-80B9A7B8 006A08 00D0+00 1/0 0/0 0/0 .text            __dt__15daNpcF_Lookat_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_Lookat_c::~daNpcF_Lookat_c() {
extern "C" asm void __dt__15daNpcF_Lookat_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__15daNpcF_Lookat_cFv.s"
}
#pragma pop

/* 80B9A7B8-80B9A7F4 006AD8 003C+00 5/5 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__5csXyzFv.s"
}
#pragma pop

/* 80B9A7F4-80B9A7F8 006B14 0004+00 2/2 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 80B9A7F8-80B9A834 006B18 003C+00 6/6 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__4cXyzFv.s"
}
#pragma pop

/* 80B9A834-80B9A838 006B54 0004+00 2/2 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 80B9A838-80B9AA84 006B58 024C+00 1/1 0/0 0/0 .text            __dt__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_c::~daNpcF_c() {
extern "C" asm void __dt__8daNpcF_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__8daNpcF_cFv.s"
}
#pragma pop

/* 80B9AA84-80B9AC74 006DA4 01F0+00 1/1 0/0 0/0 .text            __ct__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_c::daNpcF_c() {
extern "C" asm void __ct__8daNpcF_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__ct__8daNpcF_cFv.s"
}
#pragma pop

/* 80B9AC74-80B9ACE4 006F94 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80B9ACE4-80B9AD40 007004 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80B9AD40-80B9ADB0 007060 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80B9ADB0-80B9ADF8 0070D0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80B9ADF8-80B9ADFC 007118 0004+00 1/0 0/0 0/0 .text            setCollisions__8daNpcF_cFv */
// void daNpcF_c::setCollisions() {
extern "C" asm void setCollisions__8daNpcF_cFv() {
    /* empty function */
}

/* 80B9ADFC-80B9AE44 00711C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80B9AE44-80B9AE60 007164 001C+00 4/4 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80B9AE44(void* _this, int* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/func_80B9AE44.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B854-80B9B860 0005D0 000C+00 2/2 0/0 0/0 .data            __vt__17daNpc_zrZ_Param_c */
SECTION_DATA extern void* __vt__17daNpc_zrZ_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daNpc_zrZ_Param_cFv,
};

/* 80B9AE60-80B9AF7C 007180 011C+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_zrz_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_zrz_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__sinit_d_a_npc_zrz_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B9AE60, __sinit_d_a_npc_zrz_cpp);
#pragma pop

/* 80B9AF7C-80B9AF80 00729C 0004+00 1/0 0/0 0/0 .text            adjustShapeAngle__11daNpc_zrZ_cFv
 */
void daNpc_zrZ_c::adjustShapeAngle() {
    /* empty function */
}

/* 80B9AF80-80B9AFC8 0072A0 0048+00 2/1 0/0 0/0 .text            __dt__17daNpc_zrZ_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrZ_Param_c::~daNpc_zrZ_Param_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/__dt__17daNpc_zrZ_Param_cFv.s"
}
#pragma pop

/* 80B9AFC8-80B9AFD0 0072E8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9AFC8() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/func_80B9AFC8.s"
}
#pragma pop

/* 80B9AFD0-80B9AFD8 0072F0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B9AFD0() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrz/d_a_npc_zrz/func_80B9AFD0.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9B8D4-80B9B8D8 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80B9B8D4[4];
#pragma pop

/* 80B9B8D8-80B9B8DC 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80B9B8D8[4];
#pragma pop

/* 80B9B8DC-80B9B8E0 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B9B8DC[4];
#pragma pop

/* 80B9B8E0-80B9B8E4 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B9B8E0[4];
#pragma pop

/* 80B9B8E4-80B9B8E8 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B8E4[4];
#pragma pop

/* 80B9B8E8-80B9B8EC 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B8E8[4];
#pragma pop

/* 80B9B8EC-80B9B8F0 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B8EC[4];
#pragma pop

/* 80B9B8F0-80B9B8F4 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80B9B8F0[4];
#pragma pop

/* 80B9B8F4-80B9B8F8 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80B9B8F4[4];
#pragma pop

/* 80B9B8F8-80B9B8FC 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80B9B8F8[4];
#pragma pop

/* 80B9B8FC-80B9B900 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B9B8FC[4];
#pragma pop

/* 80B9B900-80B9B904 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B9B900[4];
#pragma pop

/* 80B9B904-80B9B908 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80B9B904[4];
#pragma pop

/* 80B9B908-80B9B90C 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B908[4];
#pragma pop

/* 80B9B90C-80B9B910 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B9B90C[4];
#pragma pop

/* 80B9B910-80B9B914 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80B9B910[4];
#pragma pop

/* 80B9B914-80B9B918 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80B9B914[4];
#pragma pop

/* 80B9B918-80B9B91C 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B9B918[4];
#pragma pop

/* 80B9B91C-80B9B920 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B91C[4];
#pragma pop

/* 80B9B920-80B9B924 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B9B920[4];
#pragma pop

/* 80B9B924-80B9B928 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B924[4];
#pragma pop

/* 80B9B928-80B9B92C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B928[4];
#pragma pop

/* 80B9B92C-80B9B930 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B92C[4];
#pragma pop

/* 80B9B930-80B9B934 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B9B930[4];
#pragma pop

/* 80B9B934-80B9B938 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B9B934[4];
#pragma pop

/* 80B9B220-80B9B220 000234 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
