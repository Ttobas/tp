/**
 * @file d_a_npc_seib.cpp
 * 
*/

#include "rel/d/a/npc/d_a_npc_seib/d_a_npc_seib.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __dt__12daNpc_seiB_cFv();
extern "C" void create__12daNpc_seiB_cFv();
extern "C" void CreateHeap__12daNpc_seiB_cFv();
extern "C" void Delete__12daNpc_seiB_cFv();
extern "C" void Execute__12daNpc_seiB_cFv();
extern "C" void Draw__12daNpc_seiB_cFv();
extern "C" void createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c();
extern "C" void getType__12daNpc_seiB_cFv();
extern "C" void getFlowNodeNo__12daNpc_seiB_cFv();
extern "C" bool isDelete__12daNpc_seiB_cFv();
extern "C" void reset__12daNpc_seiB_cFv();
extern "C" void setParam__12daNpc_seiB_cFv();
extern "C" void getDistTable__12dAttention_cFi();
extern "C" void srchActors__12daNpc_seiB_cFv();
extern "C" void evtTalk__12daNpc_seiB_cFv();
extern "C" void evtCutProc__12daNpc_seiB_cFv();
extern "C" void action__12daNpc_seiB_cFv();
extern "C" void beforeMove__12daNpc_seiB_cFv();
extern "C" void setAttnPos__12daNpc_seiB_cFv();
extern "C" bool drawDbgInfo__12daNpc_seiB_cFv();
extern "C" void afterSetMotionAnm__12daNpc_seiB_cFiifi();
extern "C" void selectAction__12daNpc_seiB_cFv();
extern "C" void chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i();
extern "C" void setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i();
extern "C" void ctrlWaitAnm__12daNpc_seiB_cFv();
extern "C" void wait__12daNpc_seiB_cFPv();
extern "C" void talk__12daNpc_seiB_cFPv();
extern "C" static void daNpc_seiB_Create__FPv();
extern "C" static void daNpc_seiB_Delete__FPv();
extern "C" static void daNpc_seiB_Execute__FPv();
extern "C" static void daNpc_seiB_Draw__FPv();
extern "C" static bool daNpc_seiB_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__8daNpcT_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void
__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__15daNpcT_JntAnm_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__18daNpcT_ActorMngr_cFv();
extern "C" void __dt__22daNpcT_MotionSeqMngr_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" bool getEyeballMaterialNo__8daNpcT_cFv();
extern "C" void ctrlSubFaceMotion__8daNpcT_cFi();
extern "C" bool checkChangeJoint__8daNpcT_cFi();
extern "C" bool checkRemoveJoint__8daNpcT_cFi();
extern "C" s32 getBackboneJointNo__8daNpcT_cFv();
extern "C" s32 getNeckJointNo__8daNpcT_cFv();
extern "C" s32 getHeadJointNo__8daNpcT_cFv();
extern "C" s32 getFootLJointNo__8daNpcT_cFv();
extern "C" s32 getFootRJointNo__8daNpcT_cFv();
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv();
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv();
extern "C" void afterJntAnm__8daNpcT_cFi();
extern "C" bool checkChangeEvt__8daNpcT_cFv();
extern "C" bool evtEndProc__8daNpcT_cFv();
extern "C" void setAfterTalkMotion__8daNpcT_cFv();
extern "C" void afterMoved__8daNpcT_cFv();
extern "C" void setCollision__8daNpcT_cFv();
extern "C" bool chkXYItems__8daNpcT_cFv();
extern "C" void decTmr__8daNpcT_cFv();
extern "C" void drawOtherMdl__8daNpcT_cFv();
extern "C" void drawGhost__8daNpcT_cFv();
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi();
extern "C" void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c();
extern "C" void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c();
extern "C" void changeAnm__8daNpcT_cFPiPi();
extern "C" void changeBck__8daNpcT_cFPiPi();
extern "C" void changeBtp__8daNpcT_cFPiPi();
extern "C" void changeBtk__8daNpcT_cFPiPi();
extern "C" void __sinit_d_a_npc_seib_cpp();
extern "C" void
__ct__12daNpc_seiB_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" void __dt__18daNpc_seiB_Param_cFv();
extern "C" static void func_80AC7000();
extern "C" static void func_80AC7008();
extern "C" u8 const m__18daNpc_seiB_Param_c[148];
extern "C" extern char const* const d_a_npc_seib__stringBase0;
extern "C" void* mCutNameList__12daNpc_seiB_c;
extern "C" u8 mCutList__12daNpc_seiB_c[12];

