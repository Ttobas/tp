#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "SComponent/c_phase.h"
#include "Z2AudioLib/Z2SeqMgr/Z2SeqMgr.h"
#include "d/d_bg/d_bg_s/d_bg_s.h"
#include "d/d_item/d_item/d_item.h"
#include "d/d_kankyo/d_kankyo.h"
#include "global.h"
#include "m_Do/m_Do_Reset/m_Do_Reset.h"
#include "m_Do/m_Do_audio/m_Do_audio.h"
#include "m_Do/m_Do_controller_pad/m_Do_controller_pad.h"
#include "m_Do/m_Do_ext/m_Do_ext.h"

extern "C" {
bool dComIfGp_checkMapShow(void);
BOOL dComIfGp_isLightDropMapVisible(void);
BOOL isTransformLV__21dSv_player_status_b_cCFi(int);
char* strcpy(char*, const char*);
const char* dComIfGs_getWarpStageName(void);
int dComIfGs_getWarpRoomNo(void);
int dKy_daynight_check(void);
int dStage_roomControl_c_NS_getZoneNo(int);
int getTimerMode__14dComIfG_play_cFv(void);
int strcmp(const char*, const char*);
s16 dComIfGs_getWarpPlayerAngleY(void);
u16 dComIfGs_getMaxLifeGauge(void);
u32 getBombNum__21dSv_player_item_max_cCFUc(u8);
u32 getTimerPtr__14dComIfG_play_cFv(void);
u8 dComIfGs_checkGetItem(u8);
u8 dComIfGs_getBottleMax(void);
u8 dComIfGs_getMixItemIndex(int);
u8 getBombNum__24dSv_player_item_record_cCFUc(u8);
unsigned int getSelectItemIndex__21dSv_player_status_a_cCFi(int);
void __ct__10dSv_zone_cFv(void);
void __ct__11cBgS_ChkElmFv(void);
void __ct__11dRes_info_cFv(void);
void __ct__12dCcMassS_MngFv(void);
void __ct__12dDlst_list_cFv(void);
void __ct__12dSv_memory_cFv(void);
void __ct__13dComIfG_inf_cFv(void);
void __ct__13dSv_memory2_cFv(void);
void __ct__13mDoExt_bckAnmFv(void);
void __ct__13mDoExt_bpkAnmFv(void);
void __ct__13mDoExt_brkAnmFv(void);
void __ct__13mDoExt_btkAnmFv(void);
void __ct__14dDlst_window_cFv(void);
void __ct__14dEvt_control_cFv(void);
void __ct__16dEvent_manager_cFv(void);
void __ct__25dComIfG_camera_info_classFv(void);
void __ct__4cCcSFv(void);
void __dl__FPv(void);
void __dt__8cM3dGCpsFv(void);
void __nw__FUl(void);
void addBottleNum__24dSv_player_item_record_cFUcs(void);
void cBgS_ChkElm_NS_dtor(void);
void cBgS_ChkElm_NS_Init(void);
void cBgS_NS_GetTriPla(void);
void ChkSetInfo__13cBgS_PolyInfoCFv(void);
void cM3dGCyl_NS_dtor(void);
void create__10JKRExpHeapFUlP7JKRHeapb(void);
void cSAngle_NS_dtor(void);
void ct__14dComIfG_play_cFv(void);
void daAlink_c_NS_setLastSceneMode(void);
void dAttDraw_c_NS_ctor(void);
void dAttDraw_c_NS_dtor(void);
void dAttention_c_NS_dtor(void);
void dAttList_c_NS_ctor(void);
void dAttList_c_NS_dtor(void);
void dCcMassS_Obj_NS_dtor(void);
void dCcS_NS_dtor(void);
void dComIfG_camera_info_class_NS_dtor(void);
void dComIfG_changeOpeningScene(void);
void dComIfG_get_timelayer__FPi(int*);
void dComIfG_getOldStageRes(void);
void dComIfG_getRoomArcName(void);
void dComIfG_getStageRes(void);
void dComIfG_inf_c_NS_ct(void);
void dComIfG_inf_c_NS_dtor(void);
void dComIfG_play_c_NS_clearItemBombNumCount(void);
void dComIfG_play_c_NS_createParticle(void);
void dComIfG_play_c_NS_createSimpleModel(void);
void dComIfG_play_c_NS_deleteSimpleModel(void);
void dComIfG_play_c_NS_dtor(void);
void dComIfG_play_c_NS_getItemBombNumCount(void);
void dComIfG_play_c_NS_getLayerNo_common_common(void);
void dComIfG_play_c_NS_getLayerNo_common(void);
void dComIfG_play_c_NS_getLayerNo(int);
void dComIfG_play_c_NS_itemInit(void);
void dComIfG_play_c_NS_setItemBombNumCount(u8, s16);
void dComIfG_play_c_NS_setStartStage(void);
void dComIfG_play_c_NS_setTimerPtr(void);
void dComIfG_resDelete(void);
void dComIfG_resetToOpening(void);
void dComIfG_resLoad_X1_(void);
void dComIfG_resLoad(void);
void dComIfG_TimerDeleteRequest(void);
void dComIfGd_setShadow(void);
void dComIfGd_setSimpleShadow(void);
void dComIfGp_addSelectItemNum(void);
void dComIfGp_calcNowRegion(void);
void dComIfGp_checkEmptySubHeap2D(void);
void dComIfGp_createSubExpHeap2D(void);
void dComIfGp_destroySubExpHeap2D(void);
void dComIfGp_getNowLevel(void);
void dComIfGp_getReverb(void);
void dComIfGp_getRoomArrow(void);
void dComIfGp_getRoomCamera(void);
void dComIfGp_getSelectItem(void);
void dComIfGp_getSelectItemMaxNum(void);
void dComIfGp_getSelectItemNum(void);
void dComIfGp_getSubHeap2D(void);
void dComIfGp_mapHide(void);
void dComIfGp_mapShow(void);
void dComIfGp_offHeapLockFlag(void);
void dComIfGp_ret_wp_set(void);
void dComIfGp_searchUseSubHeap2D(void);
void dComIfGp_SelectWarpPt_get(void);
void dComIfGp_SelectWarpPt_set(void);
void dComIfGp_setHeapLockFlag(void);
void dComIfGp_setNextStage_X1_(void);
void dComIfGp_setNextStage(void);
void dComIfGp_setSelectItem(int);
void dComIfGp_setSelectItemNum(void);
void dComIfGp_TargetWarpPt_get(void);
void dComIfGp_TargetWarpPt_set(void);
void dComIfGp_TransportWarp_check(void);
void dComIfGp_world_dark_get(void);
void dComIfGp_world_dark_set(u8);
void dComIfGs_BossLife_public_Set(void);
void dComIfGs_checkGetInsectNum(void);
void dComIfGs_gameStart(void);
void dComIfGs_getSelectMixItemNoArrowIndex(void);
void dComIfGs_getWarpMarkFlag(void);
void dComIfGs_getWarpPlayerPos(void);
void dComIfGs_isDungeonItemWarp(void);
void dComIfGs_isOneZoneItem(void);
void dComIfGs_isOneZoneSwitch(void);
void dComIfGs_isStageSwitch(void);
void dComIfGs_isStageTbox(void);
void dComIfGs_isVisitedRoom(void);
void dComIfGs_isZoneItem(void);
void dComIfGs_isZoneSwitch(void);
void dComIfGs_offOneZoneSwitch(void);
void dComIfGs_offStageSwitch(void);
void dComIfGs_offZoneSwitch(void);
void dComIfGs_onOneZoneSwitch(void);
void dComIfGs_onStageSwitch(void);
void dComIfGs_onVisitedRoom(void);
void dComIfGs_onZoneSwitch(void);
void dComIfGs_PolyDamageOff_Check(void);
void dComIfGs_PolyDamageOff_Set(void);
void dComIfGs_sense_type_change_Get(void);
void dComIfGs_setKeyNum(int, u8);
void dComIfGs_setLastWarpMarkItemData__FPCc4cXyzsScUcUc(void);
void dComIfGs_setMixItemIndex(int, u8);
void dComIfGs_setSelectEquipClothes(u8);
void dComIfGs_setSelectEquipShield(u8);
void dComIfGs_setSelectEquipSword(u8);
void dComIfGs_setSelectItemIndex(int, u8);
void dComIfGs_setWarpItemData_X1_(void);
void dComIfGs_setWarpMarkFlag(void);
void dComIfGs_staffroll_next_go_check(void);
void dComIfGs_Wolf_Change_Check(void);
void dComIfGs_wolfeye_effect_check(void);
void dComLbG_PhaseHandler(void);
void dDlst_list_c_NS_dtor(void);
void dDlst_shadowControl_c_NS_setReal(void);
void dDlst_shadowControl_c_NS_setSimple(void);
void dDlst_window_c_NS_dtor(void);
void dEvDtBase_c_NS_dtor(void);
void dEvt_order_c_NS_dtor(void);
void dKy_darkworld_stage_check(void);
void dMapInfo_n_NS_getMapPlayerPos(void);
void dMenuFmap_getStartStageName(void);
void dMeter2Info_c_NS_init(void);
void dMeter2Info_c_NS_setSaveStageName(void);
void dPa_control_c(void);
void dRes_control_c_NS_deleteRes(void);
void dRes_control_c_NS_dtor(void);
void dRes_control_c_NS_getRes_X1_(void);
void dRes_control_c_NS_setRes(void);
void dRes_control_c_NS_syncRes(void);
void dRes_info_c_NS_dtor(void);
void dSmplMdl_draw_c_NS_addModel(void);
void dSmplMdl_draw_c_NS_draw(void);
void dSmplMdl_draw_c_NS_entry(void);
void dSmplMdl_draw_c_NS_removeModel(void);
void dSmplMdl_draw_c(void);
void dStage_roomControl_c_NS_getStatusRoomDt(void);
void dStage_roomRead_dt_c_GetReverbStage(void);
void dTimer_c_NS_deleteCheck(void);
void dTimer_c_NS_deleteRequest(void);
void dTimer_c_NS_end(void);
void dTimer_c_NS_restart(void);
void dTimer_c_NS_start_X1_(void);
void dTimer_c_NS_start(void);
void dTimer_c_NS_stop(void);
void fopScnM_ChangeReq(void);
void fopScnM_ReRequest(void);
void func_8002CAF0(void);
void func_8002CB30(void);
void func_8002CB68(void);
void func_8002CDB8(void);
void func_8002CE38(void);
void func_8002CEB4(void);
void func_8002CEFC(void);
void func_8002CF5C(void);
void func_8002CFB8(void);
void func_8002D1AC(void);
void func_8002D7D0(void);
void func_8002D910(void);
void func_8002D924(void);
void func_8002E9D4(void);
void func_8002F314(void);
void func_8002F328(void);
void func_8002F3B4(void);
void func_8002F52C(void);
void func_8002F5C0(void);
void func_8002F638(void);
void func_8002F6B0(void);
void func_8002F72C(void);
void func_8002FA18(void);
void func_8002FA30(void);
void func_8002FA84(void);
void func_8002FC3C(void);
void func_8002FD18(void);
void func_80030A74(void);
void func_80030BDC(void);
void func_80030C50(void);
void func_80030CCC(void);
void func_80030DE0(void);
void func_80030E84(void);
void func_80030ECC(void);
void func_80361C24(void);
void func_80361D60(void);
void __cvt_fp2unsigned(void);
void func_803664DC(void);
void getBottleNum__24dSv_player_item_record_cCFUc(void);
void getItem__17dSv_player_item_cCFib(void);
void getSave2__10dSv_save_cFi(void);
void getTotalFreeSize__7JKRHeapCFv(void);
void getVibration__19dSv_player_config_cFv(void);
void init__12dSv_memory_cFv(void);
void init__13dSv_memory2_cFv(void);
void init__14dComIfG_play_cFv(void);
void init__20dStage_roomControl_cFvZone(void);
void isDarkClearLV__21dSv_player_status_b_cCFi(void);
void isDungeonItem__12dSv_memBit_cCFi(void);
void isEventBit__11dSv_event_cCFUs(void);
void isFirstBit__21dSv_player_get_item_cCFUc(void);
void isItem__13dSv_zoneBit_cCFi(void);
void isOneItem__13dSv_zoneBit_cCFi(void);
void isOneSwitch__13dSv_zoneBit_cCFi(void);
void isRegionBit__33dSv_player_field_last_stay_info_cCFi(void);
void isSwitch__10dSv_info_cCFii(void);
void isSwitch__12dSv_memBit_cCFi(void);
void isSwitch__13dSv_zoneBit_cCFi(void);
void isTbox__12dSv_memBit_cCFi(void);
void isVisitedRoom__13dSv_memory2_cFi(void);
void J3DFrameCtrl_NS_init(void);
void mDoExt_bckAnm_NS_dtor(void);
void mDoExt_bpkAnm_NS_dtor(void);
void mDoExt_brkAnm_NS_dtor(void);
void mDoExt_btkAnm_NS_dtor(void);
void mDoExt_destroyExpHeap(void);
void offOneSwitch__13dSv_zoneBit_cFi(void);
void offSwitch__10dSv_info_cFii(void);
void offSwitch__12dSv_memBit_cFi(void);
void offSwitch__13dSv_zoneBit_cFi(void);
void offVisitedRoom__13dSv_memory2_cFi(void);
void onDungeonItem__12dSv_memBit_cFi(int);
void onOneSwitch__13dSv_zoneBit_cFi(void);
void onRegionBit__33dSv_player_field_last_stay_info_cFi(void);
void onSwitch__10dSv_info_cFii(int, int);
void onSwitch__12dSv_memBit_cFi(void);
void onSwitch__13dSv_zoneBit_cFi(void);
void onVisitedRoom__13dSv_memory2_cFi(void);
void set__18dStage_nextStage_cFPCcScsScScUc(void);
void set__33dSv_player_field_last_stay_info_cFPCcRC4cXyzsScUc(void);
void setBombNum__24dSv_player_item_record_cFUcUc(void);
void setBottleNum__24dSv_player_item_record_cFUcUc(u8, u8);
void setCollect__20dSv_player_collect_cFiUc(int, u8);
void setWarpItemData__14dComIfG_play_cFPCc4cXyzsScUcUc(void);
void* memset(void* dest, int ch, u32 count);
void ct__13dComIfG_inf_cFv(void);
}

