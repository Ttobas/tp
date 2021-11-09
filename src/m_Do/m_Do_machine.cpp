//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_machine
//

#include "m_Do/m_Do_machine.h"
#include "JSystem/JFramework/JFWSystem.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "JSystem/JUtility/JUTException.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMemCd_Ctrl_c {
    /* 80016730 */ void ThdInit();
};

struct mDoMch_render_c {
    static _GXRenderModeObj* mRenderModeObj;
};

struct mDoDvdThd {
    /* 80015858 */ void create(s32);
};

struct cMl {
    /* 80263220 */ void init(JKRHeap*);
};

struct JUTAssertion {
    /* 802E4C34 */ static void setVisible(bool);
};

struct JKRDvdRipper {
    static u32 sSZSBufferSize;
};

struct JKRDvdAramRipper {
    static u32 sSZSBufferSize;
};

struct JKRAramStream {
    /* 802D4034 */ void setTransBuffer(u8*, u32, JKRHeap*);
};

struct JKRAram {
    static u32 sSZSBufferSize[1 + 1 /* padding */];
};

//
// Forward References:
//

extern "C" static void myGetHeapTypeByString__FP7JKRHeap();
extern "C" static void myMemoryErrorRoutine__FPvUli();
extern "C" void myHeapCheckRecursive__FP7JKRHeap();
extern "C" void mDoMch_HeapCheckAll__Fv();
extern "C" static s8 developKeyCheck__FUlUl(u32, u32);
extern "C" bool mDoMch_IsProgressiveMode__Fv();
extern "C" bool exceptionReadPad__FPUlPUl(u32*, u32*);
extern "C" void exceptionRestart__Fv();
extern "C" void myExceptionCallback__FUsP9OSContextUlUl();
extern "C" static void fault_callback_scroll__FUsP9OSContextUlUl();
extern "C" static void my_PrintHeap__FPCcUl();
extern "C" void my_SysPrintHeap__FPCcPvUl();
extern "C" void mDoMch_Create__Fv();
extern "C" extern char const* const m_Do_m_Do_machine__stringBase0;
extern "C" void* mRenderModeObj__15mDoMch_render_c[1 + 1 /* padding */];

//
// External References:
//