//
// External References:
//

extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
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
extern "C" void initialize__18daNpcT_ActorMngr_cFv();
extern "C" void initialize__15daNpcT_MatAnm_cFv();
extern "C" void initialize__22daNpcT_MotionSeqMngr_cFv();
extern "C" void checkEndSequence__22daNpcT_MotionSeqMngr_cFv();
extern "C" void initialize__15daNpcT_JntAnm_cFv();
extern "C" void getTexSRTKeyAnmP__8daNpcT_cFPCci();
extern "C" void getTevRegKeyAnmP__8daNpcT_cFPCci();
extern "C" void setBtkAnm__8daNpcT_cFP19J3DAnmTextureSRTKeyP12J3DModelDatafi();
extern "C" void setBrkAnm__8daNpcT_cFP15J3DAnmTevRegKeyP12J3DModelDatafi();
extern "C" void loadRes__8daNpcT_cFPCScPPCc();
extern "C" void deleteRes__8daNpcT_cFPCScPPCc();
extern "C" void execute__8daNpcT_cFv();
extern "C" void draw__8daNpcT_cFiifP11_GXColorS10fiii();
extern "C" void setEnvTevColor__8daNpcT_cFv();
extern "C" void setRoomNo__8daNpcT_cFv();
extern "C" void ctrlBtk__8daNpcT_cFv();
extern "C" void setMtx__8daNpcT_cFv();
extern "C" void ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel();
extern "C" void evtProc__8daNpcT_cFv();
extern "C" void setFootPos__8daNpcT_cFv();
extern "C" void setFootPrtcl__8daNpcT_cFP4cXyzff();
extern "C" bool checkCullDraw__8daNpcT_cFv();
extern "C" void twilight__8daNpcT_cFv();
extern "C" void evtOrder__8daNpcT_cFv();
extern "C" void evtChange__8daNpcT_cFv();
extern "C" void clrParam__8daNpcT_cFv();
extern "C" void setFaceMotionAnm__8daNpcT_cFib();
extern "C" void setMotionAnm__8daNpcT_cFifi();
extern "C" void setAngle__8daNpcT_cFs();
extern "C" void initTalk__8daNpcT_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcT_cFPiiPP10fopAc_ac_ci();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" u8 dist_table__12dAttention_c[6552];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__8daNpcT_c[49];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80AC70D0-80AC70D0 0000AC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80AC70D0 = "";
SECTION_DEAD static char const* const stringBase_80AC70D1 = "DEFAULT_GETITEM";
SECTION_DEAD static char const* const stringBase_80AC70E1 = "NO_RESPONSE";
SECTION_DEAD static char const* const stringBase_80AC70ED = "seiB";
#pragma pop

/* 80AC70F8-80AC7104 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80AC7104-80AC7118 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80AC7118-80AC7120 000020 0008+00 1/1 0/0 0/0 .data            l_bmdData */
SECTION_DATA static u8 l_bmdData[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01,
};

/* 80AC7120-80AC7138 -00001 0018+00 0/1 0/0 0/0 .data            l_evtList */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_evtList[6] = {
    (void*)&d_a_npc_seib__stringBase0,
    (void*)NULL,
    (void*)(((char*)&d_a_npc_seib__stringBase0) + 0x1),
    (void*)NULL,
    (void*)(((char*)&d_a_npc_seib__stringBase0) + 0x11),
    (void*)NULL,
};
#pragma pop

/* 80AC7138-80AC7140 -00001 0008+00 2/4 0/0 0/0 .data            l_resNameList */
SECTION_DATA static void* l_resNameList[2] = {
    (void*)&d_a_npc_seib__stringBase0,
    (void*)(((char*)&d_a_npc_seib__stringBase0) + 0x1D),
};

/* 80AC7140-80AC7144 000048 0002+02 1/0 0/0 0/0 .data            l_loadResPtrn0 */
SECTION_DATA static u16 l_loadResPtrn0[1 + 1 /* padding */] = {
    0x01FF,
    /* padding */
    0x0000,
};

/* 80AC7144-80AC714C -00001 0008+00 1/2 0/0 0/0 .data            l_loadResPtrnList */
SECTION_DATA static void* l_loadResPtrnList[2] = {
    (void*)&l_loadResPtrn0,
    (void*)&l_loadResPtrn0,
};