// memset first arg is wrong
#ifdef NONMATCHING
void dComIfG_play_c::ct(void) {
    field_0x4e0c = 0;
    field_0x4e04 = 0;
    field_0x4e0d = 0;

    memset((void*)(this + 0x5024), 0, 8);
    init();
}
#else
asm void dComIfG_play_c::ct(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B1DC.s"
}
#endif

asm void dComIfG_play_c::init(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B22C.s"
}

void dComIfGp_checkItemGet(u8 param_1, int param_2) {
    checkItemGet(param_1, param_2);
}

/* d_com_inf_game.cpp autogenerated by split.py v0.3 at 2021-01-10 01:01:13.440448 */

// itemInit__14dComIfG_play_cFv
// dComIfG_play_c::itemInit(void)
asm void dComIfG_play_c_NS_itemInit(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B2C8.s"
}

// setItemBombNumCount__14dComIfG_play_cFUcs
// dComIfG_play_c::setItemBombNumCount(unsigned char, short)
asm void dComIfG_play_c_NS_setItemBombNumCount(u8, short) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B36C.s"
}

// getItemBombNumCount__14dComIfG_play_cFUc
// dComIfG_play_c::getItemBombNumCount(unsigned char)
asm void dComIfG_play_c_NS_getItemBombNumCount(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B384.s"
}

