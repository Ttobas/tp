/**
 * @file d_a_npc_zrc.cpp
 * 
*/

#include "rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__11daNpc_zrC_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__11daNpc_zrC_cFv();
extern "C" void create__11daNpc_zrC_cFv();
extern "C" void CreateHeap__11daNpc_zrC_cFv();
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
extern "C" void Delete__11daNpc_zrC_cFv();
extern "C" void Execute__11daNpc_zrC_cFv();
extern "C" void Draw__11daNpc_zrC_cFv();
extern "C" void ctrlJoint__11daNpc_zrC_cFP8J3DJointP8J3DModel();
extern "C" void createHeapCallBack__11daNpc_zrC_cFP10fopAc_ac_c();
extern "C" void ctrlJointCallBack__11daNpc_zrC_cFP8J3DJointi();
extern "C" void setParam__11daNpc_zrC_cFv();
extern "C" void main__11daNpc_zrC_cFv();
extern "C" void ctrlBtk__11daNpc_zrC_cFv();
extern "C" void setAttnPos__11daNpc_zrC_cFv();
extern "C" void setExpressionAnm__11daNpc_zrC_cFib();
extern "C" void setExpressionBtp__11daNpc_zrC_cFi();
extern "C" void setExpression__11daNpc_zrC_cFif();
extern "C" void setMotionAnm__11daNpc_zrC_cFif();
extern "C" void setMotion__11daNpc_zrC_cFifi();
extern "C" bool drawDbgInfo__11daNpc_zrC_cFv();
extern "C" void drawOtherMdls__11daNpc_zrC_cFv();
extern "C" void getTypeFromParam__11daNpc_zrC_cFv();
extern "C" void isDelete__11daNpc_zrC_cFv();
extern "C" void reset__11daNpc_zrC_cFv();
extern "C" void playExpression__11daNpc_zrC_cFv();
extern "C" void playMotion__11daNpc_zrC_cFv();
extern "C" void playMotionAnm2__11daNpc_zrC_cFPPPQ28daNpcF_c18daNpcF_anmPlayData();
extern "C" void chkAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i();
extern "C" void setAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i();
extern "C" void selectAction__11daNpc_zrC_cFv();
extern "C" void doNormalAction__11daNpc_zrC_cFi();
extern "C" void doEvent__11daNpc_zrC_cFv();
extern "C" void setLookMode__11daNpc_zrC_cFi();
extern "C" void lookat__11daNpc_zrC_cFv();
extern "C" void setExpressionTalkAfter__11daNpc_zrC_cFv();
extern "C" void wait__11daNpc_zrC_cFPv();
extern "C" void waitSick__11daNpc_zrC_cFPv();
extern "C" void waitPray__11daNpc_zrC_cFPv();
extern "C" void waitThrone__11daNpc_zrC_cFPv();
extern "C" void talk__11daNpc_zrC_cFPv();
extern "C" void test__11daNpc_zrC_cFPv();
extern "C" void ECut_earringGet__11daNpc_zrC_cFi();
extern "C" static void daNpc_zrC_Create__FPv();
extern "C" static void daNpc_zrC_Delete__FPv();
extern "C" static void daNpc_zrC_Execute__FPv();
extern "C" static void daNpc_zrC_Draw__FPv();
extern "C" static bool daNpc_zrC_IsDelete__FPv();
extern "C" void calc__11J3DTexNoAnmCFPUs();
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
extern "C" void __sinit_d_a_npc_zrc_cpp();
extern "C" void adjustShapeAngle__11daNpc_zrC_cFv();
extern "C" void __dt__17daNpc_zrC_Param_cFv();
extern "C" static void func_80B931D8();
extern "C" static void func_80B931E0();
extern "C" u8 const m__17daNpc_zrC_Param_c[116];
extern "C" extern char const* const d_a_npc_zrc__stringBase0;
extern "C" void* mEvtCutNameList__11daNpc_zrC_c[2];
extern "C" u8 mEvtCutList__11daNpc_zrC_c[24];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void changeBckOnly__13mDoExt_bckAnmFP15J3DAnmTransform();
extern "C" void setMorf__13mDoExt_morf_cFf();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderChangeEventId__FP10fopAc_ac_csUsUs();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void lineCheck__11fopAcM_lc_cFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
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
extern "C" void initialize__15daNpcF_Lookat_cFv();
extern "C" void setParam__15daNpcF_Lookat_cFffffffffffffsP4cXyz();
extern "C" void calc__15daNpcF_Lookat_cFP10fopAc_ac_cPA4_fPP5csXyziii();
extern "C" void execute__8daNpcF_cFv();
extern "C" void draw__8daNpcF_cFiifP11_GXColorS10i();
extern "C" void tgHitCallBack__8daNpcF_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void srchAttnActor1__8daNpcF_cFPvPv();
extern "C" void setMtx__8daNpcF_cFv();
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
extern "C" void setLookatMtx__8daNpcF_cFiPif();
extern "C" void hitChk2__8daNpcF_cFP8dCcD_Cylii();
extern "C" void setDamage__8daNpcF_cFiii();
extern "C" void ctrlMsgAnm__8daNpcF_cFRiRiP10fopAc_ac_ci();
extern "C" void orderEvent__8daNpcF_cFiPcUsUsUcUs();
extern "C" void changeEvent__8daNpcF_cFPcPcUsUs();
extern "C" void initTalk__8daNpcF_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcF_cFPiiPP10fopAc_ac_c();
extern "C" void step__8daNpcF_cFsiii();
extern "C" void setAngle__8daNpcF_cFs();
extern "C" void getDistTableIdx__8daNpcF_cFii();
extern "C" void getAttnActorP__8daNpcF_cFiPFPvPv_Pvffffsii();
extern "C" void chkFindPlayer2__8daNpcF_cFis();
extern "C" void daNpcF_chkEvtBit__FUl();
extern "C" void daNpcF_offTmpBit__FUl();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_chaseS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void getTexNo__16J3DAnmTexPatternCFUsPUs();
extern "C" void initialize__14J3DMaterialAnmFv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
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
/* 80B9369C-80B9369C 0004A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B9369C = "EARRING_GET";
SECTION_DEAD static char const* const stringBase_80B936A8 = "zrC";
SECTION_DEAD static char const* const stringBase_80B936AC = "zrC1";
SECTION_DEAD static char const* const stringBase_80B936B1 = "zrC2";
SECTION_DEAD static char const* const stringBase_80B936B6 = "zrC_MDL";
SECTION_DEAD static char const* const stringBase_80B936BE = "zrC_TW";
SECTION_DEAD static char const* const stringBase_80B936C5 = "zrC_Sick";
SECTION_DEAD static char const* const stringBase_80B936CE = "zrC_EGD";
SECTION_DEAD static char const* const stringBase_80B936D6 = "";
#pragma pop

/* 80B936E8-80B936F4 000000 000C+00 4/4 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B936F4-80B93708 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80B93708-80B93718 000020 0010+00 1/1 0/0 0/0 .data            l_bmdGetParamList */
SECTION_DATA static u8 l_bmdGetParamList[16] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
};

