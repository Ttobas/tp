/* __sinit_JKRDvdFile_cpp __sinit_JKRDvdFile_cpp */
/* missing reference */
/* 802D9B00 002D6A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D9B04 002D6A44  7C 08 02 A6 */	mflr r0
/* 802D9B08 002D6A48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D9B0C 002D6A4C  3C 60 80 43 */	lis r3, sDvdList__10JKRDvdFile@ha
/* 802D9B10 002D6A50  38 63 43 6C */	addi r3, r3, sDvdList__10JKRDvdFile@l
/* 802D9B14 002D6A54  48 00 24 01 */	bl initiate__10JSUPtrListFv
/* 802D9B18 002D6A58  3C 60 80 43 */	lis r3, sDvdList__10JKRDvdFile@ha
/* 802D9B1C 002D6A5C  38 63 43 6C */	addi r3, r3, sDvdList__10JKRDvdFile@l
/* 802D9B20 002D6A60  3C 80 80 2E */	lis r4, JSUList_NS_dtor_X7_@ha
/* 802D9B24 002D6A64  38 84 9B 44 */	addi r4, r4, JSUList_NS_dtor_X7_@l
/* 802D9B28 002D6A68  3C A0 80 43 */	lis r5, lbl_80434360@ha
/* 802D9B2C 002D6A6C  38 A5 43 60 */	addi r5, r5, lbl_80434360@l
/* 802D9B30 002D6A70  48 08 80 F5 */	bl func_80361C24
/* 802D9B34 002D6A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D9B38 002D6A78  7C 08 03 A6 */	mtlr r0
/* 802D9B3C 002D6A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D9B40 002D6A80  4E 80 00 20 */	blr
