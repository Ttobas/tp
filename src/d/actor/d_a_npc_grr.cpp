/**
 * @file d_a_npc_grr.cpp
 * 
*/

#include "d/actor/d_a_npc_grr.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__11daNpc_grR_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__11daNpc_grR_cFv();
extern "C" void create__11daNpc_grR_cFv();
extern "C" void CreateHeap__11daNpc_grR_cFv();
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
extern "C" void Delete__11daNpc_grR_cFv();
extern "C" void Execute__11daNpc_grR_cFv();
extern "C" void Draw__11daNpc_grR_cFv();
extern "C" void ctrlJoint__11daNpc_grR_cFP8J3DJointP8J3DModel();
extern "C" void createHeapCallBack__11daNpc_grR_cFP10fopAc_ac_c();
extern "C" void ctrlJointCallBack__11daNpc_grR_cFP8J3DJointi();
extern "C" void setParam__11daNpc_grR_cFv();
extern "C" void main__11daNpc_grR_cFv();
extern "C" void ctrlBtk__11daNpc_grR_cFv();
extern "C" void setAttnPos__11daNpc_grR_cFv();
extern "C" void setExpressionAnm__11daNpc_grR_cFib();
extern "C" void setExpressionBtp__11daNpc_grR_cFi();
extern "C" void setExpression__11daNpc_grR_cFif();
extern "C" void setMotionAnm__11daNpc_grR_cFif();
extern "C" void setMotion__11daNpc_grR_cFifi();
extern "C" bool drawDbgInfo__11daNpc_grR_cFv();
extern "C" void drawOtherMdls__11daNpc_grR_cFv();
extern "C" void getTypeFromParam__11daNpc_grR_cFv();
extern "C" void isDelete__11daNpc_grR_cFv();
extern "C" void reset__11daNpc_grR_cFv();
extern "C" void playExpression__11daNpc_grR_cFv();
extern "C" void playMotion__11daNpc_grR_cFv();
extern "C" void chkAction__11daNpc_grR_cFM11daNpc_grR_cFPCvPvPv_i();
extern "C" void setAction__11daNpc_grR_cFM11daNpc_grR_cFPCvPvPv_i();
extern "C" void selectAction__11daNpc_grR_cFv();
extern "C" void doNormalAction__11daNpc_grR_cFi();
extern "C" void doEvent__11daNpc_grR_cFv();
extern "C" void setLookMode__11daNpc_grR_cFi();
extern "C" void lookat__11daNpc_grR_cFv();
extern "C" void setExpressionTalkAfter__11daNpc_grR_cFv();
extern "C" void wait__11daNpc_grR_cFPv();
extern "C" void waitMaro__11daNpc_grR_cFPv();
extern "C" void talk__11daNpc_grR_cFPv();
extern "C" void test__11daNpc_grR_cFPv();
extern "C" static void daNpc_grR_Create__FPv();
extern "C" static void daNpc_grR_Delete__FPv();
extern "C" static void daNpc_grR_Execute__FPv();
extern "C" static void daNpc_grR_Draw__FPv();
extern "C" static bool daNpc_grR_IsDelete__FPv();
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
extern "C" void __sinit_d_a_npc_grr_cpp();
extern "C" void adjustShapeAngle__11daNpc_grR_cFv();
extern "C" void __dt__17daNpc_grR_Param_cFv();
extern "C" static void func_809E38B4();
extern "C" static void func_809E38BC();
extern "C" u8 const m__17daNpc_grR_Param_c[108];
extern "C" extern char const* const d_a_npc_grr__stringBase0;
extern "C" void* mEvtCutNameList__11daNpc_grR_c;
extern "C" u8 mEvtCutList__11daNpc_grR_c[12];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void changeBckOnly__13mDoExt_bckAnmFP15J3DAnmTransform();
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
extern "C" void dStage_changeScene__FifUlScsi();
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
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
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
extern "C" void playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData();
extern "C" void setLookatMtx__8daNpcF_cFiPif();
extern "C" void hitChk2__8daNpcF_cFP8dCcD_Cylii();
extern "C" void setDamage__8daNpcF_cFiii();
extern "C" void ctrlMsgAnm__8daNpcF_cFRiRiP10fopAc_ac_ci();
extern "C" void orderEvent__8daNpcF_cFiPcUsUsUcUs();
extern "C" void initTalk__8daNpcF_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcF_cFPiiPP10fopAc_ac_c();
extern "C" void step__8daNpcF_cFsiii();
extern "C" void getDistTableIdx__8daNpcF_cFii();
extern "C" void chkFindPlayer2__8daNpcF_cFis();
extern "C" void daNpcF_chkEvtBit__FUl();
extern "C" void daNpcF_offTmpBit__FUl();
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
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 809E3BCC-809E3BCC 0002F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_809E3BCC = "grR";
SECTION_DEAD static char const* const stringBase_809E3BD0 = "grR1";
SECTION_DEAD static char const* const stringBase_809E3BD5 = "";
#pragma pop

/* 809E3BF0-809E3BFC 000000 000C+00 4/4 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 809E3BFC-809E3C10 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 809E3C10-809E3C18 000020 0008+00 1/1 0/0 0/0 .data            l_bmdGetParamList */
SECTION_DATA static u8 l_bmdGetParamList[8] = {
    0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00,
};

/* 809E3C18-809E3CB0 000028 0098+00 1/2 0/0 0/0 .data            l_bckGetParamList */
SECTION_DATA static u8 l_bckGetParamList[152] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01,
};

/* 809E3CB0-809E3CE0 0000C0 0030+00 1/1 0/0 0/0 .data            l_btpGetParamList */
SECTION_DATA static u8 l_btpGetParamList[48] = {
    0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
};