/* 80B93718-80B93818 000030 0100+00 1/2 0/0 0/0 .data            l_bckGetParamList */
SECTION_DATA static u8 l_bckGetParamList[256] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
};

/* 80B93818-80B93890 000130 0078+00 1/1 0/0 0/0 .data            l_btpGetParamList */
SECTION_DATA static u8 l_btpGetParamList[120] = {
    0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x05,
};

/* 80B93890-80B938B8 0001A8 0028+00 1/2 0/0 0/0 .data            l_btkGetParamList */
SECTION_DATA static u8 l_btkGetParamList[40] = {
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01,
};

/* 80B938B8-80B938C8 0001D0 0010+00 0/2 0/0 0/0 .data            l_evtGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_evtGetParamList[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06,
};
#pragma pop

/* 80B938C8-80B938D0 -00001 0008+00 0/2 0/0 0/0 .data            l_evtNames */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_evtNames[2] = {
    (void*)NULL,
    (void*)&d_a_npc_zrc__stringBase0,
};
#pragma pop

/* 80B938D0-80B938E4 0001E8 0014+00 1/0 0/0 0/0 .data            l_loadRes_ZRCa */
SECTION_DATA static u8 l_loadRes_ZRCa[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 80B938E4-80B938F8 0001FC 0014+00 1/0 0/0 0/0 .data            l_loadRes_ZRC_SICK */
SECTION_DATA static u8 l_loadRes_ZRC_SICK[20] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 80B938F8-80B9390C 000210 0014+00 1/0 0/0 0/0 .data            l_loadRes_ZRC0 */
SECTION_DATA static u8 l_loadRes_ZRC0[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 80B9390C-80B93920 000224 0014+00 1/0 0/0 0/0 .data            l_loadRes_ZRC_PRAY */
SECTION_DATA static u8 l_loadRes_ZRC_PRAY[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80B93920-80B93934 000238 0014+00 1/0 0/0 0/0 .data            l_loadRes_ZRC_SIT */
SECTION_DATA static u8 l_loadRes_ZRC_SIT[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 80B93934-80B93948 -00001 0014+00 2/2 0/0 0/0 .data            l_loadRes_list */
SECTION_DATA static void* l_loadRes_list[5] = {
    (void*)&l_loadRes_ZRCa,    (void*)&l_loadRes_ZRC_SICK, (void*)&l_loadRes_ZRC_PRAY,
    (void*)&l_loadRes_ZRC_SIT, (void*)&l_loadRes_ZRC0,
};

/* 80B93948-80B93964 -00001 001C+00 6/9 0/0 0/0 .data            l_resNames */
SECTION_DATA static void* l_resNames[7] = {
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0xC),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x10),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x15),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x1A),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x22),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x29),
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x32),
};

/* 80B93964-80B93968 -00001 0004+00 0/1 0/0 0/0 .data            l_myName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_myName = (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0xC);
#pragma pop

/* 80B93968-80B93970 -00001 0008+00 0/1 0/0 0/0 .data            mEvtCutNameList__11daNpc_zrC_c */
#pragma push
#pragma force_active on
SECTION_DATA void* daNpc_zrC_c::mEvtCutNameList[2] = {
    (void*)(((char*)&d_a_npc_zrc__stringBase0) + 0x3A),
    (void*)&d_a_npc_zrc__stringBase0,
};
#pragma pop

/* 80B93970-80B9397C -00001 000C+00 1/1 0/0 0/0 .data            @4022 */
SECTION_DATA static void* lit_4022[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_earringGet__11daNpc_zrC_cFi,
};

/* 80B9397C-80B93994 000294 0018+00 1/2 0/0 0/0 .data            mEvtCutList__11daNpc_zrC_c */
SECTION_DATA u8 daNpc_zrC_c::mEvtCutList[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B93994-80B939A0 -00001 000C+00 1/1 0/0 0/0 .data            @4517 */
SECTION_DATA static void* lit_4517[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_zrC_cFPv,
};

/* 80B939A0-80B939E8 -00001 0048+00 1/1 0/0 0/0 .data            @4963 */
SECTION_DATA static void* lit_4963[18] = {
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x90),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0xB0),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0xCC),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0xE8),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x104),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x120),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x13C),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x158),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x174),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x190),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x1AC),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x1CC),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x1E8),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x208),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x224),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x244),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x264),
    (void*)(((char*)setExpressionAnm__11daNpc_zrC_cFib) + 0x284),
};

/* 80B939E8-80B93A24 -00001 003C+00 1/1 0/0 0/0 .data            @5001 */
SECTION_DATA static void* lit_5001[15] = {
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0x8C),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0x94),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xB8),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0x9C),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xA4),
    (void*)(((char*)setExpressionBtp__11daNpc_zrC_cFi) + 0xAC),
};

/* 80B93A24-80B93A5C -00001 0038+00 1/1 0/0 0/0 .data            @5051 */
SECTION_DATA static void* lit_5051[14] = {
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0x10C),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xA4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0x10C),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xAC),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xB4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0x10C),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xBC),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xC4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xD4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xDC),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xE4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xF4),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0xFC),
    (void*)(((char*)setMotionAnm__11daNpc_zrC_cFif) + 0x10C),
};

/* 80B93A5C-80B93A68 -00001 000C+00 0/1 0/0 0/0 .data            @5325 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5325[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93A68-80B93A74 -00001 000C+00 0/1 0/0 0/0 .data            @5329 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5329[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)waitSick__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93A74-80B93A80 -00001 000C+00 0/1 0/0 0/0 .data            @5331 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5331[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)waitPray__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93A80-80B93A8C -00001 000C+00 0/1 0/0 0/0 .data            @5333 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5333[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)waitThrone__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93A8C-80B93A98 -00001 000C+00 0/1 0/0 0/0 .data            @5335 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5335[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93A98-80B93AA4 -00001 000C+00 0/1 0/0 0/0 .data            @5377 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5377[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93AA4-80B93AB0 -00001 000C+00 0/1 0/0 0/0 .data            @5391 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5391[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_zrC_cFPv,
};
#pragma pop

/* 80B93AB0-80B93AD4 -00001 0024+00 1/1 0/0 0/0 .data            @5558 */
SECTION_DATA static void* lit_5558[9] = {
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0xB0),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x30),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0xCC),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x50),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x70),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x90),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x50),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0xB0),
    (void*)(((char*)setExpressionTalkAfter__11daNpc_zrC_cFv) + 0x90),
};

/* 80B93AD4-80B93AF4 -00001 0020+00 1/0 0/0 0/0 .data            daNpc_zrC_MethodTable */
static actor_method_class daNpc_zrC_MethodTable = {
    (process_method_func)daNpc_zrC_Create__FPv,
    (process_method_func)daNpc_zrC_Delete__FPv,
    (process_method_func)daNpc_zrC_Execute__FPv,
    (process_method_func)daNpc_zrC_IsDelete__FPv,
    (process_method_func)daNpc_zrC_Draw__FPv,
};