/* 80AC714C-80AC7168 000054 001C+00 0/1 0/0 0/0 .data            l_faceMotionAnmData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionAnmData[28] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80AC7168-80AC71D8 000070 0070+00 0/1 0/0 0/0 .data            l_motionAnmData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_motionAnmData[112] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80AC71D8-80AC71E8 0000E0 0010+00 0/1 0/0 0/0 .data            l_faceMotionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionSequenceData[16] = {
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80AC71E8-80AC7228 0000F0 0040+00 0/1 0/0 0/0 .data            l_motionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_motionSequenceData[64] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80AC7228-80AC722C -00001 0004+00 1/1 0/0 0/0 .data            mCutNameList__12daNpc_seiB_c */
SECTION_DATA void* daNpc_seiB_c::mCutNameList = (void*)&d_a_npc_seib__stringBase0;

/* 80AC722C-80AC7238 000134 000C+00 2/2 0/0 0/0 .data            mCutList__12daNpc_seiB_c */
SECTION_DATA u8 daNpc_seiB_c::mCutList[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80AC7238-80AC7244 -00001 000C+00 1/1 0/0 0/0 .data            @4342 */
SECTION_DATA static void* lit_4342[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__12daNpc_seiB_cFPv,
};

/* 80AC7244-80AC7250 -00001 000C+00 1/1 0/0 0/0 .data            @4352 */
SECTION_DATA static void* lit_4352[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__12daNpc_seiB_cFPv,
};

/* 80AC7250-80AC7270 000158 0020+00 0/1 0/0 0/0 .data            btkAnmData$4416 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 btkAnmData[32] = {
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80AC7270-80AC7290 000178 0020+00 0/1 0/0 0/0 .data            brkAnmData$4417 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 brkAnmData[32] = {
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01,
};
#pragma pop

/* 80AC7290-80AC729C -00001 000C+00 1/1 0/0 0/0 .data            @4467 */
SECTION_DATA static void* lit_4467[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__12daNpc_seiB_cFPv,
};

/* 80AC729C-80AC72BC -00001 0020+00 1/0 0/0 0/0 .data            daNpc_seiB_MethodTable */
static actor_method_class daNpc_seiB_MethodTable = {
    (process_method_func)daNpc_seiB_Create__FPv,
    (process_method_func)daNpc_seiB_Delete__FPv,
    (process_method_func)daNpc_seiB_Execute__FPv,
    (process_method_func)daNpc_seiB_IsDelete__FPv,
    (process_method_func)daNpc_seiB_Draw__FPv,
};

/* 80AC72BC-80AC72EC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_SEIB */
extern actor_process_profile_definition g_profile_NPC_SEIB = {
  fpcLy_CURRENT_e,         // mLayerID
  7,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_NPC_SEIB,           // mProcName
  &g_fpcLf_Method.mBase,   // sub_method
  sizeof(daNpc_seiB_c),    // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  358,                     // mPriority
  &daNpc_seiB_MethodTable, // sub_method
  0x00044000,              // mStatus
  fopAc_ACTOR_e,           // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80AC72EC-80AC72F8 0001F4 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80AC72F8-80AC731C 000200 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80AC7008,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80AC7000,
};

/* 80AC731C-80AC7328 000224 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80AC7328-80AC7334 000230 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80AC7334-80AC7340 00023C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80AC7340-80AC734C 000248 000C+00 3/3 0/0 0/0 .data            __vt__22daNpcT_MotionSeqMngr_c */
SECTION_DATA extern void* __vt__22daNpcT_MotionSeqMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22daNpcT_MotionSeqMngr_cFv,
};

/* 80AC734C-80AC7358 000254 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcT_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcT_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcT_ActorMngr_cFv,
};

/* 80AC7358-80AC7364 000260 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcT_JntAnm_c */
SECTION_DATA extern void* __vt__15daNpcT_JntAnm_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcT_JntAnm_cFv,
};