/* 809E3CE0-809E3CE8 0000F0 0008+00 1/2 0/0 0/0 .data            l_btkGetParamList */
SECTION_DATA static u8 l_btkGetParamList[8] = {
    0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00,
};

/* 809E3CE8-809E3CF0 0000F8 0008+00 0/1 0/0 0/0 .data            l_evtGetParamList */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_evtGetParamList[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 809E3CF0-809E3CFC 000100 000C+00 1/0 0/0 0/0 .data            l_loadRes_GRRa */
SECTION_DATA static u8 l_loadRes_GRRa[12] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 809E3CFC-809E3D08 00010C 000C+00 1/0 0/0 0/0 .data            l_loadRes_GRR_SPAWATER */
SECTION_DATA static u8 l_loadRes_GRR_SPAWATER[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 809E3D08-809E3D14 000118 000C+00 1/0 0/0 0/0 .data            l_loadRes_GRR_MARO */
SECTION_DATA static u8 l_loadRes_GRR_MARO[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 809E3D14-809E3D20 000124 000C+00 1/0 0/0 0/0 .data            l_loadRes_GRR0 */
SECTION_DATA static u8 l_loadRes_GRR0[12] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 809E3D20-809E3D30 -00001 0010+00 2/2 0/0 0/0 .data            l_loadRes_list */
SECTION_DATA static void* l_loadRes_list[4] = {
    (void*)&l_loadRes_GRRa,
    (void*)&l_loadRes_GRR_SPAWATER,
    (void*)&l_loadRes_GRR_MARO,
    (void*)&l_loadRes_GRR0,
};

/* 809E3D30-809E3D38 -00001 0008+00 6/8 0/0 0/0 .data            l_resNames */
SECTION_DATA static void* l_resNames[2] = {
    (void*)&d_a_npc_grr__stringBase0,
    (void*)(((char*)&d_a_npc_grr__stringBase0) + 0x4),
};

/* 809E3D38-809E3D3C 000148 0004+00 0/1 0/0 0/0 .data            l_evtNames */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_evtNames[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 809E3D3C-809E3D40 -00001 0004+00 0/1 0/0 0/0 .data            l_myName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_myName = (void*)&d_a_npc_grr__stringBase0;
#pragma pop

/* 809E3D40-809E3D44 -00001 0004+00 0/1 0/0 0/0 .data            mEvtCutNameList__11daNpc_grR_c */
#pragma push
#pragma force_active on
SECTION_DATA void* daNpc_grR_c::mEvtCutNameList = (void*)(((char*)&d_a_npc_grr__stringBase0) + 0x9);
#pragma pop

/* 809E3D44-809E3D50 000154 000C+00 1/2 0/0 0/0 .data            mEvtCutList__11daNpc_grR_c */
SECTION_DATA u8 daNpc_grR_c::mEvtCutList[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 809E3D50-809E3D5C -00001 000C+00 1/1 0/0 0/0 .data            @4484 */
SECTION_DATA static void* lit_4484[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_grR_cFPv,
};

/* 809E3D5C-809E3D7C -00001 0020+00 1/1 0/0 0/0 .data            @4885 */
SECTION_DATA static void* lit_4885[8] = {
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0x90),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0xAC),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0xE8),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0x104),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0x120),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0x13C),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0x15C),
    (void*)(((char*)setExpressionAnm__11daNpc_grR_cFib) + 0xC8),
};

/* 809E3D7C-809E3D88 -00001 000C+00 0/1 0/0 0/0 .data            @5150 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5150[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)test__11daNpc_grR_cFPv,
};
#pragma pop

/* 809E3D88-809E3D94 -00001 000C+00 0/1 0/0 0/0 .data            @5154 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5154[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)waitMaro__11daNpc_grR_cFPv,
};
#pragma pop

/* 809E3D94-809E3DA0 -00001 000C+00 0/1 0/0 0/0 .data            @5156 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5156[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_grR_cFPv,
};
#pragma pop

/* 809E3DA0-809E3DAC -00001 000C+00 0/1 0/0 0/0 .data            @5198 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5198[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_grR_cFPv,
};
#pragma pop

/* 809E3DAC-809E3DB8 -00001 000C+00 0/1 0/0 0/0 .data            @5206 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5206[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_grR_cFPv,
};
#pragma pop

/* 809E3DB8-809E3DD8 -00001 0020+00 1/0 0/0 0/0 .data            daNpc_grR_MethodTable */
static actor_method_class daNpc_grR_MethodTable = {
    (process_method_func)daNpc_grR_Create__FPv,
    (process_method_func)daNpc_grR_Delete__FPv,
    (process_method_func)daNpc_grR_Execute__FPv,
    (process_method_func)daNpc_grR_IsDelete__FPv,
    (process_method_func)daNpc_grR_Draw__FPv,
};

/* 809E3DD8-809E3E08 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_GRR */
extern actor_process_profile_definition g_profile_NPC_GRR = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_NPC_GRR,           // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daNpc_grR_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  312,                    // mPriority
  &daNpc_grR_MethodTable, // sub_method
  0x00044100,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 809E3E08-809E3E14 000218 000C+00 2/2 0/0 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 809E3E14-809E3E5C 000224 0048+00 2/2 0/0 0/0 .data            __vt__11daNpc_grR_c */
SECTION_DATA extern void* __vt__11daNpc_grR_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daNpc_grR_cFv,
    (void*)setParam__11daNpc_grR_cFv,
    (void*)main__11daNpc_grR_cFv,
    (void*)ctrlBtk__11daNpc_grR_cFv,
    (void*)adjustShapeAngle__11daNpc_grR_cFv,
    (void*)setMtx__8daNpcF_cFv,
    (void*)setMtx2__8daNpcF_cFv,
    (void*)setAttnPos__11daNpc_grR_cFv,
    (void*)setCollisions__8daNpcF_cFv,
    (void*)setExpressionAnm__11daNpc_grR_cFib,
    (void*)setExpressionBtp__11daNpc_grR_cFi,
    (void*)setExpression__11daNpc_grR_cFif,
    (void*)setMotionAnm__11daNpc_grR_cFif,
    (void*)setMotion__11daNpc_grR_cFifi,
    (void*)drawDbgInfo__11daNpc_grR_cFv,
    (void*)drawOtherMdls__11daNpc_grR_cFv,
};