/* 80B93AF4-80B93B24 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_ZRC */
extern actor_process_profile_definition g_profile_NPC_ZRC = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_NPC_ZRC,           // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daNpc_zrC_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  389,                    // mPriority
  &daNpc_zrC_MethodTable, // sub_method
  0x00044100,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B93B24-80B93B30 00043C 000C+00 2/2 0/0 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 80B93B30-80B93B78 000448 0048+00 2/2 0/0 0/0 .data            __vt__11daNpc_zrC_c */
SECTION_DATA extern void* __vt__11daNpc_zrC_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daNpc_zrC_cFv,
    (void*)setParam__11daNpc_zrC_cFv,
    (void*)main__11daNpc_zrC_cFv,
    (void*)ctrlBtk__11daNpc_zrC_cFv,
    (void*)adjustShapeAngle__11daNpc_zrC_cFv,
    (void*)setMtx__8daNpcF_cFv,
    (void*)setMtx2__8daNpcF_cFv,
    (void*)setAttnPos__11daNpc_zrC_cFv,
    (void*)setCollisions__8daNpcF_cFv,
    (void*)setExpressionAnm__11daNpc_zrC_cFib,
    (void*)setExpressionBtp__11daNpc_zrC_cFi,
    (void*)setExpression__11daNpc_zrC_cFif,
    (void*)setMotionAnm__11daNpc_zrC_cFif,
    (void*)setMotion__11daNpc_zrC_cFifi,
    (void*)drawDbgInfo__11daNpc_zrC_cFv,
    (void*)drawOtherMdls__11daNpc_zrC_cFv,
};

/* 80B93B78-80B93B84 000490 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80B93B84-80B93BA8 00049C 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B931E0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B931D8,
};

/* 80B93BA8-80B93BB4 0004C0 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80B93BB4-80B93BC0 0004CC 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80B93BC0-80B93BCC 0004D8 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80B93BCC-80B93BD8 0004E4 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcF_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcF_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcF_ActorMngr_cFv,
};

/* 80B93BD8-80B93BE4 0004F0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80B93BE4-80B93BF0 0004FC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B93BF0-80B93BFC 000508 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcF_Lookat_c */
SECTION_DATA extern void* __vt__15daNpcF_Lookat_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcF_Lookat_cFv,
};

/* 80B8DC0C-80B8DD90 0000EC 0184+00 1/1 0/0 0/0 .text            __ct__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrC_c::daNpc_zrC_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8DD90-80B8DDD8 000270 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80B8DDD8-80B8DE20 0002B8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80B8DE20-80B8E03C 000300 021C+00 1/0 0/0 0/0 .text            __dt__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrC_c::~daNpc_zrC_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B931FC-80B93270 000000 0074+00 15/15 0/0 0/0 .rodata          m__17daNpc_zrC_Param_c */
SECTION_RODATA u8 const daNpc_zrC_Param_c::m[116] = {
    0x42, 0x48, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x44, 0x16, 0x00,
    0x00, 0x43, 0x7F, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0xC1,
    0x20, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0xC2, 0x34, 0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x41, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x06, 0x00, 0x05, 0x00, 0x06, 0x42, 0xA0, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x43, 0x96,
    0x00, 0x00, 0xC3, 0x96, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x43, 0xAF, 0x00, 0x00, 0x45, 0x0F, 0xC0, 0x00,
};
COMPILER_STRIP_GATE(0x80B931FC, &daNpc_zrC_Param_c::m);

/* 80B93270-80B93284 000074 0014+00 0/1 0/0 0/0 .rodata          heapSize$4316 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const heapSize[20] = {
    0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x46, 0x90, 0x00, 0x00,
    0x60, 0x10, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93270, &heapSize);
#pragma pop

/* 80B93284-80B93288 000088 0004+00 0/1 0/0 0/0 .rodata          @4411 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4411 = -300.0f;
COMPILER_STRIP_GATE(0x80B93284, &lit_4411);
#pragma pop

/* 80B93288-80B9328C 00008C 0004+00 0/1 0/0 0/0 .rodata          @4412 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4412 = -50.0f;
COMPILER_STRIP_GATE(0x80B93288, &lit_4412);
#pragma pop

/* 80B9328C-80B93290 000090 0004+00 0/1 0/0 0/0 .rodata          @4413 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4413 = 300.0f;
COMPILER_STRIP_GATE(0x80B9328C, &lit_4413);
#pragma pop

/* 80B93290-80B93294 000094 0004+00 0/1 0/0 0/0 .rodata          @4414 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4414 = 450.0f;
COMPILER_STRIP_GATE(0x80B93290, &lit_4414);
#pragma pop

/* 80B8E03C-80B8E338 00051C 02FC+00 1/1 0/0 0/0 .text            create__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/create__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93294-80B93298 000098 0004+00 4/4 0/0 0/0 .rodata          @4483 */
SECTION_RODATA static f32 const lit_4483 = 1.0f;
COMPILER_STRIP_GATE(0x80B93294, &lit_4483);

/* 80B93298-80B9329C 00009C 0004+00 6/9 0/0 0/0 .rodata          @4484 */
SECTION_RODATA static u8 const lit_4484[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93298, &lit_4484);

/* 80B8E338-80B8E674 000818 033C+00 1/1 0/0 0/0 .text            CreateHeap__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/CreateHeap__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8E674-80B8E6B0 000B54 003C+00 1/1 0/0 0/0 .text            __dt__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::~J3DTevKColorAnm() {
extern "C" asm void __dt__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80B8E6B0-80B8E6C8 000B90 0018+00 1/1 0/0 0/0 .text            __ct__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::J3DTevKColorAnm() {
extern "C" asm void __ct__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80B8E6C8-80B8E704 000BA8 003C+00 1/1 0/0 0/0 .text            __dt__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::~J3DTevColorAnm() {
extern "C" asm void __dt__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 80B8E704-80B8E71C 000BE4 0018+00 1/1 0/0 0/0 .text            __ct__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::J3DTevColorAnm() {
extern "C" asm void __ct__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 80B8E71C-80B8E764 000BFC 0048+00 1/1 0/0 0/0 .text            __dt__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::~J3DTexNoAnm() {
extern "C" asm void __dt__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80B8E764-80B8E788 000C44 0024+00 1/1 0/0 0/0 .text            __ct__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::J3DTexNoAnm() {
extern "C" asm void __ct__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80B8E788-80B8E7C4 000C68 003C+00 1/1 0/0 0/0 .text            __dt__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::~J3DTexMtxAnm() {
extern "C" asm void __dt__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80B8E7C4-80B8E7DC 000CA4 0018+00 1/1 0/0 0/0 .text            __ct__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::J3DTexMtxAnm() {
extern "C" asm void __ct__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80B8E7DC-80B8E818 000CBC 003C+00 1/1 0/0 0/0 .text            __dt__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::~J3DMatColorAnm() {
extern "C" asm void __dt__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 80B8E818-80B8E830 000CF8 0018+00 1/1 0/0 0/0 .text            __ct__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::J3DMatColorAnm() {
extern "C" asm void __ct__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 80B8E830-80B8E864 000D10 0034+00 1/1 0/0 0/0 .text            Delete__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::Delete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/Delete__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8E864-80B8E884 000D44 0020+00 2/2 0/0 0/0 .text            Execute__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::Execute() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/Execute__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8E884-80B8E914 000D64 0090+00 1/1 0/0 0/0 .text            Draw__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::Draw() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/Draw__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9329C-80B932A8 0000A0 000C+00 1/1 0/0 0/0 .rodata          @4538 */
SECTION_RODATA static u8 const lit_4538[12] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x80B9329C, &lit_4538);

