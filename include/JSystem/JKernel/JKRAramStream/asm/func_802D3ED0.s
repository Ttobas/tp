/* write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl __ct__13JKRAramStreamFl::write_StreamToAram_Async(JSUFileInputStream *, unsigned long, unsigned long, unsigned long, unsigned long *) */
/* JKRAramStream_NS_write_StreamToAram_Async */
/* 802D3ED0 002D0E10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D3ED4 002D0E14  7C 08 02 A6 */	mflr r0
/* 802D3ED8 002D0E18  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D3EDC 002D0E1C  39 61 00 20 */	addi r11, r1, 0x20
/* 802D3EE0 002D0E20  48 08 E2 F1 */	bl _savegpr_26
/* 802D3EE4 002D0E24  7C 7A 1B 78 */	mr r26, r3
/* 802D3EE8 002D0E28  7C 9B 23 78 */	mr r27, r4
/* 802D3EEC 002D0E2C  7C BC 2B 78 */	mr r28, r5
/* 802D3EF0 002D0E30  7C DD 33 78 */	mr r29, r6
/* 802D3EF4 002D0E34  7C FE 3B 78 */	mr r30, r7
/* 802D3EF8 002D0E38  38 60 00 5C */	li r3, 0x5c
/* 802D3EFC 002D0E3C  80 8D 8D F0 */	lwz r4, sSystemHeap__7JKRHeap-_SDA_BASE_(r13)
/* 802D3F00 002D0E40  38 A0 FF FC */	li r5, -4
/* 802D3F04 002D0E44  4B FF AD 95 */	bl __nw__FUlP7JKRHeapi
/* 802D3F08 002D0E48  7C 7F 1B 79 */	or. r31, r3, r3
/* 802D3F0C 002D0E4C  41 82 00 0C */	beq lbl_802D3F18
/* 802D3F10 002D0E50  48 00 01 79 */	bl __ct__20JKRAramStreamCommandFv
/* 802D3F14 002D0E54  7C 7F 1B 78 */	mr r31, r3
lbl_802D3F18:
/* 802D3F18 002D0E58  38 00 00 02 */	li r0, 2
/* 802D3F1C 002D0E5C  90 1F 00 00 */	stw r0, 0(r31)
/* 802D3F20 002D0E60  93 7F 00 04 */	stw r27, 4(r31)
/* 802D3F24 002D0E64  93 9F 00 08 */	stw r28, 8(r31)
/* 802D3F28 002D0E68  93 5F 00 10 */	stw r26, 0x10(r31)
/* 802D3F2C 002D0E6C  38 60 00 00 */	li r3, 0
/* 802D3F30 002D0E70  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 802D3F34 002D0E74  93 BF 00 14 */	stw r29, 0x14(r31)
/* 802D3F38 002D0E78  80 0D 8E 8C */	lwz r0, transBuffer__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3F3C 002D0E7C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 802D3F40 002D0E80  80 0D 8E 94 */	lwz r0, transHeap__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3F44 002D0E84  90 1F 00 24 */	stw r0, 0x24(r31)
/* 802D3F48 002D0E88  80 0D 8E 90 */	lwz r0, transSize__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3F4C 002D0E8C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 802D3F50 002D0E90  93 DF 00 18 */	stw r30, 0x18(r31)
/* 802D3F54 002D0E94  28 1E 00 00 */	cmplwi r30, 0
/* 802D3F58 002D0E98  41 82 00 08 */	beq lbl_802D3F60
/* 802D3F5C 002D0E9C  90 7E 00 00 */	stw r3, 0(r30)
lbl_802D3F60:
/* 802D3F60 002D0EA0  38 7F 00 30 */	addi r3, r31, 0x30
/* 802D3F64 002D0EA4  38 9F 00 50 */	addi r4, r31, 0x50
/* 802D3F68 002D0EA8  38 A0 00 01 */	li r5, 1
/* 802D3F6C 002D0EAC  48 06 AA 29 */	bl OSInitMessageQueue
/* 802D3F70 002D0EB0  3C 60 80 3D */	lis r3, sMessageQueue__13JKRAramStream@ha
/* 802D3F74 002D0EB4  38 63 C1 98 */	addi r3, r3, sMessageQueue__13JKRAramStream@l
/* 802D3F78 002D0EB8  7F E4 FB 78 */	mr r4, r31
/* 802D3F7C 002D0EBC  38 A0 00 01 */	li r5, 1
/* 802D3F80 002D0EC0  48 06 AA 75 */	bl OSSendMessage
/* 802D3F84 002D0EC4  7F E3 FB 78 */	mr r3, r31
/* 802D3F88 002D0EC8  39 61 00 20 */	addi r11, r1, 0x20
/* 802D3F8C 002D0ECC  48 08 E2 91 */	bl _restgpr_26
/* 802D3F90 002D0ED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D3F94 002D0ED4  7C 08 03 A6 */	mtlr r0
/* 802D3F98 002D0ED8  38 21 00 20 */	addi r1, r1, 0x20
/* 802D3F9C 002D0EDC  4E 80 00 20 */	blr
