MagmaHideout_4F_Sign_GroudonSleepingPeacefully::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_unset FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, MagmaHideout_4F_Sign_GroudonSleepingPeacefully_2
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Sign_GroudonSleepingPeacefully_Text_1
MagmaHideout_4F_Sign_GroudonSleepingPeacefully_1:
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
	return

MagmaHideout_4F_Sign_GroudonSleepingPeacefully_2:
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Sign_GroudonSleepingPeacefully_Text_0
	goto MagmaHideout_4F_Sign_GroudonSleepingPeacefully_1


MagmaHideout_4F_EventScript_Winona::
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Tabitha
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_0
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_1
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_2, MSGBOX_INTERRUPT
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_3
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_4
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_5, MSGBOX_INTERRUPT
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_6
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_TEAM_MAGMA_SIDE, VAR_TEAM_AQUA_SIDE
	goto_if_gt MagmaHideout_4F_EventScript_Winona_1
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_10, MSGBOX_YESNO
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaHideout_4F_EventScript_Winona_7
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_TEAM_MAGMA_SIDE, 1
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_LetThemFightM
	return

MagmaHideout_4F_EventScript_Winona_1:
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_7, MSGBOX_YESNO
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaHideout_4F_EventScript_Winona_4
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	subvar VAR_TEAM_MAGMA_SIDE, 1
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_9
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_LetThemFightM
	return

MagmaHideout_4F_EventScript_Winona_4:
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_TEAM_MAGMA_SIDE, 1
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Winona_Text_8
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return

MagmaHideout_4F_EventScript_Winona_7:
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	subvar VAR_TEAM_MAGMA_SIDE, 1
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_AgainstWinona
	return


MagmaHideout_4F_EventScript_LetThemFightM::
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_0
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_1
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, MagmaHideout_4F_Movement_WinonaAttack
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieJumpBack
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, MagmaHideout_4F_Movement_TabithaWorry
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_2
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieLookAround
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Tabitha
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_3
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieRun
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, MagmaHideout_4F_Movement_TabithaOutWay
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_4
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_SetInvisible
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieLookAround
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, MagmaHideout_4F_Movement_MaxieLookAround
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_5
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_LetThemFightM_Text_6
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 6
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 5
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 3
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 2
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 3
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 4
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	return


MagmaHideout_4F_EventScript_AgainstWinona::
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_AgainstWinona_Text_0
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_WinonaDefeated
	return


MagmaHideout_4F_EventScript_WithWinona::
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_WithWinona_Text_0
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_LetThemFightM
	return


# 205 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_WinonaAttack:
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_in_place_right
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_right
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_right
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_left
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_left
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
	step_end

# 215 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieJumpBack:
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_2_right
	step_end

# 220 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaWorry:
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_right
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_up
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_in_place_faster_left
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_in_place_faster_right
	step_end

# 229 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaOutWay:
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_8
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_down
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 238 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieRun:
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_in_place_left
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_left
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_faster_left
	step_end

MagmaHideout_4F_EventScript_DoGroudonAwakening::
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 0
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 7
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject 1
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 1, MagmaHideout_4F_Movement_GroudonApproach
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 270 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 272 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 1, MagmaHideout_4F_Movement_GroudonExit
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 1
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 277 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, MagmaHideout_4F_Movement_MaxieLookAround
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, MagmaHideout_4F_Movement_MaxieLookAround
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, MagmaHideout_4F_Movement_MaxieLookAround
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_0
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_1
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_2
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_3
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_4
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 16
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 9, Common_Movement_SetInvisible
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Maxie
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_5
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 6
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 5
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 2
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 3
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject 4
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	return


MagmaHideout_4F_EventScript_WinonaDefeated::
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	namebox Winona
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_WinonaDefeated_Text_0
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	hidenamebox
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToMaxie
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_DoGroudonAwakening
	return


# 355 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanToMaxie:
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/MagmaHideout_4F/scripts.pory"

# 361 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 364 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_WINONA, 7
# 369 "data/maps/MagmaHideout_4F/scripts.pory"

# 370 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 372 "data/maps/MagmaHideout_4F/scripts.pory"

# 373 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 376 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 386 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 388 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 390 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 391 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 393 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 395 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 396 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 397 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 398 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 400 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 401 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 402 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 403 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 404 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 407 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 408 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 409 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 411 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 412 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 413 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 414 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 415 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 416 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 418 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 419 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 420 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 421 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 422 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 423 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 424 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 425 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 426 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 427 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 428 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 429 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 430 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 431 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 432 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 433 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 434 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 435 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 436 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 437 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 438 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 439 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 440 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 441 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 442 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 443 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 444 "data/maps/MagmaHideout_4F/scripts.pory"

# 445 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 446 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 447 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 448 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 449 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 450 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 451 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 452 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 453 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 454 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 455 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 456 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 457 "data/maps/MagmaHideout_4F/scripts.pory"

# 458 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 459 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 460 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 461 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 462 "data/maps/MagmaHideout_4F/scripts.pory"

