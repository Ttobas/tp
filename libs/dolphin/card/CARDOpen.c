//
// Generated By: dol2asm
// Translation Unit: CARDOpen
//

#include "dolphin/card/CARDOpen.h"
#include "MSL_C/MSL_Common/Src/mem.h"
#include "dol2asm.h"
#include "dolphin/card/card.h"
#include "dolphin/dsp/dsp.h"
#include "dolphin/dvd/dvd.h"

#include "dolphin/card/CARDPriv.h"

//
// Declarations:
//

/* 80357C74-80357CDC 3525B4 0068+00 1/1 1/1 0/0 .text            __CARDCompareFileName */
BOOL __CARDCompareFileName(CARDDir* ent, const char* fileName) {
    char* entName;
    char c1;
    char c2;
    int n;

    entName = (char*)ent->fileName;
    n = CARD_FILENAME_MAX;
    while (0 <= --n) {
        if ((c1 = *entName++) != (c2 = *fileName++)) {
            return FALSE;
        } else if (c2 == '\0') {
            return TRUE;
        }
    }

    if (*fileName == '\0') {
        return TRUE;
    }

    return FALSE;
}

/* 80357CDC-80357D70 35261C 0094+00 2/2 0/0 0/0 .text            __CARDAccess */
#ifdef NONMATCHING
s32 __CARDAccess(CARDControl* card, CARDDir* ent) {
    if (ent->gameName[0] == 0xFF) {
        return CARD_RESULT_NOFILE;
    }

    if (card->diskID == &__CARDDiskNone ||
        (memcmp(ent->gameName, card->diskID->game_name, 4) == 0 &&
         memcmp(ent->company, card->diskID->company, 2) == 0)) {
        return CARD_RESULT_READY;
    }

    return CARD_RESULT_NOPERM;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 __CARDAccess(CARDControl* card, CARDDir* ent) {
    nofralloc
#include "asm/dolphin/card/CARDOpen/__CARDAccess.s"
}
#pragma pop
#endif

/* 80357D70-80357EA4 3526B0 0134+00 0/0 2/2 0/0 .text            __CARDIsWritable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 __CARDIsWritable(CARDControl* card, CARDDir* ent) {
    nofralloc
#include "asm/dolphin/card/CARDOpen/__CARDIsWritable.s"
}
#pragma pop

/* 80357EA4-80357F98 3527E4 00F4+00 0/0 2/2 0/0 .text            __CARDIsReadable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 __CARDIsReadable(CARDControl* card, CARDDir* ent) {
    nofralloc
#include "asm/dolphin/card/CARDOpen/__CARDIsReadable.s"
}
#pragma pop

/* 80357F98-803580B4 3528D8 011C+00 0/0 3/3 0/0 .text            CARDOpen */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 CARDOpen(s32 chan, const char* fileName, CARDFileInfo* fileInfo) {
    nofralloc
#include "asm/dolphin/card/CARDOpen/CARDOpen.s"
}
#pragma pop

/* 803580B4-80358108 3529F4 0054+00 0/0 3/3 0/0 .text            CARDClose */
s32 CARDClose(CARDFileInfo* fileInfo) {
    CARDControl* card;
    s32 result;

    result = __CARDGetControlBlock(fileInfo->chan, &card);
    if (result < 0) {
        return result;
    }

    fileInfo->chan = -1;
    return __CARDPutControlBlock(card, CARD_RESULT_READY);
}
