//
// Generated By: dol2asm
// Translation Unit: JUTVideo
//

#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "dolphin/vi/vi.h"

/* 80451538-8045153C 000A38 0004+00 4/4 18/18 1/1 .sbss            sManager__8JUTVideo */
JUTVideo* JUTVideo::sManager;

/* 8045153C-80451540 000A3C 0004+00 2/2 1/1 0/0 .sbss            sVideoLastTick__8JUTVideo */
OSTick JUTVideo::sVideoLastTick;

/* 80451540-80451544 000A40 0004+00 2/2 1/1 0/0 .sbss            sVideoInterval__8JUTVideo */
OSTick JUTVideo::sVideoInterval;

/* 80451544-80451548 000A44 0004+00 4/4 0/0 0/0 .sbss            None */
static bool data_80451544;

/* 802E4C54-802E4CAC 2DF594 0058+00 0/0 1/1 0/0 .text
 * createManager__8JUTVideoFPC16_GXRenderModeObj                */
JUTVideo* JUTVideo::createManager(_GXRenderModeObj const* param_0) {
    if (sManager == NULL) {
        sManager = new JUTVideo(param_0);
    }
    return sManager;
}

/* 802E4CAC-802E4CF4 2DF5EC 0048+00 0/0 2/2 0/0 .text            destroyManager__8JUTVideoFv */
void JUTVideo::destroyManager() {
    if (sManager != NULL) {
        delete sManager;
        sManager = NULL;
    }
}

/* 802E4CF4-802E4DE8 2DF634 00F4+00 1/1 0/0 0/0 .text __ct__8JUTVideoFPC16_GXRenderModeObj */
JUTVideo::JUTVideo(GXRenderModeObj const* param_0) {
    mRenderObj = NULL;
    VIInit();
    mSetBlack = true;
    mSetBlackFrameCount = 2;
    setRenderMode(param_0);
    VISetBlack(1);
    VIFlush();
    field_0x8 = 0;
    mRetraceCount = VIGetRetraceCount();
    field_0x10 = 1;
    field_0x18 = 0;
    sVideoLastTick = OSGetTick();
    sVideoInterval = 670000;
    mPreRetraceCallback = VISetPreRetraceCallback(preRetraceProc);
    mPostRetraceCallback = VISetPostRetraceCallback(postRetraceProc);
    mPreCallback = NULL;
    mPostCallback = NULL;
    OSInitMessageQueue(&mMessageQueue, &mMessage, 1);
    GXSetDrawDoneCallback(drawDoneCallback);
}

/* 802E4DE8-802E4E50 2DF728 0068+00 1/0 0/0 0/0 .text            __dt__8JUTVideoFv */
JUTVideo::~JUTVideo() {
    VISetPreRetraceCallback(mPreRetraceCallback);
    VISetPostRetraceCallback(mPostRetraceCallback);
}