# 463 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 464 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 465 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 466 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 467 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 468 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 469 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 470 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 471 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 472 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 473 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 474 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 475 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 476 "data/maps/MagmaHideout_4F/scripts.pory"

# 477 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 478 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 479 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 480 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 481 "data/maps/MagmaHideout_4F/scripts.pory"

# 482 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 483 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 484 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 485 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 486 "data/maps/MagmaHideout_4F/scripts.pory"

# 487 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 488 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 489 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 491 "data/maps/MagmaHideout_4F/scripts.pory"

# 492 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 493 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 494 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 495 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 496 "data/maps/MagmaHideout_4F/scripts.pory"

# 497 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 498 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 499 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 500 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 501 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 502 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 503 "data/maps/MagmaHideout_4F/scripts.pory"

# 504 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 505 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 506 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 507 "data/maps/MagmaHideout_4F/scripts.pory"

# 508 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 509 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 510 "data/maps/MagmaHideout_4F/scripts.pory"

# 511 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 512 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 513 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 514 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 515 "data/maps/MagmaHideout_4F/scripts.pory"

# 516 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 517 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 518 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 519 "data/maps/MagmaHideout_4F/scripts.pory"

# 520 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 521 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 522 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 523 "data/maps/MagmaHideout_4F/scripts.pory"

# 524 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 525 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 526 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 527 "data/maps/MagmaHideout_4F/scripts.pory"

# 528 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 529 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 530 "data/maps/MagmaHideout_4F/scripts.pory"

# 531 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 532 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 533 "data/maps/MagmaHideout_4F/scripts.pory"

# 534 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 535 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 536 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 537 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 538 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 539 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 540 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 541 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 542 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 543 "data/maps/MagmaHideout_4F/scripts.pory"

# 544 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 545 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 546 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 547 "data/maps/MagmaHideout_4F/scripts.pory"

# 548 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 549 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 550 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 551 "data/maps/MagmaHideout_4F/scripts.pory"

# 552 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 553 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
# 554 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 555 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 556 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This BLUE ORB is what you sought.\n"
# 557 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 558 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the BLUE ORB.\n"
# 559 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 560 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 561 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 562 "data/maps/MagmaHideout_4F/scripts.pory"

# 563 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 564 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 565 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 566 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 567 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 568 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 569 "data/maps/MagmaHideout_4F/scripts.pory"

# 570 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 571 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 572 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 573 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 574 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 575 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 576 "data/maps/MagmaHideout_4F/scripts.pory"

# 577 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 578 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 579 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 580 "data/maps/MagmaHideout_4F/scripts.pory"

# 581 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 582 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 583 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 584 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 585 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 586 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 587 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 588 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 589 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 590 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 591 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 592 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 593 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"

MagmaHideout_4F_Sign_GroudonSleepingPeacefully_Text_0:
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon aún duerme, se ve bastante\n"
	.string "tranquilo.\p"
	.string "Te preguntas si valdría la pena dormir\n"
	.string "para la posteridad... Se ve relajante...\p"
	.string "¡No! ¡Tienes familia! ¡Asegúrate de que\n"
	.string "también te acompañen en tu sueño\l"
	.string "primero!$"

MagmaHideout_4F_Sign_GroudonSleepingPeacefully_Text_1:
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon fue despertado. ¡No pierdas\n"
	.string "tiempo! ¡Haz algo!\p"
	.string "... ...\n"
	.string "Pero no puedes evitar sentir lástima\l"
	.string "por él. Estaba durmiendo tan tranquilo...$"

MagmaHideout_4F_EventScript_Winona_Text_0:
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Jefe! ¡Es {SHAKE_SCREEN 2 3 2 1}ella!\p"
	.string "¡La líder de la División Delta!$"

MagmaHideout_4F_EventScript_Winona_Text_1:
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hola, Maxie, ¡Tanto tiempo!\n"
	.string "¿Tienes un momento?\p"
	.string "¡M{SHAKE_SCREEN 6 6 2 3}MMGGGHAA{SHAKE_SCREEN 2 8 2 0}AAAAHHH!$"

MagmaHideout_4F_EventScript_Winona_Text_2:
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Winona! ¿Estás-{PAUSE 30}?$"

MagmaHideout_4F_EventScript_Winona_Text_3:
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ugh- ¿¡No puedes echar a tu estúpido\n"
	.string "Admin para tener una conversación\l"
	.string "normal!?$"

MagmaHideout_4F_EventScript_Winona_Text_4:
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Está... {PAUSE 30}Empeorando... {PAUSE 30}...{PAUSE 30}\p"
	.string "... ... ...\p"
	.string "Discúlpame, Maxie...$"

MagmaHideout_4F_EventScript_Winona_Text_5:
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Winona...{PAUSE 30}\p"
	.string "Detén esta locura, y descansa. No\n"
	.string "puedes seguir así...\p"
	.string "Y no te preocupes, aliviaré el dolor del\n"
	.string "mundo.\p"
	.string "Sólo déjame despertar a Groudon,\n"
	.string "y-{PAUSE 30}$"

