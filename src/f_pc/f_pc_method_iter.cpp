//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_method_iter
//

#include "f_pc/f_pc_method_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 80023764-80023788 0024+00 s=0 e=1 z=0  None .text      fpcMtdIt_Method__FP15node_list_classPFPv_i
 */
void fpcMtdIt_Method(node_list_class* pList, fpcMtdIt_MethodFunc pMethod) {
    cLsIt_Method(pList, (cNdIt_MethodFunc)pMethod, NULL);
}