/* 80B8E914-80B8EB48 000DF4 0234+00 1/1 0/0 0/0 .text
 * ctrlJoint__11daNpc_zrC_cFP8J3DJointP8J3DModel                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/ctrlJoint__11daNpc_zrC_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 80B8EB48-80B8EB68 001028 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daNpc_zrC_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/createHeapCallBack__11daNpc_zrC_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80B8EB68-80B8EBB4 001048 004C+00 1/1 0/0 0/0 .text ctrlJointCallBack__11daNpc_zrC_cFP8J3DJointi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::ctrlJointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/ctrlJointCallBack__11daNpc_zrC_cFP8J3DJointi.s"
}
#pragma pop

/* 80B8EBB4-80B8ED94 001094 01E0+00 1/0 0/0 0/0 .text            setParam__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setParam__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8ED94-80B8EF2C 001274 0198+00 1/0 0/0 0/0 .text            main__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::main() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/main__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B932A8-80B932AC 0000AC 0004+00 8/10 0/0 0/0 .rodata          @4767 */
SECTION_RODATA static f32 const lit_4767 = -1.0f;
COMPILER_STRIP_GATE(0x80B932A8, &lit_4767);

/* 80B932AC-80B932B0 0000B0 0004+00 1/1 0/0 0/0 .rodata          @4768 */
SECTION_RODATA static f32 const lit_4768 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B932AC, &lit_4768);

/* 80B8EF2C-80B8F00C 00140C 00E0+00 1/0 0/0 0/0 .text            ctrlBtk__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::ctrlBtk() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/ctrlBtk__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B932B0-80B932B4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4919 = 10.0f;
COMPILER_STRIP_GATE(0x80B932B0, &lit_4919);
#pragma pop

/* 80B932B4-80B932B8 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4920 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B932B4, &lit_4920);
#pragma pop

/* 80B932B8-80B932BC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4921 = 125.0f;
COMPILER_STRIP_GATE(0x80B932B8, &lit_4921);
#pragma pop

/* 80B932BC-80B932C4 0000C0 0008+00 0/2 0/0 0/0 .rodata          @4922 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4922[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B932BC, &lit_4922);
#pragma pop

/* 80B932C4-80B932CC 0000C8 0008+00 0/2 0/0 0/0 .rodata          @4923 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4923[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B932C4, &lit_4923);
#pragma pop

/* 80B932CC-80B932D4 0000D0 0008+00 0/2 0/0 0/0 .rodata          @4924 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4924[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B932CC, &lit_4924);
#pragma pop

/* 80B932D4-80B932D8 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4925 = -20.0f;
COMPILER_STRIP_GATE(0x80B932D4, &lit_4925);
#pragma pop

/* 80B932D8-80B932DC 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4926 = 15.0f;
COMPILER_STRIP_GATE(0x80B932D8, &lit_4926);
#pragma pop

/* 80B93C10-80B93C14 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80B93C14-80B93C18 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80B93C18-80B93C1C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80B93C1C-80B93C20 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80B93C20-80B93C24 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80B93C24-80B93C28 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80B93C28-80B93C2C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80B93C2C-80B93C30 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80B93C30-80B93C34 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80B93C34-80B93C38 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80B93C38-80B93C3C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80B93C3C-80B93C40 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80B93C40-80B93C44 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80B93C44-80B93C48 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80B93C48-80B93C4C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80B93C4C-80B93C50 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80B93C50-80B93C5C 000048 000C+00 1/1 0/0 0/0 .bss             @4021 */
static u8 lit_4021[12];

/* 80B93C5C-80B93C60 000054 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80B93C60-80B93C70 000058 000C+04 0/1 0/0 0/0 .bss             @4773 */
#pragma push
#pragma force_active on
static u8 lit_4773[12 + 4 /* padding */];
#pragma pop

/* 80B93C70-80B93C7C 000068 000C+00 0/1 0/0 0/0 .bss             eyeOffset$4772 */
#pragma push
#pragma force_active on
static u8 eyeOffset[12];
#pragma pop

/* 80B8F00C-80B8F56C 0014EC 0560+00 1/0 0/0 0/0 .text            setAttnPos__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setAttnPos__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8F56C-80B8F898 001A4C 032C+00 2/0 0/0 0/0 .text            setExpressionAnm__11daNpc_zrC_cFib
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setExpressionAnm(int param_0, bool param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setExpressionAnm__11daNpc_zrC_cFib.s"
}
#pragma pop

/* 80B8F898-80B8F9CC 001D78 0134+00 2/0 0/0 0/0 .text            setExpressionBtp__11daNpc_zrC_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setExpressionBtp(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setExpressionBtp__11daNpc_zrC_cFi.s"
}
#pragma pop

/* 80B8F9CC-80B8F9F8 001EAC 002C+00 1/0 0/0 0/0 .text            setExpression__11daNpc_zrC_cFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setExpression(int param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setExpression__11daNpc_zrC_cFif.s"
}
#pragma pop

/* 80B8F9F8-80B8FBE4 001ED8 01EC+00 2/0 0/0 0/0 .text            setMotionAnm__11daNpc_zrC_cFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setMotionAnm(int param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setMotionAnm__11daNpc_zrC_cFif.s"
}
#pragma pop

/* 80B8FBE4-80B8FC28 0020C4 0044+00 1/0 0/0 0/0 .text            setMotion__11daNpc_zrC_cFifi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setMotion(int param_0, f32 param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setMotion__11daNpc_zrC_cFifi.s"
}
#pragma pop

/* 80B8FC28-80B8FC30 002108 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__11daNpc_zrC_cFv */
bool daNpc_zrC_c::drawDbgInfo() {
    return false;
}

/* 80B8FC30-80B8FC34 002110 0004+00 1/0 0/0 0/0 .text            drawOtherMdls__11daNpc_zrC_cFv */
void daNpc_zrC_c::drawOtherMdls() {
    /* empty function */
}

