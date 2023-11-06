//
// Generated By: dol2asm
// Translation Unit: d_a_tag_evt
//

#include "rel/d/a/tag/d_a_tag_evt/d_a_tag_evt.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/com/d_com_static.h"
#include "d/d_procname.h"
#include "d/save/d_save.h"
#include "f_op/f_op_actor_mng.h"

/* 8048C3FC-8048C404 -00001 0008+00 1/1 0/0 0/0 .data            l_evtNameList */
static char* l_evtNameList[] = {
    NULL,
    "JUMP_DEMOSTAGE",
};

/* 8048C404-8048C408 -00001 0004+00 2/2 0/0 0/0 .data            l_resFileName */
static char* l_resFileName = "TAGEVT";

/* 8048C408-8048C414 -00001 000C+00 1/1 0/0 0/0 .data            mEvtCutList__11daTag_Evt_c */
char* daTag_Evt_c::mEvtCutList[] = {
    "WAIT",
    "TALK",
    "NEXT",
};

/* 8048B918-8048B9D8 000078 00C0+00 1/1 0/0 0/0 .text            create__11daTag_Evt_cFv */
int daTag_Evt_c::create() {
    fopAcM_SetupActor(this, daTag_Evt_c);
    cPhs__Step phase = (cPhs__Step)dComIfG_resLoad(&mPhase, l_resFileName);
    if (phase == cPhs_COMPLEATE_e) {
        mEvtInfo.setArchiveName(l_resFileName);
        strcpy(field_0x568, "TagEvt");
        getParam();
        field_0x572 = -1;
    }
    return phase;
}

/* 8048B9D8-8048BA0C 000138 0034+00 1/1 0/0 0/0 .text            destroy__11daTag_Evt_cFv */
int daTag_Evt_c::destroy() {
    dComIfG_resDelete(&mPhase, l_resFileName);
    return 1;
}

/* 8048BA0C-8048BE44 00016C 0438+00 1/1 0/0 0/0 .text            execute__11daTag_Evt_cFv */
int daTag_Evt_c::execute() {
    BOOL bVar = true;
    mEyePos.set(current.pos.x, current.pos.y + 100.0f, current.pos.z);
    mAttentionInfo.mPosition = mEyePos;
    fopAcM_SetRoomNo(this, dComIfGp_roomControl_getStayNo());
    if (field_0x5E4 == 0 || field_0x5E4 == 1) {
        dComIfG_inf_c* pGameInfo = &g_dComIfG_gameInfo;
        if (i_dComIfGp_event_runCheck()) {
            bVar = false;
            int iVar1 = i_dComIfGp_evmng_getMyStaffId(field_0x568, 0, 0);
            if (!mEvtInfo.checkCommandTalk()) {
                if (mEvtInfo.i_checkCommandDemoAccrpt()) {
                    if (i_dComIfGp_getEventManager().endCheck(field_0x572)) {
                        i_dComIfGp_event_reset();
                        field_0x570 = 0;
                        field_0x572 = -1;
                        bVar = true;
                    } else {
                        if (iVar1 != -1) {
                            int actIdx = i_dComIfGp_getEventManager().getMyActIdx(
                                iVar1, mEvtCutList, 3, 0, 0);
                            int iVar2 = 0;
                            switch (actIdx) {
                            case 0:
                                iVar2 = doEvtCutWait(iVar1);
                                break;
                            case 1:
                                iVar2 = doEvtCutTalk(iVar1);
                                break;
                            case 2:
                                iVar2 = doEvtCutNext(iVar1);
                            }
                            if (iVar2 != 0) {
                                i_dComIfGp_getEventManager().cutEnd(iVar1);
                            }
                        }
                    }
                }
            } else if (field_0x5DC != 0) {
                if (mMsgFlow.doFlow(this, NULL, 0) != 0) {
                    i_dComIfGp_event_reset();
                    u16 eventId = mMsgFlow.getEventId(NULL);
                    if (eventId != 0) {
                        daNpcMsg_setEvtNum(eventId);
                        field_0x570 = 1;
                        bVar = true;
                    } else {
                        fopAcM_delete(this);
                    }
                }
            } else {
                mMsgFlow.init(this, field_0x574, 0, NULL);
                field_0x5DC = 1;
            }
        }
        if (!isDelete() && cLib_calcTimer(&field_0x5D0) == 0) {
            cXyz var1 = daPy_getPlayerActorClass()->current.pos - current.pos;
            if (var1.absXZ() < mScale.x && -mScale.y < var1.y && var1.y < mScale.y) {
                field_0x570 = 1;
            }
        }
        if (bVar != 0 && field_0x570 != 0) {
            field_0x572 =
                pGameInfo->play.getEvtManager().getEventIdx(this, l_evtNameList[field_0x570], -1);
            fopAcM_orderOtherEventId(this, field_0x572, -1, -1, 0, 1);
        }
    } else if (field_0x5E4 == 2 && isDelete()) {
        fopAcM_delete(this);
    }
    return 1;
}

