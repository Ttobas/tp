/* 800198C4 00016804  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800198C8 00016808  7C 08 02 A6 */ mflr r0
/* 800198CC 0001680C  90 01 00 14 */ stw r0, 0x14(r1)
/* 800198D0 00016810  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800198D4 00016814  93 C1 00 08 */ stw r30, 8(r1)
/* 800198D8 00016818  7C 7E 1B 78 */ mr r30, r3
/* 800198DC 0001681C  80 6D 87 E0 */ lwz r3, _mProcID-_SDA_BASE_(r13)
/* 800198E0 00016820  48 00 53 D1 */ bl fopScnM_SearchByID__FUi
/* 800198E4 00016824  7C 7F 1B 78 */ mr r31, r3
/* 800198E8 00016828  80 6D 87 C0 */ lwz r3, g_fpcNd_type-_SDA_BASE_(r13)
/* 800198EC 0001682C  80 9F 00 B4 */ lwz r4, 0xb4(r31)
/* 800198F0 00016830  48 00 6D 5D */ bl fpcBs_Is_JustOfType__Fii
/* 800198F4 00016834  2C 03 00 00 */ cmpwi r3, 0
/* 800198F8 00016838  41 82 00 0C */ beq lbl_80019904
/* 800198FC 0001683C  80 9F 00 C8 */ lwz r4, 0xc8(r31)
/* 80019900 00016840  48 00 00 08 */ b lbl_80019908
lbl_80019904:
/* 80019904 00016844  38 80 FF FF */ li r4, -1
lbl_80019908:
/* 80019908 00016848  38 7E 00 68 */ addi r3, r30, 0x68
/* 8001990C 0001684C  3C A0 00 01 */ lis r5, 0x0000FFFD@ha
/* 80019910 00016850  38 A5 FF FD */ addi r5, r5, 0x0000FFFD@l
/* 80019914 00016854  7C A6 2B 78 */ mr r6, r5
/* 80019918 00016858  48 00 99 D1 */ bl fpcPi_Change
/* 8001991C 0001685C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 80019920 00016860  83 C1 00 08 */ lwz r30, 8(r1)
/* 80019924 00016864  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80019928 00016868  7C 08 03 A6 */ mtlr r0
/* 8001992C 0001686C  38 21 00 10 */ addi r1, r1, 0x10
/* 80019930 00016870  4E 80 00 20 */ blr