/* 80B8FC34-80B8FC8C 002114 0058+00 1/1 0/0 0/0 .text            getTypeFromParam__11daNpc_zrC_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::getTypeFromParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/getTypeFromParam__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8FC8C-80B8FD10 00216C 0084+00 1/1 0/0 0/0 .text            isDelete__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/isDelete__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B8FD10-80B8FF14 0021F0 0204+00 1/1 0/0 0/0 .text            reset__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::reset() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/reset__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B932DC-80B932E8 0000E0 000C+00 0/1 0/0 0/0 .rodata          @5139 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5139[12] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B932DC, &lit_5139);
#pragma pop

/* 80B932E8-80B932F4 0000EC 000C+00 0/1 0/0 0/0 .rodata          @5140 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5140[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B932E8, &lit_5140);
#pragma pop

/* 80B932F4-80B932FC 0000F8 0008+00 0/1 0/0 0/0 .rodata          @5141 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5141[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B932F4, &lit_5141);
#pragma pop

/* 80B932FC-80B93308 000100 000C+00 0/1 0/0 0/0 .rodata          @5142 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5142[12] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B932FC, &lit_5142);
#pragma pop

/* 80B93308-80B93314 00010C 000C+00 0/1 0/0 0/0 .rodata          @5143 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5143[12] = {
    0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93308, &lit_5143);
#pragma pop

/* 80B93314-80B9331C 000118 0008+00 0/1 0/0 0/0 .rodata          @5144 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5144[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93314, &lit_5144);
#pragma pop

/* 80B9331C-80B93328 000120 000C+00 0/1 0/0 0/0 .rodata          @5145 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5145[12] = {
    0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9331C, &lit_5145);
#pragma pop

/* 80B93328-80B9332C 00012C 0004+00 0/1 0/0 0/0 .rodata          @5146 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5146[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93328, &lit_5146);
#pragma pop

/* 80B9332C-80B93338 000130 000C+00 0/1 0/0 0/0 .rodata          @5147 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5147[12] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9332C, &lit_5147);
#pragma pop

/* 80B93338-80B93344 00013C 000C+00 0/1 0/0 0/0 .rodata          @5148 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5148[12] = {
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93338, &lit_5148);
#pragma pop

/* 80B93344-80B9334C 000148 0008+00 0/1 0/0 0/0 .rodata          @5149 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5149[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93344, &lit_5149);
#pragma pop

/* 80B9334C-80B93358 000150 000C+00 0/1 0/0 0/0 .rodata          @5150 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5150[12] = {
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9334C, &lit_5150);
#pragma pop

/* 80B93358-80B93364 00015C 000C+00 0/1 0/0 0/0 .rodata          @5151 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5151[12] = {
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93358, &lit_5151);
#pragma pop

/* 80B93364-80B9336C 000168 0008+00 0/1 0/0 0/0 .rodata          @5152 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5152[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93364, &lit_5152);
#pragma pop

/* 80B9336C-80B93378 000170 000C+00 0/1 0/0 0/0 .rodata          @5153 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5153[12] = {
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9336C, &lit_5153);
#pragma pop

/* 80B93378-80B93384 00017C 000C+00 0/1 0/0 0/0 .rodata          @5154 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5154[12] = {
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93378, &lit_5154);
#pragma pop

/* 80B93384-80B9338C 000188 0008+00 0/1 0/0 0/0 .rodata          @5155 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5155[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93384, &lit_5155);
#pragma pop

/* 80B9338C-80B93398 000190 000C+00 0/1 0/0 0/0 .rodata          @5156 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5156[12] = {
    0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9338C, &lit_5156);
#pragma pop

/* 80B93398-80B933A4 00019C 000C+00 0/1 0/0 0/0 .rodata          @5157 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5157[12] = {
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93398, &lit_5157);
#pragma pop

/* 80B933A4-80B933AC 0001A8 0008+00 0/1 0/0 0/0 .rodata          @5158 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5158[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933A4, &lit_5158);
#pragma pop

/* 80B933AC-80B933B8 0001B0 000C+00 0/1 0/0 0/0 .rodata          @5159 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5159[12] = {
    0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B933AC, &lit_5159);
#pragma pop

/* 80B933B8-80B933C4 0001BC 000C+00 0/1 0/0 0/0 .rodata          @5160 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5160[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933B8, &lit_5160);
#pragma pop

/* 80B933C4-80B933CC 0001C8 0008+00 0/1 0/0 0/0 .rodata          @5161 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5161[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933C4, &lit_5161);
#pragma pop

/* 80B933CC-80B933D8 0001D0 000C+00 0/1 0/0 0/0 .rodata          @5162 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5162[12] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B933CC, &lit_5162);
#pragma pop

/* 80B933D8-80B933E4 0001DC 000C+00 0/1 0/0 0/0 .rodata          @5163 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5163[12] = {
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933D8, &lit_5163);
#pragma pop

/* 80B933E4-80B933EC 0001E8 0008+00 0/1 0/0 0/0 .rodata          @5164 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5164[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933E4, &lit_5164);
#pragma pop

/* 80B933EC-80B933F8 0001F0 000C+00 0/1 0/0 0/0 .rodata          @5165 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5165[12] = {
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933EC, &lit_5165);
#pragma pop

/* 80B933F8-80B933FC 0001FC 0004+00 0/1 0/0 0/0 .rodata          @5166 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5166[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B933F8, &lit_5166);
#pragma pop

/* 80B933FC-80B93408 000200 000C+00 0/1 0/0 0/0 .rodata          @5167 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5167[12] = {
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B933FC, &lit_5167);
#pragma pop

/* 80B93408-80B9340C 00020C 0004+00 0/1 0/0 0/0 .rodata          @5168 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5168[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93408, &lit_5168);
#pragma pop

/* 80B9340C-80B93418 000210 000C+00 0/1 0/0 0/0 .rodata          @5169 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5169[12] = {
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9340C, &lit_5169);
#pragma pop

/* 80B93418-80B9341C 00021C 0004+00 0/1 0/0 0/0 .rodata          @5170 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5170[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93418, &lit_5170);
#pragma pop

/* 80B9341C-80B93428 000220 000C+00 0/1 0/0 0/0 .rodata          @5171 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5171[12] = {
    0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9341C, &lit_5171);
#pragma pop

/* 80B93428-80B9342C 00022C 0004+00 0/1 0/0 0/0 .rodata          @5172 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5172[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93428, &lit_5172);
#pragma pop

/* 80B9342C-80B93438 000230 000C+00 0/1 0/0 0/0 .rodata          @5173 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5173[12] = {
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9342C, &lit_5173);
#pragma pop

/* 80B93438-80B93444 00023C 000C+00 0/1 0/0 0/0 .rodata          @5174 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5174[12] = {
    0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93438, &lit_5174);
#pragma pop

/* 80B93444-80B9344C 000248 0008+00 0/1 0/0 0/0 .rodata          @5175 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5175[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93444, &lit_5175);
#pragma pop

/* 80B9344C-80B93458 000250 000C+00 0/1 0/0 0/0 .rodata          @5176 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5176[12] = {
    0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B9344C, &lit_5176);
#pragma pop

/* 80B93458-80B93464 00025C 000C+00 0/1 0/0 0/0 .rodata          @5177 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5177[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93458, &lit_5177);
#pragma pop

/* 80B93464-80B9346C 000268 0008+00 0/1 0/0 0/0 .rodata          @5178 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5178[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93464, &lit_5178);
#pragma pop

/* 80B9346C-80B93478 000270 000C+00 0/1 0/0 0/0 .rodata          @5179 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5179[12] = {
    0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9346C, &lit_5179);
#pragma pop

/* 80B93478-80B9347C 00027C 0004+00 0/1 0/0 0/0 .rodata          @5180 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5180[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93478, &lit_5180);
#pragma pop

/* 80B9347C-80B93488 000280 000C+00 0/1 0/0 0/0 .rodata          @5181 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5181[12] = {
    0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9347C, &lit_5181);
#pragma pop

/* 80B93488-80B9348C 00028C 0004+00 0/1 0/0 0/0 .rodata          @5182 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5182[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93488, &lit_5182);
#pragma pop

/* 80B9348C-80B93498 000290 000C+00 0/1 0/0 0/0 .rodata          @5183 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5183[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9348C, &lit_5183);
#pragma pop

/* 80B93498-80B9349C 00029C 0004+00 0/1 0/0 0/0 .rodata          @5184 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5184[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93498, &lit_5184);
#pragma pop

/* 80B8FF14-80B904DC 0023F4 05C8+00 1/1 0/0 0/0 .text            playExpression__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::playExpression() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/playExpression__11daNpc_zrC_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9349C-80B934E4 0002A0 0048+00 0/0 0/0 0/0 .rodata          @5185 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5185[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9349C, &lit_5185);
#pragma pop

/* 80B934E4-80B934F0 0002E8 000C+00 0/1 0/0 0/0 .rodata          @5222 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5222[12] = {
    0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B934E4, &lit_5222);
#pragma pop

/* 80B934F0-80B934F4 0002F4 0004+00 0/1 0/0 0/0 .rodata          @5223 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5223[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B934F0, &lit_5223);
#pragma pop

/* 80B934F4-80B93500 0002F8 000C+00 0/1 0/0 0/0 .rodata          @5224 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5224[12] = {
    0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B934F4, &lit_5224);
#pragma pop

/* 80B93500-80B9350C 000304 000C+00 0/1 0/0 0/0 .rodata          @5225 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5225[12] = {
    0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93500, &lit_5225);
#pragma pop

/* 80B9350C-80B93514 000310 0008+00 0/1 0/0 0/0 .rodata          @5226 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5226[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9350C, &lit_5226);
#pragma pop

/* 80B93514-80B93520 000318 000C+00 0/1 0/0 0/0 .rodata          @5227 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5227[12] = {
    0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93514, &lit_5227);
#pragma pop

/* 80B93520-80B93524 000324 0004+00 0/1 0/0 0/0 .rodata          @5228 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5228[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93520, &lit_5228);
#pragma pop

/* 80B93524-80B93530 000328 000C+00 0/1 0/0 0/0 .rodata          @5229 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5229[12] = {
    0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93524, &lit_5229);
#pragma pop

/* 80B93530-80B93534 000334 0004+00 0/1 0/0 0/0 .rodata          @5230 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5230[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93530, &lit_5230);
#pragma pop

/* 80B93534-80B93540 000338 000C+00 0/1 0/0 0/0 .rodata          @5231 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5231[12] = {
    0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B93534, &lit_5231);
#pragma pop

/* 80B93540-80B9354C 000344 000C+00 0/1 0/0 0/0 .rodata          @5232 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5232[12] = {
    0x00, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93540, &lit_5232);
#pragma pop

/* 80B9354C-80B93554 000350 0008+00 0/1 0/0 0/0 .rodata          @5233 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5233[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9354C, &lit_5233);
#pragma pop

/* 80B93554-80B93560 000358 000C+00 0/1 0/0 0/0 .rodata          @5234 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5234[12] = {
    0x00, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93554, &lit_5234);
#pragma pop

/* 80B93560-80B93564 000364 0004+00 0/1 0/0 0/0 .rodata          @5235 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5235[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93560, &lit_5235);
#pragma pop

/* 80B93564-80B93570 000368 000C+00 0/1 0/0 0/0 .rodata          @5236 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5236[12] = {
    0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B93564, &lit_5236);
#pragma pop

/* 80B93570-80B9357C 000374 000C+00 0/1 0/0 0/0 .rodata          @5237 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5237[12] = {
    0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93570, &lit_5237);
#pragma pop

/* 80B9357C-80B93584 000380 0008+00 0/1 0/0 0/0 .rodata          @5238 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5238[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9357C, &lit_5238);
#pragma pop

/* 80B93584-80B93590 000388 000C+00 0/1 0/0 0/0 .rodata          @5239 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5239[12] = {
    0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B93584, &lit_5239);
#pragma pop

/* 80B93590-80B9359C 000394 000C+00 0/1 0/0 0/0 .rodata          @5240 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5240[12] = {
    0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93590, &lit_5240);
#pragma pop

/* 80B9359C-80B935A4 0003A0 0008+00 0/1 0/0 0/0 .rodata          @5241 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5241[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9359C, &lit_5241);
#pragma pop

/* 80B935A4-80B935B0 0003A8 000C+00 0/1 0/0 0/0 .rodata          @5242 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5242[12] = {
    0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B935A4, &lit_5242);
#pragma pop

/* 80B935B0-80B935B4 0003B4 0004+00 0/1 0/0 0/0 .rodata          @5243 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5243[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B935B0, &lit_5243);
#pragma pop

/* 80B935B4-80B935C0 0003B8 000C+00 0/1 0/0 0/0 .rodata          @5244 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5244[12] = {
    0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B935B4, &lit_5244);
#pragma pop

/* 80B935C0-80B935CC 0003C4 000C+00 0/1 0/0 0/0 .rodata          @5245 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5245[12] = {
    0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B935C0, &lit_5245);
#pragma pop

/* 80B935CC-80B935D4 0003D0 0008+00 0/1 0/0 0/0 .rodata          @5246 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5246[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B935CC, &lit_5246);
#pragma pop

/* 80B935D4-80B935E0 0003D8 000C+00 0/1 0/0 0/0 .rodata          @5247 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5247[12] = {
    0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B935D4, &lit_5247);
#pragma pop

/* 80B935E0-80B935EC 0003E4 000C+00 0/1 0/0 0/0 .rodata          @5248 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5248[12] = {
    0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B935E0, &lit_5248);
#pragma pop

/* 80B935EC-80B935F4 0003F0 0008+00 0/1 0/0 0/0 .rodata          @5249 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5249[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B935EC, &lit_5249);
#pragma pop

/* 80B935F4-80B93600 0003F8 000C+00 0/1 0/0 0/0 .rodata          @5250 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5250[12] = {
    0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x80B935F4, &lit_5250);
#pragma pop

/* 80B93600-80B9360C 000404 000C+00 0/1 0/0 0/0 .rodata          @5251 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5251[12] = {
    0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93600, &lit_5251);
#pragma pop

/* 80B9360C-80B93614 000410 0008+00 0/1 0/0 0/0 .rodata          @5252 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5252[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9360C, &lit_5252);
#pragma pop

/* 80B93614-80B93620 000418 000C+00 0/1 0/0 0/0 .rodata          @5253 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5253[12] = {
    0x00, 0x16, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93614, &lit_5253);
#pragma pop

/* 80B93620-80B93624 000424 0004+00 0/1 0/0 0/0 .rodata          @5254 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5254[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93620, &lit_5254);
#pragma pop

/* 80B93624-80B93630 000428 000C+00 0/1 0/0 0/0 .rodata          @5255 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5255[12] = {
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93624, &lit_5255);
#pragma pop

/* 80B93630-80B93634 000434 0004+00 0/1 0/0 0/0 .rodata          @5256 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5256[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B93630, &lit_5256);
#pragma pop

/* 80B904DC-80B90940 0029BC 0464+00 1/1 0/0 0/0 .text            playMotion__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::playMotion() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/playMotion__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B90940-80B90A6C 002E20 012C+00 1/1 0/0 0/0 .text
 * playMotionAnm2__11daNpc_zrC_cFPPPQ28daNpcF_c18daNpcF_anmPlayData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::playMotionAnm2(daNpcF_c::daNpcF_anmPlayData*** param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/playMotionAnm2__11daNpc_zrC_cFPPPQ28daNpcF_c18daNpcF_anmPlayData.s"
}
#pragma pop

/* 80B90A6C-80B90A98 002F4C 002C+00 2/2 0/0 0/0 .text
 * chkAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::chkAction(int (daNpc_zrC_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/chkAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i.s"
}
#pragma pop

/* 80B90A98-80B90B40 002F78 00A8+00 2/2 0/0 0/0 .text
 * setAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setAction(int (daNpc_zrC_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setAction__11daNpc_zrC_cFM11daNpc_zrC_cFPCvPvPv_i.s"
}
#pragma pop

/* 80B90B40-80B90C34 003020 00F4+00 1/1 0/0 0/0 .text            selectAction__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::selectAction() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/selectAction__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B90C34-80B90D48 003114 0114+00 1/1 0/0 0/0 .text            doNormalAction__11daNpc_zrC_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::doNormalAction(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/doNormalAction__11daNpc_zrC_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B9369C-80B9369C 0004A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B936D7 = "NO_RESPONSE";
#pragma pop

/* 80B90D48-80B9113C 003228 03F4+00 1/1 0/0 0/0 .text            doEvent__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::doEvent() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/doEvent__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B9113C-80B91160 00361C 0024+00 9/9 0/0 0/0 .text            setLookMode__11daNpc_zrC_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setLookMode(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setLookMode__11daNpc_zrC_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93634-80B9366C 000438 0038+00 0/0 0/0 0/0 .rodata          @5257 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5257[56] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B93634, &lit_5257);
#pragma pop

/* 80B9366C-80B93678 000470 000C+00 0/1 0/0 0/0 .rodata          @5460 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5460[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B9366C, &lit_5460);
#pragma pop

/* 80B93678-80B9367C 00047C 0004+00 0/1 0/0 0/0 .rodata          @5517 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5517 = -80.0f;
COMPILER_STRIP_GATE(0x80B93678, &lit_5517);
#pragma pop

/* 80B9367C-80B93680 000480 0004+00 0/1 0/0 0/0 .rodata          @5518 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5518 = 80.0f;
COMPILER_STRIP_GATE(0x80B9367C, &lit_5518);
#pragma pop

/* 80B93680-80B93684 000484 0004+00 0/1 0/0 0/0 .rodata          @5519 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5519 = 400.0f;
COMPILER_STRIP_GATE(0x80B93680, &lit_5519);
#pragma pop

/* 80B93684-80B93688 000488 0004+00 0/1 0/0 0/0 .rodata          @5520 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5520 = 40.0f;
COMPILER_STRIP_GATE(0x80B93684, &lit_5520);
#pragma pop

/* 80B91160-80B91418 003640 02B8+00 1/1 0/0 0/0 .text            lookat__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::lookat() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/lookat__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B91418-80B914F4 0038F8 00DC+00 2/1 0/0 0/0 .text setExpressionTalkAfter__11daNpc_zrC_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::setExpressionTalkAfter() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/setExpressionTalkAfter__11daNpc_zrC_cFv.s"
}
#pragma pop

/* 80B914F4-80B916FC 0039D4 0208+00 1/0 0/0 0/0 .text            wait__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/wait__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* 80B916FC-80B91808 003BDC 010C+00 1/0 0/0 0/0 .text            waitSick__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::waitSick(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/waitSick__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93688-80B9368C 00048C 0004+00 0/1 0/0 0/0 .rodata          @5766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5766 = 100.0f;
COMPILER_STRIP_GATE(0x80B93688, &lit_5766);
#pragma pop

/* 80B9368C-80B93690 000490 0004+00 0/1 0/0 0/0 .rodata          @5767 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5767 = 0x43360B61;
COMPILER_STRIP_GATE(0x80B9368C, &lit_5767);
#pragma pop

/* 80B91808-80B91F78 003CE8 0770+00 1/0 0/0 0/0 .text            waitPray__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::waitPray(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/waitPray__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* 80B91F78-80B920EC 004458 0174+00 1/0 0/0 0/0 .text            waitThrone__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::waitThrone(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/waitThrone__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* 80B920EC-80B922D8 0045CC 01EC+00 2/0 0/0 0/0 .text            talk__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::talk(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/talk__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* 80B922D8-80B923BC 0047B8 00E4+00 2/0 0/0 0/0 .text            test__11daNpc_zrC_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::test(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/test__11daNpc_zrC_cFPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93690-80B93694 000494 0004+00 0/1 0/0 0/0 .rodata          @5926 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5926 = 0x46A49CB0;
COMPILER_STRIP_GATE(0x80B93690, &lit_5926);
#pragma pop

/* 80B93694-80B93698 000498 0004+00 0/1 0/0 0/0 .rodata          @5927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5927 = 700.0f;
COMPILER_STRIP_GATE(0x80B93694, &lit_5927);
#pragma pop

/* 80B93698-80B9369C 00049C 0004+00 0/1 0/0 0/0 .rodata          @5928 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5928 = 0x43348ED1;
COMPILER_STRIP_GATE(0x80B93698, &lit_5928);
#pragma pop

/* 80B9369C-80B9369C 0004A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B936E3 = "prm";
#pragma pop

/* 80B923BC-80B9286C 00489C 04B0+00 1/0 0/0 0/0 .text            ECut_earringGet__11daNpc_zrC_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_zrC_c::ECut_earringGet(int param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/ECut_earringGet__11daNpc_zrC_cFi.s"
}
#pragma pop

/* 80B9286C-80B9288C 004D4C 0020+00 1/0 0/0 0/0 .text            daNpc_zrC_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrC_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/daNpc_zrC_Create__FPv.s"
}
#pragma pop

/* 80B9288C-80B928AC 004D6C 0020+00 1/0 0/0 0/0 .text            daNpc_zrC_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrC_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/daNpc_zrC_Delete__FPv.s"
}
#pragma pop

/* 80B928AC-80B928CC 004D8C 0020+00 1/0 0/0 0/0 .text            daNpc_zrC_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrC_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/daNpc_zrC_Execute__FPv.s"
}
#pragma pop

/* 80B928CC-80B928EC 004DAC 0020+00 1/0 0/0 0/0 .text            daNpc_zrC_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_zrC_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/daNpc_zrC_Draw__FPv.s"
}
#pragma pop

/* 80B928EC-80B928F4 004DCC 0008+00 1/0 0/0 0/0 .text            daNpc_zrC_IsDelete__FPv */
static bool daNpc_zrC_IsDelete(void* param_0) {
    return true;
}

