#ifndef D_D_ITEM_H
#define D_D_ITEM_H

#include "dolphin/types.h"

class dEnemyItem_c {
public:
    static void setItemData(u8* data) { mData = data; }

    static u8* mData;
};

void execItemGet(u8 item_id);

void item_func_HEART();
void item_func_GREEN_RUPEE();
void item_func_BLUE_RUPEE();
void item_func_YELLOW_RUPEE();
void item_func_RED_RUPEE();
void item_func_PURPLE_RUPEE();
void item_func_ORANGE_RUPEE();
void item_func_SILVER_RUPEE();
void item_func_S_MAGIC();
void item_func_L_MAGIC();
void item_func_BOMB_5();
void item_func_BOMB_10();
void item_func_BOMB_20();
void item_func_BOMB_30();
void item_func_ARROW_10();
void item_func_ARROW_20();
void item_func_ARROW_30();
void item_func_ARROW_1();
void item_func_PACHINKO_SHOT();
void item_func_WATER_BOMB_5();
void item_func_WATER_BOMB_10();
void item_func_WATER_BOMB_20();
void item_func_WATER_BOMB_30();
void item_func_BOMB_INSECT_5();
void item_func_BOMB_INSECT_10();
void item_func_BOMB_INSECT_20();
void item_func_BOMB_INSECT_30();
void item_func_RECOVER_FAILY();
void item_func_TRIPLE_HEART();
void item_func_SMALL_KEY();
void item_func_KAKERA_HEART();
void item_func_UTUWA_HEART();
void item_func_MAP();
void item_func_COMPUS();
void item_func_DUNGEON_EXIT();
void item_func_BOSS_KEY();
void item_func_DUNGEON_BACK();
void item_func_SWORD();
void item_func_MASTER_SWORD();
void item_func_WOOD_SHIELD();
void item_func_SHIELD();
void item_func_HYLIA_SHIELD();
void item_func_TKS_LETTER();
void item_func_WEAR_CASUAL();
void item_func_WEAR_KOKIRI();
void item_func_ARMOR();
void item_func_WEAR_ZORA();
void item_func_MAGIC_LV1();
void item_func_DUNGEON_EXIT_2();
void item_func_WALLET_LV1();
void item_func_WALLET_LV2();
void item_func_WALLET_LV3();
void item_func_ZORAS_JEWEL();
void item_func_HAWK_EYE();
void item_func_WOOD_STICK();
void item_func_BOOMERANG();
void item_func_SPINNER();
void item_func_IRONBALL();
void item_func_BOW();
void item_func_HOOKSHOT();
void item_func_HVY_BOOTS();
void item_func_COPY_ROD();
void item_func_W_HOOKSHOT();
void item_func_KANTERA();
void item_func_LIGHT_SWORD();
void item_func_FISHING_ROD_1();
void item_func_PACHINKO();
void item_func_COPY_ROD_2();
void item_func_BOMB_BAG_LV2();
void item_func_BOMB_BAG_LV1();
void item_func_BOMB_IN_BAG();
void item_func_LIGHT_ARROW();
void item_func_ARROW_LV1();
void item_func_ARROW_LV2();
void item_func_ARROW_LV3();
void item_func_LURE_ROD();
void item_func_BOMB_ARROW();
void item_func_HAWK_ARROW();
void item_func_BEE_ROD();
void item_func_JEWEL_ROD();
void item_func_WORM_ROD();
void item_func_JEWEL_BEE_ROD();
void item_func_JEWEL_WORM_ROD();
void item_func_EMPTY_BOTTLE();
void item_func_RED_BOTTLE();
void item_func_GREEN_BOTTLE();
void item_func_BLUE_BOTTLE();
void item_func_MILK_BOTTLE();
void item_func_HALF_MILK_BOTTLE();
void item_func_OIL_BOTTLE();
void item_func_WATER_BOTTLE();
void item_func_OIL_BOTTLE2();
void item_func_RED_BOTTLE2();
void item_func_UGLY_SOUP();
void item_func_HOT_SPRING();
void item_func_FAIRY_BOTTLE();
void item_func_HOT_SPRING2();
void item_func_OIL2();
void item_func_OIL();
void item_func_NORMAL_BOMB();
void item_func_WATER_BOMB();
void item_func_POKE_BOMB();
void item_func_FAIRY_DROP();
void item_func_WORM();
void item_func_DROP_BOTTLE();
void item_func_BEE_CHILD();
void item_func_CHUCHU_RARE();
void item_func_CHUCHU_RED();
void item_func_CHUCHU_BLUE();
void item_func_CHUCHU_GREEN();
void item_func_CHUCHU_YELLOW();
void item_func_CHUCHU_PURPLE();
void item_func_LV1_SOUP();
void item_func_LV2_SOUP();
void item_func_LV3_SOUP();
void item_func_LETTER();
void item_func_BILL();
void item_func_WOOD_STATUE();
void item_func_IRIAS_PENDANT();
void item_func_HORSE_FLUTE();
void item_func_RAFRELS_MEMO();
void item_func_ASHS_SCRIBBLING();
void item_func_CHUCHU_YELLOW2();
void item_func_OIL_BOTTLE3();
void item_func_SHOP_BEE_CHILD();
void item_func_CHUCHU_BLACK();
void item_func_LIGHT_DROP();
void item_func_DROP_CONTAINER();
void item_func_DROP_CONTAINER02();
void item_func_DROP_CONTAINER03();
void item_func_FILLED_CONTAINER();
void item_func_MIRROR_PIECE_2();
void item_func_MIRROR_PIECE_3();
void item_func_MIRROR_PIECE_4();
void item_func_SMELL_YELIA_POUCH();
void item_func_SMELL_PUMPKIN();
void item_func_SMELL_POH();
void item_func_SMELL_FISH();
void item_func_SMELL_CHILDREN();
void item_func_SMELL_MEDICINE();
void item_func_M_BEETLE();
void item_func_F_BEETLE();
void item_func_M_BUTTERFLY();
void item_func_F_BUTTERFLY();
void item_func_M_STAG_BEETLE();
void item_func_F_STAG_BEETLE();
void item_func_M_GRASSHOPPER();
void item_func_F_GRASSHOPPER();
void item_func_M_NANAFUSHI();
void item_func_F_NANAFUSHI();
void item_func_M_DANGOMUSHI();
void item_func_F_DANGOMUSHI();
void item_func_M_MANTIS();
void item_func_F_MANTIS();
void item_func_M_LADYBUG();
void item_func_F_LADYBUG();
void item_func_M_SNAIL();
void item_func_F_SNAIL();
void item_func_M_DRAGONFLY();
void item_func_F_DRAGONFLY();
void item_func_M_ANT();
void item_func_F_ANT();
void item_func_M_MAYFLY();
void item_func_F_MAYFLY();
void item_func_POU_SPIRIT();
void item_func_ANCIENT_DOCUMENT();
void item_func_AIR_LETTER();
void item_func_ANCIENT_DOCUMENT2();
void item_func_LV7_DUNGEON_EXIT();
void item_func_LINKS_SAVINGS();
void item_func_SMALL_KEY2();
void item_func_POU_FIRE1();
void item_func_POU_FIRE2();
void item_func_POU_FIRE3();
void item_func_POU_FIRE4();
void item_func_BOSSRIDER_KEY();
void item_func_TOMATO_PUREE();
void item_func_TASTE();
void item_func_LV5_BOSS_KEY();
void item_func_SURFBOARD();
void item_func_KANTERA2();
void item_func_L2_KEY_PIECES1();
void item_func_L2_KEY_PIECES2();
void item_func_L2_KEY_PIECES3();
void item_func_KEY_OF_CARAVAN();
void item_func_LV2_BOSS_KEY();
void item_func_KEY_OF_FILONE();
void item_func_noentry();

