/* 80127CF0 00124C30  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80127CF4 00124C34  7C 08 02 A6 */ mflr r0
/* 80127CF8 00124C38  90 01 00 14 */ stw r0, 0x14(r1)
/* 80127CFC 00124C3C  38 80 00 01 */ li r4, 1
/* 80127D00 00124C40  4B F8 A8 CD */ bl itemTriggerCheck__9daAlink_cFUc
/* 80127D04 00124C44  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80127D08 00124C48  7C 08 03 A6 */ mtlr r0
/* 80127D0C 00124C4C  38 21 00 10 */ addi r1, r1, 0x10
/* 80127D10 00124C50  4E 80 00 20 */ blr
