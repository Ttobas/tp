//
// Generated By: dol2asm
// Translation Unit: OSRtc
//

#include "dolphin/os/OSRtc.h"
#include "dol2asm.h"
#include "dolphin/exi/EXIBios.h"
#include "dolphin/os/OS.h"

static void WriteSramCallback(s32 chan, OSContext* context);
static BOOL WriteSram(void* buffer, u32 offset, u32 size);
static BOOL UnlockSram(BOOL commit, u32 offset);

//
// Declarations:
//

/* ############################################################################################## */
/* 8044BB20-8044BB78 078840 0054+04 14/14 0/0 0/0 .bss             Scb */
static SramControlBlock Scb ALIGN_DECL(32);

/* 8033FE90-8033FEF0 33A7D0 0060+00 2/2 0/0 0/0 .text            WriteSramCallback */
// needs compiler epilogue patch
#ifdef NONMATCHING
static void WriteSramCallback(s32 chan, OSContext* context) {
    Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
    if (Scb.sync) {
        Scb.offset = RTC_SRAM_SIZE;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void WriteSramCallback(s32 chan, OSContext* context) {
    nofralloc
#include "asm/dolphin/os/OSRtc/WriteSramCallback.s"
}
#pragma pop
#endif

static inline BOOL ReadSram(void* buffer) {
    BOOL err;
    u32 cmd;

    DCInvalidateRange(buffer, RTC_SRAM_SIZE);

    if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
        return FALSE;
    }
    if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
        EXIUnlock(RTC_CHAN);
        return FALSE;
    }

    cmd = RTC_CMD_READ | RTC_SRAM_ADDR;
    err = FALSE;
    err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIDma(RTC_CHAN, buffer, RTC_SRAM_SIZE, 0, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIDeselect(RTC_CHAN);
    EXIUnlock(RTC_CHAN);

    return !err;
}

/* 8033FEF0-80340008 33A830 0118+00 1/1 0/0 0/0 .text            WriteSram */
// needs compiler epilogue patch
#ifdef NONMATCHING
BOOL WriteSram(void* buffer, u32 offset, u32 size) {
    BOOL err;
    u32 cmd;

    if (!EXILock(RTC_CHAN, RTC_DEV, WriteSramCallback)) {
        return FALSE;
    }
    if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
        EXIUnlock(RTC_CHAN);
        return FALSE;
    }

    offset <<= 6;
    cmd = RTC_CMD_WRITE | RTC_SRAM_ADDR + offset;
    err = FALSE;
    err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIImmEx(RTC_CHAN, buffer, (s32)size, 1);
    err |= !EXIDeselect(RTC_CHAN);
    EXIUnlock(RTC_CHAN);

    return !err;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm BOOL WriteSram(void* buffer, u32 offset, u32 size) {
    nofralloc
#include "asm/dolphin/os/OSRtc/WriteSram.s"
}
#pragma pop
#endif

/* 80340008-80340144 33A948 013C+00 0/0 1/1 0/0 .text            __OSInitSram */
// needs compiler epilogue patch
#ifdef NONMATCHING
void __OSInitSram(void) {
    Scb.locked = Scb.enabled = FALSE;
    Scb.sync = ReadSram(Scb.sram);
    Scb.offset = RTC_SRAM_SIZE;
    OSSetGbsMode(OSGetGbsMode());
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSInitSram(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/__OSInitSram.s"
}
#pragma pop
#endif

/* 80340144-803401A0 33AA84 005C+00 0/0 3/3 0/0 .text            __OSLockSram */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSSram* __OSLockSram(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/__OSLockSram.s"
}
#pragma pop

/* 803401A0-803401FC 33AAE0 005C+00 0/0 4/4 0/0 .text            __OSLockSramEx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSSramEx* __OSLockSramEx(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/__OSLockSramEx.s"
}
#pragma pop

/* 803401FC-80340538 33AB3C 033C+00 10/10 0/0 0/0 .text            UnlockSram */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm BOOL UnlockSram(BOOL commit, u32 offset) {
    nofralloc
#include "asm/dolphin/os/OSRtc/UnlockSram.s"
}
#pragma pop

/* 80340538-8034055C 33AE78 0024+00 0/0 3/3 0/0 .text            __OSUnlockSram */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL __OSUnlockSram(BOOL commit) {
    nofralloc
#include "asm/dolphin/os/OSRtc/__OSUnlockSram.s"
}
#pragma pop

/* 8034055C-80340580 33AE9C 0024+00 0/0 4/4 0/0 .text            __OSUnlockSramEx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL __OSUnlockSramEx(BOOL commit) {
    nofralloc
#include "asm/dolphin/os/OSRtc/__OSUnlockSramEx.s"
}
#pragma pop

/* 80340580-80340590 33AEC0 0010+00 0/0 2/2 0/0 .text            __OSSyncSram */
BOOL __OSSyncSram(void) {
    return Scb.sync;
}

/* 80340590-80340610 33AED0 0080+00 0/0 4/4 0/0 .text            OSGetSoundMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 OSGetSoundMode(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSGetSoundMode.s"
}
#pragma pop

/* 80340610-803406B4 33AF50 00A4+00 0/0 1/1 0/0 .text            OSSetSoundMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetSoundMode(OSSoundMode mode) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSSetSoundMode.s"
}
#pragma pop

/* 803406B4-80340724 33AFF4 0070+00 0/0 3/3 0/0 .text            OSGetProgressiveMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 OSGetProgressiveMode(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSGetProgressiveMode.s"
}
#pragma pop

/* 80340724-803407C8 33B064 00A4+00 0/0 2/2 0/0 .text            OSSetProgressiveMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetProgressiveMode(u32 mode) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSSetProgressiveMode.s"
}
#pragma pop

/* 803407C8-8034084C 33B108 0084+00 0/0 1/1 0/0 .text            OSGetWirelessID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u16 OSGetWirelessID(s32 channel) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSGetWirelessID.s"
}
#pragma pop

/* 8034084C-803408F8 33B18C 00AC+00 0/0 4/4 0/0 .text            OSSetWirelessID */
#ifdef NONMATCHING
void OSSetWirelessID(s32 channel, u16 id) {
    OSSramEx* sram;

    sram = __OSLockSramEx();
    if (sram->wirelessPadID[channel] != id) {
        sram->wirelessPadID[channel] = id;
        __OSUnlockSramEx(TRUE);
        return;
    }

    __OSUnlockSramEx(FALSE);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetWirelessID(s32 channel, u16 id) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSSetWirelessID.s"
}
#pragma pop
#endif

/* 803408F8-80340968 33B238 0070+00 1/1 0/0 0/0 .text            OSGetGbsMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u16 OSGetGbsMode(void) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSGetGbsMode.s"
}
#pragma pop

/* 80340968-80340A20 33B2A8 00B8+00 1/1 0/0 0/0 .text            OSSetGbsMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void OSSetGbsMode(u16 mode) {
    nofralloc
#include "asm/dolphin/os/OSRtc/OSSetGbsMode.s"
}
#pragma pop