MagmaHideout_4F_EventScript_Winona_Text_6:
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{SHAKE_SCREEN 6 6 2 2}¡NO!\p"
	.string "¡Tus soluciones no han funcionado\n"
	.string "jamás, {SHAKE_SCREEN 3 3 1 0}¿Qué te hace pensar que lo harán\l"
	.string "ahora, Maxie?\p"
	.string "¿No estás satisfecho con los problemas\n"
	.string "que causaste entonces?$"

MagmaHideout_4F_EventScript_Winona_Text_7:
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR PLAYER}(Parece que están por combatir.\n"
	.string "¿Deseas ayudar a Maxie?)$"

MagmaHideout_4F_EventScript_Winona_Text_8:
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Quédate fuera de esto, Tabitha.$"

MagmaHideout_4F_EventScript_Winona_Text_9:
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Vamos, Tabitha! ¡Con todo!$"

MagmaHideout_4F_EventScript_Winona_Text_10:
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR PLAYER}(Parece que están por combatir.\n"
	.string "¿Deseas ayudar a Winona?)$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_0:
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡No tengo tiempo para esto!\p"
	.string "¡Cada segundo que perdamos, {COLOR BLUE}él{COLOR DARK_GRAY}...$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_1:
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Je... Siempre igual...\p"
	.string "{SHAKE_SCREEN 3 3 3 4}¡GRAAHH!$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_2:
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ouughh...$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_3:
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "No me diga que...$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_4:
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{TEXT_SPEED 3}Con mi {COLOR BLUE}{PLAY_SE SE_PIN}Flora {COLOR RED}Bis{COLOR GREEN}mu{COLOR BLUE}to{COLOR DARK_GRAY}... {TEXT_SPEED 1} ¡Resolveré todo!$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_5:
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{TEXT_SPEED 3}Winona se lo llevó... {COLOR RED}{TEXT_SPEED 1}El Orbe Rojo{COLOR DARK_GRAY}...\p"
	.string "Con el poder que tiene ahora y esa\n"
	.string "{TEXT_SPEED 5}“Flora Bismuto”{TEXT_SPEED 1} que mencionó...\p"
	.string "¡El resultado podría ser catastrófico!\p"
	.string "¡Hay que avisarle a Archie\n"
	.string "inmediatamente! ¡Quizá con él, y el\l"
	.string "poder del {COLOR BLUE}Pokémon Legendario{COLOR DARK_GRAY}, podamos\l"
	.string "ganarle...$"

MagmaHideout_4F_EventScript_LetThemFightM_Text_6:
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Deberías ir a buscar a Archie en su Base\n"
	.string "Secreta...$"

MagmaHideout_4F_EventScript_AgainstWinona_Text_0:
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tú eres {PLAYER}, ¿No?\p"
	.string "Aquí no soy la Líder del Gimnasio, y no\n"
	.string "tengo el privilegio de jugar limpio.$"

MagmaHideout_4F_EventScript_WithWinona_Text_0:
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Será así, eh? ¡Se arrepentirán de\n"
	.string "esto!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_0:
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡¿Porqué lo hiciste?!\n"
	.string "¿No sabes lo que acabas de desatar en\l"
	.string "Hooenn?\p"
	.string "¿Has olvidado lo que pasó la última vez?$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_1:
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Crees que haría algo sin informarme?\n"
	.string "Tengo el Orbe Rojo en mi poder, por lo\l"
	.string "que Groudon sucumbirá a él y recobrará\l"
	.string "su poder primigenio.\p"
	.string "Con ese poder, daré a la human{PAUSE 5}-{PAUSE 30}$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_2:
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡IDIOTA!\n"
	.string "¡El Orbe hace a Groudon imposible de\l"
	.string "controlar!\p"
	.string "Con él, planeaba modificar nuestra\n"
	.string "realidad...\p"
	.string "Me daría el poder de arreglarlo todo...\n"
	.string "¡Y LO ARRUINASTE!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_3:
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡¿Estás loca!? ¿Modificar la realidad?\n"
	.string "¡Eso es imposible!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_4:
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Con mi Flora Bismuto no lo es...\p"
	.string "Pero necesita más poder. Ahora, tendré\n"
	.string "que arriesgarme con sólo el Orbe Azul,\l"
	.string "ADEMÁS de lidiar con Groudon, ¡Todo\l"
	.string "gracias a tu ignorancia!$"

MagmaHideout_4F_EventScript_DoGroudonAwakening_Text_5:
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Archie!\p"
	.string "¡Él seguro ya encontró a Kyogre!\p"
	.string "{PLAYER}, si lo que dice Winona es\n"
	.string "cierto... ¡Hay que detenerla a ella y a\l"
	.string "Archie!\p"
	.string "Yo saldré a controlar a Groudon.$"

MagmaHideout_4F_EventScript_WinonaDefeated_Text_0:
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "UGHHH... El dolor sigue fuerte...\p"
	.string "¿Porqué... te has entrometido?\p"
	.string "Acaso...$"