// clearItemBombNumCount__14dComIfG_play_cFUc
// dComIfG_play_c::clearItemBombNumCount(unsigned char)
asm void dComIfG_play_c_NS_clearItemBombNumCount(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B394.s"
}

void dComIfG_play_c::setNowVibration(u8 status) {
    mNowVibration = status;
}

u32 dComIfG_play_c::getNowVibration(void) {
    return mNowVibration;
}

// setStartStage__14dComIfG_play_cFP19dStage_startStage_c
// dComIfG_play_c::setStartStage(dStage_startStage_c*)
asm void dComIfG_play_c_NS_setStartStage(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B3B8.s"
}

void dComIfG_get_timelayer(int* param1) {
    if (dKy_daynight_check() != FALSE) {
        *param1 += 1;
    }
}

// getLayerNo_common_common__14dComIfG_play_cFPCcii
// dComIfG_play_c::getLayerNo_common_common(const char*, int, int)
asm void dComIfG_play_c_NS_getLayerNo_common_common(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002B434.s"
}

// getLayerNo_common__14dComIfG_play_cFPCcii
// dComIfG_play_c::getLayerNo_common(const char*, int, int)
asm void dComIfG_play_c_NS_getLayerNo_common(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002C950.s"
}

// getLayerNo__14dComIfG_play_cFi
// dComIfG_play_c::getLayerNo(int)
asm void dComIfG_play_c_NS_getLayerNo(int) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002C97C.s"
}

// createParticle__14dComIfG_play_cFv
// dComIfG_play_c::createParticle(void)
asm void dComIfG_play_c_NS_createParticle(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002C9D8.s"
}

// createSimpleModel__14dComIfG_play_cFv
// dComIfG_play_c::createSimpleModel(void)
asm void dComIfG_play_c_NS_createSimpleModel(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CA1C.s"
}

// deleteSimpleModel__14dComIfG_play_cFv
// dComIfG_play_c::deleteSimpleModel(void)
asm void dComIfG_play_c_NS_deleteSimpleModel(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CA70.s"
}

// drawSimpleModel__14dComIfG_play_cFv
// dComIfG_play_c::drawSimpleModel(void)
asm void dComIfG_play_c::drawSimpleModel(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CAC4.s"
}

// addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc
// dComIfG_play_c::addSimpleModel(J3DModelData*, int, unsigned char)
asm void func_8002CAF0(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CAF0.s"
}

// removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai
// dComIfG_play_c::removeSimpleModel(J3DModelData*, int)
asm void func_8002CB30(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CB30.s"
}

// entrySimpleModel__14dComIfG_play_cFP8J3DModeli
// dComIfG_play_c::entrySimpleModel(J3DModel*, int)
asm void func_8002CB68(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CB68.s"
}

void dComIfG_play_c::setTimerNowTimeMs(int time) {
    mTimerNowTimeMs = time;
}

int dComIfG_play_c::getTimerNowTimeMs(void) {
    return mTimerNowTimeMs;
}

void dComIfG_play_c::setTimerLimitTimeMs(int time) {
    mTimerLimitTimeMs = time;
}

int dComIfG_play_c::getTimerLimitTimeMs(void) {
    return mTimerLimitTimeMs;
}

void dComIfG_play_c::setTimerMode(int mode) {
    mTimerMode = mode;
}

int dComIfG_play_c::getTimerMode(void) {
    return mTimerMode;
}

void dComIfG_play_c::setTimerType(u8 type) {
    mTimerType = type;
}

u8 dComIfG_play_c::getTimerType(void) {
    return mTimerType;
}

// setTimerPtr__14dComIfG_play_cFP8dTimer_c
// dComIfG_play_c::setTimerPtr(dTimer_c*)
asm void dComIfG_play_c_NS_setTimerPtr(void){nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CBD4.s"
}

u32 dComIfG_play_c::getTimerPtr(void) {
    return mTimerPtr;
}

// ct__13dComIfG_inf_cFv
// dComIfG_inf_c::ct(void)
asm void dComIfG_inf_c::ct(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CBE4.s"
}

// dComIfG_changeOpeningScene__FP11scene_classs
// dComIfG_changeOpeningScene(scene_class*, short)
asm void dComIfG_changeOpeningScene(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CC54.s"
}

// dComIfG_resetToOpening__FP11scene_class
// dComIfG_resetToOpening(scene_class*)
asm void dComIfG_resetToOpening(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CD44.s"
}

// phase_1__FPc
// phase_1(char*)
asm void func_8002CDB8(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CDB8.s"
}

// phase_2__FPc
// phase_2(char*)
asm void func_8002CE38(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CE38.s"
}

// phase_3__FPc
// phase_3(char*)
asm void func_8002CEB4(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CEB4.s"
}

// dComIfG_resLoad__FP30request_of_phase_process_classPCc
// dComIfG_resLoad(request_of_phase_process_class*, const char*)
asm void dComIfG_resLoad(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CEBC.s"
}  //

// phase_01__FP12phaseParam_c
// phase_01(phaseParam_c*)
asm void func_8002CEFC(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CEFC.s"
}

// phase_02__FP12phaseParam_c
// phase_02(phaseParam_c*)
asm void func_8002CF5C(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CF5C.s"
}

// phase_03__FP12phaseParam_c
// phase_03(phaseParam_c*)
asm void func_8002CFB8(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CFB8.s"
}

// dComIfG_resLoad__FP30request_of_phase_process_classPCcP7JKRHeap
// dComIfG_resLoad(request_of_phase_process_class*, const char*, JKRHeap*)
asm void dComIfG_resLoad_X1_(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002CFC0.s"
}

// dComIfG_resDelete__FP30request_of_phase_process_classPCc
// dComIfG_resDelete(request_of_phase_process_class*, const char*)
asm void dComIfG_resDelete(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D008.s"
}

// dComIfGp_getReverb__Fi
// dComIfGp_getReverb(int)
asm void dComIfGp_getReverb(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D06C.s"
}

// dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj
// dComIfGd_setSimpleShadow(cXyz*, float, float, cBgS_PolyInfo&, short, float, _GXTexObj*)
asm void dComIfGd_setSimpleShadow(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D0B4.s"
}

// dComIfGp_getMapTrans__FiPfPfPs
// dComIfGp_getMapTrans(int, float*, float*, short*)
asm void func_8002D1AC(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D1AC.s"
}

// dComIfGp_getRoomCamera__Fi
// dComIfGp_getRoomCamera(int)
asm void dComIfGp_getRoomCamera(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D25C.s"
}

// dComIfGp_getRoomArrow__Fi
// dComIfGp_getRoomArrow(int)
asm void dComIfGp_getRoomArrow(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D2AC.s"
}

// dComIfGp_setNextStage__FPCcsScScfUliScsii
// dComIfGp_setNextStage(const char*, short, char, char, float, unsigned long, int, char, short,
// int, int)
asm void dComIfGp_setNextStage(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D2FC.s"
}

// dComIfGp_setNextStage__FPCcsScSc
// dComIfGp_setNextStage(const char*, short, char, char)
asm void dComIfGp_setNextStage_X1_(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D554.s"
}

// dComIfGs_isStageTbox__Fii
// dComIfGs_isStageTbox(int, int)
asm void dComIfGs_isStageTbox(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D598.s"
}

// dComIfGs_onStageSwitch__Fii
// dComIfGs_onStageSwitch(int, int)
asm void dComIfGs_onStageSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D628.s"
}

// dComIfGs_offStageSwitch__Fii
// dComIfGs_offStageSwitch(int, int)
asm void dComIfGs_offStageSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D6B4.s"
}

// dComIfGs_isStageSwitch__Fii
// dComIfGs_isStageSwitch(int, int)
asm void dComIfGs_isStageSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D740.s"
}

// dComIfGs_onStageBossEnemy__Fi
// dComIfGs_onStageBossEnemy(int)
asm void func_8002D7D0(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D7D0.s"
}

// dComIfGs_isDungeonItemWarp__Fi
// dComIfGs_isDungeonItemWarp(int)
asm void dComIfGs_isDungeonItemWarp(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D878.s"
}

// dComIfGs_BossLife_public_Set__FSc
// dComIfGs_BossLife_public_Set(char)
asm void dComIfGs_BossLife_public_Set(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D8FC.s"
}

