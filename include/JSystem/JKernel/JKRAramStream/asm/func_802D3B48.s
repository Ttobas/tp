/* create__13JKRAramStreamFl __ct__13JKRAramStreamFl::create(long) */
/* JKRAramStream_NS_create */
/* 802D3B48 002D0A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3B4C 002D0A8C  7C 08 02 A6 */	mflr r0
/* 802D3B50 002D0A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3B54 002D0A94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3B58 002D0A98  7C 7F 1B 78 */	mr r31, r3
/* 802D3B5C 002D0A9C  80 0D 8E 88 */	lwz r0, sAramStreamObject__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3B60 002D0AA0  28 00 00 00 */	cmplwi r0, 0
/* 802D3B64 002D0AA4  40 82 00 3C */	bne lbl_802D3BA0
/* 802D3B68 002D0AA8  38 60 00 7C */	li r3, 0x7c
/* 802D3B6C 002D0AAC  80 8D 8D F0 */	lwz r4, sSystemHeap__7JKRHeap-_SDA_BASE_(r13)
/* 802D3B70 002D0AB0  38 A0 00 00 */	li r5, 0
/* 802D3B74 002D0AB4  4B FF B1 25 */	bl __nw__FUlP7JKRHeapi
/* 802D3B78 002D0AB8  7C 60 1B 79 */	or. r0, r3, r3
/* 802D3B7C 002D0ABC  41 82 00 10 */	beq lbl_802D3B8C
/* 802D3B80 002D0AC0  7F E4 FB 78 */	mr r4, r31
/* 802D3B84 002D0AC4  48 00 00 35 */	bl __ct__13JKRAramStreamFl
/* 802D3B88 002D0AC8  7C 60 1B 78 */	mr r0, r3
lbl_802D3B8C:
/* 802D3B8C 002D0ACC  90 0D 8E 88 */	stw r0, sAramStreamObject__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3B90 002D0AD0  38 60 00 00 */	li r3, 0
/* 802D3B94 002D0AD4  38 80 00 00 */	li r4, 0
/* 802D3B98 002D0AD8  38 A0 00 00 */	li r5, 0
/* 802D3B9C 002D0ADC  48 00 04 99 */	bl setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap
lbl_802D3BA0:
/* 802D3BA0 002D0AE0  80 6D 8E 88 */	lwz r3, sAramStreamObject__13JKRAramStream-_SDA_BASE_(r13)
/* 802D3BA4 002D0AE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D3BA8 002D0AE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3BAC 002D0AEC  7C 08 03 A6 */	mtlr r0
/* 802D3BB0 002D0AF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D3BB4 002D0AF4  4E 80 00 20 */	blr