/* 802E4E50-802E5088 2DF790 0238+00 1/1 0/0 0/0 .text            preRetraceProc__8JUTVideoFUl */
void JUTVideo::preRetraceProc(u32 retrace_count) {
    if (!sManager) {
        return;
    }

    if (sManager->mPreCallback) {
        (*sManager->mPreCallback)(retrace_count);
    }

    OSTick tick = OSGetTick();
    sVideoInterval = tick - sVideoLastTick;
    sVideoLastTick = tick;

    JUTXfb* xfb = JUTXfb::getManager();
    if (!xfb) {
        VISetBlack(TRUE);
        VIFlush();
        return;
    }

    static void* frameBuffer = NULL;

    if (frameBuffer) {
        JUTVideo* videoManager = JUTGetVideoManager();
        const GXRenderModeObj* renderMode = videoManager->getRenderMode();
        JUTDirectPrint* directPrint = JUTDirectPrint::getManager();
        directPrint->changeFrameBuffer(frameBuffer, renderMode->fb_width, renderMode->efb_height);
    }

    if (sManager->mSetBlack == 1) {
        s32 frame_count = sManager->mSetBlackFrameCount;
        if (frame_count > 0) {
            frame_count--;
        }

        sManager->mSetBlackFrameCount = frame_count;
        sManager->mSetBlack = frame_count != 0;
        VISetBlack(TRUE);
        VIFlush();
        return;
    }

    if (!xfb) {
        VISetBlack(TRUE);
        VIFlush();
        return;
    }

    if (xfb->getBufferNum() == 3 || xfb->getBufferNum() == 2) {
        if (!data_80451544) {
            s16 index = xfb->getDrawnXfbIndex();
            xfb->setDisplayingXfbIndex(index);
            if (index < 0) {
                VISetBlack(1);
                VIFlush();
            } else {
                VISetNextFrameBuffer(xfb->getDisplayingXfb());
                VIFlush();
                VISetBlack(FALSE);
                frameBuffer = xfb->getDisplayingXfb();
            }
        }
    } else if (xfb->getBufferNum() == 1) {
        if (xfb->getSDrawingFlag() == 0) {
            s16 index = xfb->getDrawnXfbIndex();
            if (index >= 0) {
                xfb->setDisplayingXfbIndex(index);
                GXCopyDisp(xfb->getDisplayingXfb(), GX_TRUE);
                GXFlush();
                xfb->setSDrawingFlag(2);
                frameBuffer = xfb->getDisplayingXfb();
                if (VIGetNextFrameBuffer()) {
                    VISetBlack(FALSE);
                }
            } else {
                VISetBlack(TRUE);
            }
        }
        VIFlush();
    }
}

/* 802E5088-802E50B0 2DF9C8 0028+00 0/0 1/1 0/0 .text            drawDoneStart__8JUTVideoFv */
void JUTVideo::drawDoneStart() {
    data_80451544 = true;
    GXSetDrawDone();
}

/* 802E50B0-802E50BC 2DF9F0 000C+00 0/0 1/1 0/0 .text            dummyNoDrawWait__8JUTVideoFv */
void JUTVideo::dummyNoDrawWait() {
    data_80451544 = false;
}

/* 802E50BC-802E5144 2DF9FC 0088+00 1/1 0/0 0/0 .text            drawDoneCallback__8JUTVideoFv */
void JUTVideo::drawDoneCallback() {
    JUTXfb* xfb = JUTXfb::getManager();
    if (!xfb) {
        return;
    }

    data_80451544 = false;
    if (xfb->getBufferNum() == 1) {
        if (xfb->getSDrawingFlag() == 1) {
            xfb->setSDrawingFlag(0);

            void* frameBuffer = xfb->getDrawnXfb();
            if (frameBuffer) {
                VISetNextFrameBuffer(xfb->getDrawnXfb());
                VIFlush();
            }
        }
    }
}

/* 802E5144-802E5198 2DFA84 0054+00 1/1 0/0 0/0 .text            postRetraceProc__8JUTVideoFUl */
void JUTVideo::postRetraceProc(u32 retrace_count) {
    if (!sManager) {
        return;
    }

    if (sManager->mPostCallback != NULL) {
        sManager->mPostCallback(retrace_count);
    }

    OSMessage message = (OSMessage*)VIGetRetraceCount();
    OSSendMessage(&sManager->mMessageQueue, message, OS_MESSAGE_NON_BLOCKING);
}

/* 802E5198-802E5210 2DFAD8 0078+00 1/1 2/2 0/0 .text
 * setRenderMode__8JUTVideoFPC16_GXRenderModeObj                */
void JUTVideo::setRenderMode(GXRenderModeObj const* pObj) {
    if (mRenderObj != NULL && pObj->vi_tv_mode != mRenderObj->vi_tv_mode) {
        mSetBlack = true;
        mSetBlackFrameCount = 4;
    }
    mRenderObj = (GXRenderModeObj*)pObj;
    VIConfigure(mRenderObj);
    VIFlush();

    if (mSetBlack) {
        VIWaitForRetrace();
        VIWaitForRetrace();
    }
}

/* 802E5210-802E5214 2DFB50 0004+00 0/0 1/1 0/0 .text            waitRetraceIfNeed__8JUTVideoFv */
void JUTVideo::waitRetraceIfNeed() {}