extern "C" void OSReportDisable();
extern "C" void OSReportEnable();
extern "C" void mDoExt_createAssertHeap__FP7JKRHeap();
extern "C" void mDoExt_createDbPrintHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getDbPrintHeap__Fv();
extern "C" void mDoExt_createGameHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getGameHeap__Fv();
extern "C" void mDoExt_createZeldaHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getZeldaHeap__Fv();
extern "C" void mDoExt_createCommandHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getCommandHeap__Fv();
extern "C" void mDoExt_createArchiveHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getArchiveHeap__Fv();
extern "C" void mDoExt_createJ2dHeap__FUlP7JKRHeap();
extern "C" void mDoExt_getJ2dHeap__Fv();
extern "C" void mDoRst_reset__FiUli();
extern "C" void create__9mDoDvdThdFl();
extern "C" void mDoDvdErr_ThdInit__Fv();
extern "C" void ThdInit__15mDoMemCd_Ctrl_cFv();
extern "C" void exception_addition__FP10JUTConsole();
extern "C" void init__3cMlFP7JKRHeap();
extern "C" void cAPICPad_recalibrate__Fv();
extern "C" void cM_initRnd__Fiii();
extern "C" void firstInit__9JFWSystemFv();
extern "C" void init__9JFWSystemFv();
extern "C" void becomeCurrentHeap__7JKRHeapFv();
extern "C" void getFreeSize__7JKRHeapFv();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void setErrorFlag__7JKRHeapFb();
extern "C" void setErrorHandler__7JKRHeapFPFPvUli_v();
extern "C" void* __nw__FUl();
extern "C" void __ct__9JKRThreadFP8OSThreadi();
extern "C" void createManager__15JKRThreadSwitchFP7JKRHeap();
extern "C" void setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap();
extern "C" void start__10JUTDbPrintFP7JUTFontP7JKRHeap();
extern "C" void __ct__10JUTGamePadFQ210JUTGamePad8EPadPort();
extern "C" void __dt__10JUTGamePadFv();
extern "C" void isEnablePad__12JUTExceptionCFv();
extern "C" void readPad__12JUTExceptionFPUlPUl();
extern "C" void waitTime__12JUTExceptionFl();
extern "C" void setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v();
extern "C" void setPostUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v();
extern "C" void appendMapFile__12JUTExceptionFPCc();
extern "C" void setVisible__12JUTAssertionFb();
extern "C" void destroyManager__8JUTVideoFv();
extern "C" void print_f__10JUTConsoleFPCce();
extern "C" void print__10JUTConsoleFPCc();
extern "C" void scroll__10JUTConsoleFi();
extern "C" void getUsedLine__10JUTConsoleCFv();
extern "C" void getLineOffset__10JUTConsoleCFv();
extern "C" void drawDirect__17JUTConsoleManagerCFb();
extern "C" void setDirectConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void PPCHalt();
extern "C" u32 OSGetProgressiveMode();
extern "C" void OSSetProgressiveMode();
extern "C" void VIGetDTVStatus();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern u8 g_mDoMemCd_control[8192];
extern "C" extern s8 data_80450580;
extern "C" u32 memMargin__7mDoMain;
extern "C" u32 maxStdHeaps__Q29JFWSystem11CSetUpParam;
extern "C" u32 sysHeapSize__Q29JFWSystem11CSetUpParam;
extern "C" u32 fifoBufSize__Q29JFWSystem11CSetUpParam;
extern "C" u32 aramAudioBufSize__Q29JFWSystem11CSetUpParam;
extern "C" u32 aramGraphBufSize__Q29JFWSystem11CSetUpParam;
extern "C" void* renderMode__Q29JFWSystem11CSetUpParam;
extern "C" extern u8 data_804508B0[8];
extern "C" u32 sSZSBufferSize__7JKRAram[1 + 1 /* padding */];
extern "C" u32 sSZSBufferSize__12JKRDvdRipper;
extern "C" u32 sSZSBufferSize__16JKRDvdAramRipper;
extern "C" u8 sHungUpTime__7mDoMain[4];
extern "C" extern u8 data_80450B14[4];
extern "C" extern u8 gameHeap[4];
extern "C" extern u8 zeldaHeap[4];
extern "C" extern u8 commandHeap[4];
extern "C" extern u8 archiveHeap[4];
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 systemHeap__9JFWSystem[4];
extern "C" u8 systemConsole__9JFWSystem[4];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sRootHeap__7JKRHeap[4];
extern "C" u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];
extern "C" extern bool struct_80451500;
extern "C" u8 sErrorManager__12JUTException[4];
extern "C" u8 sConsole__12JUTException[4];
extern "C" u8 sManager__17JUTConsoleManager[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80373DE8 = "SystemHeap";
SECTION_DEAD static char const* const stringBase_80373DF3 = "ZeldaHeap";
SECTION_DEAD static char const* const stringBase_80373DFD = "GameHeap";
SECTION_DEAD static char const* const stringBase_80373E06 = "ArchiveHeap";
SECTION_DEAD static char const* const stringBase_80373E12 = "CommandHeap";
SECTION_DEAD static char const* const stringBase_80373E1E = "DbPrintHeap";
SECTION_DEAD static char const* const stringBase_80373E2A = "J2dHeap";
SECTION_DEAD static char const* const stringBase_80373E32 = "ASTH";
SECTION_DEAD static char const* const stringBase_80373E37 = "EXPH";
SECTION_DEAD static char const* const stringBase_80373E3C = "SLID";
SECTION_DEAD static char const* const stringBase_80373E41 = "STDH";
SECTION_DEAD static char const* const stringBase_80373E46 = "UNIT";
SECTION_DEAD static char const* const stringBase_80373E4B = "(Null)";
#pragma pop

/* 80450BF0-80450BF4 0000F0 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80450BF0[4];

/* 80450BF4-80450BF8 0000F4 0004+00 1/1 0/0 0/0 .sbss            solidHeapErrors */
static u8 solidHeapErrors[4];

/* 80450BF8-80450BFC 0000F8 0004+00 1/1 0/0 0/0 .sbss            gameHeapErrors */
static u8 gameHeapErrors[4];

/* 80450BFC-80450C00 0000FC 0004+00 1/1 0/0 0/0 .sbss            zeldaHeapErrors */
static u8 zeldaHeapErrors[4];

/* 80450C00-80450C04 000100 0004+00 1/1 0/0 0/0 .sbss            commandHeapErrors */
static u8 commandHeapErrors[4];

/* 80450C04-80450C08 000104 0004+00 1/1 0/0 0/0 .sbss            archiveHeapErrors */
static u8 archiveHeapErrors[4];

/* 80450C08-80450C0C 000108 0004+00 1/1 0/0 0/0 .sbss            unknownHeapErrors */
static u8 unknownHeapErrors[4];

/* 80450C0C-80450C10 00010C 0004+00 1/1 0/0 0/0 .sbss            heapErrors */
static u8 heapErrors[4];

/* 80450C10-80450C18 -00001 0008+00 2/2 0/0 0/0 .sbss            None */
/* 80450C10 0005+00 data_80450C10 tmpString$3651 */
/* 80450C15 0001+00 data_80450C15 None */
/* 80450C16 0001+00 data_80450C16 None */
/* 80450C17 0001+00 data_80450C17 None */
static u8 struct_80450C10[8];

/* 8000B1EC-8000B3EC 005B2C 0200+00 2/2 0/0 0/0 .text            myGetHeapTypeByString__FP7JKRHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm char* myGetHeapTypeByString(JKRHeap* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_machine/myGetHeapTypeByString__FP7JKRHeap.s"
}
#pragma pop

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80373E52 =
    "エラー: メモリを確保できません %d(0x%x)バイト、 %d バイトアライメント from "
    "%08x\n";
SECTION_DEAD static char const* const stringBase_80373EA3 =
    "FreeSize=%08x TotalFreeSize=%08x HeapType=%08x(%"
    "c%c%c%c) HeapSize=%08x %s\n";
#pragma pop

/* 8000B3EC-8000B5C8 005D2C 01DC+00 1/1 0/0 0/0 .text            myMemoryErrorRoutine__FPvUli */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void myMemoryErrorRoutine(void* param_0, u32 param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_machine/myMemoryErrorRoutine__FPvUli.s"
}
#pragma pop

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80373EEE = "error in %08x(%s)\n";
#pragma pop

/* 8000B5C8-8000B668 005F08 00A0+00 1/1 0/0 0/0 .text            myHeapCheckRecursive__FP7JKRHeap */
#ifdef NONMATCHING
void myHeapCheckRecursive(JKRHeap* param_0) {
    if (!param_0->check()) {
        char* type = myGetHeapTypeByString(param_0);
        OSReport_Error("error in %08x(%s)\n", param_0, type);
    }

    JSUTree<JKRHeap> heapTree = param_0->getHeapTree();
    for (heapTree.getFirstChild(); heapTree.getNextChild() != NULL; heapTree--) {
        /* if (heapTree->getNextChild() == NULL) {
            heapTree--;
        } */
        JKRHeap* heap = (JKRHeap*)heapTree.getObject();
        myHeapCheckRecursive(heap);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void myHeapCheckRecursive(JKRHeap* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_machine/myHeapCheckRecursive__FP7JKRHeap.s"
}
#pragma pop
#endif

/* 8000B668-8000B68C 005FA8 0024+00 0/0 2/2 0/0 .text            mDoMch_HeapCheckAll__Fv */
void mDoMch_HeapCheckAll() {
    myHeapCheckRecursive(JKRHeap::sRootHeap);
}

/* 8000B68C-8000B73C 005FCC 00B0+00 1/1 0/0 0/0 .text            developKeyCheck__FUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void developKeyCheck(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_machine/developKeyCheck__FUlUl.s"
}
#pragma pop

/* 8000B73C-8000B768 00607C 002C+00 1/1 0/0 0/0 .text            mDoMch_IsProgressiveMode__Fv */
u8 mDoMch_IsProgressiveMode() {
    return OSGetProgressiveMode() == true;
}

/* 8000B768-8000B798 0060A8 0030+00 2/2 0/0 0/0 .text            exceptionReadPad__FPUlPUl */
bool exceptionReadPad(u32* param_0, u32* param_1) {
    return JUTException::getManager()->readPad(param_0, param_1);
}

/* 8000B798-8000B7C8 0060D8 0030+00 1/1 0/0 0/0 .text            exceptionRestart__Fv */
void exceptionRestart() {
    mDoRst_reset(0, 0, 0);
    OSResetSystem(0, 0, 0);
    do {
    } while (true);
}

/* 8000B7C8-8000B95C 006108 0194+00 1/1 0/0 0/0 .text myExceptionCallback__FUsP9OSContextUlUl */
void myExceptionCallback(u16 param_0, OSContext* param_1, u32 param_2, u32 param_3) {
    u32 tmp1;
    u32 tmp2;

    mDoMain::sHungUpTime = OSGetTime();
    OSReportEnable();
    cAPICPad_recalibrate__Fv();
    // "Vibration stopping & resetting to default\n"
    OSReport("振動停止＆原点復帰\n");

    JUTException* manager = JUTException::getManager();

    if (manager == NULL) {
        // "Exception Manager doesn't exist\n"
        OSReport("例外マネージャがありません\n");
        PPCHalt();
    } else {
        manager->setTraceSuppress(0x80);
        if (data_80450580 == 0) {
            JUTGamePad pad(JUTGamePad::Port_1);
            manager->setGamePad(&pad);

            if (manager != NULL) {
                OSEnableInterrupts();
                // "Accepting Key input\n"
                OSReport("キー入力を受け付けています\n");
                while (data_80450580 == 0) {
                    exceptionReadPad(&tmp2, &tmp1);
                    developKeyCheck(tmp2, tmp1);
                    JUTException::waitTime(30);
                    if (struct_80451501) {
                        exceptionRestart();
                    }
                }
                // "JUTAssertion is visible\n"
                OSReport("JUTAssertionを可視化しました\n");
                JUTAssertion::setVisible(true);
                JUTDbPrint::getManager()->setVisible(true);
                JFWSystem::getSystemConsole()->setOutput(3);
            } else {
                PPCHalt();
            }
        } else {
            // "Wait for 3 seconds\n"
            OSReport("3秒間停止\n");
            JUTException::waitTime(3000);
        }
    }
    DVDChangeDir("/map/Final/Release");
    JUTVideo::destroyManager();
    GXSetDrawDoneCallback(0);
    VISetBlack(0);
    VIFlush();
}

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80373F89 = "(SRR0-3):%08X %08X %08X %08X\n";
SECTION_DEAD static char const* const stringBase_80373FA7 =
    "PUSH START BUTTON TO ADDITIONAL INFOMATION\n";
SECTION_DEAD static char const* const stringBase_80373FD3 =
    "--------------------------------------\n";
#pragma pop

/* 80451B00-80451B04 000100 0004+00 1/1 0/0 0/0 .sdata2          @3940 */
SECTION_SDATA2 static f32 lit_3940 = 8.0f;

/* 80451B04-80451B08 000104 0004+00 1/1 0/0 0/0 .sdata2          @3941 */
SECTION_SDATA2 static f32 lit_3941 = 6.0f;

/* 8000B95C-8000BCF4 00629C 0398+00 1/1 0/0 0/0 .text fault_callback_scroll__FUsP9OSContextUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fault_callback_scroll(u16 param_0, OSContext* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_machine/fault_callback_scroll__FUsP9OSContextUlUl.s"
}
#pragma pop

/* 8000BCF4-8000BCF8 006634 0004+00 1/1 0/0 0/0 .text            my_PrintHeap__FPCcUl */
static void my_PrintHeap(char const* param_0, u32 param_1) {
    /* empty function */
}

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80373FFB = ""
                                                            "\x1B"
                                                            "[32m%-24s = size=%d KB\n"
                                                            "\x1B"
                                                            "[m";
SECTION_DEAD static char const* const stringBase_80374017 = ""
                                                            "\x1B"
                                                            "[32m%-24s = %08x-%08x size=%d KB\n"
                                                            "\x1B"
                                                            "[m";
#pragma pop

/* 8000BCF8-8000BD44 006638 004C+00 1/1 0/0 0/0 .text            my_SysPrintHeap__FPCcPvUl */
void my_SysPrintHeap(char const* message, void* start, u32 size) {
    // "32m%-24s = %08x-%08x size=%d KB\n"
    OSReport_System("\x1b[32m%-24s = %08x-%08x size=%d KB\n\x1b[m", message, start,
                    (u32)start + size, size >> 10);
}

/* ############################################################################################## */
/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8037403D = "アリーナ";
SECTION_DEAD static char const* const stringBase_80374046 = "システムヒープ";
SECTION_DEAD static char const* const stringBase_80374055 = "コマンドヒープ";
SECTION_DEAD static char const* const stringBase_80374064 = "アーカイブヒープ";
SECTION_DEAD static char const* const stringBase_80374075 = "Ｊ２Ｄ用ヒープ";
SECTION_DEAD static char const* const stringBase_80374084 = "ゲームヒープ";
SECTION_DEAD static char const* const stringBase_80374091 = "ゼルダヒープ";
SECTION_DEAD static char const* const stringBase_8037409E = "/map/Final/Release/frameworkF.map";
#pragma pop

/* 803A2F60-803A2F9C 000080 003C+00 1/0 0/0 0/0 .data            g_ntscZeldaIntDf */
SECTION_DATA static _GXRenderModeObj g_ntscZeldaIntDf = {0,
                                                         608,
                                                         448,
                                                         448,
                                                         27,
                                                         16,
                                                         666,
                                                         448,
                                                         1,
                                                         0,
                                                         0,
                                                         {{6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6},
                                                          {6, 6}},
                                                         {8, 8, 10, 12, 10, 8, 8}};

/* 803A2F9C-803A2FD8 0000BC 003C+00 1/1 1/1 0/0 .data            g_ntscZeldaProg */
SECTION_DATA extern _GXRenderModeObj g_ntscZeldaProg = {2,
                                                        608,
                                                        448,
                                                        448,
                                                        27,
                                                        16,
                                                        666,
                                                        448,
                                                        0,
                                                        0,
                                                        0,
                                                        {{6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6},
                                                         {6, 6}},
                                                        {0, 0, 21, 22, 21, 0, 0}};

/* 804505A0-804505A8 -00001 0004+04 1/1 3/3 0/0 .sdata           mRenderModeObj__15mDoMch_render_c
 */
SECTION_SDATA _GXRenderModeObj* mDoMch_render_c::mRenderModeObj = &g_ntscZeldaIntDf;

/* 8000BD44-8000C0CC 006684 0388+00 0/0 2/1 0/0 .text            mDoMch_Create__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMch_Create() {
    nofralloc
#include "asm/m_Do/m_Do_machine/mDoMch_Create__Fv.s"
}
#pragma pop

/* 80373DE8-80373DE8 000448 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