/* 80AC7364-80AC7428 00026C 00C4+00 2/2 0/0 0/0 .data            __vt__12daNpc_seiB_c */
SECTION_DATA extern void* __vt__12daNpc_seiB_c[49] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daNpc_seiB_cFv,
    (void*)ctrlBtk__8daNpcT_cFv,
    (void*)ctrlSubFaceMotion__8daNpcT_cFi,
    (void*)checkChangeJoint__8daNpcT_cFi,
    (void*)checkRemoveJoint__8daNpcT_cFi,
    (void*)getBackboneJointNo__8daNpcT_cFv,
    (void*)getNeckJointNo__8daNpcT_cFv,
    (void*)getHeadJointNo__8daNpcT_cFv,
    (void*)getFootLJointNo__8daNpcT_cFv,
    (void*)getFootRJointNo__8daNpcT_cFv,
    (void*)getEyeballLMaterialNo__8daNpcT_cFv,
    (void*)getEyeballRMaterialNo__8daNpcT_cFv,
    (void*)getEyeballMaterialNo__8daNpcT_cFv,
    (void*)ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel,
    (void*)afterJntAnm__8daNpcT_cFi,
    (void*)setParam__12daNpc_seiB_cFv,
    (void*)checkChangeEvt__8daNpcT_cFv,
    (void*)evtTalk__12daNpc_seiB_cFv,
    (void*)evtEndProc__8daNpcT_cFv,
    (void*)evtCutProc__12daNpc_seiB_cFv,
    (void*)setAfterTalkMotion__8daNpcT_cFv,
    (void*)evtProc__8daNpcT_cFv,
    (void*)action__12daNpc_seiB_cFv,
    (void*)beforeMove__12daNpc_seiB_cFv,
    (void*)afterMoved__8daNpcT_cFv,
    (void*)setAttnPos__12daNpc_seiB_cFv,
    (void*)setFootPos__8daNpcT_cFv,
    (void*)setCollision__8daNpcT_cFv,
    (void*)setFootPrtcl__8daNpcT_cFP4cXyzff,
    (void*)checkCullDraw__8daNpcT_cFv,
    (void*)twilight__8daNpcT_cFv,
    (void*)chkXYItems__8daNpcT_cFv,
    (void*)evtOrder__8daNpcT_cFv,
    (void*)decTmr__8daNpcT_cFv,
    (void*)clrParam__8daNpcT_cFv,
    (void*)drawDbgInfo__12daNpc_seiB_cFv,
    (void*)drawOtherMdl__8daNpcT_cFv,
    (void*)drawGhost__8daNpcT_cFv,
    (void*)afterSetFaceMotionAnm__8daNpcT_cFiifi,
    (void*)afterSetMotionAnm__12daNpc_seiB_cFiifi,
    (void*)getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c,
    (void*)getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c,
    (void*)changeAnm__8daNpcT_cFPiPi,
    (void*)changeBck__8daNpcT_cFPiPi,
    (void*)changeBtp__8daNpcT_cFPiPi,
    (void*)changeBtk__8daNpcT_cFPiPi,
    (void*)setMotionAnm__8daNpcT_cFifi,
};

/* 80AC50EC-80AC5188 0000EC 009C+00 1/0 0/0 0/0 .text            __dt__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_seiB_c::~daNpc_seiB_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__12daNpc_seiB_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80AC7024-80AC70B8 000000 0094+00 4/4 0/0 0/0 .rodata          m__18daNpc_seiB_Param_c */
SECTION_RODATA u8 const daNpc_seiB_Param_c::m[148] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x45, 0x7A, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x96, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80AC7024, &daNpc_seiB_Param_c::m);

/* 80AC5188-80AC53C8 000188 0240+00 1/1 0/0 0/0 .text            create__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/create__12daNpc_seiB_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80AC70B8-80AC70BC 000094 0004+00 1/3 0/0 0/0 .rodata          @4089 */
SECTION_RODATA static u8 const lit_4089[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80AC70B8, &lit_4089);

/* 80AC70BC-80AC70C0 000098 0004+00 0/2 0/0 0/0 .rodata          @4090 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4090 = 65536.0f;
COMPILER_STRIP_GATE(0x80AC70BC, &lit_4090);
#pragma pop

/* 80AC70C0-80AC70C4 00009C 0004+00 0/2 0/0 0/0 .rodata          @4091 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4091 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80AC70C0, &lit_4091);
#pragma pop

/* 80AC70C4-80AC70C8 0000A0 0004+00 2/2 0/0 0/0 .rodata          @4215 */
SECTION_RODATA static f32 const lit_4215 = 1.0f;
COMPILER_STRIP_GATE(0x80AC70C4, &lit_4215);