/* 80B928F4-80B92924 004DD4 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void J3DTexNoAnm::calc(u16* param_0) const {
extern "C" asm void calc__11J3DTexNoAnmCFPUs() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/calc__11J3DTexNoAnmCFPUs.s"
}
#pragma pop

/* 80B92924-80B9296C 004E04 0048+00 5/4 0/0 0/0 .text            __dt__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c() {
extern "C" asm void __dt__18daNpcF_ActorMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80B9296C-80B929A8 004E4C 003C+00 2/2 0/0 0/0 .text            __ct__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_ActorMngr_c::daNpcF_ActorMngr_c() {
extern "C" asm void __ct__18daNpcF_ActorMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80B929A8-80B92A78 004E88 00D0+00 1/0 0/0 0/0 .text            __dt__15daNpcF_Lookat_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_Lookat_c::~daNpcF_Lookat_c() {
extern "C" asm void __dt__15daNpcF_Lookat_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__15daNpcF_Lookat_cFv.s"
}
#pragma pop

/* 80B92A78-80B92AB4 004F58 003C+00 5/5 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__5csXyzFv.s"
}
#pragma pop

/* 80B92AB4-80B92AB8 004F94 0004+00 2/2 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 80B92AB8-80B92AF4 004F98 003C+00 6/6 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__4cXyzFv.s"
}
#pragma pop

/* 80B92AF4-80B92AF8 004FD4 0004+00 2/2 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 80B92AF8-80B92D44 004FD8 024C+00 1/1 0/0 0/0 .text            __dt__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_c::~daNpcF_c() {
extern "C" asm void __dt__8daNpcF_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__8daNpcF_cFv.s"
}
#pragma pop

/* 80B92D44-80B92F34 005224 01F0+00 1/1 0/0 0/0 .text            __ct__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcF_c::daNpcF_c() {
extern "C" asm void __ct__8daNpcF_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__ct__8daNpcF_cFv.s"
}
#pragma pop

/* 80B92F34-80B92FA4 005414 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80B92FA4-80B93000 005484 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80B93000-80B93070 0054E0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80B93070-80B930B8 005550 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80B930B8-80B930BC 005598 0004+00 1/0 0/0 0/0 .text            setCollisions__8daNpcF_cFv */
// void daNpcF_c::setCollisions() {
extern "C" asm void setCollisions__8daNpcF_cFv() {
    /* empty function */
}

