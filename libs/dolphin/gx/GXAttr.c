//
// Generated By: dol2asm
// Translation Unit: GXAttr
//

#include "dolphin/gx/GXAttr.h"
#include "dol2asm.h"
#include "dolphin/gx/GXInit.h"

//
// Forward References:
//

void GXSetVtxDesc();
void GXSetVtxDescv();
void __GXSetVCD();
void __GXCalculateVLim();
void GXClearVtxDesc();
void GXSetVtxAttrFmt();
void GXSetVtxAttrFmtv();
void __GXSetVAT();
void GXInvalidateVtxCache();

//
// External References:
//

void __GXSetMatrixIndex();

//
// Declarations:
//

/* ############################################################################################## */
/* 803D2280-803D22E8 -00001 0068+00 1/1 0/0 0/0 .data            @176 */
SECTION_DATA static void* lit_176[26] = {
    (void*)(((char*)GXSetVtxDesc) + 0x20),  (void*)(((char*)GXSetVtxDesc) + 0x34),
    (void*)(((char*)GXSetVtxDesc) + 0x48),  (void*)(((char*)GXSetVtxDesc) + 0x5C),
    (void*)(((char*)GXSetVtxDesc) + 0x70),  (void*)(((char*)GXSetVtxDesc) + 0x84),
    (void*)(((char*)GXSetVtxDesc) + 0x98),  (void*)(((char*)GXSetVtxDesc) + 0xAC),
    (void*)(((char*)GXSetVtxDesc) + 0xC0),  (void*)(((char*)GXSetVtxDesc) + 0xD4),
    (void*)(((char*)GXSetVtxDesc) + 0xE8),  (void*)(((char*)GXSetVtxDesc) + 0x150),
    (void*)(((char*)GXSetVtxDesc) + 0x164), (void*)(((char*)GXSetVtxDesc) + 0x178),
    (void*)(((char*)GXSetVtxDesc) + 0x18C), (void*)(((char*)GXSetVtxDesc) + 0x1A0),
    (void*)(((char*)GXSetVtxDesc) + 0x1B4), (void*)(((char*)GXSetVtxDesc) + 0x1C8),
    (void*)(((char*)GXSetVtxDesc) + 0x1DC), (void*)(((char*)GXSetVtxDesc) + 0x1F0),
    (void*)(((char*)GXSetVtxDesc) + 0x204), (void*)(((char*)GXSetVtxDesc) + 0x214),
    (void*)(((char*)GXSetVtxDesc) + 0x214), (void*)(((char*)GXSetVtxDesc) + 0x214),
    (void*)(((char*)GXSetVtxDesc) + 0x214), (void*)(((char*)GXSetVtxDesc) + 0x11C),
};

/* 8035AEB8-8035B124 3557F8 026C+00 1/0 70/70 6/6 .text            GXSetVtxDesc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetVtxDesc(GXAttr attr, GXAttrType type) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetVtxDesc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D22E8-803D2350 -00001 0068+00 1/1 0/0 0/0 .data            @223 */
SECTION_DATA static void* lit_223[26] = {
    (void*)(((char*)GXSetVtxDescv) + 0x2C),  (void*)(((char*)GXSetVtxDescv) + 0x40),
    (void*)(((char*)GXSetVtxDescv) + 0x54),  (void*)(((char*)GXSetVtxDescv) + 0x68),
    (void*)(((char*)GXSetVtxDescv) + 0x7C),  (void*)(((char*)GXSetVtxDescv) + 0x90),
    (void*)(((char*)GXSetVtxDescv) + 0xA4),  (void*)(((char*)GXSetVtxDescv) + 0xB8),
    (void*)(((char*)GXSetVtxDescv) + 0xCC),  (void*)(((char*)GXSetVtxDescv) + 0xE0),
    (void*)(((char*)GXSetVtxDescv) + 0xF4),  (void*)(((char*)GXSetVtxDescv) + 0x15C),
    (void*)(((char*)GXSetVtxDescv) + 0x170), (void*)(((char*)GXSetVtxDescv) + 0x184),
    (void*)(((char*)GXSetVtxDescv) + 0x198), (void*)(((char*)GXSetVtxDescv) + 0x1AC),
    (void*)(((char*)GXSetVtxDescv) + 0x1C0), (void*)(((char*)GXSetVtxDescv) + 0x1D4),
    (void*)(((char*)GXSetVtxDescv) + 0x1E8), (void*)(((char*)GXSetVtxDescv) + 0x1FC),
    (void*)(((char*)GXSetVtxDescv) + 0x210), (void*)(((char*)GXSetVtxDescv) + 0x220),
    (void*)(((char*)GXSetVtxDescv) + 0x220), (void*)(((char*)GXSetVtxDescv) + 0x220),
    (void*)(((char*)GXSetVtxDescv) + 0x220), (void*)(((char*)GXSetVtxDescv) + 0x128),
};