/* 80AC53C8-80AC5520 0003C8 0158+00 1/1 0/0 0/0 .text            CreateHeap__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/CreateHeap__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5520-80AC5554 000520 0034+00 1/1 0/0 0/0 .text            Delete__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::Delete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/Delete__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5554-80AC5574 000554 0020+00 2/2 0/0 0/0 .text            Execute__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::Execute() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/Execute__12daNpc_seiB_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80AC70C8-80AC70CC 0000A4 0004+00 1/1 0/0 0/0 .rodata          @4247 */
SECTION_RODATA static f32 const lit_4247 = 100.0f;
COMPILER_STRIP_GATE(0x80AC70C8, &lit_4247);

/* 80AC5574-80AC5608 000574 0094+00 1/1 0/0 0/0 .text            Draw__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::Draw() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/Draw__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5608-80AC5628 000608 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80AC5628-80AC5648 000628 0020+00 1/1 0/0 0/0 .text            getType__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::getType() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/getType__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5648-80AC5664 000648 001C+00 1/1 0/0 0/0 .text            getFlowNodeNo__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::getFlowNodeNo() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/getFlowNodeNo__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5664-80AC566C 000664 0008+00 1/1 0/0 0/0 .text            isDelete__12daNpc_seiB_cFv */
bool daNpc_seiB_c::isDelete() {
    return false;
}

/* ############################################################################################## */
/* 80AC70CC-80AC70D0 0000A8 0004+00 1/2 0/0 0/0 .rodata          @4292 */
SECTION_RODATA static f32 const lit_4292 = -1.0f;
COMPILER_STRIP_GATE(0x80AC70CC, &lit_4292);

/* 80AC566C-80AC57C4 00066C 0158+00 1/1 0/0 0/0 .text            reset__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::reset() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/reset__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC57C4-80AC58DC 0007C4 0118+00 1/0 0/0 0/0 .text            setParam__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::setParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/setParam__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC58DC-80AC58F0 0008DC 0014+00 1/1 0/0 0/0 .text            getDistTable__12dAttention_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dAttention_c::getDistTable(int param_0) {
extern "C" asm void getDistTable__12dAttention_cFi() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/getDistTable__12dAttention_cFi.s"
}
#pragma pop

/* 80AC58F0-80AC58F4 0008F0 0004+00 1/1 0/0 0/0 .text            srchActors__12daNpc_seiB_cFv */
void daNpc_seiB_c::srchActors() {
    /* empty function */
}

/* 80AC58F4-80AC59F4 0008F4 0100+00 1/0 0/0 0/0 .text            evtTalk__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::evtTalk() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/evtTalk__12daNpc_seiB_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80AC70D0-80AC70D0 0000AC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80AC70F2 = "Seib";
#pragma pop

/* 80AC59F4-80AC5ABC 0009F4 00C8+00 1/0 0/0 0/0 .text            evtCutProc__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::evtCutProc() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/evtCutProc__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5ABC-80AC5B44 000ABC 0088+00 1/0 0/0 0/0 .text            action__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::action() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/action__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5B44-80AC5BC4 000B44 0080+00 1/0 0/0 0/0 .text            beforeMove__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::beforeMove() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/beforeMove__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5BC4-80AC5C20 000BC4 005C+00 1/0 0/0 0/0 .text            setAttnPos__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/setAttnPos__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5C20-80AC5C28 000C20 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__12daNpc_seiB_cFv */
bool daNpc_seiB_c::drawDbgInfo() {
    return false;
}