int item_getcheck_func_HEART();
int item_getcheck_func_GREEN_RUPEE();
int item_getcheck_func_BLUE_RUPEE();
int item_getcheck_func_YELLOW_RUPEE();
int item_getcheck_func_RED_RUPEE();
int item_getcheck_func_PURPLE_RUPEE();
int item_getcheck_func_ORANGE_RUPEE();
int item_getcheck_func_SILVER_RUPEE();
int item_getcheck_func_S_MAGIC();
int item_getcheck_func_L_MAGIC();
int item_getcheck_func_BOMB_5();
int item_getcheck_func_BOMB_10();
int item_getcheck_func_BOMB_20();
int item_getcheck_func_BOMB_30();
int item_getcheck_func_ARROW_10();
int item_getcheck_func_ARROW_20();
int item_getcheck_func_ARROW_30();
int item_getcheck_func_ARROW_1();
int item_getcheck_func_PACHINKO_SHOT();
int item_getcheck_func_WATER_BOMB_5();
int item_getcheck_func_WATER_BOMB_10();
int item_getcheck_func_WATER_BOMB_20();
int item_getcheck_func_WATER_BOMB_30();
int item_getcheck_func_BOMB_INSECT_5();
int item_getcheck_func_BOMB_INSECT_10();
int item_getcheck_func_BOMB_INSECT_20();
int item_getcheck_func_BOMB_INSECT_30();
int item_getcheck_func_RECOVER_FAILY();
int item_getcheck_func_TRIPLE_HEART();
int item_getcheck_func_SMALL_KEY();
int item_getcheck_func_KAKERA_HEART();
int item_getcheck_func_UTUWA_HEART();
int item_getcheck_func_MAP();
int item_getcheck_func_COMPUS();
int item_getcheck_func_DUNGEON_EXIT();
int item_getcheck_func_BOSS_KEY();
int item_getcheck_func_DUNGEON_BACK();
int item_getcheck_func_SWORD();
int item_getcheck_func_MASTER_SWORD();
int item_getcheck_func_WOOD_SHIELD();
int item_getcheck_func_SHIELD();
int item_getcheck_func_HYLIA_SHIELD();
int item_getcheck_func_TKS_LETTER();
int item_getcheck_func_WEAR_CASUAL();
int item_getcheck_func_WEAR_KOKIRI();
int item_getcheck_func_ARMOR();
int item_getcheck_func_WEAR_ZORA();
int item_getcheck_func_MAGIC_LV1();
int item_getcheck_func_DUNGEON_EXIT_2();
int item_getcheck_func_WALLET_LV1();
int item_getcheck_func_WALLET_LV2();
int item_getcheck_func_WALLET_LV3();
int item_getcheck_func_ZORAS_JEWEL();
int item_getcheck_func_HAWK_EYE();
int item_getcheck_func_WOOD_STICK();
int item_getcheck_func_BOOMERANG();
int item_getcheck_func_SPINNER();
int item_getcheck_func_IRONBALL();
int item_getcheck_func_BOW();
int item_getcheck_func_HOOKSHOT();
int item_getcheck_func_HVY_BOOTS();
int item_getcheck_func_COPY_ROD();
int item_getcheck_func_W_HOOKSHOT();
int item_getcheck_func_KANTERA();
int item_getcheck_func_LIGHT_SWORD();
int item_getcheck_func_FISHING_ROD_1();
int item_getcheck_func_PACHINKO();
int item_getcheck_func_COPY_ROD_2();
int item_getcheck_func_BOMB_BAG_LV2();
int item_getcheck_func_BOMB_BAG_LV1();
int item_getcheck_func_BOMB_IN_BAG();
int item_getcheck_func_LIGHT_ARROW();
int item_getcheck_func_ARROW_LV1();
int item_getcheck_func_ARROW_LV2();
int item_getcheck_func_ARROW_LV3();
int item_getcheck_func_LURE_ROD();
int item_getcheck_func_BOMB_ARROW();
int item_getcheck_func_HAWK_ARROW();
int item_getcheck_func_BEE_ROD();
int item_getcheck_func_JEWEL_ROD();
int item_getcheck_func_WORM_ROD();
int item_getcheck_func_JEWEL_BEE_ROD();
int item_getcheck_func_JEWEL_WORM_ROD();
int item_getcheck_func_EMPTY_BOTTLE();
int item_getcheck_func_RED_BOTTLE();
int item_getcheck_func_GREEN_BOTTLE();
int item_getcheck_func_BLUE_BOTTLE();
int item_getcheck_func_MILK_BOTTLE();
int item_getcheck_func_HALF_MILK_BOTTLE();
int item_getcheck_func_OIL_BOTTLE();
int item_getcheck_func_WATER_BOTTLE();
int item_getcheck_func_OIL_BOTTLE2();
int item_getcheck_func_RED_BOTTLE2();
int item_getcheck_func_UGLY_SOUP();
int item_getcheck_func_HOT_SPRING();
int item_getcheck_func_FAIRY_BOTTLE();
int item_getcheck_func_HOT_SPRING2();
int item_getcheck_func_OIL2();
int item_getcheck_func_OIL();
int item_getcheck_func_NORMAL_BOMB();
int item_getcheck_func_WATER_BOMB();
int item_getcheck_func_POKE_BOMB();
int item_getcheck_func_FAIRY_DROP();
int item_getcheck_func_WORM();
int item_getcheck_func_DROP_BOTTLE();
int item_getcheck_func_BEE_CHILD();
int item_getcheck_func_CHUCHU_RARE();
int item_getcheck_func_CHUCHU_RED();
int item_getcheck_func_CHUCHU_BLUE();
int item_getcheck_func_CHUCHU_GREEN();
int item_getcheck_func_CHUCHU_YELLOW();
int item_getcheck_func_CHUCHU_PURPLE();
int item_getcheck_func_LV1_SOUP();
int item_getcheck_func_LV2_SOUP();
int item_getcheck_func_LV3_SOUP();
int item_getcheck_func_LETTER();
int item_getcheck_func_BILL();
int item_getcheck_func_WOOD_STATUE();
int item_getcheck_func_IRIAS_PENDANT();
int item_getcheck_func_HORSE_FLUTE();
int item_getcheck_func_RAFRELS_MEMO();
int item_getcheck_func_ASHS_SCRIBBLING();
int item_getcheck_func_CHUCHU_YELLOW2();
int item_getcheck_func_OIL_BOTTLE3();
int item_getcheck_func_SHOP_BEE_CHILD();
int item_getcheck_func_CHUCHU_BLACK();
int item_getcheck_func_LIGHT_DROP();
int item_getcheck_func_DROP_CONTAINER();
int item_getcheck_func_DROP_CONTAINER02();
int item_getcheck_func_DROP_CONTAINER03();
int item_getcheck_func_FILLED_CONTAINER();
int item_getcheck_func_MIRROR_PIECE_2();
int item_getcheck_func_MIRROR_PIECE_3();
int item_getcheck_func_MIRROR_PIECE_4();
int item_getcheck_func_SMELL_YELIA_POUCH();
int item_getcheck_func_SMELL_PUMPKIN();
int item_getcheck_func_SMELL_POH();
int item_getcheck_func_SMELL_FISH();
int item_getcheck_func_SMELL_CHILDREN();
int item_getcheck_func_SMELL_MEDICINE();
int item_getcheck_func_M_BEETLE();
int item_getcheck_func_F_BEETLE();
int item_getcheck_func_M_BUTTERFLY();
int item_getcheck_func_F_BUTTERFLY();
int item_getcheck_func_M_STAG_BEETLE();
int item_getcheck_func_F_STAG_BEETLE();
int item_getcheck_func_M_GRASSHOPPER();
int item_getcheck_func_F_GRASSHOPPER();
int item_getcheck_func_M_NANAFUSHI();
int item_getcheck_func_F_NANAFUSHI();
int item_getcheck_func_M_DANGOMUSHI();
int item_getcheck_func_F_DANGOMUSHI();
int item_getcheck_func_M_MANTIS();
int item_getcheck_func_F_MANTIS();
int item_getcheck_func_M_LADYBUG();
int item_getcheck_func_F_LADYBUG();
int item_getcheck_func_M_SNAIL();
int item_getcheck_func_F_SNAIL();
int item_getcheck_func_M_DRAGONFLY();
int item_getcheck_func_F_DRAGONFLY();
int item_getcheck_func_M_ANT();
int item_getcheck_func_F_ANT();
int item_getcheck_func_M_MAYFLY();
int item_getcheck_func_F_MAYFLY();
int item_getcheck_func_POU_SPIRIT();
int item_getcheck_func_ANCIENT_DOCUMENT();
int item_getcheck_func_AIR_LETTER();
int item_getcheck_func_ANCIENT_DOCUMENT2();
int item_getcheck_func_LV7_DUNGEON_EXIT();
int item_getcheck_func_LINKS_SAVINGS();
int item_getcheck_func_SMALL_KEY2();
int item_getcheck_func_POU_FIRE1();
int item_getcheck_func_POU_FIRE2();
int item_getcheck_func_POU_FIRE3();
int item_getcheck_func_POU_FIRE4();
int item_getcheck_func_BOSSRIDER_KEY();
int item_getcheck_func_TOMATO_PUREE();
int item_getcheck_func_TASTE();
int item_getcheck_func_LV5_BOSS_KEY();
int item_getcheck_func_SURFBOARD();
int item_getcheck_func_KANTERA2();
int item_getcheck_func_L2_KEY_PIECES1();
int item_getcheck_func_L2_KEY_PIECES2();
int item_getcheck_func_L2_KEY_PIECES3();
int item_getcheck_func_KEY_OF_CARAVAN();
int item_getcheck_func_LV2_BOSS_KEY();
int item_getcheck_func_KEY_OF_FILONE();
int item_getcheck_func_noentry();

int checkItemGet(u8, int);
BOOL isHeart(u8 item_no);
int isBomb(u8);
int isArrow(u8);
int addBombCount(u8, u8);
BOOL isBottleItem(u8 item_no);
u8 check_itemno(int i_itemNo);

#endif /* D_D_ITEM_H */