/* 8035B124-8035B3AC 355A64 0288+00 1/0 0/0 1/1 .text            GXSetVtxDescv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetVtxDescv(GXVtxDescList* list) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetVtxDescv.s"
}
#pragma pop

/* 8035B3AC-8035B468 355CEC 00BC+00 0/0 2/2 0/0 .text            __GXSetVCD */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXSetVCD(void) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/__GXSetVCD.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450A80-80450A84 000500 0004+00 1/1 0/0 0/0 .sdata           tbl1$241 */
SECTION_SDATA static u8 tbl1[4] = {
    0x00,
    0x04,
    0x01,
    0x02,
};

/* 80450A84-80450A88 000504 0004+00 1/1 0/0 0/0 .sdata           tbl2$242 */
SECTION_SDATA static u8 tbl2[4] = {
    0x00,
    0x08,
    0x01,
    0x02,
};

/* 80450A88-80450A90 000508 0004+04 1/1 0/0 0/0 .sdata           tbl3$243 */
SECTION_SDATA static u8 tbl3[4 + 4 /* padding */] = {
    0x00,
    0x0C,
    0x01,
    0x02,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8035B468-8035B58C 355DA8 0124+00 0/0 2/2 0/0 .text            __GXCalculateVLim */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXCalculateVLim(void) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/__GXCalculateVLim.s"
}
#pragma pop

void GXGetVtxDesc(int param_0, GXAttrType* param_1) {
    int local_38;

    switch (param_0) {
    case 0:
        local_38 = __GXData->field_0x14 & 1;
        break;
    case 1:
        local_38 = (__GXData->field_0x14 & 2) >> 1;
        break;
    case 2:
        local_38 = (__GXData->field_0x14 & 4) >> 2;
        break;
    case 3:
        local_38 = (__GXData->field_0x14 & 8) >> 3;
        break;
    case 4:
        local_38 = (__GXData->field_0x14 & 0x10) >> 4;
        break;
    case 5:
        local_38 = (__GXData->field_0x14 & 0x20) >> 5;
        break;
    case 6:
        local_38 = (__GXData->field_0x14 & 0x40) >> 6;
        break;
    case 7:
        local_38 = (__GXData->field_0x14 & 0x80) >> 7;
        break;
    case 8:
        local_38 = (__GXData->field_0x14 & 0x100) >> 8;
        break;
    case 9:
        local_38 = (__GXData->field_0x14 & 0x600) >> 9;
        break;
    case 10:
        if (__GXData->field_0x4d4 != 0) {
            local_38 = (__GXData->field_0x14 & 0x1800) >> 11;
        } else {
            local_38 = 0;
        }
        break;
    case 0x19:
        if (__GXData->field_0x4d5 != 0) {
            local_38 = (__GXData->field_0x14 & 0x1800) >> 11;
        } else {
            local_38 = 0;
        }
        break;
    case 11:
        local_38 = (__GXData->field_0x14 & 0x6000) >> 13;
        break;
    case 12:
        local_38 = (__GXData->field_0x14 & 0x18000) >> 15;
        break;
    case 13:
        local_38 = (__GXData->field_0x18 & 3);
        break;
    case 14:
        local_38 = (__GXData->field_0x18 & 0xC) >> 2;
        break;
    case 15:
        local_38 = (__GXData->field_0x18 & 0x30) >> 4;
        break;
    case 16:
        local_38 = (__GXData->field_0x18 & 0xC0) >> 6;
        break;
    case 17:
        local_38 = (__GXData->field_0x18 & 0x300) >> 8;
        break;
    case 18:
        local_38 = (__GXData->field_0x18 & 0xC00) >> 10;
        break;
    case 19:
        local_38 = (__GXData->field_0x18 & 0x3000) >> 12;
        break;
    case 20:
        local_38 = (__GXData->field_0x18 & 0xC000) >> 14;
        break;
    default:
        local_38 = 0;
        break;
    }

    *param_1 = local_38;
}