// dComIfGs_BossLife_public_Get__Fv
// dComIfGs_BossLife_public_Get(void)
asm void func_8002D910(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D910.s"
}

// dComIfGs_sense_type_change_Set__FSc
// dComIfGs_sense_type_change_Set(char)
asm void func_8002D924(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D924.s"
}

// dComIfGs_sense_type_change_Get__Fv
// dComIfGs_sense_type_change_Get(void)
asm void dComIfGs_sense_type_change_Get(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D938.s"
}

// dComIfGs_onZoneSwitch__Fii
// dComIfGs_onZoneSwitch(int, int)
asm void dComIfGs_onZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D94C.s"
}

// getZoneNo__20dStage_roomControl_cFi
// dStage_roomControl_c::getZoneNo(int)
asm int dStage_roomControl_c_NS_getZoneNo(int) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D9B0.s"
}

// dComIfGs_offZoneSwitch__Fii
// dComIfGs_offZoneSwitch(int, int)
asm void dComIfGs_offZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002D9CC.s"
}

// dComIfGs_isZoneSwitch__Fii
// dComIfGs_isZoneSwitch(int, int)
asm void dComIfGs_isZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DA30.s"
}

// dComIfGs_onOneZoneSwitch__Fii
// dComIfGs_onOneZoneSwitch(int, int)
asm void dComIfGs_onOneZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DA9C.s"
}

// dComIfGs_offOneZoneSwitch__Fii
// dComIfGs_offOneZoneSwitch(int, int)
asm void dComIfGs_offOneZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DB00.s"
}

// dComIfGs_isOneZoneSwitch__Fii
// dComIfGs_isOneZoneSwitch(int, int)
asm void dComIfGs_isOneZoneSwitch(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DB64.s"
}

// dComIfGs_isZoneItem__Fii
// dComIfGs_isZoneItem(int, int)
asm void dComIfGs_isZoneItem(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DBD0.s"
}

// dComIfGs_isOneZoneItem__Fii
// dComIfGs_isOneZoneItem(int, int)
asm void dComIfGs_isOneZoneItem(void){nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DC3C.s"
}

u16 dComIfGs_getMaxLifeGauge(void) {
    return (dComIfGs_getMaxLife() / 5) * 4;
}

void dComIfGs_setSelectItemIndex(int i_no, u8 item_index) {
    g_dComIfG_gameInfo.getSaveFile().getPlayerStatusA().setSelectItemIndex(i_no, item_index);
    dComIfGp_setSelectItem(i_no);
}

void dComIfGs_setMixItemIndex(int i_no, u8 item_index) {
    g_dComIfG_gameInfo.getSaveFile().getPlayerStatusA().setMixItemIndex(i_no, item_index);
}

// dComIfGs_getSelectMixItemNoArrowIndex__Fi
// dComIfGs_getSelectMixItemNoArrowIndex(int)

// close
#ifdef NONMATCHING
u8 dComIfGs_getSelectMixItemNoArrowIndex(int p1) {
    u8 item_index = dComIfGs_getSelectItemIndex(p1);
    u8 mix_index = dComIfGs_getMixItemIndex(p1);

    if (item_index < 0xf || item_index < 0x12) {
        return item_index;
    }
    if (mix_index == 255 || mix_index < 0xf || mix_index < 0x12) {
        item_index = 255;
        return item_index;
    }
}
#else
asm void dComIfGs_getSelectMixItemNoArrowIndex(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DD3C.s"
}
#endif

u8 dComIfGs_getMixItemIndex(int i_no) {
    return g_dComIfG_gameInfo.getSaveFile().getPlayerStatusA().getMixItemIndex(i_no);
}

// dComIfGp_setSelectItem__Fi
// dComIfGp_setSelectItem(int)
asm void dComIfGp_setSelectItem(int) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DDF4.s"
}

// dComIfGp_getSelectItem__Fi
// dComIfGp_getSelectItem(int)
asm void dComIfGp_getSelectItem(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002DF1C.s"
}

void dComIfGp_mapShow(void) {
    dComIfGs_offEventBit(0x1D01);
}

void dComIfGp_mapHide(void) {
    dComIfGs_onEventBit(0x1D01);
}

asm bool dComIfGp_checkMapShow(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E0A8.s"
    // return !dComIfGs_isEventBit(0x1D01);
}

// dComIfGp_setHeapLockFlag__FUc
// dComIfGp_setHeapLockFlag(unsigned char)
asm void dComIfGp_setHeapLockFlag(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E0E0.s"
}

// dComIfGp_offHeapLockFlag__Fi
// dComIfGp_offHeapLockFlag(int)
asm void dComIfGp_offHeapLockFlag(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E188.s"
}

// dComIfGp_createSubExpHeap2D__Fv
// dComIfGp_createSubExpHeap2D(void)
asm void dComIfGp_createSubExpHeap2D(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E22C.s"
}

// dComIfGp_destroySubExpHeap2D__Fv
// dComIfGp_destroySubExpHeap2D(void)
asm void dComIfGp_destroySubExpHeap2D(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E2DC.s"
}

// dComIfGp_checkEmptySubHeap2D__Fv
// dComIfGp_checkEmptySubHeap2D(void)
asm void dComIfGp_checkEmptySubHeap2D(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E348.s"
}

// dComIfGp_searchUseSubHeap2D__Fi
// dComIfGp_searchUseSubHeap2D(int)
asm void dComIfGp_searchUseSubHeap2D(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E388.s"
}

// dComIfGp_getSubHeap2D__Fi
// dComIfGp_getSubHeap2D(int)
asm void dComIfGp_getSubHeap2D(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E3D0.s"
}

// dComIfGs_checkGetInsectNum__Fv
// dComIfGs_checkGetInsectNum(void)
asm void dComIfGs_checkGetInsectNum(void){nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E428.s"
}

u8 dComIfGs_checkGetItem(u8 i_no) {
    u8 count = 0;

    for (int i = 0; i < 60; i++) {
        if (i_no == dComIfGs_getItem(i, true)) {
            count++;
        }
    }
    if (dComIfGs_getSelectEquipClothes() == i_no) {
        count++;
    }
    if (dComIfGs_getSelectEquipSword() == i_no) {
        count++;
    }
    if (dComIfGs_getSelectEquipShield() == i_no) {
        count++;
    }

    return count;
}