/* 80AC5C28-80AC5DC0 000C28 0198+00 1/0 0/0 0/0 .text afterSetMotionAnm__12daNpc_seiB_cFiifi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::afterSetMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/afterSetMotionAnm__12daNpc_seiB_cFiifi.s"
}
#pragma pop

/* 80AC5DC0-80AC5E08 000DC0 0048+00 1/1 0/0 0/0 .text            selectAction__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::selectAction() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/selectAction__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC5E08-80AC5E34 000E08 002C+00 1/1 0/0 0/0 .text
 * chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::chkAction(int (daNpc_seiB_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i.s"
}
#pragma pop

/* 80AC5E34-80AC5EDC 000E34 00A8+00 2/2 0/0 0/0 .text
 * setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::setAction(int (daNpc_seiB_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i.s"
}
#pragma pop

/* 80AC5EDC-80AC6140 000EDC 0264+00 1/1 0/0 0/0 .text            ctrlWaitAnm__12daNpc_seiB_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::ctrlWaitAnm() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/ctrlWaitAnm__12daNpc_seiB_cFv.s"
}
#pragma pop

/* 80AC6140-80AC616C 001140 002C+00 1/0 0/0 0/0 .text            wait__12daNpc_seiB_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/wait__12daNpc_seiB_cFPv.s"
}
#pragma pop

/* 80AC616C-80AC620C 00116C 00A0+00 2/0 0/0 0/0 .text            talk__12daNpc_seiB_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpc_seiB_c::talk(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/talk__12daNpc_seiB_cFPv.s"
}
#pragma pop

/* 80AC620C-80AC622C 00120C 0020+00 1/0 0/0 0/0 .text            daNpc_seiB_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_seiB_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/daNpc_seiB_Create__FPv.s"
}
#pragma pop

/* 80AC622C-80AC624C 00122C 0020+00 1/0 0/0 0/0 .text            daNpc_seiB_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_seiB_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/daNpc_seiB_Delete__FPv.s"
}
#pragma pop

/* 80AC624C-80AC626C 00124C 0020+00 1/0 0/0 0/0 .text            daNpc_seiB_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_seiB_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/daNpc_seiB_Execute__FPv.s"
}
#pragma pop

/* 80AC626C-80AC628C 00126C 0020+00 1/0 0/0 0/0 .text            daNpc_seiB_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_seiB_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/daNpc_seiB_Draw__FPv.s"
}
#pragma pop

/* 80AC628C-80AC6294 00128C 0008+00 1/0 0/0 0/0 .text            daNpc_seiB_IsDelete__FPv */
static bool daNpc_seiB_IsDelete(void* param_0) {
    return true;
}

/* 80AC6294-80AC62DC 001294 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80AC62DC-80AC6664 0012DC 0388+00 1/1 0/0 0/0 .text            __dt__8daNpcT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcT_c::~daNpcT_c() {
extern "C" asm void __dt__8daNpcT_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__8daNpcT_cFv.s"
}
#pragma pop

/* 80AC6664-80AC66A0 001664 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__4cXyzFv.s"
}
#pragma pop

/* 80AC66A0-80AC66DC 0016A0 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__5csXyzFv.s"
}
#pragma pop

/* 80AC66DC-80AC6AE0 0016DC 0404+00 1/1 0/0 0/0 .text
 * __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcT_c::daNpcT_c(daNpcT_faceMotionAnmData_c const* param_0,
//                       daNpcT_motionAnmData_c const* param_1,
// daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2, int param_3,
//                          daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4, int param_5,
//                       daNpcT_evtData_c const* param_6, char** param_7) {
extern "C" asm void __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/func_80AC66DC.s"
}
#pragma pop

/* 80AC6AE0-80AC6AE4 001AE0 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 80AC6AE4-80AC6BE0 001AE4 00FC+00 1/0 0/0 0/0 .text            __dt__15daNpcT_JntAnm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcT_JntAnm_c::~daNpcT_JntAnm_c() {
extern "C" asm void __dt__15daNpcT_JntAnm_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__15daNpcT_JntAnm_cFv.s"
}
#pragma pop

/* 80AC6BE0-80AC6BE4 001BE0 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 80AC6BE4-80AC6C2C 001BE4 0048+00 1/0 0/0 0/0 .text            __dt__18daNpcT_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcT_ActorMngr_c::~daNpcT_ActorMngr_c() {
extern "C" asm void __dt__18daNpcT_ActorMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__18daNpcT_ActorMngr_cFv.s"
}
#pragma pop

/* 80AC6C2C-80AC6C74 001C2C 0048+00 1/0 0/0 0/0 .text            __dt__22daNpcT_MotionSeqMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daNpcT_MotionSeqMngr_c::~daNpcT_MotionSeqMngr_c() {
extern "C" asm void __dt__22daNpcT_MotionSeqMngr_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__22daNpcT_MotionSeqMngr_cFv.s"
}
#pragma pop

/* 80AC6C74-80AC6CE4 001C74 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80AC6CE4-80AC6D40 001CE4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80AC6D40-80AC6DB0 001D40 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80AC6DB0-80AC6DF8 001DB0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80AC6DF8-80AC6E00 001DF8 0008+00 1/0 0/0 0/0 .text            getEyeballMaterialNo__8daNpcT_cFv
 */
