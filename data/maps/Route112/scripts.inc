Route112_EventScript_MagmaGrunts::
# 6 "data/maps/Route112/scripts.pory"
	lockall
# 7 "data/maps/Route112/scripts.pory"
	delay 40
# 8 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 9 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route112/scripts.pory"
	delay 20
# 11 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 12 "data/maps/Route112/scripts.pory"
	closemessage
# 13 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 14 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route112/scripts.pory"
	delay 40
# 16 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 17 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route112/scripts.pory"
	delay 20
# 19 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 20 "data/maps/Route112/scripts.pory"
	closemessage
# 21 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 22 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route112/scripts.pory"
	delay 40
# 24 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 25 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route112/scripts.pory"
	delay 20
# 27 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 28 "data/maps/Route112/scripts.pory"
	closemessage
# 29 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 30 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route112/scripts.pory"
	delay 40
# 32 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route112/scripts.pory"
	delay 20
# 35 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 36 "data/maps/Route112/scripts.pory"
	closemessage
# 37 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 38 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route112/scripts.pory"
	msgbox Common_Text_Realization
# 40 "data/maps/Route112/scripts.pory"
	closemessage
# 41 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_AreYouChallengingUs
# 45 "data/maps/Route112/scripts.pory"
	closemessage
	msgbox Route112_Text_WerePlentyStrong, MSGBOX_YESNO
# 0 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route112_EventScript_MagmaGrunts_2
# 62 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeCanDoBetter
Route112_EventScript_MagmaGrunts_1:
# 64 "data/maps/Route112/scripts.pory"
	releaseall
	end

Route112_EventScript_MagmaGrunts_2:
# 47 "data/maps/Route112/scripts.pory"
	battle_1_vs_2 TRAINER_GRUNT_MAGMA_ROUTE112_M, Route112_EventScript_MagmaGrunts_Text_0, TRAINER_GRUNT_MAGMA_ROUTE112_F, Route112_EventScript_MagmaGrunts_Text_1, TRUE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route112_EventScript_MagmaGrunts_5
# 55 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeToldYou
# 56 "data/maps/Route112/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 57 "data/maps/Route112/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 58 "data/maps/Route112/scripts.pory"
	waitmovement 0
	goto Route112_EventScript_MagmaGrunts_1

Route112_EventScript_MagmaGrunts_5:
# 49 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeCanDoBetter
# 50 "data/maps/Route112/scripts.pory"
	removeobject 1
# 51 "data/maps/Route112/scripts.pory"
	removeobject 6
# 52 "data/maps/Route112/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 3
	goto Route112_EventScript_MagmaGrunts_1


# 72 "data/maps/Route112/scripts.pory"

# 73 "data/maps/Route112/scripts.pory"

# 74 "data/maps/Route112/scripts.pory"

# 75 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 76 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 77 "data/maps/Route112/scripts.pory"
	.byte 0
# 78 "data/maps/Route112/scripts.pory"

# 79 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 80 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 81 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 82 "data/maps/Route112/scripts.pory"
	end
# 83 "data/maps/Route112/scripts.pory"

# 84 "data/maps/Route112/scripts.pory"

# 85 "data/maps/Route112/scripts.pory"

# 86 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 87 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 88 "data/maps/Route112/scripts.pory"
	end
# 89 "data/maps/Route112/scripts.pory"

# 90 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 91 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 92 "data/maps/Route112/scripts.pory"
	end
# 93 "data/maps/Route112/scripts.pory"

# 94 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 95 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 96 "data/maps/Route112/scripts.pory"
	end
# 97 "data/maps/Route112/scripts.pory"

# 98 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 99 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 100 "data/maps/Route112/scripts.pory"
	end
# 101 "data/maps/Route112/scripts.pory"

# 102 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 103 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 104 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route112/scripts.pory"
	end
# 106 "data/maps/Route112/scripts.pory"

# 107 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 108 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 109 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 110 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 111 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 112 "data/maps/Route112/scripts.pory"
	release
# 113 "data/maps/Route112/scripts.pory"
	end
# 114 "data/maps/Route112/scripts.pory"

# 115 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 116 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 117 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 119 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 120 "data/maps/Route112/scripts.pory"
	release
# 121 "data/maps/Route112/scripts.pory"
	end
# 122 "data/maps/Route112/scripts.pory"

# 123 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 124 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 125 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route112/scripts.pory"
	end
# 127 "data/maps/Route112/scripts.pory"

# 128 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 129 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 130 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route112/scripts.pory"
	end
# 132 "data/maps/Route112/scripts.pory"

# 133 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 134 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 135 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route112/scripts.pory"
	end
# 137 "data/maps/Route112/scripts.pory"

# 138 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 139 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 140 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route112/scripts.pory"
	end
# 142 "data/maps/Route112/scripts.pory"

# 143 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 144 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 145 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route112/scripts.pory"
	end
# 147 "data/maps/Route112/scripts.pory"

# 148 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 149 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 150 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 151 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 152 "data/maps/Route112/scripts.pory"

# 153 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 154 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 155 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 156 "data/maps/Route112/scripts.pory"

# 157 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 158 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 159 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 160 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 161 "data/maps/Route112/scripts.pory"

# 162 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 163 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 164 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"

Route112_EventScript_MagmaGrunts_Text_0:
# 47 "data/maps/Route112/scripts.pory"
	.string "¿¡Amor, viste eso!?$"

Route112_EventScript_MagmaGrunts_Text_1:
# 47 "data/maps/Route112/scripts.pory"
	.string "Sí... Creo que nos quedamos sin\n"
	.string "trabajo...$"
