//
// Generated By: dol2asm
// Translation Unit: dspproc
//

#include "JSystem/JAudio2/dspproc.h"
#include "JSystem/JAudio2/dsptask.h"
#include "JSystem/JAudio2/JASDSPInterface.h"

/* 8029E4E0-8029E528 298E20 0048+00 0/0 1/1 0/0 .text            DSPReleaseHalt2__FUl */
void DSPReleaseHalt2(u32 msg) {
    u32 msgs[2];
    u16 dspMap = DSP_CreateMap2(msg);
    msgs[0] = (msg<<16) | dspMap;

    DSPSendCommands2(msgs,0,NULL);
}

/* 804512F8-80451300 0007F8 0004+04 2/2 0/0 0/0 .sbss            flag */
static volatile BOOL flag;

/* 8029E540-8029E54C 298E80 000C+00 1/1 0/0 0/0 .text            setup_callback__FUs */
static void setup_callback(u16 param_0) {
    flag = 0;
}

/* 8029E560-8029E5C4 298EA0 0064+00 0/0 1/1 0/0 .text            DsetupTable__FUlUlUlUlUl */
void DsetupTable(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 table[5];
    table[0] = (param_0 & 0xFFFF) | 0x81000000;
    table[1] = param_1;
    table[2] = param_2;
    table[3] = param_3;
    table[4] = param_4;
    flag = 1;
    DSPSendCommands2(table,5,setup_callback);
    while (true) {
        if (flag==0) {
            return;
        }
    }
}

/* ############################################################################################## */
/* 804507C8-804507D0 000248 0002+06 3/3 0/0 0/0 .sdata           DSP_MIXERLEVEL */
static u16 DSP_MIXERLEVEL = 0x4000;

/* 8029E5E0-8029E604 298F20 0024+00 0/0 1/1 0/0 .text            DsetMixerLevel__Ff */
void DsetMixerLevel(f32 level) {
    DSP_MIXERLEVEL = 4096.0f*level;
}

/* 8029E620-8029E674 298F60 0054+00 0/0 1/1 0/0 .text            DsyncFrame2ch__FUlUlUl */
void DsyncFrame2ch(u32 param_0, u32 param_1, u32 param_2) {
    u32 msgs[5];
    msgs[0] = (param_0 & 0xff) << 0x10 | 0x82000000 | DSP_MIXERLEVEL;
    msgs[1] = param_1;
    msgs[2] = param_2;
    msgs[3] = 0;
    msgs[4] = 0;
    DSPSendCommands2(msgs, 5, 0);
}

/* 8029E680-8029E6D0 298FC0 0050+00 0/0 1/1 0/0 .text            DsyncFrame4ch__FUlUlUlUlUl */
void DsyncFrame4ch(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 msgs[5];
    msgs[0] = (param_0 & 0xff) << 0x10 | 0x82000000 | DSP_MIXERLEVEL;
    msgs[1] = param_1;
    msgs[2] = param_2;
    msgs[3] = param_3;
    msgs[4] = param_4;
    DSPSendCommands2(msgs, 5, 0);
}