bool daNpcT_c::getEyeballMaterialNo() {
    return false;
}

/* 80AC6E00-80AC6E04 001E00 0004+00 1/0 0/0 0/0 .text            ctrlSubFaceMotion__8daNpcT_cFi */
// void daNpcT_c::ctrlSubFaceMotion(int param_0) {
extern "C" asm void ctrlSubFaceMotion__8daNpcT_cFi() {
    /* empty function */
}

/* 80AC6E04-80AC6E0C 001E04 0008+00 1/0 0/0 0/0 .text            checkChangeJoint__8daNpcT_cFi */
bool daNpcT_c::checkChangeJoint(int param_0) {
    return false;
}

/* 80AC6E0C-80AC6E14 001E0C 0008+00 1/0 0/0 0/0 .text            checkRemoveJoint__8daNpcT_cFi */
bool daNpcT_c::checkRemoveJoint(int param_0) {
    return false;
}

/* 80AC6E14-80AC6E1C 001E14 0008+00 1/0 0/0 0/0 .text            getBackboneJointNo__8daNpcT_cFv */
s32 daNpcT_c::getBackboneJointNo() {
    return -1;
}

/* 80AC6E1C-80AC6E24 001E1C 0008+00 1/0 0/0 0/0 .text            getNeckJointNo__8daNpcT_cFv */
s32 daNpcT_c::getNeckJointNo() {
    return -1;
}

/* 80AC6E24-80AC6E2C 001E24 0008+00 1/0 0/0 0/0 .text            getHeadJointNo__8daNpcT_cFv */
s32 daNpcT_c::getHeadJointNo() {
    return -1;
}

/* 80AC6E2C-80AC6E34 001E2C 0008+00 1/0 0/0 0/0 .text            getFootLJointNo__8daNpcT_cFv */
s32 daNpcT_c::getFootLJointNo() {
    return -1;
}

/* 80AC6E34-80AC6E3C 001E34 0008+00 1/0 0/0 0/0 .text            getFootRJointNo__8daNpcT_cFv */
s32 daNpcT_c::getFootRJointNo() {
    return -1;
}

/* 80AC6E3C-80AC6E44 001E3C 0008+00 1/0 0/0 0/0 .text            getEyeballLMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballLMaterialNo() {
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80AC6E44-80AC6E4C 001E44 0008+00 1/0 0/0 0/0 .text            getEyeballRMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballRMaterialNo() {
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80AC6E4C-80AC6E50 001E4C 0004+00 1/0 0/0 0/0 .text            afterJntAnm__8daNpcT_cFi */
void daNpcT_c::afterJntAnm(int param_0) {
    /* empty function */
}

/* 80AC6E50-80AC6E58 001E50 0008+00 1/0 0/0 0/0 .text            checkChangeEvt__8daNpcT_cFv */
bool daNpcT_c::checkChangeEvt() {
    return false;
}

/* 80AC6E58-80AC6E60 001E58 0008+00 1/0 0/0 0/0 .text            evtEndProc__8daNpcT_cFv */
// bool daNpcT_c::evtEndProc() {
extern "C" bool evtEndProc__8daNpcT_cFv() {
    return true;
}

/* 80AC6E60-80AC6E64 001E60 0004+00 1/0 0/0 0/0 .text            setAfterTalkMotion__8daNpcT_cFv */
void daNpcT_c::setAfterTalkMotion() {
    /* empty function */
}

/* 80AC6E64-80AC6E68 001E64 0004+00 1/0 0/0 0/0 .text            afterMoved__8daNpcT_cFv */
void daNpcT_c::afterMoved() {
    /* empty function */
}

/* 80AC6E68-80AC6E6C 001E68 0004+00 1/0 0/0 0/0 .text            setCollision__8daNpcT_cFv */
void daNpcT_c::setCollision() {
    /* empty function */
}

/* 80AC6E6C-80AC6E74 001E6C 0008+00 1/0 0/0 0/0 .text            chkXYItems__8daNpcT_cFv */
// bool daNpcT_c::chkXYItems() {
extern "C" bool chkXYItems__8daNpcT_cFv() {
    return false;
}

