# 3 "data/scripts/trainer_battle.pory"

# 4 "data/scripts/trainer_battle.pory"

# 5 "data/scripts/trainer_battle.pory"
EventScript_StartTrainerApproach::
# 6 "data/scripts/trainer_battle.pory"
	selectapproachingtrainer
# 7 "data/scripts/trainer_battle.pory"
	lockfortrainer
# 8 "data/scripts/trainer_battle.pory"
EventScript_TrainerApproach::
# 9 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 10 "data/scripts/trainer_battle.pory"
	special DoTrainerApproach
# 11 "data/scripts/trainer_battle.pory"
	waitstate
# 12 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 13 "data/scripts/trainer_battle.pory"

# 14 "data/scripts/trainer_battle.pory"
EventScript_TryDoNormalTrainerBattle::
# 15 "data/scripts/trainer_battle.pory"
	lock
# 16 "data/scripts/trainer_battle.pory"
	faceplayer
# 17 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 18 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 19 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 20 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoNormalTrainerBattle
# 21 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 22 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 23 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 24 "data/scripts/trainer_battle.pory"

# 25 "data/scripts/trainer_battle.pory"
EventScript_NoNormalTrainerBattle::
# 26 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 27 "data/scripts/trainer_battle.pory"

# 28 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleTrainerBattle::
# 29 "data/scripts/trainer_battle.pory"
	lock
# 30 "data/scripts/trainer_battle.pory"
	faceplayer
# 31 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 32 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 33 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, FALSE, EventScript_NoDoubleTrainerBattle
# 34 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 35 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleBattle
# 36 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 37 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 38 "data/scripts/trainer_battle.pory"
	goto EventScript_ShowTrainerIntroMsg
# 39 "data/scripts/trainer_battle.pory"

# 40 "data/scripts/trainer_battle.pory"
EventScript_NotEnoughMonsForDoubleBattle::
# 41 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 42 "data/scripts/trainer_battle.pory"
	waitmessage
# 43 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 44 "data/scripts/trainer_battle.pory"
	release
# 45 "data/scripts/trainer_battle.pory"
	end
# 46 "data/scripts/trainer_battle.pory"

# 47 "data/scripts/trainer_battle.pory"
EventScript_NoDoubleTrainerBattle::
# 48 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 49 "data/scripts/trainer_battle.pory"

# 50 "data/scripts/trainer_battle.pory"
EventScript_DoNoIntroTrainerBattle::
# 51 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 52 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 53 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 54 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 55 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 56 "data/scripts/trainer_battle.pory"

# 57 "data/scripts/trainer_battle.pory"
EventScript_TryDoRematchBattle::
# 58 "data/scripts/trainer_battle.pory"
	call EventScript_RevealTrainer
# 59 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 60 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoRematchTrainerBattle
# 61 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 62 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 63 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 64 "data/scripts/trainer_battle.pory"
	waitmessage
# 65 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 66 "data/scripts/trainer_battle.pory"
	special BattleSetup_StartRematchBattle
# 67 "data/scripts/trainer_battle.pory"
	waitstate
# 68 "data/scripts/trainer_battle.pory"
	releaseall
# 69 "data/scripts/trainer_battle.pory"
	end
# 70 "data/scripts/trainer_battle.pory"

# 71 "data/scripts/trainer_battle.pory"
EventScript_NoRematchTrainerBattle::
# 72 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 73 "data/scripts/trainer_battle.pory"

# 74 "data/scripts/trainer_battle.pory"
EventScript_TryDoDoubleRematchBattle::
# 75 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 76 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_NoDoubleRematchTrainerBattle
# 77 "data/scripts/trainer_battle.pory"
	special HasEnoughMonsForDoubleBattle
# 78 "data/scripts/trainer_battle.pory"
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, EventScript_NotEnoughMonsForDoubleRematchBattle
# 79 "data/scripts/trainer_battle.pory"
	special PlayTrainerEncounterMusic
# 80 "data/scripts/trainer_battle.pory"
	special SetTrainerFacingDirection
# 81 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 82 "data/scripts/trainer_battle.pory"
	waitmessage
# 83 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 84 "data/scripts/trainer_battle.pory"
	special BattleSetup_StartRematchBattle
# 85 "data/scripts/trainer_battle.pory"
	waitstate
# 86 "data/scripts/trainer_battle.pory"
	releaseall
# 87 "data/scripts/trainer_battle.pory"
	end
# 88 "data/scripts/trainer_battle.pory"

# 89 "data/scripts/trainer_battle.pory"
EventScript_NoDoubleRematchTrainerBattle::
# 90 "data/scripts/trainer_battle.pory"
	gotopostbattlescript
# 91 "data/scripts/trainer_battle.pory"

# 92 "data/scripts/trainer_battle.pory"
EventScript_NotEnoughMonsForDoubleRematchBattle::
# 93 "data/scripts/trainer_battle.pory"
	special ShowTrainerCantBattleSpeech
# 94 "data/scripts/trainer_battle.pory"
	waitmessage
# 95 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 96 "data/scripts/trainer_battle.pory"
	release
# 97 "data/scripts/trainer_battle.pory"
	end
# 98 "data/scripts/trainer_battle.pory"

# 99 "data/scripts/trainer_battle.pory"
EventScript_RevealTrainer::
# 100 "data/scripts/trainer_battle.pory"
	applymovement VAR_LAST_TALKED, Movement_RevealTrainer
# 101 "data/scripts/trainer_battle.pory"
	waitmovement 0
# 102 "data/scripts/trainer_battle.pory"
	return
# 103 "data/scripts/trainer_battle.pory"

# 104 "data/scripts/trainer_battle.pory"
Movement_RevealTrainer:
# 105 "data/scripts/trainer_battle.pory"
	reveal_trainer
# 106 "data/scripts/trainer_battle.pory"
	step_end
# 107 "data/scripts/trainer_battle.pory"

# 108 "data/scripts/trainer_battle.pory"
EventScript_ShowTrainerIntroMsg::
# 109 "data/scripts/trainer_battle.pory"
	special ShowTrainerIntroSpeech
# 110 "data/scripts/trainer_battle.pory"
	waitmessage
# 111 "data/scripts/trainer_battle.pory"
	waitbuttonpress
# 112 "data/scripts/trainer_battle.pory"
	special TryPrepareSecondApproachingTrainer
# 113 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_TrainerApproach
# 114 "data/scripts/trainer_battle.pory"
	goto EventScript_DoTrainerBattle
# 115 "data/scripts/trainer_battle.pory"

# 116 "data/scripts/trainer_battle.pory"
EventScript_DoTrainerBattle::
# 117 "data/scripts/trainer_battle.pory"
	dotrainerbattle
# 118 "data/scripts/trainer_battle.pory"
	@ Below battle mode check only needed in FRLG
# 119 "data/scripts/trainer_battle.pory"
	specialvar VAR_RESULT, GetTrainerBattleMode
# 120 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_SINGLE, EventScript_EndTrainerBattle
# 121 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT, EventScript_EndTrainerBattle
# 122 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, EventScript_EndTrainerBattle
# 123 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, EventScript_EndTrainerBattle
# 124 "data/scripts/trainer_battle.pory"
	goto_if_eq VAR_RESULT, TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, EventScript_EndTrainerBattle
# 125 "data/scripts/trainer_battle.pory"
EventScript_EndTrainerBattle::
# 126 "data/scripts/trainer_battle.pory"
	gotobeatenscript
# 127 "data/scripts/trainer_battle.pory"
	releaseall
# 128 "data/scripts/trainer_battle.pory"
	end
