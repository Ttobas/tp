/* 8010BB48 00108A88  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8010BB4C 00108A8C  7C 08 02 A6 */ mflr r0
/* 8010BB50 00108A90  90 01 00 14 */ stw r0, 0x14(r1)
/* 8010BB54 00108A94  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8010BB58 00108A98  7C 7F 1B 78 */ mr r31, r3
/* 8010BB5C 00108A9C  4B FF CE BD */ bl daAlink_c_NS_checkHookshotWait
/* 8010BB60 00108AA0  2C 03 00 00 */ cmpwi r3, 0
/* 8010BB64 00108AA4  41 82 00 10 */ beq lbl_8010BB74
/* 8010BB68 00108AA8  7F E3 FB 78 */ mr r3, r31
/* 8010BB6C 00108AAC  38 80 00 12 */ li r4, 0x12
/* 8010BB70 00108AB0  4B FA 76 E1 */ bl setDoStatus__9daAlink_cFUc
lbl_8010BB74:
/* 8010BB74 00108AB4  7F E3 FB 78 */ mr r3, r31
/* 8010BB78 00108AB8  38 80 00 00 */ li r4, 0
/* 8010BB7C 00108ABC  4B FA 7B B9 */ bl daAlink_c_NS_setShapeAngleToAtnActor
/* 8010BB80 00108AC0  38 00 00 00 */ li r0, 0
/* 8010BB84 00108AC4  98 1F 20 68 */ stb r0, 0x2068(r31)
/* 8010BB88 00108AC8  7F E3 FB 78 */ mr r3, r31
/* 8010BB8C 00108ACC  38 80 00 00 */ li r4, 0
/* 8010BB90 00108AD0  4B FA E5 41 */ bl daAlink_c_NS_checkNextAction
/* 8010BB94 00108AD4  2C 03 00 00 */ cmpwi r3, 0
/* 8010BB98 00108AD8  40 82 00 58 */ bne lbl_8010BBF0
/* 8010BB9C 00108ADC  7F E3 FB 78 */ mr r3, r31
/* 8010BBA0 00108AE0  4B FF CE 79 */ bl daAlink_c_NS_checkHookshotWait
/* 8010BBA4 00108AE4  2C 03 00 00 */ cmpwi r3, 0
/* 8010BBA8 00108AE8  41 82 00 34 */ beq lbl_8010BBDC
/* 8010BBAC 00108AEC  7F E3 FB 78 */ mr r3, r31
/* 8010BBB0 00108AF0  4B FC 2C F1 */ bl daAlink_c_NS_setBodyAngleToCamera
/* 8010BBB4 00108AF4  2C 03 00 00 */ cmpwi r3, 0
/* 8010BBB8 00108AF8  41 82 00 0C */ beq lbl_8010BBC4
/* 8010BBBC 00108AFC  7F E3 FB 78 */ mr r3, r31
/* 8010BBC0 00108B00  4B FF D1 F5 */ bl daAlink_c_NS_setHookshotSight
lbl_8010BBC4:
/* 8010BBC4 00108B04  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8010BBC8 00108B08  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8010BBCC 00108B0C  80 03 5F 18 */ lwz r0, 0x5f18(r3)
/* 8010BBD0 00108B10  54 00 03 98 */ rlwinm r0, r0, 0, 0xe, 0xc
/* 8010BBD4 00108B14  90 03 5F 18 */ stw r0, 0x5f18(r3)
/* 8010BBD8 00108B18  48 00 00 18 */ b lbl_8010BBF0
lbl_8010BBDC:
/* 8010BBDC 00108B1C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8010BBE0 00108B20  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8010BBE4 00108B24  80 03 5F 18 */ lwz r0, 0x5f18(r3)
/* 8010BBE8 00108B28  64 00 00 04 */ oris r0, r0, 4
/* 8010BBEC 00108B2C  90 03 5F 18 */ stw r0, 0x5f18(r3)
lbl_8010BBF0:
/* 8010BBF0 00108B30  38 60 00 01 */ li r3, 1
/* 8010BBF4 00108B34  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8010BBF8 00108B38  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8010BBFC 00108B3C  7C 08 03 A6 */ mtlr r0
/* 8010BC00 00108B40  38 21 00 10 */ addi r1, r1, 0x10
/* 8010BC04 00108B44  4E 80 00 20 */ blr