void GXGetVtxDescv(GXVtxDescList* attrPtr) {
    int i;

    for (i = 0; i <= 0x14; i++) {
        attrPtr[i].attr = (GXAttr)i;
        GXGetVtxDesc(i, &attrPtr[i].type);
    }

    attrPtr[i].attr = (GXAttr)0x19;
    GXGetVtxDesc(0x19, &attrPtr[i].type);

    i++;
    attrPtr[i].attr = (GXAttr)0xFF;
}

/* 8035B58C-8035B5C4 355ECC 0038+00 0/0 66/66 7/7 .text            GXClearVtxDesc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXClearVtxDesc(void) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXClearVtxDesc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2350-803D2394 -00001 0044+00 1/1 0/0 0/0 .data            @476 */
SECTION_DATA static void* lit_476[17] = {
    (void*)(((char*)GXSetVtxAttrFmt) + 0x3C),  (void*)(((char*)GXSetVtxAttrFmt) + 0x64),
    (void*)(((char*)GXSetVtxAttrFmt) + 0xB8),  (void*)(((char*)GXSetVtxAttrFmt) + 0xD4),
    (void*)(((char*)GXSetVtxAttrFmt) + 0xF0),  (void*)(((char*)GXSetVtxAttrFmt) + 0x118),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x140), (void*)(((char*)GXSetVtxAttrFmt) + 0x168),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x190), (void*)(((char*)GXSetVtxAttrFmt) + 0x1B8),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x1E0), (void*)(((char*)GXSetVtxAttrFmt) + 0x208),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x22C), (void*)(((char*)GXSetVtxAttrFmt) + 0x22C),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x22C), (void*)(((char*)GXSetVtxAttrFmt) + 0x22C),
    (void*)(((char*)GXSetVtxAttrFmt) + 0x64),
};

/* 8035B5C4-8035B820 355F04 025C+00 1/0 69/69 6/6 .text            GXSetVtxAttrFmt */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetVtxAttrFmt(GXVtxFmt fmt, GXAttr attr, GXCompCnt cnt, GXCompType type, u32) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetVtxAttrFmt.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2394-803D23D8 -00001 0044+00 1/1 0/0 0/0 .data            @503 */
SECTION_DATA static void* lit_503[17] = {
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x50),  (void*)(((char*)GXSetVtxAttrFmtv) + 0x78),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0xCC),  (void*)(((char*)GXSetVtxAttrFmtv) + 0xE8),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x104), (void*)(((char*)GXSetVtxAttrFmtv) + 0x12C),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x154), (void*)(((char*)GXSetVtxAttrFmtv) + 0x17C),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x1A4), (void*)(((char*)GXSetVtxAttrFmtv) + 0x1CC),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x1F4), (void*)(((char*)GXSetVtxAttrFmtv) + 0x21C),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x240), (void*)(((char*)GXSetVtxAttrFmtv) + 0x240),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x240), (void*)(((char*)GXSetVtxAttrFmtv) + 0x240),
    (void*)(((char*)GXSetVtxAttrFmtv) + 0x78),
};

/* 8035B820-8035BAA0 356160 0280+00 1/0 1/1 1/1 .text            GXSetVtxAttrFmtv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetVtxAttrFmtv(GXVtxFmt fmt, GXVtxAttrFmtList* list) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetVtxAttrFmtv.s"
}
#pragma pop

/* 8035BAA0-8035BB28 3563E0 0088+00 0/0 2/2 0/0 .text            __GXSetVAT */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXSetVAT(void) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/__GXSetVAT.s"
}
#pragma pop

static u8 GetFracForNrm(int param_0) {
    int var_r31;

    switch (param_0) {
    case 1:
        var_r31 = 6;
        break;
    case 3:
        var_r31 = 14;
        break;
    default:
    case 2:
        var_r31 = 0;
        break;
    }

    return var_r31;
}