/* 809E3E5C-809E3E68 00026C 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 809E3E68-809E3E8C 000278 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809E38BC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809E38B4,
};

/* 809E3E8C-809E3E98 00029C 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 809E3E98-809E3EA4 0002A8 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 809E3EA4-809E3EB0 0002B4 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 809E3EB0-809E3EBC 0002C0 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcF_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcF_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcF_ActorMngr_cFv,
};

/* 809E3EBC-809E3EC8 0002CC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 809E3EC8-809E3ED4 0002D8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 809E3ED4-809E3EE0 0002E4 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcF_Lookat_c */
SECTION_DATA extern void* __vt__15daNpcF_Lookat_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcF_Lookat_cFv,
};

/* 809DF8CC-809DFA50 0000EC 0184+00 1/1 0/0 0/0 .text            __ct__11daNpc_grR_cFv */
daNpc_grR_c::daNpc_grR_c() {
    // NONMATCHING
}

/* 809DFA50-809DFA98 000270 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 809DFA98-809DFAE0 0002B8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 809DFAE0-809DFCE0 000300 0200+00 1/0 0/0 0/0 .text            __dt__11daNpc_grR_cFv */
daNpc_grR_c::~daNpc_grR_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E38D8-809E3944 000000 006C+00 12/12 0/0 0/0 .rodata          m__17daNpc_grR_Param_c */
SECTION_RODATA u8 const daNpc_grR_Param_c::m[108] = {
    0x42, 0x70, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
    0x43, 0x7F, 0x00, 0x00, 0x43, 0x70, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x41, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01,
    0x43, 0x34, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00,
    0x00, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E38D8, &daNpc_grR_Param_c::m);

/* 809E3944-809E3954 00006C 0010+00 0/1 0/0 0/0 .rodata          heapSize$4308 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const heapSize[16] = {
    0x00, 0x00, 0x2D, 0x70, 0x00, 0x00, 0x2D, 0x60, 0x00, 0x00, 0x2D, 0x70, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3944, &heapSize);
#pragma pop

/* 809E3954-809E3958 00007C 0004+00 0/1 0/0 0/0 .rodata          @4395 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4395 = -300.0f;
COMPILER_STRIP_GATE(0x809E3954, &lit_4395);
#pragma pop

/* 809E3958-809E395C 000080 0004+00 0/1 0/0 0/0 .rodata          @4396 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4396 = -50.0f;
COMPILER_STRIP_GATE(0x809E3958, &lit_4396);
#pragma pop

/* 809E395C-809E3960 000084 0004+00 0/1 0/0 0/0 .rodata          @4397 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4397 = 300.0f;
COMPILER_STRIP_GATE(0x809E395C, &lit_4397);
#pragma pop

/* 809E3960-809E3964 000088 0004+00 0/1 0/0 0/0 .rodata          @4398 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4398 = 450.0f;
COMPILER_STRIP_GATE(0x809E3960, &lit_4398);
#pragma pop

/* 809DFCE0-809DFFB8 000500 02D8+00 1/1 0/0 0/0 .text            create__11daNpc_grR_cFv */
void daNpc_grR_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3964-809E3968 00008C 0004+00 4/4 0/0 0/0 .rodata          @4452 */
SECTION_RODATA static f32 const lit_4452 = 1.0f;
COMPILER_STRIP_GATE(0x809E3964, &lit_4452);

/* 809E3968-809E396C 000090 0004+00 5/7 0/0 0/0 .rodata          @4453 */
SECTION_RODATA static u8 const lit_4453[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3968, &lit_4453);

/* 809DFFB8-809E0240 0007D8 0288+00 1/1 0/0 0/0 .text            CreateHeap__11daNpc_grR_cFv */
void daNpc_grR_c::CreateHeap() {
    // NONMATCHING
}

/* 809E0240-809E027C 000A60 003C+00 1/1 0/0 0/0 .text            __dt__15J3DTevKColorAnmFv */
// J3DTevKColorAnm::~J3DTevKColorAnm() {
extern "C" void __dt__15J3DTevKColorAnmFv() {
    // NONMATCHING
}

/* 809E027C-809E0294 000A9C 0018+00 1/1 0/0 0/0 .text            __ct__15J3DTevKColorAnmFv */
// J3DTevKColorAnm::J3DTevKColorAnm() {
extern "C" void __ct__15J3DTevKColorAnmFv() {
    // NONMATCHING
}

/* 809E0294-809E02D0 000AB4 003C+00 1/1 0/0 0/0 .text            __dt__14J3DTevColorAnmFv */
// J3DTevColorAnm::~J3DTevColorAnm() {
extern "C" void __dt__14J3DTevColorAnmFv() {
    // NONMATCHING
}

/* 809E02D0-809E02E8 000AF0 0018+00 1/1 0/0 0/0 .text            __ct__14J3DTevColorAnmFv */
// J3DTevColorAnm::J3DTevColorAnm() {
extern "C" void __ct__14J3DTevColorAnmFv() {
    // NONMATCHING
}

/* 809E02E8-809E0330 000B08 0048+00 1/1 0/0 0/0 .text            __dt__11J3DTexNoAnmFv */
// J3DTexNoAnm::~J3DTexNoAnm() {
extern "C" void __dt__11J3DTexNoAnmFv() {
    // NONMATCHING
}

