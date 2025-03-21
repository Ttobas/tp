//
// Generated By: dol2asm
// Translation Unit: d/d_msg_unit
//

#include "d/d_msg_unit.h"
#include "stdio.h"
#include "dol2asm.h"
#include "d/d_kankyo.h"
#include "d/d_meter2_info.h"

//
// Forward References:
//

extern "C" void __ct__10dMsgUnit_cFv();
extern "C" void __dt__10dMsgUnit_cFv();
extern "C" void setTag__10dMsgUnit_cFiiPcb();
extern "C" void __sinit_d_msg_unit_cpp();
extern "C" extern char const* const d_msg_d_msg_unit__stringBase0;
extern "C" extern u8 data_804510D8[8];

//
// External References:
//

extern "C" void getDaytime__18dScnKy_env_light_cFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();

//
// Declarations:
//

/* 80238C94-80238CA4 2335D4 0010+00 1/1 0/0 0/0 .text            __ct__10dMsgUnit_cFv */
dMsgUnit_c::dMsgUnit_c() {}

/* 80238CA4-80238CEC 2335E4 0048+00 2/1 0/0 0/0 .text            __dt__10dMsgUnit_cFv */
dMsgUnit_c::~dMsgUnit_c() {}

/* ############################################################################################## */
/* 803996E8-803996E8 025D48 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803996E8 = "%d";
SECTION_DEAD static char const* const stringBase_803996EB = "%d-%d";
SECTION_DEAD static char const* const stringBase_803996F1 = "%d:%02d";
SECTION_DEAD static char const* const stringBase_803996F9 = "";
SECTION_DEAD static char const* const stringBase_803996FA = "%d%s";
SECTION_DEAD static char const* const stringBase_803996FF = "%d %s";
#pragma pop

/* 80454B40-80454B44 003140 0004+00 1/1 0/0 0/0 .sdata2          @3702 */
SECTION_SDATA2 static f32 lit_3702 = 1000000.0f;

/* 80454B44-80454B48 003144 0004+00 1/1 0/0 0/0 .sdata2          @3703 */
SECTION_SDATA2 static f32 lit_3703 = 60.0f;

/* 80454B48-80454B50 003148 0004+04 1/1 0/0 0/0 .sdata2          @3704 */
SECTION_SDATA2 static f32 lit_3704[1 + 1 /* padding */] = {
    15.0f,
    /* padding */
    0.0f,
};

/* 80454B50-80454B58 003150 0008+00 1/1 0/0 0/0 .sdata2          @3707 */
SECTION_SDATA2 static f64 lit_3707 = 4503601774854144.0 /* cast s32 to float */;

/* 80238CEC-8023907C 23362C 0390+00 0/0 5/5 0/0 .text            setTag__10dMsgUnit_cFiiPcb */
// NONMATCHING - regalloc + mulli issue
void dMsgUnit_c::setTag(int param_1, int param_2, char* param_3, bool param_4) {
    *param_3 = 0;
    if (param_1 == 0x10000) {
        sprintf(param_3, "%d", param_2);
    } else if (param_1 == 0x10001) {
        sprintf(param_3, "%d-%d", param_2 / 10, param_2 % 10);
    } else if (param_1 == 4 && param_4 == true) {
        int r6 = param_2 / 1000;
        int r5 = r6 / 60;
        r6 %= 60;
        if (r5 > 99) {
            r5 = 99;
            r6 = 59;
        }
        if (r5 != 0 || r6 != 0) {
            sprintf(param_3, "%d:%02d", r5, r6);
        }
    } else if (param_1 == 3 && param_4 == true) {
        f32 dayTime = g_env_light.getDaytime();
        f32 iVar8 = 1000000.0f * dayTime;
        iVar8 = ((s32)iVar8 % 15000000) / 1000000.0f;
        iVar8 = 60.0f * (iVar8 / 15.0f);
        sprintf(param_3, "%d:%02d", (s32)(dayTime / 15.0f), (s32)iVar8);
    } else {
        if (param_1 == 9 && param_4 == true) {
            sprintf(param_3, "%d", param_2);
        }
        bmg_header_t* iVar9 = (bmg_header_t*)dMeter2Info_getMsgUnitResource();
        inf1_section_t* inf1 = NULL;
        str1_section_t* str1 = NULL;
        int local_114 = sizeof(bmg_header_t);
        u32 size = iVar9->size;
        bmg_section_t* piVar12 = iVar9->section;
        for (; local_114 < size; local_114 += piVar12->size) {
            switch(piVar12->msgType) {
                case 'FLW1':
                    break;
                case 'FLI1':
                    break;
                case 'DAT1':
                    break;
                case 'INF1':
                    inf1 = (inf1_section_t*)piVar12;
                    break;
                case 'STR1':
                    str1 = (str1_section_t*)piVar12;
                    break;
            }
            piVar12 = (bmg_section_t*)((u8*)piVar12 + piVar12->size);
        }
        
        u32 uVar1 = inf1->entries[param_1].startFrame;
        u32 uVar2 = inf1->entries[param_1].endFrame;
        const char* uVar5;
        if (param_2 == 1) {
            uVar5 = str1->entries->str + uVar1;
        } else {
            uVar5 = str1->entries->str + uVar2;
        }
        if (strcmp(uVar5, "") == 0) {
            sprintf(param_3, "%d%s", param_2, uVar5);
        } else {
            sprintf(param_3, "%d %s", param_2, uVar5);
        }
        if (param_1 == 3 && param_4 == true) {
            char acStack_d8[20];
            setTag(4, 0, acStack_d8, false);
            strcat(param_3, acStack_d8);
        }
        if (param_1 == 4 && param_4 == true) {
            char acStack_ec[20];
            setTag(5, param_2, acStack_ec, false);
            strcat(param_3, acStack_ec);
        }
    }
}

/* 804510D0-804510D8 0005D0 0004+04 1/1 5/5 0/0 .sbss            g_msg_unit */
dMsgUnit_c g_msg_unit;
