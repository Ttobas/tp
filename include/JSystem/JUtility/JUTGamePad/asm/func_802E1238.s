/* 802E1238 002DE178  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802E123C 002DE17C  7C 08 02 A6 */	mflr r0
/* 802E1240 002DE180  90 01 00 44 */	stw r0, 0x44(r1)
/* 802E1244 002DE184  39 61 00 40 */	addi r11, r1, 0x40
/* 802E1248 002DE188  48 08 0F 95 */	bl _savegpr_29
/* 802E124C 002DE18C  7C 7D 1B 78 */	mr r29, r3
/* 802E1250 002DE190  7C FE 3B 78 */	mr r30, r7
/* 802E1254 002DE194  7D 1F 43 78 */	mr r31, r8
/* 802E1258 002DE198  80 0D 83 5C */	lwz r0, lbl_804508DC-_SDA_BASE_(r13)
/* 802E125C 002DE19C  2C 00 00 02 */	cmpwi r0, 2
/* 802E1260 002DE1A0  41 82 00 2C */	beq lbl_802E128C
/* 802E1264 002DE1A4  40 80 00 40 */	bge lbl_802E12A4
/* 802E1268 002DE1A8  2C 00 00 01 */	cmpwi r0, 1
/* 802E126C 002DE1AC  40 80 00 08 */	bge lbl_802E1274
/* 802E1270 002DE1B0  48 00 00 34 */	b lbl_802E12A4
lbl_802E1274:
/* 802E1274 002DE1B4  2C 1E 00 00 */	cmpwi r30, 0
/* 802E1278 002DE1B8  38 00 00 2A */	li r0, 0x2a
/* 802E127C 002DE1BC  40 82 00 08 */	bne lbl_802E1284
/* 802E1280 002DE1C0  38 00 00 36 */	li r0, 0x36
lbl_802E1284:
/* 802E1284 002DE1C4  7C 03 03 78 */	mr r3, r0
/* 802E1288 002DE1C8  48 00 00 30 */	b lbl_802E12B8
lbl_802E128C:
/* 802E128C 002DE1CC  2C 1E 00 00 */	cmpwi r30, 0
/* 802E1290 002DE1D0  38 00 00 1D */	li r0, 0x1d
/* 802E1294 002DE1D4  40 82 00 08 */	bne lbl_802E129C
/* 802E1298 002DE1D8  38 00 00 26 */	li r0, 0x26
lbl_802E129C:
/* 802E129C 002DE1DC  7C 03 03 78 */	mr r3, r0
/* 802E12A0 002DE1E0  48 00 00 18 */	b lbl_802E12B8
lbl_802E12A4:
/* 802E12A4 002DE1E4  2C 1E 00 00 */	cmpwi r30, 0
/* 802E12A8 002DE1E8  38 00 00 39 */	li r0, 0x39
/* 802E12AC 002DE1EC  40 82 00 08 */	bne lbl_802E12B4
/* 802E12B0 002DE1F0  38 00 00 45 */	li r0, 0x45
lbl_802E12B4:
/* 802E12B4 002DE1F4  7C 03 03 78 */	mr r3, r0
lbl_802E12B8:
/* 802E12B8 002DE1F8  98 9D 00 0E */	stb r4, 0xe(r29)
/* 802E12BC 002DE1FC  98 BD 00 0F */	stb r5, 0xf(r29)
/* 802E12C0 002DE200  7C 80 07 74 */	extsb r0, r4
/* 802E12C4 002DE204  C8 42 C6 20 */	lfd f2, lbl_80456020-_SDA2_BASE_(r2)
/* 802E12C8 002DE208  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802E12CC 002DE20C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E12D0 002DE210  3C 80 43 30 */	lis r4, 0x4330
/* 802E12D4 002DE214  90 81 00 10 */	stw r4, 0x10(r1)
/* 802E12D8 002DE218  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802E12DC 002DE21C  EC 20 10 28 */	fsubs f1, f0, f2
/* 802E12E0 002DE220  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802E12E4 002DE224  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802E12E8 002DE228  90 81 00 18 */	stw r4, 0x18(r1)
/* 802E12EC 002DE22C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802E12F0 002DE230  EC 00 10 28 */	fsubs f0, f0, f2
/* 802E12F4 002DE234  EC 01 00 24 */	fdivs f0, f1, f0
/* 802E12F8 002DE238  D0 1D 00 00 */	stfs f0, 0(r29)
/* 802E12FC 002DE23C  7C A0 07 74 */	extsb r0, r5
/* 802E1300 002DE240  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802E1304 002DE244  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E1308 002DE248  90 81 00 20 */	stw r4, 0x20(r1)
/* 802E130C 002DE24C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802E1310 002DE250  EC 20 10 28 */	fsubs f1, f0, f2
/* 802E1314 002DE254  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802E1318 002DE258  90 81 00 28 */	stw r4, 0x28(r1)
/* 802E131C 002DE25C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802E1320 002DE260  EC 00 10 28 */	fsubs f0, f0, f2
/* 802E1324 002DE264  EC 01 00 24 */	fdivs f0, f1, f0
/* 802E1328 002DE268  D0 1D 00 04 */	stfs f0, 4(r29)
/* 802E132C 002DE26C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 802E1330 002DE270  EC 20 00 32 */	fmuls f1, f0, f0
/* 802E1334 002DE274  C0 1D 00 04 */	lfs f0, 4(r29)
/* 802E1338 002DE278  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E133C 002DE27C  EC 81 00 2A */	fadds f4, f1, f0
/* 802E1340 002DE280  C0 02 C6 28 */	lfs f0, lbl_80456028-_SDA2_BASE_(r2)
/* 802E1344 002DE284  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802E1348 002DE288  40 81 00 58 */	ble lbl_802E13A0
/* 802E134C 002DE28C  FC 00 20 34 */	frsqrte f0, f4
/* 802E1350 002DE290  C8 62 C6 30 */	lfd f3, lbl_80456030-_SDA2_BASE_(r2)
/* 802E1354 002DE294  FC 23 00 32 */	fmul f1, f3, f0
/* 802E1358 002DE298  C8 42 C6 38 */	lfd f2, lbl_80456038-_SDA2_BASE_(r2)
/* 802E135C 002DE29C  FC 00 00 32 */	fmul f0, f0, f0
/* 802E1360 002DE2A0  FC 04 00 32 */	fmul f0, f4, f0
/* 802E1364 002DE2A4  FC 02 00 28 */	fsub f0, f2, f0
/* 802E1368 002DE2A8  FC 01 00 32 */	fmul f0, f1, f0
/* 802E136C 002DE2AC  FC 23 00 32 */	fmul f1, f3, f0
/* 802E1370 002DE2B0  FC 00 00 32 */	fmul f0, f0, f0
/* 802E1374 002DE2B4  FC 04 00 32 */	fmul f0, f4, f0
/* 802E1378 002DE2B8  FC 02 00 28 */	fsub f0, f2, f0
/* 802E137C 002DE2BC  FC 01 00 32 */	fmul f0, f1, f0
/* 802E1380 002DE2C0  FC 23 00 32 */	fmul f1, f3, f0
/* 802E1384 002DE2C4  FC 00 00 32 */	fmul f0, f0, f0
/* 802E1388 002DE2C8  FC 04 00 32 */	fmul f0, f4, f0
/* 802E138C 002DE2CC  FC 02 00 28 */	fsub f0, f2, f0
/* 802E1390 002DE2D0  FC 01 00 32 */	fmul f0, f1, f0
/* 802E1394 002DE2D4  FC 84 00 32 */	fmul f4, f4, f0
/* 802E1398 002DE2D8  FC 80 20 18 */	frsp f4, f4
/* 802E139C 002DE2DC  48 00 00 88 */	b lbl_802E1424
lbl_802E13A0:
/* 802E13A0 002DE2E0  C8 02 C6 40 */	lfd f0, lbl_80456040-_SDA2_BASE_(r2)
/* 802E13A4 002DE2E4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802E13A8 002DE2E8  40 80 00 10 */	bge lbl_802E13B8
/* 802E13AC 002DE2EC  3C 60 80 45 */	lis r3, lbl_80450AE0@ha
/* 802E13B0 002DE2F0  C0 83 0A E0 */	lfs f4, lbl_80450AE0@l(r3)
/* 802E13B4 002DE2F4  48 00 00 70 */	b lbl_802E1424
lbl_802E13B8:
/* 802E13B8 002DE2F8  D0 81 00 08 */	stfs f4, 8(r1)
/* 802E13BC 002DE2FC  80 81 00 08 */	lwz r4, 8(r1)
/* 802E13C0 002DE300  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 802E13C4 002DE304  3C 00 7F 80 */	lis r0, 0x7f80
/* 802E13C8 002DE308  7C 03 00 00 */	cmpw r3, r0
/* 802E13CC 002DE30C  41 82 00 14 */	beq lbl_802E13E0
/* 802E13D0 002DE310  40 80 00 40 */	bge lbl_802E1410
/* 802E13D4 002DE314  2C 03 00 00 */	cmpwi r3, 0
/* 802E13D8 002DE318  41 82 00 20 */	beq lbl_802E13F8
/* 802E13DC 002DE31C  48 00 00 34 */	b lbl_802E1410
lbl_802E13E0:
/* 802E13E0 002DE320  54 80 02 7F */	clrlwi. r0, r4, 9
/* 802E13E4 002DE324  41 82 00 0C */	beq lbl_802E13F0
/* 802E13E8 002DE328  38 00 00 01 */	li r0, 1
/* 802E13EC 002DE32C  48 00 00 28 */	b lbl_802E1414
lbl_802E13F0:
/* 802E13F0 002DE330  38 00 00 02 */	li r0, 2
/* 802E13F4 002DE334  48 00 00 20 */	b lbl_802E1414
lbl_802E13F8:
/* 802E13F8 002DE338  54 80 02 7F */	clrlwi. r0, r4, 9
/* 802E13FC 002DE33C  41 82 00 0C */	beq lbl_802E1408
/* 802E1400 002DE340  38 00 00 05 */	li r0, 5
/* 802E1404 002DE344  48 00 00 10 */	b lbl_802E1414
lbl_802E1408:
/* 802E1408 002DE348  38 00 00 03 */	li r0, 3
/* 802E140C 002DE34C  48 00 00 08 */	b lbl_802E1414
lbl_802E1410:
/* 802E1410 002DE350  38 00 00 04 */	li r0, 4
lbl_802E1414:
/* 802E1414 002DE354  2C 00 00 01 */	cmpwi r0, 1
/* 802E1418 002DE358  40 82 00 0C */	bne lbl_802E1424
/* 802E141C 002DE35C  3C 60 80 45 */	lis r3, lbl_80450AE0@ha
/* 802E1420 002DE360  C0 83 0A E0 */	lfs f4, lbl_80450AE0@l(r3)
lbl_802E1424:
/* 802E1424 002DE364  D0 9D 00 08 */	stfs f4, 8(r29)
/* 802E1428 002DE368  C0 3D 00 08 */	lfs f1, 8(r29)
/* 802E142C 002DE36C  C0 02 C6 48 */	lfs f0, lbl_80456048-_SDA2_BASE_(r2)
/* 802E1430 002DE370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E1434 002DE374  40 81 00 30 */	ble lbl_802E1464
/* 802E1438 002DE378  2C 06 00 01 */	cmpwi r6, 1
/* 802E143C 002DE37C  40 82 00 20 */	bne lbl_802E145C
/* 802E1440 002DE380  C0 1D 00 00 */	lfs f0, 0(r29)
/* 802E1444 002DE384  EC 00 08 24 */	fdivs f0, f0, f1
/* 802E1448 002DE388  D0 1D 00 00 */	stfs f0, 0(r29)
/* 802E144C 002DE38C  C0 3D 00 04 */	lfs f1, 4(r29)
/* 802E1450 002DE390  C0 1D 00 08 */	lfs f0, 8(r29)
/* 802E1454 002DE394  EC 01 00 24 */	fdivs f0, f1, f0
/* 802E1458 002DE398  D0 1D 00 04 */	stfs f0, 4(r29)
lbl_802E145C:
/* 802E145C 002DE39C  C0 02 C6 48 */	lfs f0, lbl_80456048-_SDA2_BASE_(r2)
/* 802E1460 002DE3A0  D0 1D 00 08 */	stfs f0, 8(r29)
lbl_802E1464:
/* 802E1464 002DE3A4  C0 1D 00 08 */	lfs f0, 8(r29)
/* 802E1468 002DE3A8  C0 22 C6 28 */	lfs f1, lbl_80456028-_SDA2_BASE_(r2)
/* 802E146C 002DE3AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E1470 002DE3B0  40 81 00 5C */	ble lbl_802E14CC
/* 802E1474 002DE3B4  C0 1D 00 04 */	lfs f0, 4(r29)
/* 802E1478 002DE3B8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802E147C 002DE3BC  40 82 00 28 */	bne lbl_802E14A4
/* 802E1480 002DE3C0  C0 1D 00 00 */	lfs f0, 0(r29)
/* 802E1484 002DE3C4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E1488 002DE3C8  40 81 00 10 */	ble lbl_802E1498
/* 802E148C 002DE3CC  38 00 40 00 */	li r0, 0x4000
/* 802E1490 002DE3D0  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 802E1494 002DE3D4  48 00 00 38 */	b lbl_802E14CC
lbl_802E1498:
/* 802E1498 002DE3D8  38 00 C0 00 */	li r0, -16384
/* 802E149C 002DE3DC  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 802E14A0 002DE3E0  48 00 00 2C */	b lbl_802E14CC
lbl_802E14A4:
/* 802E14A4 002DE3E4  C0 3D 00 00 */	lfs f1, 0(r29)
/* 802E14A8 002DE3E8  FC 40 00 50 */	fneg f2, f0
/* 802E14AC 002DE3EC  48 08 B2 75 */	bl atan2
/* 802E14B0 002DE3F0  FC 20 08 18 */	frsp f1, f1
/* 802E14B4 002DE3F4  C0 02 C6 4C */	lfs f0, lbl_8045604C-_SDA2_BASE_(r2)
/* 802E14B8 002DE3F8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802E14BC 002DE3FC  FC 00 00 1E */	fctiwz f0, f0
/* 802E14C0 002DE400  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802E14C4 002DE404  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802E14C8 002DE408  B0 1D 00 0C */	sth r0, 0xc(r29)
lbl_802E14CC:
/* 802E14CC 002DE40C  7F A3 EB 78 */	mr r3, r29
/* 802E14D0 002DE410  2C 1E 00 00 */	cmpwi r30, 0
/* 802E14D4 002DE414  38 00 00 10 */	li r0, 0x10
/* 802E14D8 002DE418  40 82 00 08 */	bne lbl_802E14E0
/* 802E14DC 002DE41C  38 00 00 18 */	li r0, 0x18
lbl_802E14E0:
/* 802E14E0 002DE420  7F E4 04 30 */	srw r4, r31, r0
/* 802E14E4 002DE424  48 00 00 1D */	bl getButton__Q210JUTGamePad6CStickFUl
/* 802E14E8 002DE428  39 61 00 40 */	addi r11, r1, 0x40
/* 802E14EC 002DE42C  48 08 0D 3D */	bl _restgpr_29
/* 802E14F0 002DE430  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802E14F4 002DE434  7C 08 03 A6 */	mtlr r0
/* 802E14F8 002DE438  38 21 00 40 */	addi r1, r1, 0x40
/* 802E14FC 002DE43C  4E 80 00 20 */	blr 
