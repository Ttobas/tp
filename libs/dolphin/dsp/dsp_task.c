//
// Generated By: dol2asm
// Translation Unit: dsp_task
//

#include "dolphin/dsp/dsp_task.h"
#include "dol2asm.h"
#include "dolphin/dsp/dsp_debug.h"

/* ############################################################################################## */
/* 80451914-80451918 000E14 0004+00 2/2 2/2 0/0 .sbss            __DSP_curr_task */
DSPTaskInfo* __DSP_curr_task;

/* 80451910-80451914 000E10 0004+00 2/2 2/2 0/0 .sbss            __DSP_first_task */
DSPTaskInfo* __DSP_first_task;

/* 8045190C-80451910 000E0C 0004+00 2/2 1/1 0/0 .sbss            __DSP_last_task */
DSPTaskInfo* __DSP_last_task;

/* 80451908-8045190C 000E08 0004+00 0/0 1/1 0/0 .sbss            __DSP_tmp_task */
DSPTaskInfo* __DSP_tmp_task;

//
// Forward References:
//

void __DSP_exec_task();
void __DSP_boot_task();
void __DSP_insert_task();
void __DSP_remove_task();

//
// Declarations:
//

/* 803525D0-80352770 34CF10 01A0+00 0/0 1/1 0/0 .text            __DSP_exec_task */
// needs compiler epilogue patch
#ifdef NONMATCHING
void __DSP_exec_task(DSPTaskInfo* curr, DSPTaskInfo* next) {
    if (curr) {
        DSPSendMailToDSP((u32)(curr->dram_mmem_addr));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(curr->dram_length));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(curr->dram_addr));
        while (DSPCheckMailToDSP())
            ;
    } else {
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
    }

    DSPSendMailToDSP((u32)(next->iram_mmem_addr));
    while (DSPCheckMailToDSP())
        ;
    DSPSendMailToDSP((u32)(next->iram_length));
    while (DSPCheckMailToDSP())
        ;
    DSPSendMailToDSP((u32)(next->iram_addr));
    while (DSPCheckMailToDSP())
        ;

    if (DSP_TASK_STATE_INIT == next->state) {
        DSPSendMailToDSP((u32)(next->dsp_init_vector));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(0));
        while (DSPCheckMailToDSP())
            ;
    } else {
        DSPSendMailToDSP((u32)(next->dsp_resume_vector));
        while (DSPCheckMailToDSP())
            ;
        DSPSendMailToDSP((u32)(next->dram_mmem_addr));
        while (DSPCheckMailToDSP())
            ;

        DSPSendMailToDSP((u32)(next->dram_length));
        while (DSPCheckMailToDSP())
            ;

        DSPSendMailToDSP((u32)(next->dram_addr));
        while (DSPCheckMailToDSP())
            ;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_exec_task(DSPTaskInfo* curr, DSPTaskInfo* next) {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_exec_task.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803D1CF8-803D1D18 02EE18 001D+03 1/1 0/0 0/0 .data            @266 */
SECTION_DATA static char lit_266[] = "DSP is booting task: 0x%08X\n";

/* 803D1D18-803D1D48 02EE38 002D+03 0/1 0/0 0/0 .data            @267 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_267[] = "__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n";
#pragma pop

/* 803D1D48-803D1D78 02EE68 002D+03 0/1 0/0 0/0 .data            @268 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_268[] = "__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n";
#pragma pop

/* 803D1D78-803D1DA8 02EE98 002D+03 0/1 0/0 0/0 .data            @269 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_269[] = "__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n";
#pragma pop

/* 803D1DA8-803D1DD8 02EEC8 002D+03 0/1 0/0 0/0 .data            @270 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_270[] = "__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n";
#pragma pop

/* 803D1DD8-803D1E08 02EEF8 002D+03 0/1 0/0 0/0 .data            @271 */
#pragma push
#pragma force_active on
SECTION_DATA static char lit_271[] = "__DSP_boot_task()  : Start Vector  : 0x%08X\n";
#pragma pop

#define MSG_BASE 0x80F30000

/* 80352770-803528FC 34D0B0 018C+00 0/0 1/1 0/0 .text            __DSP_boot_task */
// needs compiler epilogue patch
#ifdef NONMATCHING
void __DSP_boot_task(DSPTaskInfo* task) {
    volatile u32 mail;

    while (!DSPCheckMailFromDSP())
        ;

    mail = DSPReadMailFromDSP();

    DSPSendMailToDSP(MSG_BASE | 0xA001);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP((u32)(task->iram_mmem_addr));
    while (DSPCheckMailToDSP()) {
    }

    DSPSendMailToDSP(MSG_BASE | 0xC002);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP((u32)(task->iram_addr & 0xffff));
    while (DSPCheckMailToDSP()) {
    }

    DSPSendMailToDSP(MSG_BASE | 0xA002);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP(task->iram_length);
    while (DSPCheckMailToDSP()) {
    }

    DSPSendMailToDSP(MSG_BASE | 0xB002);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP(0x00000000);
    while (DSPCheckMailToDSP()) {
    }

    DSPSendMailToDSP(MSG_BASE | 0xD001);
    while (DSPCheckMailToDSP()) {
    }
    DSPSendMailToDSP((u32)(0xffff & task->dsp_init_vector));
    while (DSPCheckMailToDSP()) {
    }

    __DSP_debug_printf("DSP is booting task: 0x%08X\n", task);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n",
                       (u32)(task->iram_mmem_addr));
    __DSP_debug_printf("__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n", (u32)(task->iram_addr));
    __DSP_debug_printf("__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n", (u32)(task->iram_length));
    __DSP_debug_printf("__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n", (u32)(task->dram_length));
    __DSP_debug_printf("__DSP_boot_task()  : Start Vector  : 0x%08X\n",
                       (u32)(task->dsp_init_vector));
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DSP_boot_task(DSPTaskInfo* task) {
    nofralloc
#include "asm/dolphin/dsp/dsp_task/__DSP_boot_task.s"
}
#pragma pop
#endif

/* 803528FC-8035299C 34D23C 00A0+00 0/0 1/1 0/0 .text            __DSP_insert_task */
void __DSP_insert_task(DSPTaskInfo* task) {
    DSPTaskInfo* temp;

    if (__DSP_first_task == NULL) {
        __DSP_first_task = __DSP_last_task = __DSP_curr_task = task;
        task->next = task->prev = NULL;
    } else {
        temp = __DSP_first_task;

        while (temp) {
            if (task->priority < temp->priority) {
                task->prev = temp->prev;
                temp->prev = task;
                task->next = temp;
                if (task->prev == NULL) {
                    __DSP_first_task = task;
                } else {
                    (task->prev)->next = task;
                }
                break;
            }
            temp = temp->next;
        }

        if (temp == NULL) {
            __DSP_last_task->next = task;
            task->next = NULL;
            task->prev = __DSP_last_task;
            __DSP_last_task = task;
        }
    }
}

/* 8035299C-80352A30 34D2DC 0094+00 0/0 1/1 0/0 .text            __DSP_remove_task */
void __DSP_remove_task(DSPTaskInfo* task) {
    task->flags = DSP_TASK_FLAG_CLEARALL;
    task->state = DSP_TASK_STATE_DONE;

    if (__DSP_first_task == task) {
        if (task->next) {
            __DSP_first_task = (task->next);
            task->next->prev = NULL;
        } else {
            __DSP_first_task = __DSP_last_task = __DSP_curr_task = NULL;
        }
    } else if (__DSP_last_task == task) {
        __DSP_last_task = (task->prev);
        task->prev->next = NULL;
        __DSP_curr_task = __DSP_first_task;

    } else {
        __DSP_curr_task = task->next;
        task->prev->next = task->next;
        task->next->prev = task->prev;
    }
}

/* ############################################################################################## */
/* 803D1E08-803D1E38 02EF28 002B+05 0/0 0/0 0/0 .data            @294 */
// used in stripped `__DSP_add_task` function
#pragma push
#pragma force_active on
SECTION_DATA static char lit_294[] = "__DSP_add_task() : Added task    : 0x%08X\n";
#pragma pop