/* 80AC6E74-80AC6E8C 001E74 0018+00 1/0 0/0 0/0 .text            decTmr__8daNpcT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void daNpcT_c::decTmr() {
extern "C" asm void decTmr__8daNpcT_cFv() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/decTmr__8daNpcT_cFv.s"
}
#pragma pop

/* 80AC6E8C-80AC6E90 001E8C 0004+00 1/0 0/0 0/0 .text            drawOtherMdl__8daNpcT_cFv */
// void daNpcT_c::drawOtherMdl() {
extern "C" asm void drawOtherMdl__8daNpcT_cFv() {
    /* empty function */
}

/* 80AC6E90-80AC6E94 001E90 0004+00 1/0 0/0 0/0 .text            drawGhost__8daNpcT_cFv */
// void daNpcT_c::drawGhost() {
extern "C" asm void drawGhost__8daNpcT_cFv() {
    /* empty function */
}

/* 80AC6E94-80AC6E9C 001E94 0008+00 1/0 0/0 0/0 .text afterSetFaceMotionAnm__8daNpcT_cFiifi */
// bool daNpcT_c::afterSetFaceMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi() {
    return true;
}

/* 80AC6E9C-80AC6ECC 001E9C 0030+00 1/0 0/0 0/0 .text
 * getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void daNpcT_c::getFaceMotionAnm(daNpcT_faceMotionAnmData_c param_0) {
extern "C" asm void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c.s"
}
#pragma pop

/* 80AC6ECC-80AC6EFC 001ECC 0030+00 1/0 0/0 0/0 .text
 * getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void daNpcT_c::getMotionAnm(daNpcT_motionAnmData_c param_0) {
extern "C" asm void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c.s"
}
#pragma pop

/* 80AC6EFC-80AC6F00 001EFC 0004+00 1/0 0/0 0/0 .text            changeAnm__8daNpcT_cFPiPi */
// void daNpcT_c::changeAnm(int* param_0, int* param_1) {
extern "C" asm void changeAnm__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80AC6F00-80AC6F04 001F00 0004+00 1/0 0/0 0/0 .text            changeBck__8daNpcT_cFPiPi */
// void daNpcT_c::changeBck(int* param_0, int* param_1) {
extern "C" asm void changeBck__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80AC6F04-80AC6F08 001F04 0004+00 1/0 0/0 0/0 .text            changeBtp__8daNpcT_cFPiPi */
// void daNpcT_c::changeBtp(int* param_0, int* param_1) {
extern "C" asm void changeBtp__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80AC6F08-80AC6F0C 001F08 0004+00 1/0 0/0 0/0 .text            changeBtk__8daNpcT_cFPiPi */
// void daNpcT_c::changeBtk(int* param_0, int* param_1) {
extern "C" asm void changeBtk__8daNpcT_cFPiPi() {
    /* empty function */
}

/* ############################################################################################## */
/* 80AC7428-80AC7434 000330 000C+00 2/2 0/0 0/0 .data            __vt__18daNpc_seiB_Param_c */
SECTION_DATA extern void* __vt__18daNpc_seiB_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpc_seiB_Param_cFv,
};

/* 80AC7440-80AC744C 000008 000C+00 1/1 0/0 0/0 .bss             @3814 */
static u8 lit_3814[12];

/* 80AC744C-80AC7450 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80AC6F0C-80AC6F74 001F0C 0068+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_seib_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_seib_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__sinit_d_a_npc_seib_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80AC6F0C, __sinit_d_a_npc_seib_cpp);
#pragma pop

/* 80AC6F74-80AC6FB8 001F74 0044+00 1/1 0/0 0/0 .text
 * __ct__12daNpc_seiB_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_seiB_c::daNpc_seiB_c(daNpcT_faceMotionAnmData_c const* param_0,
                               daNpcT_motionAnmData_c const* param_1,
                               daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2,
                               int param_3,
                               daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4,
                               int param_5, daNpcT_evtData_c const* param_6, char** param_7) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/func_80AC6F74.s"
}
#pragma pop

/* 80AC6FB8-80AC7000 001FB8 0048+00 2/1 0/0 0/0 .text            __dt__18daNpc_seiB_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_seiB_Param_c::~daNpc_seiB_Param_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/__dt__18daNpc_seiB_Param_cFv.s"
}
#pragma pop

/* 80AC7000-80AC7008 002000 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80AC7000() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/func_80AC7000.s"
}
#pragma pop

/* 80AC7008-80AC7010 002008 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80AC7008() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seib/d_a_npc_seib/func_80AC7008.s"
}
#pragma pop

/* 80AC70D0-80AC70D0 0000AC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
