//
// Generated By: dol2asm
// Translation Unit: J2DMaterialFactory
//

#include "JSystem/J2DGraph/J2DMaterialFactory.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTResReference {
    /* 802DE120 */ void getResource(void const*, u32, JKRArchive*);
};

struct J2DScreen {
    static u8 mDataManage[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock();
extern "C" void countStages__18J2DMaterialFactoryCFi();
extern "C" void
create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive();
extern "C" void newMatColor__18J2DMaterialFactoryCFii();
extern "C" void newColorChanNum__18J2DMaterialFactoryCFi();
extern "C" void newColorChan__18J2DMaterialFactoryCFii();
extern "C" void newTexGenNum__18J2DMaterialFactoryCFi();
extern "C" void newTexCoord__18J2DMaterialFactoryCFii();
extern "C" void newTexMtx__18J2DMaterialFactoryCFii();
extern "C" void newCullMode__18J2DMaterialFactoryCFi();
extern "C" void newTexNo__18J2DMaterialFactoryCFii();
extern "C" void newFontNo__18J2DMaterialFactoryCFi();
extern "C" void newTevOrder__18J2DMaterialFactoryCFii();
extern "C" void newTevColor__18J2DMaterialFactoryCFii();
extern "C" void newTevKColor__18J2DMaterialFactoryCFii();
extern "C" void newTevStageNum__18J2DMaterialFactoryCFi();
extern "C" void newTevStage__18J2DMaterialFactoryCFii();
extern "C" void newTevSwapModeTable__18J2DMaterialFactoryCFii();
extern "C" void newIndTexStageNum__18J2DMaterialFactoryCFi();
extern "C" void newIndTexOrder__18J2DMaterialFactoryCFii();
extern "C" void newIndTexMtx__18J2DMaterialFactoryCFii();
extern "C" void newIndTevStage__18J2DMaterialFactoryCFii();
extern "C" void newIndTexCoordScale__18J2DMaterialFactoryCFii();
extern "C" void newAlphaComp__18J2DMaterialFactoryCFi();
extern "C" void newBlend__18J2DMaterialFactoryCFi();
extern "C" void newDither__18J2DMaterialFactoryCFi();
extern "C" void __ct__11J2DTevStageFRC15J2DTevStageInfo();
extern "C" void func_802F4170(void* _this, void const*, void const*);
extern "C" void func_802F4188(void* _this, void const*, void const*);
extern "C" void func_802F41A0(void* _this, void const*, void const*);
extern "C" void func_802F41B8(void* _this, void const*, void const*);
extern "C" void func_802F41D0(void* _this, void const*, void const*);
extern "C" void func_802F41E8(void* _this, void const*, void const*);
extern "C" void func_802F4200(void* _this, void const*, void const*);
extern "C" void func_802F4218(void* _this, void const*, void const*);
extern "C" void func_802F4230(void* _this, void const*, void const*);
extern "C" void func_802F4248(void* _this, void const*, void const*);
extern "C" void func_802F4260(void* _this, void const*, void const*);
extern "C" void func_802F4278(void* _this, void const*, void const*);
extern "C" void func_802F4290(void* _this, void const*, void const*);
extern "C" void func_802F42A8(void* _this, void const*, void const*);
extern "C" void func_802F42C0(void* _this, void const*, void const*);
extern "C" void func_802F42D8(void* _this, void const*, void const*);

//
// External References:
//

extern "C" void* __nw__FUl();
extern "C" void getResource__15JUTResReferenceFPCvUlP10JKRArchive();
extern "C" void calc__9J2DTexMtxFv();
extern "C" void createTevBlock__11J2DMaterialFib();
extern "C" void createIndBlock__11J2DMaterialFib();
extern "C" void __ct__11J2DTevStageFv();
extern "C" void setTevStageInfo__11J2DTevStageFRC15J2DTevStageInfo();
extern "C" void get__13J2DDataManageFPCc();
extern "C" void getResReference__15J2DResReferenceCFUs();
extern "C" void getName__15J2DResReferenceCFUs();
extern "C" void _savegpr_19();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_29();
extern "C" extern u8 const j2dDefaultTexCoordInfo[32];
extern "C" extern u8 const j2dDefaultIndTexMtxInfo[28];
extern "C" extern u8 const j2dDefaultIndTevStageInfo[12];
extern "C" u8 mDataManage__9J2DScreen[4 + 4 /* padding */];
extern "C" extern u32 j2dDefaultTevOrderInfoNull;
extern "C" extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */];
extern "C" extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */];
extern "C" extern u8 j2dDefaultTevSwapMode[4];
extern "C" extern u32 j2dDefaultTevSwapModeTable;
extern "C" extern u32 j2dDefaultBlendInfo;
extern "C" extern u32 j2dDefaultColorChanInfo;
extern "C" extern u16 j2dDefaultAlphaCmp;