/* 809E0330-809E0354 000B50 0024+00 1/1 0/0 0/0 .text            __ct__11J3DTexNoAnmFv */
// J3DTexNoAnm::J3DTexNoAnm() {
extern "C" void __ct__11J3DTexNoAnmFv() {
    // NONMATCHING
}

/* 809E0354-809E0390 000B74 003C+00 1/1 0/0 0/0 .text            __dt__12J3DTexMtxAnmFv */
// J3DTexMtxAnm::~J3DTexMtxAnm() {
extern "C" void __dt__12J3DTexMtxAnmFv() {
    // NONMATCHING
}

/* 809E0390-809E03A8 000BB0 0018+00 1/1 0/0 0/0 .text            __ct__12J3DTexMtxAnmFv */
// J3DTexMtxAnm::J3DTexMtxAnm() {
extern "C" void __ct__12J3DTexMtxAnmFv() {
    // NONMATCHING
}

/* 809E03A8-809E03E4 000BC8 003C+00 1/1 0/0 0/0 .text            __dt__14J3DMatColorAnmFv */
// J3DMatColorAnm::~J3DMatColorAnm() {
extern "C" void __dt__14J3DMatColorAnmFv() {
    // NONMATCHING
}

/* 809E03E4-809E03FC 000C04 0018+00 1/1 0/0 0/0 .text            __ct__14J3DMatColorAnmFv */
// J3DMatColorAnm::J3DMatColorAnm() {
extern "C" void __ct__14J3DMatColorAnmFv() {
    // NONMATCHING
}

/* 809E03FC-809E0430 000C1C 0034+00 1/1 0/0 0/0 .text            Delete__11daNpc_grR_cFv */
void daNpc_grR_c::Delete() {
    // NONMATCHING
}

/* 809E0430-809E0450 000C50 0020+00 2/2 0/0 0/0 .text            Execute__11daNpc_grR_cFv */
void daNpc_grR_c::Execute() {
    // NONMATCHING
}

/* 809E0450-809E04E0 000C70 0090+00 1/1 0/0 0/0 .text            Draw__11daNpc_grR_cFv */
void daNpc_grR_c::Draw() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E396C-809E3978 000094 000C+00 1/1 0/0 0/0 .rodata          @4505 */
SECTION_RODATA static u8 const lit_4505[12] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x809E396C, &lit_4505);

/* 809E04E0-809E0714 000D00 0234+00 1/1 0/0 0/0 .text
 * ctrlJoint__11daNpc_grR_cFP8J3DJointP8J3DModel                */
void daNpc_grR_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 809E0714-809E0734 000F34 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daNpc_grR_cFP10fopAc_ac_c              */
void daNpc_grR_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 809E0734-809E0780 000F54 004C+00 1/1 0/0 0/0 .text ctrlJointCallBack__11daNpc_grR_cFP8J3DJointi
 */
void daNpc_grR_c::ctrlJointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 809E0780-809E08FC 000FA0 017C+00 1/0 0/0 0/0 .text            setParam__11daNpc_grR_cFv */
void daNpc_grR_c::setParam() {
    // NONMATCHING
}

/* 809E08FC-809E0A7C 00111C 0180+00 1/0 0/0 0/0 .text            main__11daNpc_grR_cFv */
void daNpc_grR_c::main() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3978-809E397C 0000A0 0004+00 7/7 0/0 0/0 .rodata          @4718 */
SECTION_RODATA static f32 const lit_4718 = -1.0f;
COMPILER_STRIP_GATE(0x809E3978, &lit_4718);

/* 809E397C-809E3980 0000A4 0004+00 1/1 0/0 0/0 .rodata          @4719 */
SECTION_RODATA static f32 const lit_4719 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x809E397C, &lit_4719);

/* 809E0A7C-809E0B5C 00129C 00E0+00 1/0 0/0 0/0 .text            ctrlBtk__11daNpc_grR_cFv */
void daNpc_grR_c::ctrlBtk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3980-809E3984 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4852 = 24.0f;
COMPILER_STRIP_GATE(0x809E3980, &lit_4852);
#pragma pop

/* 809E3984-809E3988 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4853 = 30.0f;
COMPILER_STRIP_GATE(0x809E3984, &lit_4853);
#pragma pop

/* 809E3988-809E398C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4854 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x809E3988, &lit_4854);
#pragma pop

/* 809E398C-809E3990 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4855 = 125.0f;
COMPILER_STRIP_GATE(0x809E398C, &lit_4855);
#pragma pop

/* 809E3990-809E3998 0000B8 0008+00 0/1 0/0 0/0 .rodata          @4856 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4856[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3990, &lit_4856);
#pragma pop

/* 809E3998-809E39A0 0000C0 0008+00 0/1 0/0 0/0 .rodata          @4857 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4857[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3998, &lit_4857);
#pragma pop

/* 809E39A0-809E39A8 0000C8 0008+00 0/1 0/0 0/0 .rodata          @4858 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4858[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39A0, &lit_4858);
#pragma pop

/* 809E3EF8-809E3EFC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 809E3EFC-809E3F00 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 809E3F00-809E3F04 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 809E3F04-809E3F08 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 809E3F08-809E3F0C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 809E3F0C-809E3F10 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 809E3F10-809E3F14 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 809E3F14-809E3F18 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 809E3F18-809E3F1C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 809E3F1C-809E3F20 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 809E3F20-809E3F24 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 809E3F24-809E3F28 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 809E3F28-809E3F2C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 809E3F2C-809E3F30 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 809E3F30-809E3F34 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 809E3F34-809E3F38 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 809E3F38-809E3F44 000048 000C+00 1/1 0/0 0/0 .bss             @4018 */
static u8 lit_4018[12];

