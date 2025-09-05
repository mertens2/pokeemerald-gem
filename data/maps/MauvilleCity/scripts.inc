MauvilleCity_EventScript_Wally::
# 7 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 8 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_Wally_2
MauvilleCity_EventScript_Wally_1:
# 11 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 12 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 13 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 14 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 15 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 16 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 17 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 18 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 20 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 21 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 22 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 24 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 25 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 27 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 29 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 30 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_Wally_2:
# 9 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyRequestBattleAgain
	goto MauvilleCity_EventScript_Wally_1


MauvilleCity_EventScript_BattleWallyPrompt::
# 36 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
# 40 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DeclineWallyBattle
MauvilleCity_EventScript_BattleWallyPrompt_1:
# 42 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 43 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 44 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 45 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_7
# 47 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_8
MauvilleCity_EventScript_BattleWallyPrompt_5:
	end

MauvilleCity_EventScript_BattleWallyPrompt_2:
# 37 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_BattleWally
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_7:
# 46 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_5

MauvilleCity_EventScript_BattleWallyPrompt_8:
# 48 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_5


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 54 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 55 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth1
# 56 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth1
# 57 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 61 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 62 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 63 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 64 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 65 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 67 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 68 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth2
# 69 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 71 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 72 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 73 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_StartScottScene
# 75 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 76 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 77 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth2
# 78 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 84 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 85 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast1
# 86 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast1
# 87 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 91 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 94 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 95 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 97 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast2
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 101 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 102 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_StartScottScene
# 104 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 106 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast2
# 107 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_StartScottScene::
# 114 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 115 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 117 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 118 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 119 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_StartScottScene_3
# 121 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_StartScottScene_4
MauvilleCity_EventScript_StartScottScene_1:
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 126 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 128 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottAParentShould, MSGBOX_DEFAULT
# 129 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 130 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AndWhoAreYou, MSGBOX_DEFAULT
# 131 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 132 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ImScott, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 134 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AndWhyDoICare, MSGBOX_DEFAULT
# 135 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 136 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottDefendsWally, MSGBOX_DEFAULT
# 137 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 138 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_YouDontUnderstand, MSGBOX_DEFAULT
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 140 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 144 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Although, MSGBOX_DEFAULT
# 145 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 146 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 147 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
	return

MauvilleCity_EventScript_StartScottScene_3:
# 120 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerNorth
	goto MauvilleCity_EventScript_StartScottScene_1

MauvilleCity_EventScript_StartScottScene_4:
# 122 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerEast
	goto MauvilleCity_EventScript_StartScottScene_1


MauvilleCity_EventScript_DefeatedWally::
# 152 "data/maps/MauvilleCity/scripts.pory"
	removeobject 6
# 153 "data/maps/MauvilleCity/scripts.pory"
	removeobject 7
# 154 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 155 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 156 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 157 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 158 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 159 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 160 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottBadFamily
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 163 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYoureTheRealDeal
# 165 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 166 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 167 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 168 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DefeatedWally_3
# 170 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DefeatedWally_4
MauvilleCity_EventScript_DefeatedWally_1:
# 173 "data/maps/MauvilleCity/scripts.pory"
	removeobject 11
# 174 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_DefeatedWally_3:
# 169 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitNorth
	goto MauvilleCity_EventScript_DefeatedWally_1

MauvilleCity_EventScript_DefeatedWally_4:
# 171 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitEast
	goto MauvilleCity_EventScript_DefeatedWally_1


MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 179 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerNorth
# 181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 186 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm 11, 12, 13
# 187 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerEast
# 189 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitNorth
# 196 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitEast
# 203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 208 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 209 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 210 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 211 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 213 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 217 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 218 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 219 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 220 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return


MauvilleCity_EventScript_DeclineWallyBattle::
# 225 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 226 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 227 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 228 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 229 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 230 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 235 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 236 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 238 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 242 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 248 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 253 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 259 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 265 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 266 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 267 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 271 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 276 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 277 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 281 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 286 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 287 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 288 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 291 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 292 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 293 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 296 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 302 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 308 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 311 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 315 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 320 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 325 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 329 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 335 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 341 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 347 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 351 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 357 "data/maps/MauvilleCity/scripts.pory"

# 358 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 359 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 360 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 361 "data/maps/MauvilleCity/scripts.pory"

# 362 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 363 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 364 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 365 "data/maps/MauvilleCity/scripts.pory"

# 366 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 367 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 368 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 369 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 370 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 371 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 372 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 373 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 374 "data/maps/MauvilleCity/scripts.pory"
	end
# 375 "data/maps/MauvilleCity/scripts.pory"

# 376 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 377 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 378 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 379 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 380 "data/maps/MauvilleCity/scripts.pory"
	return
# 381 "data/maps/MauvilleCity/scripts.pory"

# 382 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 383 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 384 "data/maps/MauvilleCity/scripts.pory"
	end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 387 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 388 "data/maps/MauvilleCity/scripts.pory"
	end
# 389 "data/maps/MauvilleCity/scripts.pory"

# 390 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 391 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 392 "data/maps/MauvilleCity/scripts.pory"
	end
# 393 "data/maps/MauvilleCity/scripts.pory"

# 394 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 395 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 396 "data/maps/MauvilleCity/scripts.pory"
	end
# 397 "data/maps/MauvilleCity/scripts.pory"

# 398 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 399 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 400 "data/maps/MauvilleCity/scripts.pory"
	end
