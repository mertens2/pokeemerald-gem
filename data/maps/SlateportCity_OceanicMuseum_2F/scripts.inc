SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Stern
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BeReady
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_BALL_TRADE
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Stern
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	getpartysize
# 0 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis2
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14:
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2
	return

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10:
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11:
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15:
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, SlateportCity_OceanicMuseum_2F_Text_WeCantDoThat, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2::
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_2
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_1:
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Unknown
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Unknown
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Archie
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, Common_Movement_FaceAwayPlayer
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Archie
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_gt SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_6
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_5:
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 1
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_2:
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WeCantBeatUp
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_6:
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Player
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ShouldI
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_5


# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_CAPT_STERN, 1
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_1, 3
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkitem ITEM_TM56
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	giveitem ITEM_TM56
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done::
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hace mucho, se creó en el medio del mar\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "una fábrica flotante que dio trabajo a\l"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "más de cien personas, sin embargo…\p"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Cerró, y ahora es hogar de muchos\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon.$"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Amo este museo!\p"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A veces me pregunto si recibirán\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "donaciones, tengo muchos objetos\l"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marinos interesantes que encontré\l"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "buceando.\p"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ah, toma este por escucharme!$"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2:
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No tengo mucha idea de que es una...\n"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Emeté?\p"
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Pero seguro que te sirve de algo!$"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Qué lindo el submarino!\p"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Me pregunto cómo lo convertirán en\n"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bebida!$"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 1,” dice la\n"
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua de\n"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "océano, y explica porqué algunos\l"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon viven en agua salada, y otros\l"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "en dulce.$"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 2,” dice la\n"
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua, también,\n"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pero explica que el agua tiene millones\l"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de pequeñísimos Pokémon llamados\l"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“plankton,” que sirven de comida para\l"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon marinos.\p"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "También hay una etiqueta que dice:\p"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Evelyn, deja de tomarte el agua de\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "plankton, te vas a enfermar,” seguido\l"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de una cara triste dibujada.$"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una bola de goma que se expande y\n"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "contrae.\p"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el mar, el peso del agua crea\n"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "presión.”\p"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Mientras más profundo se va, más\n"
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fuerte es dicha presión.”\p"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el fondo del mar, hay Pokémon que ni\n"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "huesos tienen, o que poseen\l"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exoesqueletos. Esto es para adaptarse\l"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "a la increíblemente fuerte presión del\l"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fondo marino.\p"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sólo se conoce el 1% de dicho fondo.”$"
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MAQUETA DE HOENN”\p"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es una maquetita de Hoenn.\p"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Dónde estará Littleroot?$"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Al museo le hacen falta figuritas de\n"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon raros del fondo del mar.$"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Qué bueno que el museo no tiene\nfiguritas de Tentacool.$"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“FERRY SS MAREA”\p"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una maqueta del Ferry que construyó\n"
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "el Capitán Stern.$"
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“RÉPLICA DE SUBMARINO”\p"
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es un submarino usado para\n"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expediciones en el fondo del mar.$"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“CÁMARA DE ESCAPE”\p"
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sirve para escapar de una nave o\n"
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "submarino en situación crítica.\p"
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Unas escrituras parecen haber sido\n"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "hechas en la cámara, pero están\l"
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "borrosas:\p"
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A D-v-n le i-p-rt- m-s -- d-n--o q--\n"
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "n---t-a s-g---d-d.\p"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "--s cá---as -- e----e ---n m-ra----e\n"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "e-té-i--s.$"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SS ANNE”\p"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una nave que viaja de Kanto a\n"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "otras regiones cada año.\p"
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hay algo escrito en fibrón:\p"
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No regresará jamás... Firma, Joven Chano\p"
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡JA, SE LA CREYERON!\p"
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "................\p"
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Maldito Joven Chano...$"