/* 809E3F44-809E3F48 000054 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 809E3F48-809E3F58 000058 000C+04 0/1 0/0 0/0 .bss             @4724 */
#pragma push
#pragma force_active on
static u8 lit_4724[12 + 4 /* padding */];
#pragma pop

/* 809E3F58-809E3F64 000068 000C+00 0/1 0/0 0/0 .bss             eyeOffset$4723 */
#pragma push
#pragma force_active on
static u8 eyeOffset[12];
#pragma pop

/* 809E0B5C-809E105C 00137C 0500+00 1/0 0/0 0/0 .text            setAttnPos__11daNpc_grR_cFv */
void daNpc_grR_c::setAttnPos() {
    // NONMATCHING
}

/* 809E105C-809E1260 00187C 0204+00 2/0 0/0 0/0 .text            setExpressionAnm__11daNpc_grR_cFib
 */
void daNpc_grR_c::setExpressionAnm(int param_0, bool param_1) {
    // NONMATCHING
}

/* 809E1260-809E138C 001A80 012C+00 1/0 0/0 0/0 .text            setExpressionBtp__11daNpc_grR_cFi
 */
void daNpc_grR_c::setExpressionBtp(int param_0) {
    // NONMATCHING
}

/* 809E138C-809E13B8 001BAC 002C+00 1/0 0/0 0/0 .text            setExpression__11daNpc_grR_cFif */
void daNpc_grR_c::setExpression(int param_0, f32 param_1) {
    // NONMATCHING
}

/* 809E13B8-809E1548 001BD8 0190+00 1/0 0/0 0/0 .text            setMotionAnm__11daNpc_grR_cFif */
bool daNpc_grR_c::setMotionAnm(int param_0, f32 param_1) {
    // NONMATCHING
}

/* 809E1548-809E158C 001D68 0044+00 1/0 0/0 0/0 .text            setMotion__11daNpc_grR_cFifi */
void daNpc_grR_c::setMotion(int param_0, f32 param_1, int param_2) {
    // NONMATCHING
}

/* 809E158C-809E1594 001DAC 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__11daNpc_grR_cFv */
bool daNpc_grR_c::drawDbgInfo() {
    return false;
}

/* 809E1594-809E1598 001DB4 0004+00 1/0 0/0 0/0 .text            drawOtherMdls__11daNpc_grR_cFv */
void daNpc_grR_c::drawOtherMdls() {
    /* empty function */
}

/* 809E1598-809E15E4 001DB8 004C+00 1/1 0/0 0/0 .text            getTypeFromParam__11daNpc_grR_cFv
 */
void daNpc_grR_c::getTypeFromParam() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3BCC-809E3BCC 0002F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_809E3BD6 = "D_MN04";
#pragma pop

/* 809E15E4-809E16CC 001E04 00E8+00 1/1 0/0 0/0 .text            isDelete__11daNpc_grR_cFv */
void daNpc_grR_c::isDelete() {
    // NONMATCHING
}

/* 809E16CC-809E18A4 001EEC 01D8+00 1/1 0/0 0/0 .text            reset__11daNpc_grR_cFv */
void daNpc_grR_c::reset() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E39A8-809E39B4 0000D0 000C+00 0/1 0/0 0/0 .rodata          @5043 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5043[12] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39A8, &lit_5043);
#pragma pop

/* 809E39B4-809E39B8 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5044 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5044[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E39B4, &lit_5044);
#pragma pop

/* 809E39B8-809E39C4 0000E0 000C+00 0/1 0/0 0/0 .rodata          @5045 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5045[12] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E39B8, &lit_5045);
#pragma pop

/* 809E39C4-809E39D0 0000EC 000C+00 0/1 0/0 0/0 .rodata          @5046 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5046[12] = {
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39C4, &lit_5046);
#pragma pop

/* 809E39D0-809E39D8 0000F8 0008+00 0/1 0/0 0/0 .rodata          @5047 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5047[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39D0, &lit_5047);
#pragma pop

/* 809E39D8-809E39E4 000100 000C+00 0/1 0/0 0/0 .rodata          @5048 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5048[12] = {
    0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39D8, &lit_5048);
#pragma pop

/* 809E39E4-809E39E8 00010C 0004+00 0/1 0/0 0/0 .rodata          @5049 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5049[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E39E4, &lit_5049);
#pragma pop

/* 809E39E8-809E39F4 000110 000C+00 0/1 0/0 0/0 .rodata          @5050 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5050[12] = {
    0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E39E8, &lit_5050);
#pragma pop

/* 809E39F4-809E3A00 00011C 000C+00 0/1 0/0 0/0 .rodata          @5051 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5051[12] = {
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E39F4, &lit_5051);
#pragma pop

/* 809E3A00-809E3A08 000128 0008+00 0/1 0/0 0/0 .rodata          @5052 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5052[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A00, &lit_5052);
#pragma pop

/* 809E3A08-809E3A14 000130 000C+00 0/1 0/0 0/0 .rodata          @5053 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5053[12] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3A08, &lit_5053);
#pragma pop

/* 809E3A14-809E3A20 00013C 000C+00 0/1 0/0 0/0 .rodata          @5054 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5054[12] = {
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A14, &lit_5054);
#pragma pop

/* 809E3A20-809E3A28 000148 0008+00 0/1 0/0 0/0 .rodata          @5055 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5055[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A20, &lit_5055);
#pragma pop

/* 809E3A28-809E3A34 000150 000C+00 0/1 0/0 0/0 .rodata          @5056 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5056[12] = {
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A28, &lit_5056);
#pragma pop

/* 809E3A34-809E3A38 00015C 0004+00 0/1 0/0 0/0 .rodata          @5057 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5057[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3A34, &lit_5057);
#pragma pop

/* 809E3A38-809E3A44 000160 000C+00 0/1 0/0 0/0 .rodata          @5058 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5058[12] = {
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A38, &lit_5058);
#pragma pop

/* 809E3A44-809E3A48 00016C 0004+00 0/1 0/0 0/0 .rodata          @5059 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5059[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3A44, &lit_5059);
#pragma pop

/* 809E3A48-809E3A54 000170 000C+00 0/1 0/0 0/0 .rodata          @5060 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5060[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A48, &lit_5060);
#pragma pop

/* 809E3A54-809E3A58 00017C 0004+00 0/1 0/0 0/0 .rodata          @5061 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5061[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3A54, &lit_5061);
#pragma pop

/* 809E18A4-809E1B28 0020C4 0284+00 1/1 0/0 0/0 .text            playExpression__11daNpc_grR_cFv */
void daNpc_grR_c::playExpression() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3A58-809E3A78 000180 0020+00 0/0 0/0 0/0 .rodata          @5062 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5062[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A58, &lit_5062);
#pragma pop