void GXGetVtxAttrFmtv(GXVtxFmt param_0, GXVtxAttrFmtList* param_1) {
    s32 tmp;
    s32 tmp2;
    s32 tmp3;
    int i;

#ifdef DEBUG
    // not fully matching
    /* tmp = 1;
    if (data_8074d3c8 != 0) {
        OSPanic("GXAttr.c", 941, "\'GXGetVtxAttrFmtv\' is not allowed between GXBegin/GXEnd");
        tmp = 0;
    }

    tmp2 = 1;
    if (param_1 == NULL) {
        OSPanic("GXAttr.c", 942, "GXSetVtxAttrFmt: list pointer is NULL");
        tmp2 = 0;
    }

    tmp3 = 1;
    if (param_0 >= 8) {
        OSPanic("GXAttr.c", 943, "GXSetVtxAttrFmt: Format Index is out of range");
        tmp3 = 0;
    } */
#endif

    for (i = 9; i <= 0x14; i++) {
        param_1->mAttrib = i;
        GXGetVtxAttrFmt(param_0, i, &param_1->mCompCnt, &param_1->mCompType, &param_1->mCompShift);
        param_1++;
    }

    param_1->mAttrib = 0xFF;
}

void GXGetVtxAttrFmt(GXVtxFmt param_0, int param_1, GXCompCnt* param_2, GXCompType* param_3,
                     u8* param_4) {
    s32 tmp;
    s32 tmp2;
    GXCompCnt* tmp_1;
    GXCompCnt* tmp_2;
    u32* tmp_3;

#ifdef DEBUG
    // not fully matching
    /* tmp = 1;
    if (data_8074d3c8) {
        OSPanic("GXAttr.c", 844, "\'GXGetVtxAttrFmt\' is not allowed between GXBegin/GXEnd");
        tmp = 0;
    }

    tmp2 = 1;
    if (param_0 >= 8) {
        OSPanic("GXAttr.c", 845, "GXSetVtxAttrFmt: Format Index is out of range");
        tmp2 = 0;
    } */
#endif

    tmp_1 = &__GXData->field_0x1c[param_0];
    tmp_2 = &__GXData->field_0x3c[param_0];
    tmp_3 = &__GXData->field_0x5c[param_0];

    switch (param_1) {
    case 9:
        *param_2 = *tmp_1 & 1;
        *param_3 = (*tmp_1 & 0xE) >> 1;
        *param_4 = (*tmp_1 & 0x1F0) >> 4;
        break;
    case 10:
    case 0x19:
        *param_2 = (*tmp_1 & 0x200) >> 9;
        if (*param_2 == 1 && ((*tmp_1 & 0x80000000) >> 31) != 0) {
            *param_2 = 2;
        }

        *param_3 = (*tmp_1 & 0x1C00) >> 10;
        *param_4 = GetFracForNrm(*param_3);
        break;
    case 11:
        *param_2 = (*tmp_1 & 0x2000) >> 0xd;
        *param_3 = (*tmp_1 & 0x1C000) >> 0xe;
        *param_4 = 0;
        break;
    case 12:
        *param_2 = (*tmp_1 & 0x20000) >> 0x11;
        *param_3 = (*tmp_1 & 0x1C0000) >> 0x12;
        *param_4 = 0;
        break;
    case 13:
        *param_2 = (*tmp_1 & 0x200000) >> 0x15;
        *param_3 = (*tmp_1 & 0x1C00000) >> 0x16;
        *param_4 = ((*tmp_1 & 0x3e000000)) >> 25;
        break;
    case 14:
        *param_2 = *tmp_2 & 1;
        *param_3 = (*tmp_2 & 0xE) >> 1;
        *param_4 = (*tmp_2 & 0x1F0) >> 4;
        break;
    case 15:
        *param_2 = (*tmp_2 & 0x200) >> 9;
        *param_3 = (*tmp_2 & 0x1C00) >> 10;
        *param_4 = (*tmp_2 & 0x3E000) >> 13;
        break;
    case 16:
        *param_2 = (*tmp_2 & 0x40000) >> 0x12;
        *param_3 = (*tmp_2 & 0x380000) >> 0x13;
        *param_4 = (*tmp_2 & 0x7C00000) >> 0x16;
        break;
    case 17:
        *param_2 = (*tmp_2 & 0x8000000) >> 0x1B;
        *param_3 = (*tmp_2 & 0x70000000) >> 0x1C;
        *param_4 = (*tmp_3 & 0x1F);
        break;
    case 18:
        *param_2 = (*tmp_3 & 0x20) >> 5;
        *param_3 = (*tmp_3 & 0x1C0) >> 6;
        *param_4 = (*tmp_3 & 0x3E00) >> 9;
        break;
    case 19:
        *param_2 = (*tmp_3 & 0x4000) >> 0xe;
        *param_3 = (*tmp_3 & 0x38000) >> 0xf;
        *param_4 = (*tmp_3 & 0x7c0000) >> 0x12;
        break;
    case 20:
        *param_2 = (*tmp_3 & 0x800000) >> 0x17;
        *param_3 = (*tmp_3 & 0x7000000) >> 0x18;
        *param_4 = (*tmp_3 & 0xF8000000) >> 0x1b;
        break;
    default:
        *param_2 = 1;
        *param_3 = 0;
        *param_4 = 0;
    }
}

