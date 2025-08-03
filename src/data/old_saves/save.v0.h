#include "event_data.h"

struct SaveBlock2_v0
{
    /*0x00*/ u8 playerName[8 + 1];
    /*0x08*/ u8 playerGender; // MALE, FEMALE
    /*0x09*/ u8 specialSaveWarpFlags;
    /*0x0A*/ u8 playerTrainerId[4];
    /*0x0E*/ u16 playTimeHours;
    /*0x10*/ u8 playTimeMinutes;
    /*0x11*/ u8 playTimeSeconds;
    /*0x12*/ u8 playTimeVBlanks;
    /*0x13*/ u8 optionsButtonMode;  // OPTIONS_BUTTON_MODE_[NORMAL/LR/L_EQUALS_A]
    /*0x14*/ u16 optionsTextSpeed:3; // OPTIONS_TEXT_SPEED_[SLOW/MID/FAST]
             u16 optionsWindowFrameType:5; // Specifies one of the 20 decorative borders for text boxes
             u16 optionsSound:1; // OPTIONS_SOUND_[MONO/STEREO]
             u16 optionsBattleStyle:1; // OPTIONS_BATTLE_STYLE_[SHIFT/SET]
             u16 optionsBattleSceneOff:1; // whether battle animations are disabled
             u16 regionMapZoom:1; // whether the map is zoomed in
             u16 optionsUnitSystem:1;   //tx_optionsPlus
             u16 optionsHpBarSpeed:4;   //tx_optionsPlus
             u16 optionsExpBarSpeed:4;  //tx_optionsPlus
			 u16 optionsShinyOdds:3;
			 u16 optionsDifficulty:3;
    /*0x18*/ struct Pokedex pokedex;
    // /*0x90*/ u8 filler_90[0x8];
    /*0x98*/ struct Time localTimeOffset;
    /*0xA0*/ struct Time lastBerryTreeUpdate;
    /*0xA8*/ u32 gcnLinkFlags; // Read by Pokemon Colosseum/XD
    /*0xAC*/ u32 encryptionKey;
    /*0xB0*/ struct PlayersApprentice playerApprentice;
    /*0xDC*/ struct Apprentice apprentices[APPRENTICE_COUNT];
    /*0x1EC*/ struct BerryCrush berryCrush;
    /*0x1FC*/ struct PokemonJumpRecords pokeJump;
    /*0x20C*/ struct BerryPickingResults berryPick;
    /*0x21C*/ struct RankingHall1P hallRecords1P[HALL_FACILITIES_COUNT][FRONTIER_LVL_MODE_COUNT][HALL_RECORDS_COUNT]; // From record mixing.
    /*0x57C*/ struct RankingHall2P hallRecords2P[FRONTIER_LVL_MODE_COUNT][HALL_RECORDS_COUNT]; // From record mixing.
    /*0x624*/ u16 contestLinkResults[CONTEST_CATEGORIES_COUNT][CONTESTANT_COUNT];
    /*0x64C*/ struct BattleFrontier frontier;
    /*0x0F2C*/ u8 unlockedQuests[SIDE_QUEST_FLAGS_COUNT];
    /*0x????*/ u8 completedQuests[SIDE_QUEST_FLAGS_COUNT];
    /*0x????*/ u8 activeQuest;
    /*0xF2C*/ u8 itemFlags[ITEM_FLAGS_COUNT];
}; // sizeof=0xF2C

// extern struct SaveBlock2 *gSaveBlock2Ptr;


