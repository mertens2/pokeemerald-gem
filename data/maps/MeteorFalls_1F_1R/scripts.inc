MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Unknown
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_AndThatsWhy
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Unknown
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_Understood
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Player
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_FamiliarVoice
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Magma
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerRescue
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ThisIsAllIHave
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerWhatDoIDo
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Player
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerRightJustWatch
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Magma
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Unknown
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Magma
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MagmaConfusion
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_8:
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12:
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Aqua
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_GotCarriedAway
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Magma
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Archie
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20:
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_unset FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_18:
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieNeverHelped
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15:
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	hidenamebox
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_MET_PROF_COZMO
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addvar VAR_TEAM_AQUA_SIDE, 1
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerRightHelp
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_3, MeteorFalls_1F_1R_Text_WhatIsThisChild
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	namebox Magma
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatIsThisYOU
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ShutUp
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9:
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 9, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_8

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_16:
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieHelpedBothTimes
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17:
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieHelpedBeforeNotNow
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19:
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_TEAM_AQUA_SIDE, 1
	goto_if_ge MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_18

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22:
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_TEAM_AQUA_SIDE, 1
	goto_if_ge MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_16
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20


# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerRescue:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Cozmo$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ayudar$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ver qué pasa$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Hacer algo!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "No hacer nada$"