/* 8035BB28-8035BB6C 356468 0044+00 0/0 13/13 5/5 .text            GXSetArray */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetArray(GXAttr attr, void* base, u8) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetArray.s"
}
#pragma pop

/* 8035BB6C-8035BB7C 3564AC 0010+00 0/0 6/6 0/0 .text            GXInvalidateVtxCache */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXInvalidateVtxCache(void) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXInvalidateVtxCache.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D23D8-803D23F4 -00001 001C+00 1/1 0/0 0/0 .data            @740 */
SECTION_DATA static void* lit_740[7] = {
    (void*)(((char*)GXSetTexCoordGen2) + 0x1CC), (void*)(((char*)GXSetTexCoordGen2) + 0x1E0),
    (void*)(((char*)GXSetTexCoordGen2) + 0x1F4), (void*)(((char*)GXSetTexCoordGen2) + 0x208),
    (void*)(((char*)GXSetTexCoordGen2) + 0x21C), (void*)(((char*)GXSetTexCoordGen2) + 0x230),
    (void*)(((char*)GXSetTexCoordGen2) + 0x244),
};

/* 803D23F4-803D2448 -00001 0054+00 1/1 0/0 0/0 .data            @739 */
SECTION_DATA static void* lit_739[21] = {
    (void*)(((char*)GXSetTexCoordGen2) + 0x38), (void*)(((char*)GXSetTexCoordGen2) + 0x44),
    (void*)(((char*)GXSetTexCoordGen2) + 0x50), (void*)(((char*)GXSetTexCoordGen2) + 0x5C),
    (void*)(((char*)GXSetTexCoordGen2) + 0x78), (void*)(((char*)GXSetTexCoordGen2) + 0x80),
    (void*)(((char*)GXSetTexCoordGen2) + 0x88), (void*)(((char*)GXSetTexCoordGen2) + 0x90),
    (void*)(((char*)GXSetTexCoordGen2) + 0x98), (void*)(((char*)GXSetTexCoordGen2) + 0xA0),
    (void*)(((char*)GXSetTexCoordGen2) + 0xA8), (void*)(((char*)GXSetTexCoordGen2) + 0xB0),
    (void*)(((char*)GXSetTexCoordGen2) + 0xB4), (void*)(((char*)GXSetTexCoordGen2) + 0xB4),
    (void*)(((char*)GXSetTexCoordGen2) + 0xB4), (void*)(((char*)GXSetTexCoordGen2) + 0xB4),
    (void*)(((char*)GXSetTexCoordGen2) + 0xB4), (void*)(((char*)GXSetTexCoordGen2) + 0xB4),
    (void*)(((char*)GXSetTexCoordGen2) + 0xB4), (void*)(((char*)GXSetTexCoordGen2) + 0x68),
    (void*)(((char*)GXSetTexCoordGen2) + 0x70),
};

/* 8035BB7C-8035BDFC 3564BC 0280+00 2/0 46/46 5/5 .text            GXSetTexCoordGen2 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetTexCoordGen2(GXTexCoordID dst, GXTexGenType type, GXTexGenSrc src, u32 mtx,
                           GXBool renormalize, u32 pt_mtx) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetTexCoordGen2.s"
}
#pragma pop

/* 8035BDFC-8035BE38 35673C 003C+00 0/0 59/59 6/6 .text            GXSetNumTexGens */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetNumTexGens(u8 numTexGens) {
    nofralloc
#include "asm/dolphin/gx/GXAttr/GXSetNumTexGens.s"
}
#pragma pop