struct SaveBlock1_v0
{
    /*0x00*/ struct Coords16 pos;
    /*0x04*/ struct WarpData location;
    /*0x0C*/ struct WarpData continueGameWarp;
    /*0x14*/ struct WarpData dynamicWarp;
    /*0x1C*/ struct WarpData lastHealLocation; // used by white-out and teleport
    /*0x24*/ struct WarpData escapeWarp; // used by Dig and Escape Rope
    /*0x2C*/ u16 savedMusic;
    /*0x2E*/ u8 weather;
    /*0x2F*/ u8 weatherCycleStage;
    /*0x30*/ u8 flashLevel;
    /*0x32*/ u16 mapLayoutId;
    /*0x34*/ u16 mapView[0x100];
    /*0x234*/ u8 playerPartyCount;
    /*0x238*/ struct Pokemon playerParty[PARTY_SIZE];
    /*0x490*/ u32 money;
    /*0x494*/ u16 coins;
    /*0x496*/ u16 registeredItemSelect; // registered for use with SELECT button
    /*0x498*/ struct ItemSlot pcItems[PC_ITEMS_COUNT];
    /*0x560*/ struct ItemSlot bagPocket_Items[BAG_ITEMS_COUNT];
    /*0x5D8*/ struct ItemSlot bagPocket_KeyItems[BAG_KEYITEMS_COUNT];
    /*0x650*/ struct ItemSlot bagPocket_PokeBalls[BAG_POKEBALLS_COUNT];
    /*0x690*/ struct ItemSlot bagPocket_TMHM[BAG_TMHM_COUNT];
    /*0x790*/ struct ItemSlot bagPocket_Berries[BAG_BERRIES_COUNT];
    /*0x848*/ struct Pokeblock pokeblocks[POKEBLOCKS_COUNT];
    /*0x9BC*/ u16 berryBlenderRecords[3];
    /*0x9C2*/ u8 trainerType;
    /*0x9C8*/ u16 trainerRematchStepCounter;
    /*0x9CA*/ u8 trainerRematches[MAX_REMATCH_ENTRIES];
    /*0xA30*/ struct ObjectEvent objectEvents[OBJECT_EVENTS_COUNT];
    /*0xC70*/ struct ObjectEventTemplate objectEventTemplates[OBJECT_EVENT_TEMPLATES_COUNT];
    /*0x1270*/ u8 flags[NUM_FLAG_BYTES];
    /*0x139C*/ u16 vars[VARS_COUNT];
    /*0x159C*/ u32 gameStats[NUM_GAME_STATS];
    /*0x169C*/ struct BerryTree berryTrees[BERRY_TREES_COUNT];
    /*0x1A9C*/ struct SecretBase secretBases[SECRET_BASES_COUNT];
    /*0x271C*/ u8 playerRoomDecorations[DECOR_MAX_PLAYERS_HOUSE];
    /*0x2728*/ u8 playerRoomDecorationPositions[DECOR_MAX_PLAYERS_HOUSE];
    /*0x2734*/ u8 decorationDesks[10];
    /*0x273E*/ u8 decorationChairs[10];
    /*0x2748*/ u8 decorationPlants[10];
    /*0x2752*/ u8 decorationOrnaments[30];
    /*0x2770*/ u8 decorationMats[30];
    /*0x278E*/ u8 decorationPosters[10];
    /*0x2798*/ u8 decorationDolls[40];
    /*0x27C0*/ u8 decorationCushions[10];
    /*0x27CC*/ TVShow tvShows[TV_SHOWS_COUNT];
    /*0x2B50*/ PokeNews pokeNews[POKE_NEWS_COUNT];
    /*0x2B90*/ u16 outbreakPokemonSpecies;
    /*0x2B92*/ u8 outbreakLocationMapNum;
    /*0x2B93*/ u8 outbreakLocationMapGroup;
    /*0x2B94*/ u8 outbreakPokemonLevel;
    /*0x2B95*/ u8 outbreakUnused1;
    /*0x2B96*/ u16 outbreakUnused2;
    /*0x2B98*/ u16 outbreakPokemonMoves[MAX_MON_MOVES];
    /*0x2BA0*/ u8 outbreakUnused3;
    /*0x2BA1*/ u8 outbreakPokemonProbability;
    /*0x2BA2*/ u16 outbreakDaysLeft;
    /*0x2BA4*/ struct GabbyAndTyData gabbyAndTyData;
    /*0x2BB0*/ u16 easyChatProfile[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x2BBC*/ u16 easyChatBattleStart[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x2BC8*/ u16 easyChatBattleWon[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x2BD4*/ u16 easyChatBattleLost[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x2BE0*/ struct Mail mail[MAIL_COUNT];
    /*0x2E20*/ u8 additionalPhrases[NUM_ADDITIONAL_PHRASE_BYTES]; // bitfield for 33 additional phrases in easy chat system
    /*0x2E28*/ OldMan oldMan;
    /*0x2e64*/ struct DewfordTrend dewfordTrends[SAVED_TRENDS_COUNT];
    /*0x2e90*/ struct ContestWinner contestWinners[NUM_CONTEST_WINNERS]; // see CONTEST_WINNER_*
    /*0x3030*/ struct DayCare daycare;
    /*0x3150*/ struct LinkBattleRecords linkBattleRecords;
    /*0x31A8*/ u8 giftRibbons[GIFT_RIBBONS_COUNT];
    /*0x31B3*/ struct ExternalEventData externalEventData;
    /*0x31C7*/ struct ExternalEventFlags externalEventFlags;
    /*0x31DC*/ struct Roamer roamer;
    /*0x31F8*/ struct EnigmaBerry enigmaBerry;
    /*0x322C*/ struct MysteryGiftSave mysteryGift;
    // /*0x3???*/ u8 dexSeen[DEX_FLAGS_NO];
    // /*0x3???*/ u8 dexCaught[DEX_FLAGS_NO];
    // /*0x3???*/ u32 trainerHillTimes[4];
// =======
    /*0x3???*/ u8 dexSeen[NUM_DEX_FLAG_BYTES];
    /*0x3???*/ u8 dexCaught[NUM_DEX_FLAG_BYTES];
    /*0x3???*/ u32 trainerHillTimes[NUM_TRAINER_HILL_MODES];
    /*0x3???*/ struct RamScript ramScript;
    /*0x3???*/ struct RecordMixingGift recordMixingGift;
    /*0x3???*/ LilycoveLady lilycoveLady;
    /*0x3???*/ struct TrainerNameRecord trainerNameRecords[20];
    /*0x3???*/ u8 registeredTexts[UNION_ROOM_KB_ROW_COUNT][21];
    /*0x3???*/ struct TrainerHillSave trainerHill;
    /*0x3???*/ struct WaldaPhrase waldaPhrase;
                u8 registeredItemLastSelected:4; //max 16 items
                u8 registeredItemListCount:4;
                struct RegisteredItemSlot registeredItems[REGISTERED_ITEMS_MAX];
				struct Pokemon Empty;
				struct Pokemon BossTeam[PARTY_SIZE - 1];
               u8 dexNavChain;
    // sizeof: 0x3D88
};

// extern struct SaveBlock1* gSaveBlock1Ptr;

struct BoxPokemon_v0
{
    /*0x00*/ u32 personality;
    /*0x04*/ u32 otId;
    /*0x08*/ u8 nickname[POKEMON_NAME_LENGTH];
             u8 pokerus:1;
             u8 hasSpecies:1;
             u8 isEgg:1;
             u8 markings:4; // 15 combinations as per sAnims_MarkingCombo
    /*0x14*/ u8 otName[PLAYER_NAME_LENGTH];
    /*0x1B*/ u8 metLocation;    // better to not limit the number of map sections. this is actually used for friendship growth, too
    /*0x1C*/ u32 species:11;    // up to 2047 species. could probably go down to 10 bits...
             u32 heldItem:10;   // up to 1023 items. could probably be 9 bits if hold items are limited to IDs below 511
             u8 metLevel:7;
             u32 contestExp:9; // 0 - 510
    /*0x20*/ u32 experience:21;
             // u32 otGender:1;
    /*0x24*/ u32 move1:10;  // 1023 moves
             u32 move2:10;  // bits 11-20
             u32 move3:10;  // bits 21-30
    /*0x28*/ u16 move4:10;  // bits 31-40
    /*0x2A*/ u16 attackIV:5;    // 46-50
             u16 defenseIV:5;   // 51-55
             u16 speedIV:5;     // 56-60
    /*0x2C*/ u8 ppBonuses;
    /*0x2D*/ u8 friendship;
    /*0x2E*/ u8 pokeball:6;
             u8 abilityNum:2;
    /*0x2F*/ u8 hpEV:6;
    /*0x30*/ u8 attackEV:6;
    /*0x31*/ u8 defenseEV:6;
    /*0x32*/ u8 speedEV:6;
    /*0x33*/ u8 spAttackEV:6;
    /*0x34*/ u8 spDefenseEV:6; 
    /*0x35*/ u8 pp1:6;
             u8 pp2:6;
             u8 pp3:6;
             u8 pp4:6;
			 u8 coolCV:2;
			 u8 toughCV:2;
			 u8 smartCV:2;
			 u8 cuteCV:2;
			 u8 beautyCV:2;
			 u8 hiddenNature:5; // remain 10 bits
			 u8 hiddenPower:5; // remain 10 bits
}; /* size = 0x3C (56) bytes */

struct BattleFrontier_v0
{
    /*0x64C*/ struct EmeraldBattleTowerRecord towerPlayer;
    /*0x738*/ struct EmeraldBattleTowerRecord towerRecords[BATTLE_TOWER_RECORD_COUNT]; // From record mixing.
    /*0xBEB*/ struct BattleTowerInterview towerInterview;
    /*0xBEC*/ struct BattleTowerEReaderTrainer ereaderTrainer;
    /*0xCA8*/ u8 challengeStatus;
    /*0xCA9*/ u8 lvlMode:2;
    /*0xCA9*/ u8 challengePaused:1;
    /*0xCA9*/ u8 disableRecordBattle:1;
    /*0xCAA*/ u16 selectedPartyMons[MAX_FRONTIER_PARTY_SIZE];
    /*0xCB2*/ u16 curChallengeBattleNum; // Battle number / room number (Pike) / floor number (Pyramid)
    /*0xCB4*/ u16 trainerIds[20];
    /*0xCDC*/ u32 winStreakActiveFlags;
    /*0xCE0*/ u16 towerWinStreaks[4][FRONTIER_LVL_MODE_COUNT];
    /*0xCF0*/ u16 towerRecordWinStreaks[4][FRONTIER_LVL_MODE_COUNT];
    /*0xD00*/ u16 battledBrainFlags;
    /*0xD02*/ u16 towerSinglesStreak; // Never read
    /*0xD04*/ u16 towerNumWins; // Increments to MAX_STREAK but never read otherwise
    /*0xD06*/ u8 towerBattleOutcome;
    /*0xD07*/ u8 towerLvlMode;
    /*0xD08*/ u8 domeAttemptedSingles50:1;
    /*0xD08*/ u8 domeAttemptedSinglesOpen:1;
    /*0xD08*/ u8 domeHasWonSingles50:1;
    /*0xD08*/ u8 domeHasWonSinglesOpen:1;
    /*0xD08*/ u8 domeAttemptedDoubles50:1;
    /*0xD08*/ u8 domeAttemptedDoublesOpen:1;
    /*0xD08*/ u8 domeHasWonDoubles50:1;
    /*0xD08*/ u8 domeHasWonDoublesOpen:1;
    /*0xD09*/ u8 domeUnused;
    /*0xD0A*/ u8 domeLvlMode;
    /*0xD0B*/ u8 domeBattleMode;
    /*0xD0C*/ u16 domeWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xD14*/ u16 domeRecordWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xD1C*/ u16 domeTotalChampionships[2][FRONTIER_LVL_MODE_COUNT];
    /*0xD24*/ struct BattleDomeTrainer domeTrainers[DOME_TOURNAMENT_TRAINERS_COUNT];
    /*0xD64*/ u16 domeMonIds[DOME_TOURNAMENT_TRAINERS_COUNT][FRONTIER_PARTY_SIZE];
    /*0xDC4*/ u16 unused_DC4;
    /*0xDC6*/ u16 palacePrize;
    /*0xDC8*/ u16 palaceWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xDD0*/ u16 palaceRecordWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xDD8*/ u16 arenaPrize;
    /*0xDDA*/ u16 arenaWinStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xDDE*/ u16 arenaRecordStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xDE2*/ u16 factoryWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xDEA*/ u16 factoryRecordWinStreaks[2][FRONTIER_LVL_MODE_COUNT];
    /*0xDF6*/ u16 factoryRentsCount[2][FRONTIER_LVL_MODE_COUNT];
    /*0xDFA*/ u16 factoryRecordRentsCount[2][FRONTIER_LVL_MODE_COUNT];
    /*0xE02*/ u16 pikePrize;
    /*0xE04*/ u16 pikeWinStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xE08*/ u16 pikeRecordStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xE0C*/ u16 pikeTotalStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xE10*/ u8 pikeHintedRoomIndex:3;
    /*0xE10*/ u8 pikeHintedRoomType:4;
    /*0xE10*/ u8 pikeHealingRoomsDisabled:1;
    /*0xE12*/ u16 pikeHeldItemsBackup[FRONTIER_PARTY_SIZE];
    /*0xE18*/ u16 pyramidPrize;
    /*0xE1A*/ u16 pyramidWinStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xE1E*/ u16 pyramidRecordStreaks[FRONTIER_LVL_MODE_COUNT];
    /*0xE22*/ u16 pyramidRandoms[4];
    /*0xE2A*/ u8 pyramidTrainerFlags; // 1 bit for each trainer (MAX_PYRAMID_TRAINERS)
    /*0xE2C*/ struct PyramidBag pyramidBag;
    /*0xE68*/ u8 pyramidLightRadius;
    /*0xE6A*/ u16 verdanturfTentPrize;
    /*0xE6C*/ u16 fallarborTentPrize;
    /*0xE6E*/ u16 slateportTentPrize;
    /*0xE70*/ struct RentalMon rentalMons[FRONTIER_PARTY_SIZE * 2];
    /*0xEB8*/ u16 battlePoints;
    /*0xEBA*/ u16 cardBattlePoints;
    /*0xEBC*/ u32 battlesCount;
    /*0xEC0*/ u16 domeWinningMoves[DOME_TOURNAMENT_TRAINERS_COUNT];
    /*0xEE0*/ u8 trainerFlags;
    /*0xEE1*/ u8 opponentNames[FRONTIER_LVL_MODE_COUNT][PLAYER_NAME_LENGTH + 1];
    /*0xEF1*/ u8 opponentTrainerIds[FRONTIER_LVL_MODE_COUNT][TRAINER_ID_LENGTH];
    /*0xEF9*/ u8 unk_EF9:7; // Never read
    /*0xEF9*/ u8 savedGame:1;
    /*0xEFA*/ u8 unused_EFA;
    /*0xEFB*/ u8 unused_EFB;
    /*0xEFC*/ struct DomeMonData domePlayerPartyData[FRONTIER_PARTY_SIZE];
};

bool8 UpdateSave_v0_v1(const struct SaveSectorLocation *locations)
{
	u32 j, i;
	u8 level, boxess;
	const struct SaveBlock2_v0* sOldSaveBlock2Ptr = (struct SaveBlock2_v0*)(locations[SECTOR_ID_SAVEBLOCK2].data);
    const struct SaveBlock1_v0* sOldSaveBlock1Ptr = (struct SaveBlock1_v0*)(locations[SECTOR_ID_SAVEBLOCK1_START].data);
    const struct PokemonStorage* sOldPokemonStoragePtr = (struct PokemonStorage*)(locations[SECTOR_ID_PKMN_STORAGE_START].data);
    // const struct SaveSector_v0* sOldSaveSector_v0 = (struct SaveSector_v0*)(locations[SECTOR_ID_PKMN_STORAGE_START].data);
	
	#define COPY_FIELD(field) gSaveBlock2Ptr->field = sOldSaveBlock2Ptr->field
	#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock2Ptr->field, &gSaveBlock2Ptr->field, sizeof(gSaveBlock2Ptr->field))
	#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->field), ARRAY_COUNT(sOldSaveBlock2Ptr->field)); i++) gSaveBlock2Ptr->field[i] = sOldSaveBlock2Ptr->field[i];
    
	gSaveBlock2Ptr->_saveSentinel = 0xFF;
    gSaveBlock2Ptr->saveVersion = 1;
    gSaveBlock2Ptr->optionsTextSkip = 2;
    gSaveBlock2Ptr->customization[0] = 0;
    gSaveBlock2Ptr->customization[1] = 0;
    gSaveBlock2Ptr->customization[2] = 0;
    gSaveBlock2Ptr->customization[3] = 0;
    gSaveBlock2Ptr->customization[4] = 0;
	
	COPY_ARRAY(playerName);
    COPY_FIELD(playerGender);
    COPY_FIELD(specialSaveWarpFlags);
    COPY_ARRAY(playerTrainerId);
    COPY_BLOCK(playTimeHours);
    COPY_BLOCK(playTimeMinutes);
    COPY_BLOCK(playTimeSeconds);
    COPY_BLOCK(playTimeVBlanks);
    // COPY_FIELD(optionsButtonMode);
    gSaveBlock2Ptr->optionsTextSpeed = 3;
    COPY_FIELD(optionsWindowFrameType);
    COPY_FIELD(optionsSound);
    COPY_FIELD(optionsBattleStyle);
    COPY_FIELD(optionsBattleSceneOff);
    COPY_FIELD(regionMapZoom);
    COPY_FIELD(optionsUnitSystem);   //tx_optionsPlus
	COPY_FIELD(optionsHpBarSpeed);   //tx_optionsPlus
	COPY_FIELD(optionsExpBarSpeed);  //tx_optionsPlus
	COPY_FIELD(optionsShinyOdds);
	COPY_FIELD(optionsDifficulty);
    
    COPY_FIELD(pokedex);
    COPY_FIELD(localTimeOffset);
    COPY_FIELD(lastBerryTreeUpdate);
    // COPY_FIELD(gcnLinkFlags);
    COPY_FIELD(encryptionKey);
    COPY_FIELD(playerApprentice);
    COPY_BLOCK(apprentices);
    COPY_FIELD(berryCrush);
    COPY_FIELD(pokeJump);
    COPY_FIELD(berryPick);
    COPY_BLOCK(hallRecords1P);
    COPY_BLOCK(hallRecords2P);
    COPY_BLOCK(contestLinkResults);
    COPY_FIELD(berryPick);
    COPY_FIELD(berryPick);
    COPY_FIELD(frontier);
	

	#undef COPY_FIELD
	#undef COPY_BLOCK
	#undef COPY_ARRAY

	#define COPY_FIELD(field) gSaveBlock1Ptr->field = sOldSaveBlock1Ptr->field
	#define COPY_BLOCK(field) CpuCopy16(&sOldSaveBlock1Ptr->field, &gSaveBlock1Ptr->field, sizeof(gSaveBlock1Ptr->field))
	#define COPY_ARRAY(field) for(i = 0; i < min(ARRAY_COUNT(gSaveBlock1Ptr->field), ARRAY_COUNT(sOldSaveBlock1Ptr->field)); i++) gSaveBlock1Ptr->field[i] = sOldSaveBlock1Ptr->field[i];
    
    COPY_FIELD(pos);
    COPY_FIELD(location);
    COPY_FIELD(continueGameWarp);
    COPY_FIELD(dynamicWarp);
    COPY_FIELD(lastHealLocation);
    COPY_FIELD(escapeWarp);
    
    /** The pokemon structure hasn't changed at all this version, so
     *  we don't need to do anything special to copy the pokemon over. */
    COPY_FIELD(playerPartyCount);
    // COPY_ARRAY(playerParty);
	for(i = 0; i < min(ARRAY_COUNT(gSaveBlock1Ptr->playerParty), ARRAY_COUNT(sOldSaveBlock1Ptr->playerParty)); i++)
	{
		// Possibly convert BoxPokemon_v0 to BoxPokemon, if those are different
		gSaveBlock1Ptr->playerParty[i] = sOldSaveBlock1Ptr->playerParty[i];
		level = (GetMonData(&sOldSaveBlock1Ptr->playerParty[i], MON_DATA_MET_LEVEL) != 0);
		SetMonData(&gSaveBlock1Ptr->playerParty[i], MON_DATA_MET_LEVEL, &level);
		// level = &;
		SetMonData(&gSaveBlock1Ptr->playerParty[i], MON_DATA_OT_ID, &gSaveBlock2Ptr->playerTrainerId);
	}

    
    COPY_FIELD(money);
    COPY_FIELD(coins);
    COPY_FIELD(registeredItemSelect);
    COPY_FIELD(registeredItemLastSelected); //max 16 items
    COPY_FIELD(registeredItemListCount);
    COPY_ARRAY(registeredItems);
    
    /** Because we changed the PC items, it's not gonna be a straight copy. */
    COPY_ARRAY(pcItems);
    COPY_ARRAY(bagPocket_Items);
    COPY_ARRAY(bagPocket_KeyItems);
    COPY_ARRAY(bagPocket_PokeBalls);
    COPY_ARRAY(bagPocket_TMHM);
    COPY_ARRAY(bagPocket_Berries);
    
    COPY_BLOCK(pokeblocks);
    COPY_BLOCK(dexSeen);
    COPY_BLOCK(berryBlenderRecords);
    COPY_FIELD(trainerRematchStepCounter);
    COPY_BLOCK(trainerRematches);
    
    COPY_BLOCK(flags);
    COPY_BLOCK(vars);
    COPY_BLOCK(gameStats);
    COPY_BLOCK(berryTrees);
    COPY_BLOCK(secretBases);
    COPY_BLOCK(playerRoomDecorations);
    COPY_BLOCK(playerRoomDecorationPositions);
    COPY_BLOCK(decorationDesks);
    COPY_BLOCK(decorationChairs);
    COPY_BLOCK(decorationPlants);
    COPY_BLOCK(decorationOrnaments);
    COPY_BLOCK(decorationMats);
    COPY_BLOCK(decorationPosters);
    COPY_BLOCK(decorationDolls);
    COPY_BLOCK(decorationCushions);
    
    COPY_BLOCK(tvShows);
    COPY_BLOCK(pokeNews);
    COPY_FIELD(outbreakPokemonSpecies);
    COPY_FIELD(outbreakLocationMapNum);
    COPY_FIELD(outbreakLocationMapGroup);
    COPY_FIELD(outbreakPokemonLevel);
    // COPY_FIELD(outbreakUnused1);
    // COPY_FIELD(outbreakUnused2);
    COPY_BLOCK(outbreakPokemonMoves);
    // COPY_FIELD(outbreakUnused3);
    COPY_FIELD(outbreakPokemonProbability);
    COPY_FIELD(outbreakDaysLeft);
    COPY_FIELD(gabbyAndTyData);
    COPY_BLOCK(easyChatProfile);
    COPY_BLOCK(easyChatBattleStart);
    COPY_BLOCK(easyChatBattleWon);
    COPY_BLOCK(easyChatBattleLost);
    COPY_BLOCK(mail);
    COPY_BLOCK(additionalPhrases);
    
    COPY_FIELD(oldMan);
    COPY_BLOCK(dewfordTrends);
    COPY_BLOCK(contestWinners);
    COPY_FIELD(daycare);
    COPY_FIELD(linkBattleRecords);
    COPY_BLOCK(giftRibbons);
    COPY_FIELD(externalEventData);
    COPY_FIELD(externalEventFlags);
    COPY_FIELD(roamer);
    COPY_FIELD(enigmaBerry);
    COPY_FIELD(mysteryGift);
    COPY_BLOCK(trainerHillTimes);
    COPY_FIELD(ramScript);
    COPY_FIELD(recordMixingGift);
    COPY_BLOCK(dexCaught);
    COPY_FIELD(lilycoveLady);
    COPY_BLOCK(trainerNameRecords);
    COPY_BLOCK(registeredTexts);
    COPY_FIELD(trainerHill);
    COPY_FIELD(waldaPhrase);
    
	#undef COPY_FIELD
	#undef COPY_BLOCK
	#undef COPY_ARRAY
    
    /**
     * The pokemon structure hasn't changed at all this version, so
     * we can just assign across the old box storage to the new.  */ 
    // *gPokemonStoragePtr = *sOldPokemonStoragePtr;
	if (gSaveBlock2Ptr->saveVersion == 0 && !FlagGet(FLAG_VERSION_ONE_SAVEBLOCK))
		boxess = 22;
	else
		boxess = TOTAL_BOXES_COUNT+1;
	for (j=0;j<boxess;j++)
	{
		for(i = 0; i < 31; i++)
		{
			// Possibly convert BoxPokemon_v0 to BoxPokemon, if those are different
			gPokemonStoragePtr->boxes[j][i] = sOldPokemonStoragePtr->boxes[j][i];
			level = (GetBoxMonData(&sOldPokemonStoragePtr->boxes[j][i], MON_DATA_MET_LEVEL) != 0 ? 1 : 0);
			SetBoxMonData(&gPokemonStoragePtr->boxes[j][i], MON_DATA_MET_LEVEL, &level);
			// level = &gSaveBlock2Ptr->playerTrainerId;
			SetBoxMonData(&gPokemonStoragePtr->boxes[j][i], MON_DATA_OT_ID, &gSaveBlock2Ptr->playerTrainerId);
		}
	}
    
    /**
     * The most common kind of change that might happen between major versions are 
     * map changes. The save file usually saves the area around the player and 
     * event objects currently on the map, so that when the player resumes play, 
     * everything will be exactly where it was when they saved. But if the map has
     * changed at all, this means there could be incongruity between the saved
     * version of the map and the new version in the updated ROM. So to make it so
     * that the map reloads properly, we use the "Continue Game Warp" usually used
     * when the player clears the game to place the player at a known position and
     * with a newly loaded map and event objects. Here, we're using the last location
     * that the player healed, so the player will appear in the same spot they would
     * as if they blacked out. */
    SetContinueGameWarpStatus();
    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;
    
    return TRUE;

}