/* 80B930BC-80B93104 00559C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93BFC-80B93C08 000514 000C+00 2/2 0/0 0/0 .data            __vt__17daNpc_zrC_Param_c */
SECTION_DATA extern void* __vt__17daNpc_zrC_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daNpc_zrC_Param_cFv,
};

/* 80B93104-80B9318C 0055E4 0088+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_zrc_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_zrc_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__sinit_d_a_npc_zrc_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B93104, __sinit_d_a_npc_zrc_cpp);
#pragma pop

/* 80B9318C-80B93190 00566C 0004+00 1/0 0/0 0/0 .text            adjustShapeAngle__11daNpc_zrC_cFv
 */
void daNpc_zrC_c::adjustShapeAngle() {
    /* empty function */
}

/* 80B93190-80B931D8 005670 0048+00 2/1 0/0 0/0 .text            __dt__17daNpc_zrC_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_zrC_Param_c::~daNpc_zrC_Param_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/__dt__17daNpc_zrC_Param_cFv.s"
}
#pragma pop

/* 80B931D8-80B931E0 0056B8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B931D8() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/func_80B931D8.s"
}
#pragma pop

/* 80B931E0-80B931E8 0056C0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80B931E0() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zrc/d_a_npc_zrc/func_80B931E0.s"
}
#pragma pop

/* ############################################################################################## */
/* 80B93C7C-80B93C80 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80B93C7C[4];
#pragma pop

/* 80B93C80-80B93C84 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80B93C80[4];
#pragma pop

/* 80B93C84-80B93C88 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B93C84[4];
#pragma pop

/* 80B93C88-80B93C8C 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B93C88[4];
#pragma pop

/* 80B93C8C-80B93C90 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93C8C[4];
#pragma pop

/* 80B93C90-80B93C94 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93C90[4];
#pragma pop

/* 80B93C94-80B93C98 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80B93C94[4];
#pragma pop

/* 80B93C98-80B93C9C 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80B93C98[4];
#pragma pop

/* 80B93C9C-80B93CA0 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80B93C9C[4];
#pragma pop

/* 80B93CA0-80B93CA4 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80B93CA0[4];
#pragma pop

/* 80B93CA4-80B93CA8 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B93CA4[4];
#pragma pop

/* 80B93CA8-80B93CAC 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B93CA8[4];
#pragma pop

/* 80B93CAC-80B93CB0 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80B93CAC[4];
#pragma pop

/* 80B93CB0-80B93CB4 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CB0[4];
#pragma pop

/* 80B93CB4-80B93CB8 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B93CB4[4];
#pragma pop

/* 80B93CB8-80B93CBC 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80B93CB8[4];
#pragma pop

/* 80B93CBC-80B93CC0 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80B93CBC[4];
#pragma pop

/* 80B93CC0-80B93CC4 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B93CC0[4];
#pragma pop

/* 80B93CC4-80B93CC8 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CC4[4];
#pragma pop

/* 80B93CC8-80B93CCC 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B93CC8[4];
#pragma pop

/* 80B93CCC-80B93CD0 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CCC[4];
#pragma pop

/* 80B93CD0-80B93CD4 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CD0[4];
#pragma pop

/* 80B93CD4-80B93CD8 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CD4[4];
#pragma pop

/* 80B93CD8-80B93CDC 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B93CD8[4];
#pragma pop

/* 80B93CDC-80B93CE0 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B93CDC[4];
#pragma pop

/* 80B9369C-80B9369C 0004A0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