u8 dComIfGs_getBottleMax(void) {
    return 10;
}

// dComIfGp_getSelectItemNum__Fi
// dComIfGp_getSelectItemNum(int)
asm void dComIfGp_getSelectItemNum(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E5C0.s"
}

// dComIfGp_getSelectItemMaxNum__Fi
// dComIfGp_getSelectItemMaxNum(int)
asm void dComIfGp_getSelectItemMaxNum(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E688.s"
}

// dComIfGp_setSelectItemNum__Fis
// dComIfGp_setSelectItemNum(int, short)
asm void dComIfGp_setSelectItemNum(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E714.s"
}

// dComIfGp_addSelectItemNum__Fis
// dComIfGp_addSelectItemNum(int, short)
asm void dComIfGp_addSelectItemNum(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E83C.s"
}

// dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj
// dComIfGd_setShadow(unsigned long, char, J3DModel*, cXyz*, float, float, float, float,
// cBgS_PolyInfo&, dKy_tevstr_c*, short, float, _GXTexObj*)
asm void dComIfGd_setShadow(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E910.s"
}

// dComIfGs_gameStart__Fv
// dComIfGs_gameStart(void)
asm void dComIfGs_gameStart(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E974.s"
}

// dComIfG_getTrigA__FUl
// dComIfG_getTrigA(unsigned long)
asm void func_8002E9D4(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E9D4.s"
}

// dComIfGp_calcNowRegion__Fv
// dComIfGp_calcNowRegion(void)
asm void dComIfGp_calcNowRegion(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002E9F0.s"
}

// dComIfG_getNowCalcRegion__Fv
// dComIfG_getNowCalcRegion(void)
asm void dComIfG_getNowCalcRegion(void){nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002EC54.s"
}

BOOL dComIfGp_isLightDropMapVisible(void) {
    for (int i = 0; i < 3; i++) {
        if (dComIfGs_isLightDropGetFlag(i) != FALSE && dComIfGs_getLightDropNum(i) < 16) {
            return TRUE;
        }
    }
    return FALSE;
}

// dComIfGp_getNowLevel__Fv
// dComIfGp_getNowLevel(void)
asm void dComIfGp_getNowLevel(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002EE60.s"
}

void dComIfGs_setSelectEquipClothes(u8 item) {
    g_dComIfG_gameInfo.getSaveFile().getPlayerStatusA().setSelectEquip(CLOTHING_BITFIELD, item);
}

// dComIfGs_setSelectEquipSword__FUc
// dComIfGs_setSelectEquipSword(unsigned char)
asm void dComIfGs_setSelectEquipSword(u8) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002EEC0.s"
}

// dComIfGs_setSelectEquipShield__FUc
// dComIfGs_setSelectEquipShield(unsigned char)
asm void dComIfGs_setSelectEquipShield(u8) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002EF94.s"
}

// dComIfGs_setKeyNum__FiUc
// dComIfGs_setKeyNum(int, unsigned char)
asm void dComIfGs_setKeyNum(int, u8) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F040.s"
}

#ifdef NONMATCHING
void dComIfGs_setWarpItemData(int unk1, const char* stage, cXyz pos, s16 angle, s8 room, u8 unk2,
                              u8 unk3) {
    g_dComIfG_gameInfo.getPlay().setWarpItemData(stage, pos, angle, room, unk2, unk3);
}
#else
asm void dComIfGs_setWarpItemData(int unk1, const char* stage, cXyz pos, s16 angle, s8 room,
                                  u8 unk2, u8 unk3) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F0E0.s"
}
#endif

// setWarpItemData__14dComIfG_play_cFPCc4cXyzsScUcUc
// dComIfG_play_c::setWarpItemData(const char*, cXyz, short, char, unsigned char, unsigned char)
asm void dComIfG_play_c::setWarpItemData(const char*, cXyz, s16, s8, u8, u8) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F128.s"
}

// dComIfGs_setWarpItemData__FPCc4cXyzsScUcUc
// dComIfGs_setWarpItemData(const char*, cXyz, short, char, unsigned char, unsigned char)
asm void dComIfGs_setWarpItemData_X1_(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F19C.s"
}

void dComIfGs_setLastWarpMarkItemData(const char* stage, cXyz pos, s16 angle, s8 room, u8 unk1,
                                      u8 unk2) {
    g_dComIfG_gameInfo.getSaveFile().getPlayerLastMarkInfo().setWarpItemData(stage, pos, angle,
                                                                             room, unk1, unk2);
}

const char* dComIfGs_getWarpStageName(void) {
    return dComIfGs_getLastWarpMarkStageName();
}

// dComIfGs_getWarpPlayerPos__Fv
// dComIfGs_getWarpPlayerPos(void)
asm void dComIfGs_getWarpPlayerPos(void){nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F2BC.s"
}

s16 dComIfGs_getWarpPlayerAngleY(void) {
    return dComIfGs_getLastWarpMarkPlayerAngleY();
}

int dComIfGs_getWarpRoomNo(void) {
    return dComIfGs_getLastWarpMarkRoomNo();
}

// dComIfGs_getWarpMarkFlag__Fv
// dComIfGs_getWarpMarkFlag(void)
asm void dComIfGs_getWarpMarkFlag(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F2F0.s"
}

void dComIfGs_setWarpMarkFlag(void) {
    return;
}

// __ct__19dComIfG_resLoader_cFv
// dComIfG_resLoader_c::dComIfG_resLoader_c(void)
asm void func_8002F314(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F314.s"
}

// __dt__19dComIfG_resLoader_cFv
// dComIfG_resLoader_c::~dComIfG_resLoader_c(void)
asm void func_8002F328(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F328.s"
}

// load__19dComIfG_resLoader_cFPPCcP7JKRHeap
// dComIfG_resLoader_c::load(const char**, JKRHeap*)
asm void func_8002F3B4(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F3B4.s"
}