//
// Declarations:
//

/* 802F2AD0-802F2C94 2ED410 01C4+00 0/0 1/1 0/0 .text
 * __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DMaterialFactory::J2DMaterialFactory(J2DMaterialBlock const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/__ct__18J2DMaterialFactoryFRC16J2DMaterialBlock.s"
}
#pragma pop

/* 802F2C94-802F2D1C 2ED5D4 0088+00 1/1 0/0 0/0 .text countStages__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::countStages(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/countStages__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F2D1C-802F362C 2ED65C 0910+00 0/0 1/1 0/0 .text
 * create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::create(J2DMaterial* param_0, int param_1, u32 param_2,
                                    J2DResReference* param_3, J2DResReference* param_4,
                                    JKRArchive* param_5) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F2D1C.s"
}
#pragma pop

/* ############################################################################################## */
/* 804561C0-804561C4 0047C0 0004+00 1/1 0/0 0/0 .sdata2          @1887 */
SECTION_SDATA2 static u32 lit_1887 = 0xFFFFFFFF;

/* 802F362C-802F36CC 2EDF6C 00A0+00 1/1 0/0 0/0 .text newMatColor__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newMatColor(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newMatColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F36CC-802F3704 2EE00C 0038+00 1/1 0/0 0/0 .text newColorChanNum__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newColorChanNum(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newColorChanNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F3704-802F3758 2EE044 0054+00 1/1 0/0 0/0 .text newColorChan__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newColorChan(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newColorChan__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3758-802F3790 2EE098 0038+00 1/1 0/0 0/0 .text newTexGenNum__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexGenNum(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexGenNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F3790-802F3804 2EE0D0 0074+00 1/1 0/0 0/0 .text newTexCoord__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexCoord(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexCoord__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3804-802F38E0 2EE144 00DC+00 1/1 0/0 0/0 .text            newTexMtx__18J2DMaterialFactoryCFii
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexMtx(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexMtx__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F38E0-802F3920 2EE220 0040+00 1/1 0/0 0/0 .text newCullMode__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newCullMode(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newCullMode__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F3920-802F3968 2EE260 0048+00 1/1 0/0 0/0 .text            newTexNo__18J2DMaterialFactoryCFii
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexNo(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexNo__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3968-802F39A8 2EE2A8 0040+00 1/1 0/0 0/0 .text            newFontNo__18J2DMaterialFactoryCFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newFontNo(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newFontNo__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F39A8-802F3A1C 2EE2E8 0074+00 1/1 0/0 0/0 .text newTevOrder__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevOrder(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevOrder__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456BB0-80456BB4 000050 0004+00 1/1 0/0 0/0 .sbss2           @2018 */
SECTION_SBSS2 static u8 lit_2018[4];

/* 80456BB4-80456BB8 000054 0004+00 1/1 0/0 0/0 .sbss2           None */
SECTION_SBSS2 static u8 data_80456BB4[4];

/* 802F3A1C-802F3AB4 2EE35C 0098+00 1/1 0/0 0/0 .text newTevColor__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevColor(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 804561C4-804561C8 0047C4 0004+00 1/1 0/0 0/0 .sdata2          @2039 */
SECTION_SDATA2 static u32 lit_2039 = 0xFFFFFFFF;