/* 8048BE44-8048BE4C 0005A4 0008+00 1/1 0/0 0/0 .text            draw__11daTag_Evt_cFv */
int daTag_Evt_c::draw() {
    return 1;
}

/* 8048BE4C-8048BF64 0005AC 0118+00 1/1 0/0 0/0 .text            getParam__11daTag_Evt_cFv */
int daTag_Evt_c::getParam() {
    field_0x5E0 = fopAcM_GetParam(this) & 0xFFF;
    field_0x5E2 = (fopAcM_GetParam(this) >> 0xC) & 0xFFF;
    if ((fopAcM_GetParam(this) & 0xF000000) != 0xF000000) {
        field_0x5D8 = (fopAcM_GetParam(this) & 0xF000000) >> 0x18;
    } else {
        field_0x5D8 = -1;
    }

    field_0x5E4 = fopAcM_GetParam(this) >> 0x1E;
    field_0x5DD = orig.angle.x;
    field_0x5DE = (u16)orig.angle.x >> 8;
    field_0x5D4 = orig.angle.z & 0xFF;
    if ((orig.angle.z & 0xFF00) != 0xFF00) {
        field_0x5D0 = ((orig.angle.z & 0xFF00) >> 8) * 0x1E;
    } else {
        field_0x5D0 = 0;
    }
    field_0x574 = -1;
    mScale.x *= 100.0f;
    mScale.y *= 100.0f;
    mScale.z *= 100.0f;
    if (field_0x5E4 == 1) {
        mScale.x *= 10.0f;
        mScale.y *= 10.0f;
        mScale.z *= 10.0f;
    }
    orig.angle.x = 0;
    orig.angle.z = 0;
    return 1;
}