// dComIfG_getStageRes__FPCc
// dComIfG_getStageRes(const char*)
asm void dComIfG_getStageRes(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F434.s"
}

// dComIfG_getOldStageRes__FPCc
// dComIfG_getOldStageRes(const char*)
asm void dComIfG_getOldStageRes(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F478.s"
}

// dComIfG_getRoomArcName__Fi
// dComIfG_getRoomArcName(int)
asm void dComIfG_getRoomArcName(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F4BC.s"
}

// dComIfGp_ret_wp_set__FSc
// dComIfGp_ret_wp_set(char)
asm void dComIfGp_ret_wp_set(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F500.s"
}

// dComIfGp_world_dark_set__FUc
// dComIfGp_world_dark_set(unsigned char)

// matches but dComIfG_inf_c structure is wrong
#ifdef NONMATCHING
void dComIfGp_world_dark_set(u8 state) {
    g_dComIfG_gameInfo.setWorldDark(state);
}
#else
asm void dComIfGp_world_dark_set(u8) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F504.s"
}
#endif

// dComIfGp_world_dark_get__Fv
// dComIfGp_world_dark_get(void)

// same issue as above
#ifdef NONMATCHING
u8 dComIfGp_world_dark_get(void) {
    return g_dComIfG_gameInfo.getWorldDark();
}
#else
asm void dComIfGp_world_dark_get(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F518.s"
}
#endif

// dComIfG_TimerStart__Fis
// dComIfG_TimerStart(int, short)
asm void func_8002F52C(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F52C.s"
}

// dComIfG_TimerStop__Fi
// dComIfG_TimerStop(int)
asm void func_8002F5C0(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F5C0.s"
}

// dComIfG_TimerReStart__Fi
// dComIfG_TimerReStart(int)
asm void func_8002F638(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F638.s"
}

// dComIfG_TimerEnd__Fii
// dComIfG_TimerEnd(int, int)
asm void func_8002F6B0(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F6B0.s"
}

// dComIfG_TimerDeleteCheck__Fi
// dComIfG_TimerDeleteCheck(int)
asm void func_8002F72C(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F72C.s"
}

// dComIfG_TimerDeleteRequest__Fi
// dComIfG_TimerDeleteRequest(int)
asm void dComIfG_TimerDeleteRequest(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F79C.s"
}

// dComIfGs_Wolf_Change_Check__Fv
// dComIfGs_Wolf_Change_Check(void)
asm void dComIfGs_Wolf_Change_Check(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F810.s"
}

// dComIfGs_PolyDamageOff_Set__FSc
// dComIfGs_PolyDamageOff_Set(char)
asm void dComIfGs_PolyDamageOff_Set(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002F9F0.s"
}

// dComIfGs_PolyDamageOff_Check__Fv
// dComIfGs_PolyDamageOff_Check(void)
asm void dComIfGs_PolyDamageOff_Check(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA04.s"
}

// dComIfGs_shake_kandelaar__Fv
// dComIfGs_shake_kandelaar(void)
asm void func_8002FA18(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA18.s"
}

// dComIfGs_shake_kandelaar_check__Fv
// dComIfGs_shake_kandelaar_check(void)
asm void func_8002FA30(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA30.s"
}

// dComIfGs_wolfeye_effect_check__Fv
// dComIfGs_wolfeye_effect_check(void)
asm void dComIfGs_wolfeye_effect_check(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA54.s"
}

// dComIfGs_Grass_hide_Set__FSc
// dComIfGs_Grass_hide_Set(char)
asm void func_8002FA84(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA84.s"
}

// dComIfGp_TargetWarpPt_set__FUc
// dComIfGp_TargetWarpPt_set(unsigned char)
asm void dComIfGp_TargetWarpPt_set(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FA98.s"
}

// dComIfGp_SelectWarpPt_set__FUc
// dComIfGp_SelectWarpPt_set(unsigned char)
asm void dComIfGp_SelectWarpPt_set(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FAAC.s"
}

// dComIfGp_TargetWarpPt_get__Fv
// dComIfGp_TargetWarpPt_get(void)
asm void dComIfGp_TargetWarpPt_get(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FAC0.s"
}

// dComIfGp_SelectWarpPt_get__Fv
// dComIfGp_SelectWarpPt_get(void)
asm void dComIfGp_SelectWarpPt_get(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FAD4.s"
}

// dComIfGp_TransportWarp_check__Fv
// dComIfGp_TransportWarp_check(void)
asm void dComIfGp_TransportWarp_check(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FAE8.s"
}

// dComLbG_PhaseHandler__FP30request_of_phase_process_classPPFPv_iPv
// dComLbG_PhaseHandler(request_of_phase_process_class*, int (*)(void*), void*)
asm void dComLbG_PhaseHandler(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FB20.s"
}

// dComIfGs_onVisitedRoom__Fi
// dComIfGs_onVisitedRoom(int)
asm void dComIfGs_onVisitedRoom(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FB80.s"
}

// dComIfGs_offVisitedRoom__Fi
// dComIfGs_offVisitedRoom(int)
asm void func_8002FC3C(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FC3C.s"
}

// dComIfGs_isVisitedRoom__Fi
// dComIfGs_isVisitedRoom(int)
asm void dComIfGs_isVisitedRoom(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FC98.s"
}

// dComIfGs_staffroll_next_go__Fv
// dComIfGs_staffroll_next_go(void)
asm void dComIfGs_staffroll_next_go(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FCF4.s"
}

// dComIfGs_staffroll_next_go_check__Fv
// dComIfGs_staffroll_next_go_check(void)
asm void dComIfGs_staffroll_next_go_check(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FD08.s"
}

// __sinit_d_com_inf_game_cpp
//
asm void func_8002FD18(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FD18.s"
}

// __dt__13dComIfG_inf_cFv
// dComIfG_inf_c::~dComIfG_inf_c(void)
asm void dComIfG_inf_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FD74.s"
}

// __dt__14dComIfG_play_cFv
// dComIfG_play_c::~dComIfG_play_c(void)
asm void dComIfG_play_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FDE8.s"
}

