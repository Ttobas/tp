//
// Generated By: dol2asm
// Translation Unit: JUTGraphFifo
//

#include "JSystem/JUtility/JUTGraphFifo.h"
#include "JSystem/JKernel/JKRHeap.h"

/* 804514B8-804514BC 0009B8 0004+00 1/1 0/0 0/0 .sbss            None */
static bool data_804514B8;

/* 804514BC-804514C0 0009BC 0004+00 2/2 0/0 0/0 .sbss            sCurrentFifo__12JUTGraphFifo */
JUTGraphFifo* JUTGraphFifo::sCurrentFifo;

/* 802DEB58-802DEC34 2D9498 00DC+00 0/0 1/1 0/0 .text            __ct__12JUTGraphFifoFUl */
JUTGraphFifo::JUTGraphFifo(u32 size) {
    mSize = size + 0x1F & ~0x1F;
    if (data_804514B8) {
        mFifo = (GXFifoObj*)JKRAllocFromSysHeap(mSize + 0x80, 32);
        mBase = mFifo + 1;
        GXInitFifoBase(mFifo, mBase, mSize);
        GXInitFifoPtrs(mFifo, mBase, mBase);
    } else {
        mBase = JKRAllocFromSysHeap(mSize + 0xA0, 32);
        mBase = (void*)((int)mBase + 0x1F & ~0x1F);
        mFifo = GXInit(mBase, mSize);
        data_804514B8 = true;
        sCurrentFifo = this;
    }
}

/* ############################################################################################## */
/* 804514C0-804514C8 0009C0 0005+03 1/1 0/0 0/0 .sbss            mGpStatus__12JUTGraphFifo */
bool JUTGraphFifo::mGpStatus[5];

/* 802DEC34-802DECF8 2D9574 00C4+00 1/0 0/0 0/0 .text            __dt__12JUTGraphFifoFv */
JUTGraphFifo::~JUTGraphFifo() {
    sCurrentFifo->save();

    do {
    } while (isGPActive());

    if (sCurrentFifo == this) {
        sCurrentFifo = NULL;
    }
    JKRFreeToSysHeap(mBase);
}