# 401 "data/maps/MauvilleCity/scripts.pory"

# 402 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 403 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 404 "data/maps/MauvilleCity/scripts.pory"
	end
# 405 "data/maps/MauvilleCity/scripts.pory"

# 406 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 407 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 408 "data/maps/MauvilleCity/scripts.pory"
	end
# 409 "data/maps/MauvilleCity/scripts.pory"

# 410 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 411 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 412 "data/maps/MauvilleCity/scripts.pory"
	end
# 413 "data/maps/MauvilleCity/scripts.pory"

# 414 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 415 "data/maps/MauvilleCity/scripts.pory"
	lock
# 416 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 417 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 418 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 419 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 420 "data/maps/MauvilleCity/scripts.pory"
	release
# 421 "data/maps/MauvilleCity/scripts.pory"
	end
# 422 "data/maps/MauvilleCity/scripts.pory"

# 423 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 424 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 425 "data/maps/MauvilleCity/scripts.pory"
	release
# 426 "data/maps/MauvilleCity/scripts.pory"
	end
# 427 "data/maps/MauvilleCity/scripts.pory"

# 428 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 429 "data/maps/MauvilleCity/scripts.pory"
	lock
# 430 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 431 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 432 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 433 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 434 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 435 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 436 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 437 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 438 "data/maps/MauvilleCity/scripts.pory"
	release
# 439 "data/maps/MauvilleCity/scripts.pory"
	end
# 440 "data/maps/MauvilleCity/scripts.pory"

# 441 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 442 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 443 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 444 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 445 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 446 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 447 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/MauvilleCity/scripts.pory"
	release
# 449 "data/maps/MauvilleCity/scripts.pory"
	end
# 450 "data/maps/MauvilleCity/scripts.pory"

# 451 "data/maps/MauvilleCity/scripts.pory"

# 452 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 453 "data/maps/MauvilleCity/scripts.pory"
	lock
# 454 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 455 "data/maps/MauvilleCity/scripts.pory"
	checkitem ITEM_TM55
# 456 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_EventScript_ReceivedThunderbolt
# 457 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 458 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 459 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 460 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 461 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 462 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 463 "data/maps/MauvilleCity/scripts.pory"
	release
# 464 "data/maps/MauvilleCity/scripts.pory"
	end
# 465 "data/maps/MauvilleCity/scripts.pory"

# 466 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 467 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 468 "data/maps/MauvilleCity/scripts.pory"
	release
# 469 "data/maps/MauvilleCity/scripts.pory"
	end
# 470 "data/maps/MauvilleCity/scripts.pory"

# 471 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 472 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 473 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM55
# 474 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 475 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 476 "data/maps/MauvilleCity/scripts.pory"
	release
# 477 "data/maps/MauvilleCity/scripts.pory"
	end
# 478 "data/maps/MauvilleCity/scripts.pory"

# 479 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 480 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 481 "data/maps/MauvilleCity/scripts.pory"
	release
# 482 "data/maps/MauvilleCity/scripts.pory"
	end
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 485 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 486 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 487 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 488 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 489 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 490 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 491 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 492 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 493 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 494 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 495 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 496 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 497 "data/maps/MauvilleCity/scripts.pory"
	end
# 498 "data/maps/MauvilleCity/scripts.pory"

# 499 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "Ah, {PAUSE 2}¡{PLAYER}!\p"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Que alegría verte aquí!\n"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Hasta se ve que estás hechando\l"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "chispas, BUAJAJAJAJA!\p"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Mira, mira, {PLAYER}, necesito que me\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "hagas un favor.\p"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "Hace tiempo, creé un lugar llamado\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "Nueva Mauville, pero por alguna razón,\l"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "el generador ha vuelto a encenderse…\l"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Y eso molesta a los Pokémon salvajes,\l"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "podría sobrecargarlos y causar\l"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "aprietos!\p"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "Necesito que vayas ahí y apagues el\n"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "generador. No puedo hacerlo yo porque\l"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "mis piernas ya no son lo que eran…\l"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "Así que toma estas Llaves, y apaga ese\l"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "generador por mí,{PAUSE 2} ¿Okay?$"
# 517 "data/maps/MauvilleCity/scripts.pory"

# 518 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ah, y no te preocupes!\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "Ese lugar es inseguro, pero no mortal.\l"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "Estarás bien, {PAUSE 2}¡No es como si un humano\l"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "pudiera sobrecargarse de electricidad\l"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "como un Voltorb, BUAJAJAJAJA!$"
# 524 "data/maps/MauvilleCity/scripts.pory"

# 525 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "¡BUAJAJAJAJA!\p"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Sabía que podrías!\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ahora, ten esta MT.\n"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "Contiene el movimiento Rayo Carga, que\l"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "subirá tu Ataque Especial en un nivel\l"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "después de usarse, {PAUSE 2}¿Muy útil, no?\p"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 534 "data/maps/MauvilleCity/scripts.pory"

# 535 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 538 "data/maps/MauvilleCity/scripts.pory"

# 539 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 559 "data/maps/MauvilleCity/scripts.pory"

# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 563 "data/maps/MauvilleCity/scripts.pory"

# 564 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 568 "data/maps/MauvilleCity/scripts.pory"

# 569 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 577 "data/maps/MauvilleCity/scripts.pory"

# 578 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 589 "data/maps/MauvilleCity/scripts.pory"

# 590 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