/* 8048BF64-8048C090 0006C4 012C+00 1/1 0/0 0/0 .text            isDelete__11daTag_Evt_cFv */
int daTag_Evt_c::isDelete() {
    if (field_0x5E0 != 0xFFF || field_0x5E2 != 0xFFF) {
        if (field_0x5E0 == 0xFFF ||
            (field_0x5E0 != 0xFFF &&
             i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x5E0]) != 0))
        {
            if (field_0x5E2 != 0xFFF) {
                return i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x5E2]);
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else if (field_0x5DD != 0xFF || field_0x5DE != 0xFF) {
        if (field_0x5DD == 0xFF ||
            (field_0x5DD != 0xFF && dComIfGs_isSwitch(field_0x5DD, fopAcM_GetRoomNo(this)) != 0))
        {
            if (field_0x5DE != 0xFFF) {
                return dComIfGs_isSwitch(field_0x5DE, fopAcM_GetRoomNo(this));
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

/* 8048C090-8048C124 0007F0 0094+00 1/1 0/0 0/0 .text            doEvtCutWait__11daTag_Evt_cFi */
int daTag_Evt_c::doEvtCutWait(int param_0) {
    if (i_dComIfGp_getEventManager().getIsAddvance(param_0)) {
        int* pTimer = dComIfGp_evmng_getMyIntegerP(param_0, "timer");
        mTimer = (pTimer == NULL ? 0 : *pTimer);
    }
    return cLib_calcTimer(&mTimer) == 0;
}

/* 8048C124-8048C1C8 000884 00A4+00 1/1 0/0 0/0 .text            doEvtCutTalk__11daTag_Evt_cFi */
int daTag_Evt_c::doEvtCutTalk(int param_0) {
    if (i_dComIfGp_getEventManager().getIsAddvance(param_0)) {
        mMsgFlow.init(this, *dComIfGp_evmng_getMyIntegerP(param_0, "flowNodeNo"), 0, NULL);
        return 0;
    } else {
        return mMsgFlow.doFlow(this, NULL, 0);
    }
}

/* 8048C1C8-8048C27C 000928 00B4+00 1/1 0/0 0/0 .text            doEvtCutNext__11daTag_Evt_cFi */
int daTag_Evt_c::doEvtCutNext(int param_0) {
    if (i_dComIfGp_getEventManager().getIsAddvance(param_0)) {
        if ((field_0x5E4 == 0 || field_0x5E4 == 1) && field_0x5DE != 0xFF) {
            dComIfGs_onSwitch(field_0x5DE, fopAcM_GetRoomNo(this));
        }
        dStage_changeScene(field_0x5D4, 0.0f, 0, fopAcM_GetRoomNo(this), 0,
                           dComIfG_play_c::getLayerNo(0));
    }
    return 0;
}

/* 8048C27C-8048C29C 0009DC 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Create__FPv */
static int daTag_Evt_Create(void* i_this) {
    return static_cast<daTag_Evt_c*>(i_this)->create();
}

/* 8048C29C-8048C2BC 0009FC 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Delete__FPv */
static int daTag_Evt_Delete(void* i_this) {
    return static_cast<daTag_Evt_c*>(i_this)->destroy();
}

/* 8048C2BC-8048C2DC 000A1C 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Execute__FPv */
static int daTag_Evt_Execute(void* i_this) {
    return static_cast<daTag_Evt_c*>(i_this)->execute();
}

/* 8048C2DC-8048C2FC 000A3C 0020+00 1/0 0/0 0/0 .text            daTag_Evt_Draw__FPv */
static int daTag_Evt_Draw(void* i_this) {
    return static_cast<daTag_Evt_c*>(i_this)->draw();
}

/* 8048C2FC-8048C304 000A5C 0008+00 1/0 0/0 0/0 .text            daTag_Evt_IsDelete__FPv */
static int daTag_Evt_IsDelete(void* i_this) {
    return 1;
}

/* 8048C304-8048C374 000A64 0070+00 1/0 0/0 0/0 .text            __dt__11daTag_Evt_cFv */
daTag_Evt_c::~daTag_Evt_c() {}

/* 8048C414-8048C434 -00001 0020+00 1/0 0/0 0/0 .data            daTag_Evt_MethodTable */
static actor_method_class daTag_Evt_MethodTable = {
    (process_method_func)daTag_Evt_Create,  (process_method_func)daTag_Evt_Delete,
    (process_method_func)daTag_Evt_Execute, (process_method_func)daTag_Evt_IsDelete,
    (process_method_func)daTag_Evt_Draw,
};

/* 8048C434-8048C464 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_EVT */
extern actor_process_profile_definition g_profile_TAG_EVT = {
    fpcLy_CURRENT_e,
    7,
    fpcLy_CURRENT_e,
    PROC_TAG_EVT,
    &g_fpcLf_Method.mBase,
    sizeof(daTag_Evt_c),
    0,
    0,
    &g_fopAc_Method.base,
    0x011C,
    &daTag_Evt_MethodTable,
    0x40000,
    0,
    fopAc_CULLBOX_CUSTOM_e,
};