/* 802F3AB4-802F3B54 2EE3F4 00A0+00 1/1 0/0 0/0 .text newTevKColor__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevKColor(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevKColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3B54-802F3B8C 2EE494 0038+00 1/1 0/0 0/0 .text newTevStageNum__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevStageNum(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevStageNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F3B8C-802F3BEC 2EE4CC 0060+00 1/1 0/0 0/0 .text newTevStage__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevStage(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevStage__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3BEC-802F3C88 2EE52C 009C+00 1/1 0/0 0/0 .text
 * newTevSwapModeTable__18J2DMaterialFactoryCFii                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevSwapModeTable(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevSwapModeTable__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3C88-802F3CB8 2EE5C8 0030+00 1/1 0/0 0/0 .text newIndTexStageNum__18J2DMaterialFactoryCFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexStageNum(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexStageNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F3CB8-802F3D20 2EE5F8 0068+00 1/1 0/0 0/0 .text newIndTexOrder__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexOrder(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexOrder__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3D20-802F3E24 2EE660 0104+00 1/1 0/0 0/0 .text newIndTexMtx__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexMtx(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexMtx__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3E24-802F3F78 2EE764 0154+00 1/1 0/0 0/0 .text newIndTevStage__18J2DMaterialFactoryCFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTevStage(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTevStage__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3F78-802F3FE0 2EE8B8 0068+00 1/1 0/0 0/0 .text
 * newIndTexCoordScale__18J2DMaterialFactoryCFii                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexCoordScale(int param_0, int param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexCoordScale__18J2DMaterialFactoryCFii.s"
}
#pragma pop

/* 802F3FE0-802F405C 2EE920 007C+00 1/1 0/0 0/0 .text newAlphaComp__18J2DMaterialFactoryCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newAlphaComp(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newAlphaComp__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F405C-802F40D8 2EE99C 007C+00 1/1 0/0 0/0 .text            newBlend__18J2DMaterialFactoryCFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newBlend(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newBlend__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F40D8-802F4110 2EEA18 0038+00 1/1 0/0 0/0 .text            newDither__18J2DMaterialFactoryCFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newDither(int param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newDither__18J2DMaterialFactoryCFi.s"
}
#pragma pop

/* 802F4110-802F4170 2EEA50 0060+00 1/1 0/0 0/0 .text __ct__11J2DTevStageFRC15J2DTevStageInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DTevStage::J2DTevStage(J2DTevStageInfo const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/__ct__11J2DTevStageFRC15J2DTevStageInfo.s"
}
#pragma pop

/* 802F4170-802F4188 2EEAB0 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<12J2DBlendInfo>__FPCvPCv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4170(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4170.s"
}
#pragma pop

/* 802F4188-802F41A0 2EEAC8 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<16J2DAlphaCompInfo>__FPCvPCv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4188(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4188.s"
}
#pragma pop

/* 802F41A0-802F41B8 2EEAE0 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<23J2DTevSwapModeTableInfo>__FPCvPCv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F41A0(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41A0.s"
}
#pragma pop

/* 802F41B8-802F41D0 2EEAF8 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<18J2DTevSwapModeInfo>__FPCvPCv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F41B8(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41B8.s"
}
#pragma pop

/* 802F41D0-802F41E8 2EEB10 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<15J2DTevStageInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F41D0(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41D0.s"
}
#pragma pop

/* 802F41E8-802F4200 2EEB28 0018+00 1/1 2/2 0/0 .text
 * JSUConvertOffsetToPtr<11_GXColorS10>__FPCvPCv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F41E8(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41E8.s"
}
#pragma pop

/* 802F4200-802F4218 2EEB40 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<15J2DTevOrderInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4200(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4200.s"
}
#pragma pop

/* 802F4218-802F4230 2EEB58 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<13J2DTexMtxInfo>__FPCvPCv              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4218(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4218.s"
}
#pragma pop

/* 802F4230-802F4248 2EEB70 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<15J2DTexCoordInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4230(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4230.s"
}
#pragma pop

/* 802F4248-802F4260 2EEB88 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<16J2DColorChanInfo>__FPCvPCv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4248(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4248.s"
}
#pragma pop

/* 802F4260-802F4278 2EEBA0 0018+00 1/1 13/13 0/0 .text JSUConvertOffsetToPtr<Uc>__FPCvPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4260(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4260.s"
}
#pragma pop

/* 802F4278-802F4290 2EEBB8 0018+00 1/1 2/2 0/0 .text JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4278(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4278.s"
}
#pragma pop

/* 802F4290-802F42A8 2EEBD0 0018+00 1/1 2/2 0/0 .text
 * JSUConvertOffsetToPtr<11_GXCullMode>__FPCvPCv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F4290(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4290.s"
}
#pragma pop

/* 802F42A8-802F42C0 2EEBE8 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<14J2DIndInitData>__FPCvPCv             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F42A8(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42A8.s"
}
#pragma pop

/* 802F42C0-802F42D8 2EEC00 0018+00 1/1 19/19 0/0 .text JSUConvertOffsetToPtr<Us>__FPCvPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F42C0(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42C0.s"
}
#pragma pop

/* 802F42D8-802F42F0 2EEC18 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<19J2DMaterialInitData>__FPCvPCv        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802F42D8(void* _this, void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42D8.s"
}
#pragma pop