// __dt__11cBgS_ChkElmFv
// cBgS_ChkElm::~cBgS_ChkElm(void)
asm void cBgS_ChkElm_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FEF8.s"
}

// __dt__4dCcSFv
// dCcS::~dCcS(void)
asm void dCcS_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8002FF40.s"
}

// __dt__12dCcMassS_ObjFv
// dCcMassS_Obj::~dCcMassS_Obj(void)
asm void dCcMassS_Obj_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800300F4.s"
}

// __dt__12dEvt_order_cFv
// dEvt_order_c::~dEvt_order_c(void)
asm void dEvt_order_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030154.s"
}

// __dt__11dEvDtBase_cFv
// dEvDtBase_c::~dEvDtBase_c(void)
asm void dEvDtBase_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030190.s"
}

// __dt__14dDlst_window_cFv
// dDlst_window_c::~dDlst_window_c(void)
asm void dDlst_window_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800301CC.s"
}

// __dt__25dComIfG_camera_info_classFv
// dComIfG_camera_info_class::~dComIfG_camera_info_class(void)
asm void dComIfG_camera_info_class_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030208.s"
}

// __ct__13dComIfG_inf_cFv
// dComIfG_inf_c::dComIfG_inf_c(void)
asm dComIfG_inf_c::dComIfG_inf_c(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030244.s"
}

// __ct__25dComIfG_camera_info_classFv
// dComIfG_camera_info_class::dComIfG_camera_info_class(void)
asm dComIfG_camera_info_class::dComIfG_camera_info_class(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800304C8.s"
}

// __ct__14dDlst_window_cFv
// dDlst_window_c::dDlst_window_c(void)
asm dDlst_window_c::dDlst_window_c(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800304CC.s"
}

// __dt__10dAttList_cFv
// dAttList_c::~dAttList_c(void)
asm void dAttList_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800304D0.s"
}

// __ct__10dAttList_cFv
// dAttList_c::dAttList_c(void)
asm void dAttList_c_NS_ctor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8003050C.s"
}

// __dt__7cSAngleFv
// cSAngle::~cSAngle(void)
asm void cSAngle_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030510.s"
}

// __dt__10dAttDraw_cFv
// dAttDraw_c::~dAttDraw_c(void)
asm void dAttDraw_c_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8003054C.s"
}

// __dt__13mDoExt_bckAnmFv
// mDoExt_bckAnm::~mDoExt_bckAnm(void)
asm void mDoExt_bckAnm_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800306A0.s"
}

// __dt__13mDoExt_bpkAnmFv
// mDoExt_bpkAnm::~mDoExt_bpkAnm(void)
asm void mDoExt_bpkAnm_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800306F4.s"
}

// __dt__13mDoExt_brkAnmFv
// mDoExt_brkAnm::~mDoExt_brkAnm(void)
asm void mDoExt_brkAnm_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030748.s"
}

// __dt__13mDoExt_btkAnmFv
// mDoExt_btkAnm::~mDoExt_btkAnm(void)
asm void mDoExt_btkAnm_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8003079C.s"
}

// __ct__10dAttDraw_cFv
// dAttDraw_c::dAttDraw_c(void)
asm void dAttDraw_c_NS_ctor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800307F0.s"
}

// __ct__13mDoExt_btkAnmFv
// mDoExt_btkAnm::mDoExt_btkAnm(void)
asm mDoExt_btkAnm::mDoExt_btkAnm(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030954.s"
}

// __ct__13mDoExt_brkAnmFv
// mDoExt_brkAnm::mDoExt_brkAnm(void)
asm mDoExt_brkAnm::mDoExt_brkAnm(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_8003099C.s"
}

// __ct__13mDoExt_bpkAnmFv
// mDoExt_bpkAnm::mDoExt_bpkAnm(void)
asm mDoExt_bpkAnm::mDoExt_bpkAnm(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_800309E4.s"
}

// __ct__13mDoExt_bckAnmFv
// mDoExt_bckAnm::mDoExt_bckAnm(void)
asm mDoExt_bckAnm::mDoExt_bckAnm(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030A2C.s"
}

// __dt__12dCcMassS_MngFv
// dCcMassS_Mng::~dCcMassS_Mng(void)
asm void func_80030A74(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030A74.s"
}

// __dt__4cCcSFv
// cCcS::~cCcS(void)
asm void func_80030BDC(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030BDC.s"
}

// __dt__4dBgSFv
// dBgS::~dBgS(void)
asm void func_80030C50(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030C50.s"
}

// __dt__4cBgSFv
// cBgS::~cBgS(void)
asm void func_80030CCC(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030CCC.s"
}

// __ct__11cBgS_ChkElmFv
// cBgS_ChkElm::cBgS_ChkElm(void)
asm cBgS_ChkElm::cBgS_ChkElm(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030D38.s"
}

// __ct__10dSv_zone_cFv
// dSv_zone_c::dSv_zone_c(void)
asm dSv_zone_c::dSv_zone_c(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030D74.s"
}

// __ct__13dSv_memory2_cFv
// dSv_memory2_c::dSv_memory2_c(void)
asm void __ct__13dSv_memory2_cFv(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030D80.s"
}

// __ct__12dSv_memory_cFv
// dSv_memory_c::dSv_memory_c(void)
asm void __ct__12dSv_memory_cFv(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030DB0.s"
}

// __dt__15cCcD_DivideAreaFv
// cCcD_DivideArea::~cCcD_DivideArea(void)
asm void func_80030DE0(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030DE0.s"
}  //

// __dt__8cM3dGCylFv
// cM3dGCyl::~cM3dGCyl(void)
asm void cM3dGCyl_NS_dtor(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030E3C.s"
}

// __dt__8cM3dGAabFv
// cM3dGAab::~cM3dGAab(void)
asm void func_80030E84(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030E84.s"
}

// __dt__15cCcD_DivideInfoFv
// cCcD_DivideInfo::~cCcD_DivideInfo(void)
asm void func_80030ECC(void) {
    nofralloc
#include "d/d_com/d_com_inf_game/asm/func_80030ECC.s"
}