/* 809E3A78-809E3A84 0001A0 000C+00 0/1 0/0 0/0 .rodata          @5080 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5080[12] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A78, &lit_5080);
#pragma pop

/* 809E3A84-809E3A88 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5081 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5081[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3A84, &lit_5081);
#pragma pop

/* 809E3A88-809E3A94 0001B0 000C+00 0/1 0/0 0/0 .rodata          @5082 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5082[12] = {
    0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3A88, &lit_5082);
#pragma pop

/* 809E3A94-809E3AA0 0001BC 000C+00 0/1 0/0 0/0 .rodata          @5083 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5083[12] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3A94, &lit_5083);
#pragma pop

/* 809E3AA0-809E3AA8 0001C8 0008+00 0/1 0/0 0/0 .rodata          @5084 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5084[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AA0, &lit_5084);
#pragma pop

/* 809E3AA8-809E3AB4 0001D0 000C+00 0/1 0/0 0/0 .rodata          @5085 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5085[12] = {
    0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AA8, &lit_5085);
#pragma pop

/* 809E3AB4-809E3AB8 0001DC 0004+00 0/1 0/0 0/0 .rodata          @5086 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5086[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3AB4, &lit_5086);
#pragma pop

/* 809E3AB8-809E3AC4 0001E0 000C+00 0/1 0/0 0/0 .rodata          @5087 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5087[12] = {
    0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AB8, &lit_5087);
#pragma pop

/* 809E3AC4-809E3AC8 0001EC 0004+00 0/1 0/0 0/0 .rodata          @5088 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5088[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3AC4, &lit_5088);
#pragma pop

/* 809E3AC8-809E3AD4 0001F0 000C+00 0/1 0/0 0/0 .rodata          @5089 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5089[12] = {
    0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3AC8, &lit_5089);
#pragma pop

/* 809E3AD4-809E3AE0 0001FC 000C+00 0/1 0/0 0/0 .rodata          @5090 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5090[12] = {
    0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AD4, &lit_5090);
#pragma pop

/* 809E3AE0-809E3AE8 000208 0008+00 0/1 0/0 0/0 .rodata          @5091 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5091[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AE0, &lit_5091);
#pragma pop

/* 809E3AE8-809E3AF4 000210 000C+00 0/1 0/0 0/0 .rodata          @5092 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5092[12] = {
    0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3AE8, &lit_5092);
#pragma pop

/* 809E3AF4-809E3B00 00021C 000C+00 0/1 0/0 0/0 .rodata          @5093 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5093[12] = {
    0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3AF4, &lit_5093);
#pragma pop

/* 809E3B00-809E3B08 000228 0008+00 0/1 0/0 0/0 .rodata          @5094 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5094[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B00, &lit_5094);
#pragma pop

/* 809E3B08-809E3B14 000230 000C+00 0/1 0/0 0/0 .rodata          @5095 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5095[12] = {
    0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3B08, &lit_5095);
#pragma pop

/* 809E3B14-809E3B20 00023C 000C+00 0/1 0/0 0/0 .rodata          @5096 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5096[12] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B14, &lit_5096);
#pragma pop

/* 809E3B20-809E3B28 000248 0008+00 0/1 0/0 0/0 .rodata          @5097 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5097[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B20, &lit_5097);
#pragma pop

/* 809E3B28-809E3B34 000250 000C+00 0/1 0/0 0/0 .rodata          @5098 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5098[12] = {
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3B28, &lit_5098);
#pragma pop

/* 809E3B34-809E3B40 00025C 000C+00 0/1 0/0 0/0 .rodata          @5099 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5099[12] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B34, &lit_5099);
#pragma pop

/* 809E3B40-809E3B48 000268 0008+00 0/1 0/0 0/0 .rodata          @5100 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5100[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B40, &lit_5100);
#pragma pop

/* 809E3B48-809E3B54 000270 000C+00 0/1 0/0 0/0 .rodata          @5101 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5101[12] = {
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(0x809E3B48, &lit_5101);
#pragma pop

/* 809E3B54-809E3B60 00027C 000C+00 0/1 0/0 0/0 .rodata          @5102 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5102[12] = {
    0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B54, &lit_5102);
#pragma pop

/* 809E3B60-809E3B68 000288 0008+00 0/1 0/0 0/0 .rodata          @5103 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5103[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B60, &lit_5103);
#pragma pop

/* 809E3B68-809E3B74 000290 000C+00 0/1 0/0 0/0 .rodata          @5104 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5104[12] = {
    0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B68, &lit_5104);
#pragma pop

/* 809E3B74-809E3B78 00029C 0004+00 0/1 0/0 0/0 .rodata          @5105 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5105[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3B74, &lit_5105);
#pragma pop

/* 809E3B78-809E3B84 0002A0 000C+00 0/1 0/0 0/0 .rodata          @5106 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5106[12] = {
    0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B78, &lit_5106);
#pragma pop

/* 809E3B84-809E3B88 0002AC 0004+00 0/1 0/0 0/0 .rodata          @5107 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5107[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809E3B84, &lit_5107);
#pragma pop

/* 809E1B28-809E1F10 002348 03E8+00 1/1 0/0 0/0 .text            playMotion__11daNpc_grR_cFv */
void daNpc_grR_c::playMotion() {
    // NONMATCHING
}

/* 809E1F10-809E1F3C 002730 002C+00 2/2 0/0 0/0 .text
 * chkAction__11daNpc_grR_cFM11daNpc_grR_cFPCvPvPv_i            */
void daNpc_grR_c::chkAction(int (daNpc_grR_c::*param_0)(void*)) {
    // NONMATCHING
}

/* 809E1F3C-809E1FE4 00275C 00A8+00 2/2 0/0 0/0 .text
 * setAction__11daNpc_grR_cFM11daNpc_grR_cFPCvPvPv_i            */
void daNpc_grR_c::setAction(int (daNpc_grR_c::*param_0)(void*)) {
    // NONMATCHING
}

/* 809E1FE4-809E2088 002804 00A4+00 1/1 0/0 0/0 .text            selectAction__11daNpc_grR_cFv */
void daNpc_grR_c::selectAction() {
    // NONMATCHING
}

/* 809E2088-809E219C 0028A8 0114+00 1/1 0/0 0/0 .text            doNormalAction__11daNpc_grR_cFi */
void daNpc_grR_c::doNormalAction(int param_0) {
    // NONMATCHING
}

/* 809E219C-809E2480 0029BC 02E4+00 1/1 0/0 0/0 .text            doEvent__11daNpc_grR_cFv */
void daNpc_grR_c::doEvent() {
    // NONMATCHING
}

/* 809E2480-809E24A4 002CA0 0024+00 5/5 0/0 0/0 .text            setLookMode__11daNpc_grR_cFi */
void daNpc_grR_c::setLookMode(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3B88-809E3BB4 0002B0 002C+00 0/0 0/0 0/0 .rodata          @5108 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5108[44] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3B88, &lit_5108);
#pragma pop

/* 809E3BB4-809E3BC0 0002DC 000C+00 0/1 0/0 0/0 .rodata          @5264 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5264[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x809E3BB4, &lit_5264);
#pragma pop

/* 809E3BC0-809E3BC4 0002E8 0004+00 0/1 0/0 0/0 .rodata          @5317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5317 = -80.0f;
COMPILER_STRIP_GATE(0x809E3BC0, &lit_5317);
#pragma pop

/* 809E3BC4-809E3BC8 0002EC 0004+00 0/1 0/0 0/0 .rodata          @5318 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5318 = 80.0f;
COMPILER_STRIP_GATE(0x809E3BC4, &lit_5318);
#pragma pop

/* 809E3BC8-809E3BCC 0002F0 0004+00 0/1 0/0 0/0 .rodata          @5319 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5319 = 40.0f;
COMPILER_STRIP_GATE(0x809E3BC8, &lit_5319);
#pragma pop

/* 809E24A4-809E272C 002CC4 0288+00 1/1 0/0 0/0 .text            lookat__11daNpc_grR_cFv */
void daNpc_grR_c::lookat() {
    // NONMATCHING
}

/* 809E272C-809E27CC 002F4C 00A0+00 1/1 0/0 0/0 .text setExpressionTalkAfter__11daNpc_grR_cFv */
void daNpc_grR_c::setExpressionTalkAfter() {
    // NONMATCHING
}

/* 809E27CC-809E29B8 002FEC 01EC+00 1/0 0/0 0/0 .text            wait__11daNpc_grR_cFPv */
void daNpc_grR_c::wait(void* param_0) {
    // NONMATCHING
}

/* 809E29B8-809E2B48 0031D8 0190+00 1/0 0/0 0/0 .text            waitMaro__11daNpc_grR_cFPv */
void daNpc_grR_c::waitMaro(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3BCC-809E3BCC 0002F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_809E3BDD = "DEFAULT_GETITEM";
#pragma pop

/* 809E2B48-809E2E84 003368 033C+00 2/0 0/0 0/0 .text            talk__11daNpc_grR_cFPv */
void daNpc_grR_c::talk(void* param_0) {
    // NONMATCHING
}

/* 809E2E84-809E2F68 0036A4 00E4+00 2/0 0/0 0/0 .text            test__11daNpc_grR_cFPv */
void daNpc_grR_c::test(void* param_0) {
    // NONMATCHING
}

/* 809E2F68-809E2F88 003788 0020+00 1/0 0/0 0/0 .text            daNpc_grR_Create__FPv */
static void daNpc_grR_Create(void* param_0) {
    // NONMATCHING
}

/* 809E2F88-809E2FA8 0037A8 0020+00 1/0 0/0 0/0 .text            daNpc_grR_Delete__FPv */
static void daNpc_grR_Delete(void* param_0) {
    // NONMATCHING
}

/* 809E2FA8-809E2FC8 0037C8 0020+00 1/0 0/0 0/0 .text            daNpc_grR_Execute__FPv */
static void daNpc_grR_Execute(void* param_0) {
    // NONMATCHING
}

/* 809E2FC8-809E2FE8 0037E8 0020+00 1/0 0/0 0/0 .text            daNpc_grR_Draw__FPv */
static void daNpc_grR_Draw(void* param_0) {
    // NONMATCHING
}

/* 809E2FE8-809E2FF0 003808 0008+00 1/0 0/0 0/0 .text            daNpc_grR_IsDelete__FPv */
static bool daNpc_grR_IsDelete(void* param_0) {
    return true;
}

/* 809E2FF0-809E3020 003810 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
// void J3DTexNoAnm::calc(u16* param_0) const {
extern "C" void calc__11J3DTexNoAnmCFPUs() {
    // NONMATCHING
}

/* 809E3020-809E3068 003840 0048+00 5/4 0/0 0/0 .text            __dt__18daNpcF_ActorMngr_cFv */
// daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c() {
extern "C" void __dt__18daNpcF_ActorMngr_cFv() {
    // NONMATCHING
}

/* 809E3068-809E30A4 003888 003C+00 2/2 0/0 0/0 .text            __ct__18daNpcF_ActorMngr_cFv */
// daNpcF_ActorMngr_c::daNpcF_ActorMngr_c() {
extern "C" void __ct__18daNpcF_ActorMngr_cFv() {
    // NONMATCHING
}

/* 809E30A4-809E3174 0038C4 00D0+00 1/0 0/0 0/0 .text            __dt__15daNpcF_Lookat_cFv */
// daNpcF_Lookat_c::~daNpcF_Lookat_c() {
extern "C" void __dt__15daNpcF_Lookat_cFv() {
    // NONMATCHING
}

/* 809E3174-809E31B0 003994 003C+00 5/5 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 809E31B0-809E31B4 0039D0 0004+00 2/2 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 809E31B4-809E31F0 0039D4 003C+00 6/6 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 809E31F0-809E31F4 003A10 0004+00 2/2 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 809E31F4-809E3440 003A14 024C+00 1/1 0/0 0/0 .text            __dt__8daNpcF_cFv */
// daNpcF_c::~daNpcF_c() {
extern "C" void __dt__8daNpcF_cFv() {
    // NONMATCHING
}

/* 809E3440-809E3630 003C60 01F0+00 1/1 0/0 0/0 .text            __ct__8daNpcF_cFv */
// daNpcF_c::daNpcF_c() {
extern "C" void __ct__8daNpcF_cFv() {
    // NONMATCHING
}

/* 809E3630-809E36A0 003E50 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 809E36A0-809E36FC 003EC0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 809E36FC-809E376C 003F1C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 809E376C-809E37B4 003F8C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 809E37B4-809E37B8 003FD4 0004+00 1/0 0/0 0/0 .text            setCollisions__8daNpcF_cFv */
// void daNpcF_c::setCollisions() {
extern "C" void setCollisions__8daNpcF_cFv() {
    /* empty function */
}

/* 809E37B8-809E3800 003FD8 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3EE0-809E3EEC 0002F0 000C+00 2/2 0/0 0/0 .data            __vt__17daNpc_grR_Param_c */
SECTION_DATA extern void* __vt__17daNpc_grR_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daNpc_grR_Param_cFv,
};

/* 809E3800-809E3868 004020 0068+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_grr_cpp */
void __sinit_d_a_npc_grr_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x809E3800, __sinit_d_a_npc_grr_cpp);
#pragma pop

/* 809E3868-809E386C 004088 0004+00 1/0 0/0 0/0 .text            adjustShapeAngle__11daNpc_grR_cFv
 */
void daNpc_grR_c::adjustShapeAngle() {
    /* empty function */
}

/* 809E386C-809E38B4 00408C 0048+00 2/1 0/0 0/0 .text            __dt__17daNpc_grR_Param_cFv */
daNpc_grR_Param_c::~daNpc_grR_Param_c() {
    // NONMATCHING
}

/* 809E38B4-809E38BC 0040D4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_809E38B4() {
    // NONMATCHING
}

/* 809E38BC-809E38C4 0040DC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_809E38BC() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 809E3F64-809E3F68 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_809E3F64[4];
#pragma pop

/* 809E3F68-809E3F6C 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_809E3F68[4];
#pragma pop

/* 809E3F6C-809E3F70 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_809E3F6C[4];
#pragma pop

/* 809E3F70-809E3F74 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_809E3F70[4];
#pragma pop

/* 809E3F74-809E3F78 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3F74[4];
#pragma pop

/* 809E3F78-809E3F7C 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3F78[4];
#pragma pop

/* 809E3F7C-809E3F80 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_809E3F7C[4];
#pragma pop

/* 809E3F80-809E3F84 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_809E3F80[4];
#pragma pop

/* 809E3F84-809E3F88 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_809E3F84[4];
#pragma pop

/* 809E3F88-809E3F8C 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_809E3F88[4];
#pragma pop

/* 809E3F8C-809E3F90 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_809E3F8C[4];
#pragma pop

/* 809E3F90-809E3F94 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_809E3F90[4];
#pragma pop

/* 809E3F94-809E3F98 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_809E3F94[4];
#pragma pop

/* 809E3F98-809E3F9C 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3F98[4];
#pragma pop

/* 809E3F9C-809E3FA0 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_809E3F9C[4];
#pragma pop

/* 809E3FA0-809E3FA4 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_809E3FA0[4];
#pragma pop

/* 809E3FA4-809E3FA8 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_809E3FA4[4];
#pragma pop

/* 809E3FA8-809E3FAC 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_809E3FA8[4];
#pragma pop

/* 809E3FAC-809E3FB0 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_809E3FAC[4];
#pragma pop

/* 809E3FB0-809E3FB4 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_809E3FB0[4];
#pragma pop

/* 809E3FB4-809E3FB8 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_809E3FB4[4];
#pragma pop

/* 809E3FB8-809E3FBC 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3FB8[4];
#pragma pop

/* 809E3FBC-809E3FC0 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3FBC[4];
#pragma pop

/* 809E3FC0-809E3FC4 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809E3FC0[4];
#pragma pop

/* 809E3FC4-809E3FC8 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_809E3FC4[4];
#pragma pop

/* 809E3BCC-809E3BCC 0002F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
