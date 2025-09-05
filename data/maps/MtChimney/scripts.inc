MtChimney_MapScripts::
# 18 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME
# 22 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 38 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 24 "data/maps/MtChimney/scripts.pory"
	switch VAR_MT_CHIMNEY_STATE
# 25 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 28 "data/maps/MtChimney/scripts.pory"
	case 3, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 31 "data/maps/MtChimney/scripts.pory"
	case 5, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 34 "data/maps/MtChimney/scripts.pory"
	case 10, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareTeamMagmaCheating
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 29 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareDelta
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 32 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareGroudon
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 35 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareMaxieFreakOut
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 39 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_MT_CHIMNEY_STATE, 3, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 206 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_MT_CHIMNEY_STATE, 5, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 40 "data/maps/MtChimney/scripts.pory"
	lockall
# 41 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 42 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToDelta
# 43 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 44 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaPlan1
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaPlan2
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	applymovement 33, MtChimney_Movement_DeltaWalkAway3
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement 32, MtChimney_Movement_DeltaBlockWay
# 50 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_SortaFollowDelta
# 51 "data/maps/MtChimney/scripts.pory"
	closemessage
# 52 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 53 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtChimney/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 39
# 55 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerArrive2
# 56 "data/maps/MtChimney/scripts.pory"
	delay 48
# 57 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 58 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaYouCantPass
# 59 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 60 "data/maps/MtChimney/scripts.pory"
	closemessage
# 61 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 62 "data/maps/MtChimney/scripts.pory"
	addobject 33
# 63 "data/maps/MtChimney/scripts.pory"
	applymovement 33, MtChimney_Movement_DeltaWalkAway2
# 64 "data/maps/MtChimney/scripts.pory"
	delay 48
# 65 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 66 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaWereDoneHere
# 67 "data/maps/MtChimney/scripts.pory"
	waitmovement 33
# 68 "data/maps/MtChimney/scripts.pory"
	closemessage
# 69 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 70 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/MtChimney/scripts.pory"
	delay 16
# 72 "data/maps/MtChimney/scripts.pory"
	removeobject 32
# 73 "data/maps/MtChimney/scripts.pory"
	removeobject 33
# 74 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 32, 40, 0
# 75 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 33, 40, 0
# 76 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 2, 26, 38
# 77 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 29, 25, 38
# 78 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 22, 27, 38
# 79 "data/maps/MtChimney/scripts.pory"
	addobject 2
# 80 "data/maps/MtChimney/scripts.pory"
	addobject 29
# 81 "data/maps/MtChimney/scripts.pory"
	addobject 22
# 82 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/MtChimney/scripts.pory"
	delay 16
# 84 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 85 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieArrive
# 86 "data/maps/MtChimney/scripts.pory"
	delay 8
# 87 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 88 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 89 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 90 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 91 "data/maps/MtChimney/scripts.pory"
	delay 8
# 92 "data/maps/MtChimney/scripts.pory"
	closemessage
# 93 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 94 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement 2, MtChimney_Movement_PlayerArrive
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 98 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhoAreYou
# 99 "data/maps/MtChimney/scripts.pory"
	delay 32
# 100 "data/maps/MtChimney/scripts.pory"
	applymovement 29, MtChimney_Movement_PlayerArrive
# 101 "data/maps/MtChimney/scripts.pory"
	delay 8
# 102 "data/maps/MtChimney/scripts.pory"
	applymovement 22, MtChimney_Movement_PlayerArrive
# 103 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 104 "data/maps/MtChimney/scripts.pory"
	closemessage
# 105 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 106 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 107 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 108 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 109 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 110 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_FaceAwayPlayer
# 111 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtChimney/scripts.pory"
	namebox Magma
# 113 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceUp
# 114 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaGruntMaxieLost1
# 115 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 116 "data/maps/MtChimney/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceUp
# 117 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaGruntMaxieLost2
# 118 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 120 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIllSucceedAnyways
# 121 "data/maps/MtChimney/scripts.pory"
	delay 24
# 122 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 123 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 124 "data/maps/MtChimney/scripts.pory"
	closemessage
# 125 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 126 "data/maps/MtChimney/scripts.pory"
	applymovement 2, MtChimney_Movement_MaxieGoesToMachine
# 127 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerGetOut
# 128 "data/maps/MtChimney/scripts.pory"
	waitmovement 2
# 129 "data/maps/MtChimney/scripts.pory"
	delay 16
# 130 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 131 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieMachineNotWork
# 132 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 1, 26, 38
# 133 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 6, 25, 39
# 134 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 7, 27, 39
# 135 "data/maps/MtChimney/scripts.pory"
	addobject 1
# 136 "data/maps/MtChimney/scripts.pory"
	addobject 6
# 137 "data/maps/MtChimney/scripts.pory"
	addobject 7
# 138 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 139 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieArrives
# 140 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 141 "data/maps/MtChimney/scripts.pory"
	closemessage
# 142 "data/maps/MtChimney/scripts.pory"
	applymovement 1, MtChimney_Movement_PlayerArrive
# 143 "data/maps/MtChimney/scripts.pory"
	waitmovement 1
# 144 "data/maps/MtChimney/scripts.pory"
	applymovement 2, MtChimney_Movement_DeltaWalkAway2
# 145 "data/maps/MtChimney/scripts.pory"
	delay 8
# 146 "data/maps/MtChimney/scripts.pory"
	applymovement 6, MtChimney_Movement_PlayerArrive
# 147 "data/maps/MtChimney/scripts.pory"
	delay 4
# 148 "data/maps/MtChimney/scripts.pory"
	applymovement 7, MtChimney_Movement_PlayerArrive
# 149 "data/maps/MtChimney/scripts.pory"
	waitmovement 2
# 150 "data/maps/MtChimney/scripts.pory"
	delay 24
# 151 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToArchie
# 152 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 153 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 154 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 155 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 156 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 157 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 158 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 159 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 160 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 161 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 162 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 163 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/MtChimney/scripts.pory"
	delay 16
# 165 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToPlayer
# 166 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtChimney/scripts.pory"
	setobjectxy 1, 26, 31
# 168 "data/maps/MtChimney/scripts.pory"
	removeobject 2
# 169 "data/maps/MtChimney/scripts.pory"
	removeobject 29
# 170 "data/maps/MtChimney/scripts.pory"
	removeobject 22
# 171 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 172 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 173 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data/maps/MtChimney/scripts.pory"
	delay 16
# 175 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 176 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 177 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 178 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 179 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 180 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 181 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 182 "data/maps/MtChimney/scripts.pory"
	applymovement 1, MtChimney_Movement_LookAround
# 183 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieTellsGrunts
# 184 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 185 "data/maps/MtChimney/scripts.pory"
	namebox Aqua
# 186 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_WeLoveYouArchie
# 187 "data/maps/MtChimney/scripts.pory"
	closemessage
# 188 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 189 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/MtChimney/scripts.pory"
	delay 16
# 191 "data/maps/MtChimney/scripts.pory"
	removeobject 1
# 192 "data/maps/MtChimney/scripts.pory"
	removeobject 6
# 193 "data/maps/MtChimney/scripts.pory"
	removeobject 7
# 194 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 195 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 196 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 197 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 198 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 199 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 200 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 201 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 202 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 203 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 207 "data/maps/MtChimney/scripts.pory"
	lockall
# 208 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 210 "data/maps/MtChimney/scripts.pory"
	applymovement 25, Common_Movement_WalkDown
# 211 "data/maps/MtChimney/scripts.pory"
	applymovement 25, Common_Movement_SetInvisible
# 212 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 213 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 214 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_WalkDown
# 215 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 216 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_WalkDown
# 217 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 218 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_SetInvisible
# 219 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 220 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 221 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_WalkDown2
# 222 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 223 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_WalkDown
# 224 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 225 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_SetInvisible
# 226 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 227 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 228 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkLeft
# 229 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 230 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkDown2
# 231 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 232 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 233 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 234 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_SetInvisible
# 235 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 236 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 237 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkLeft2
# 238 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 239 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkDown2
# 240 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 241 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkDown
# 242 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 243 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_SetInvisible
# 244 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 245 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 246 "data/maps/MtChimney/scripts.pory"
	applymovement 30, MtChimney_Movement_NPCWalkToWarp
# 247 "data/maps/MtChimney/scripts.pory"
	applymovement 9, MtChimney_Movement_WatchNPCWalkToWarp
# 248 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_PanToGroudon
# 249 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 250 "data/maps/MtChimney/scripts.pory"
	delay 32
# 251 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 252 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 253 "data/maps/MtChimney/scripts.pory"
	waitmoncry
# 254 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 255 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 6
# 256 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 3
# 257 "data/maps/MtChimney/scripts.pory"
	warp MAP_JAGGED_PASS, 16, 19
# 258 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_OnTransition_PrepareGroudon::
# 265 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 25, 21, 40
# 266 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_DOWN
# 267 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 26, 21, 39
# 268 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 269 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 27, 21, 38
# 270 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 271 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 28, 22, 38
# 272 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_LEFT
# 273 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 29, 23, 38
# 274 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 29, MOVEMENT_TYPE_FACE_LEFT
# 275 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 9, 20, 40
# 276 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 34, 20, 6
# 277 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 278 "data/maps/MtChimney/scripts.pory"
	addobject 25
# 279 "data/maps/MtChimney/scripts.pory"
	addobject 26
# 280 "data/maps/MtChimney/scripts.pory"
	addobject 27
# 281 "data/maps/MtChimney/scripts.pory"
	addobject 28
# 282 "data/maps/MtChimney/scripts.pory"
	addobject 29
# 283 "data/maps/MtChimney/scripts.pory"
	addobject 30
# 284 "data/maps/MtChimney/scripts.pory"
	addobject 34
	return


MtChimney_OnTransition_PrepareMaxieFreakOut::
# 289 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 31, 12, 6
# 290 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 3, 13, 7
# 291 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 292 "data/maps/MtChimney/scripts.pory"
	addobject 31
# 293 "data/maps/MtChimney/scripts.pory"
	addobject 3
	return


MtChimney_EventScript_Trigger3::
# 297 "data/maps/MtChimney/scripts.pory"
	lockall
# 298 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 299 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 300 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 301 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 302 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 303 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 304 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 305 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 306 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieFreakOut
# 307 "data/maps/MtChimney/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 308 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 309 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 310 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaWeDontKnow
# 311 "data/maps/MtChimney/scripts.pory"
	applymovement 31, Common_Movement_WalkInPlaceRight
# 312 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 313 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 314 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneySolution
# 315 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 316 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 317 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 318 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 319 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 320 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 321 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 322 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieFreakOut2
# 323 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 324 "data/maps/MtChimney/scripts.pory"
	closemessage
# 325 "data/maps/MtChimney/scripts.pory"
	namebox Player
# 326 "data/maps/MtChimney/scripts.pory"
	msgbox Common_Text_Realization
# 327 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 328 "data/maps/MtChimney/scripts.pory"
	closemessage
# 329 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 330 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 331 "data/maps/MtChimney/scripts.pory"
	applymovement 31, Common_Movement_ExclamationMark
# 332 "data/maps/MtChimney/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 333 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 334 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 335 "data/maps/MtChimney/scripts.pory"
	applymovement 31, Common_Movement_WalkInPlaceFasterLeft
# 336 "data/maps/MtChimney/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 337 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 338 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 339 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 340 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 341 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieNoticePlayer
# 342 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 343 "data/maps/MtChimney/scripts.pory"
	closemessage
# 344 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_WHITE
# 345 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 346 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieAsIf
# 347 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 348 "data/maps/MtChimney/scripts.pory"
	closemessage
# 349 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 1, 10, 6
# 350 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 351 "data/maps/MtChimney/scripts.pory"
	addobject 1
# 352 "data/maps/MtChimney/scripts.pory"
	delay 16
# 353 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 354 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 355 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieBattleWithPlayer
# 356 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 357 "data/maps/MtChimney/scripts.pory"
	multi_fixed_2_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MtChimney_Text_MaxieDefeat, TRAINER_ARCHIE_ALLY, TRAINER_BACK_PIC_RED
# 358 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 359 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MtChimney_EventScript_Trigger3_2
MtChimney_EventScript_Trigger3_1:
# 362 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 363 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 364 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 365 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 366 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieKnewYouCould
# 367 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 368 "data/maps/MtChimney/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 369 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 370 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 371 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 372 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 373 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 374 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 375 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 376 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 377 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 378 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 379 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 380 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 381 "data/maps/MtChimney/scripts.pory"
	delay 16
# 382 "data/maps/MtChimney/scripts.pory"
	setobjectxy 1, 9, 7
# 383 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 384 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 385 "data/maps/MtChimney/scripts.pory"
	removeobject 2
# 386 "data/maps/MtChimney/scripts.pory"
	removeobject 29
# 387 "data/maps/MtChimney/scripts.pory"
	removeobject 22
# 388 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 389 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 390 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 391 "data/maps/MtChimney/scripts.pory"
	delay 16
# 392 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 393 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 394 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 395 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 396 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 397 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 398 "data/maps/MtChimney/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 399 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 400 "data/maps/MtChimney/scripts.pory"
	applymovement 1, MtChimney_Movement_LookAround
# 401 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieTellsGrunts
# 402 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 403 "data/maps/MtChimney/scripts.pory"
	namebox Aqua
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_WeLoveYouArchie
# 405 "data/maps/MtChimney/scripts.pory"
	closemessage
# 406 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 407 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 408 "data/maps/MtChimney/scripts.pory"
	delay 16
# 409 "data/maps/MtChimney/scripts.pory"
	removeobject 1
# 410 "data/maps/MtChimney/scripts.pory"
	removeobject 6
# 411 "data/maps/MtChimney/scripts.pory"
	removeobject 7
# 412 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 413 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 414 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 415 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 416 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 417 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 418 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 419 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 420 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 421 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_Trigger3_2:
# 360 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LostMaxieMultiBattle
	goto MtChimney_EventScript_Trigger3_1


MtChimney_EventScript_LostMaxieMultiBattle::
# 426 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 10
# 427 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 428 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 429 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PanToGroudon:
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
# 434 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_NPCWalkToWarp:
# 438 "data/maps/MtChimney/scripts.pory"
	walk_left
# 438 "data/maps/MtChimney/scripts.pory"
	walk_left
# 438 "data/maps/MtChimney/scripts.pory"
	walk_left
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 440 "data/maps/MtChimney/scripts.pory"
	set_invisible
	step_end

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_WatchNPCWalkToWarp:
# 443 "data/maps/MtChimney/scripts.pory"
	delay_8
# 443 "data/maps/MtChimney/scripts.pory"
	delay_8
# 443 "data/maps/MtChimney/scripts.pory"
	delay_8
# 443 "data/maps/MtChimney/scripts.pory"
	delay_8
# 443 "data/maps/MtChimney/scripts.pory"
	delay_8
# 444 "data/maps/MtChimney/scripts.pory"
	face_right
# 445 "data/maps/MtChimney/scripts.pory"
	face_down
# 446 "data/maps/MtChimney/scripts.pory"
	delay_8
# 447 "data/maps/MtChimney/scripts.pory"
	face_up
# 448 "data/maps/MtChimney/scripts.pory"
	delay_16
# 449 "data/maps/MtChimney/scripts.pory"
	walk_down
# 450 "data/maps/MtChimney/scripts.pory"
	set_invisible
	step_end

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToDelta:
# 454 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 454 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
	step_end

# 457 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_SortaFollowDelta:
# 458 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 458 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 458 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 458 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 459 "data/maps/MtChimney/scripts.pory"
	walk_right
# 459 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway:
# 463 "data/maps/MtChimney/scripts.pory"
	walk_right
# 463 "data/maps/MtChimney/scripts.pory"
	walk_right
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 464 "data/maps/MtChimney/scripts.pory"
	walk_up
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 466 "data/maps/MtChimney/scripts.pory"
	walk_up
# 466 "data/maps/MtChimney/scripts.pory"
	walk_up
# 466 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 469 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway3:
# 470 "data/maps/MtChimney/scripts.pory"
	walk_right
# 470 "data/maps/MtChimney/scripts.pory"
	walk_right
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 471 "data/maps/MtChimney/scripts.pory"
	walk_up
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 473 "data/maps/MtChimney/scripts.pory"
	walk_up
# 473 "data/maps/MtChimney/scripts.pory"
	walk_up
# 473 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 476 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaBlockWay:
# 477 "data/maps/MtChimney/scripts.pory"
	walk_right
# 477 "data/maps/MtChimney/scripts.pory"
	walk_right
# 477 "data/maps/MtChimney/scripts.pory"
	walk_right
# 478 "data/maps/MtChimney/scripts.pory"
	walk_up
# 478 "data/maps/MtChimney/scripts.pory"
	walk_up
# 478 "data/maps/MtChimney/scripts.pory"
	walk_up
# 478 "data/maps/MtChimney/scripts.pory"
	walk_up
# 479 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
	step_end

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerArrive2:
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
# 483 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 486 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerArrive:
# 487 "data/maps/MtChimney/scripts.pory"
	walk_up
# 487 "data/maps/MtChimney/scripts.pory"
	walk_up
# 487 "data/maps/MtChimney/scripts.pory"
	walk_up
# 487 "data/maps/MtChimney/scripts.pory"
	walk_up
# 487 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway2:
# 491 "data/maps/MtChimney/scripts.pory"
	walk_down
# 491 "data/maps/MtChimney/scripts.pory"
	walk_down
# 491 "data/maps/MtChimney/scripts.pory"
	walk_down
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 492 "data/maps/MtChimney/scripts.pory"
	walk_right
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieGoesToMachine:
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 500 "data/maps/MtChimney/scripts.pory"
	walk_up
# 500 "data/maps/MtChimney/scripts.pory"
	walk_up
# 500 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToArchie:
# 504 "data/maps/MtChimney/scripts.pory"
	walk_right
# 504 "data/maps/MtChimney/scripts.pory"
	walk_right
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToPlayer:
# 509 "data/maps/MtChimney/scripts.pory"
	walk_right
# 510 "data/maps/MtChimney/scripts.pory"
	walk_up
# 510 "data/maps/MtChimney/scripts.pory"
	walk_up
# 510 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerGetOut:
# 514 "data/maps/MtChimney/scripts.pory"
	delay_8
# 515 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 516 "data/maps/MtChimney/scripts.pory"
	walk_up
# 517 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 518 "data/maps/MtChimney/scripts.pory"
	face_right
# 519 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 520 "data/maps/MtChimney/scripts.pory"
	walk_left
# 521 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 522 "data/maps/MtChimney/scripts.pory"
	walk_in_place_up
	step_end

# 525 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_LookAround:
# 526 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 527 "data/maps/MtChimney/scripts.pory"
	delay_16
# 528 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 529 "data/maps/MtChimney/scripts.pory"
	delay_16
# 530 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
# 531 "data/maps/MtChimney/scripts.pory"
	delay_16
# 532 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
	step_end

# 536 "data/maps/MtChimney/scripts.pory"

# 537 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 538 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 539 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 540 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_3, 3
# 541 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_4, 4
# 542 "data/maps/MtChimney/scripts.pory"
.set LOCALID_AQUA_GRUNT_1 , 6
# 543 "data/maps/MtChimney/scripts.pory"
.set LOCALID_AQUA_GRUNT_2 , 7
# 544 "data/maps/MtChimney/scripts.pory"
.set LOCALID_AQUA_GRUNT_3 , 8
# 545 "data/maps/MtChimney/scripts.pory"
.set LOCALID_AQUA_GRUNT_4 , 9
# 546 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 547 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 548 "data/maps/MtChimney/scripts.pory"
.set LOCALID_COURTNEY, 31
# 549 "data/maps/MtChimney/scripts.pory"
.set LOCALID_DELTA_1, 32
# 550 "data/maps/MtChimney/scripts.pory"
.set LOCALID_DELTA_2, 33
# 551 "data/maps/MtChimney/scripts.pory"

# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition_PrepareDelta::
# 554 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 555 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 556 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 557 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 558 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_DELTA_1, 23, 35
# 559 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_DELTA_2, 24, 35
# 560 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_DELTA_1
# 561 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_DELTA_2
# 562 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_DELTA_2, MOVEMENT_TYPE_FACE_LEFT
# 563 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_DELTA_1, MOVEMENT_TYPE_FACE_RIGHT
# 564 "data/maps/MtChimney/scripts.pory"
	return
# 565 "data/maps/MtChimney/scripts.pory"

# 566 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition_PrepareTeamMagmaCheating::
# 567 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 17, 30, 10
# 568 "data/maps/MtChimney/scripts.pory"
	addobject 17
# 569 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 15, 31, 6
# 570 "data/maps/MtChimney/scripts.pory"
	addobject 15
# 571 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
# 572 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 573 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 16, 31, 7
# 574 "data/maps/MtChimney/scripts.pory"
	addobject 16
# 575 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 13, 39, 0
# 576 "data/maps/MtChimney/scripts.pory"
	addobject 13
# 577 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 12, 39, 0
# 578 "data/maps/MtChimney/scripts.pory"
	addobject 12
# 579 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 29, 14
# 580 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 581 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
# 582 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 11, 29, 13
# 583 "data/maps/MtChimney/scripts.pory"
	addobject 11
# 584 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 585 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 14, 30, 11
# 586 "data/maps/MtChimney/scripts.pory"
	addobject 14
# 587 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 588 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 39, 0
# 589 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 39, 0
# 590 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAGMA_GRUNT_1, 39, 0
# 591 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAGMA_GRUNT_2, 39, 0
# 592 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 593 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 594 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 595 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 596 "data/maps/MtChimney/scripts.pory"
	return
# 597 "data/maps/MtChimney/scripts.pory"

# 598 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 599 "data/maps/MtChimney/scripts.pory"
	lock
# 600 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 601 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 602 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 603 "data/maps/MtChimney/scripts.pory"
	closemessage
# 604 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 605 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 606 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 607 "data/maps/MtChimney/scripts.pory"
	release
# 608 "data/maps/MtChimney/scripts.pory"
	end
# 609 "data/maps/MtChimney/scripts.pory"

# 610 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 611 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 612 "data/maps/MtChimney/scripts.pory"
	return
# 613 "data/maps/MtChimney/scripts.pory"

# 614 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 615 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 616 "data/maps/MtChimney/scripts.pory"
	return
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 619 "data/maps/MtChimney/scripts.pory"
	lockall
# 620 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 621 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 622 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 623 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 624 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 625 "data/maps/MtChimney/scripts.pory"
	closemessage
# 626 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 627 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 628 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 629 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 630 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 631 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 632 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 633 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 634 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 635 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 636 "data/maps/MtChimney/scripts.pory"
	closemessage
# 637 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 638 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 639 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 640 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 641 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceAwayPlayer
# 642 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 643 "data/maps/MtChimney/scripts.pory"
	delay 16
# 644 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 645 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 646 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 647 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 648 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma2, MSGBOX_DEFAULT
# 649 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 650 "data/maps/MtChimney/scripts.pory"
	closemessage
# 651 "data/maps/MtChimney/scripts.pory"
	delay 30
# 652 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 653 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 654 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 655 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 656 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_COURTNEY
# 657 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 658 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 659 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 11, 7
# 660 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MAXIE
# 661 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 662 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 663 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 664 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 665 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 666 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, MtChimney_EventScript_ArchieMaxieReunion
# 667 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, MtChimney_EventScript_ArchieMaxieReunion
# 668 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 669 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 670 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 671 "data/maps/MtChimney/scripts.pory"
	closemessage
# 672 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 673 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 674 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 675 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 676 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 677 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 678 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 679 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 680 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 681 "data/maps/MtChimney/scripts.pory"
	releaseall
# 682 "data/maps/MtChimney/scripts.pory"
	end
# 683 "data/maps/MtChimney/scripts.pory"

# 684 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 685 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 686 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 687 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 688 "data/maps/MtChimney/scripts.pory"
	return
# 689 "data/maps/MtChimney/scripts.pory"

# 690 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 691 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 692 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 693 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 694 "data/maps/MtChimney/scripts.pory"
	return
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 697 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 698 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 699 "data/maps/MtChimney/scripts.pory"
	return
# 700 "data/maps/MtChimney/scripts.pory"

# 701 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 702 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 703 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 704 "data/maps/MtChimney/scripts.pory"
	return
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieMaxieReunion::
# 707 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieGetToMaxie
# 708 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieGetToArchie
# 709 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_MaxieGetToArchie
# 710 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 711 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 712 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 713 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 714 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 715 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 716 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 717 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 718 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 719 "data/maps/MtChimney/scripts.pory"
	namebox Maxie
# 720 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 721 "data/maps/MtChimney/scripts.pory"
	closemessage
# 722 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 723 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 724 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 725 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 726 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 727 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 728 "data/maps/MtChimney/scripts.pory"
	delay 16
# 729 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 730 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceDown
# 731 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 732 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 733 "data/maps/MtChimney/scripts.pory"
	delay 16
# 734 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 735 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 736 "data/maps/MtChimney/scripts.pory"
	closemessage
# 737 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 738 "data/maps/MtChimney/scripts.pory"
	return
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhatDoYouWant:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "Archie.\p"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué es lo que quieres?\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "¿Estás aquí para burlarte de mí, del\l"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "fracaso de mi Equipo?\p"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "Porque si es así, debo recordarte qu-{PAUSE 32}$"
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieWhoDidThat:
# 748 "data/maps/MtChimney/scripts.pory"
	.string "No hay tiempo para eso, bacalao.\pTú no te dejarías arruinar así.\n"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué le pasó a esa máquina, y quién fue\l"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "el filibustero que lo hizo?$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhat:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "…{PAUSE 16}…{PAUSE 8}¿F…{PAUSE 16}Fili-qué?{PAUSE 16} ¿…Bacalao?\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "En cualquier caso, no es algo que te\l"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "incumba, idiota.\p"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "A menos… ¿Acaso te ha estado pasando\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "lo mismo?$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieSomethingsUp:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "Aye, aye, atinaste, amigo.\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "Algo en estas aguas huele mal, y parece\l"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "que en tierra también, ¿eh?\p"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "Creo que tenemos alguien en nuestras\n"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "tripulaciones que nos están queriendo\l"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "hundir, Maxie.$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDelightful:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja! ¡Jajajaja!\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Pues me deleita escuchar eso, ¿Sabes?\p"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Aunque signifique tener contratiempos,\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "verte sufrir antes de hundirte es\l"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "delicioso, Archie.\p"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Sólo espero poder unirme a la diversión\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "antes de que toques fondo. Hasta luego,\l"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "Archie.$"
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhMaxie:
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Ah, mi Maxie…\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Siempre sintiéndose tan superior.\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Nunca cambies, Maxie.$"
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieGetToMaxie:
# 783 "data/maps/MtChimney/scripts.pory"
	walk_up
# 784 "data/maps/MtChimney/scripts.pory"
	walk_up
# 785 "data/maps/MtChimney/scripts.pory"
	walk_up
# 786 "data/maps/MtChimney/scripts.pory"
	step_end
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieGetToArchie:
# 789 "data/maps/MtChimney/scripts.pory"
	walk_left
# 790 "data/maps/MtChimney/scripts.pory"
	walk_down
# 791 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 792 "data/maps/MtChimney/scripts.pory"
	step_end
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 795 "data/maps/MtChimney/scripts.pory"
	lock
# 796 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 797 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 798 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 799 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 800 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 801 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 802 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 803 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 804 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 805 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 806 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 807 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 808 "data/maps/MtChimney/scripts.pory"
	release
# 809 "data/maps/MtChimney/scripts.pory"
	end
# 810 "data/maps/MtChimney/scripts.pory"

# 811 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 812 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 813 "data/maps/MtChimney/scripts.pory"
	@hidemoneybox
# 814 "data/maps/MtChimney/scripts.pory"
	release
# 815 "data/maps/MtChimney/scripts.pory"
	end
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 818 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 819 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 820 "data/maps/MtChimney/scripts.pory"
	return
# 821 "data/maps/MtChimney/scripts.pory"

# 822 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 823 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 824 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 825 "data/maps/MtChimney/scripts.pory"
	release
# 826 "data/maps/MtChimney/scripts.pory"
	end
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 829 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 830 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 831 "data/maps/MtChimney/scripts.pory"
	release
# 832 "data/maps/MtChimney/scripts.pory"
	end
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 835 "data/maps/MtChimney/scripts.pory"
	walk_up
# 836 "data/maps/MtChimney/scripts.pory"
	walk_up
# 837 "data/maps/MtChimney/scripts.pory"
	walk_up
# 838 "data/maps/MtChimney/scripts.pory"
	walk_right
# 839 "data/maps/MtChimney/scripts.pory"
	step_end
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 842 "data/maps/MtChimney/scripts.pory"
	walk_left
# 843 "data/maps/MtChimney/scripts.pory"
	walk_down
# 844 "data/maps/MtChimney/scripts.pory"
	walk_down
# 845 "data/maps/MtChimney/scripts.pory"
	walk_down
# 846 "data/maps/MtChimney/scripts.pory"
	walk_down
# 847 "data/maps/MtChimney/scripts.pory"
	walk_down
# 848 "data/maps/MtChimney/scripts.pory"
	walk_down
# 849 "data/maps/MtChimney/scripts.pory"
	walk_down
# 850 "data/maps/MtChimney/scripts.pory"
	step_end
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 853 "data/maps/MtChimney/scripts.pory"
	walk_up
# 854 "data/maps/MtChimney/scripts.pory"
	walk_up
# 855 "data/maps/MtChimney/scripts.pory"
	walk_right
# 856 "data/maps/MtChimney/scripts.pory"
	walk_right
# 857 "data/maps/MtChimney/scripts.pory"
	step_end
# 858 "data/maps/MtChimney/scripts.pory"

# 859 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 860 "data/maps/MtChimney/scripts.pory"
	walk_left
# 861 "data/maps/MtChimney/scripts.pory"
	walk_left
# 862 "data/maps/MtChimney/scripts.pory"
	walk_down
# 863 "data/maps/MtChimney/scripts.pory"
	walk_down
# 864 "data/maps/MtChimney/scripts.pory"
	walk_down
# 865 "data/maps/MtChimney/scripts.pory"
	walk_down
# 866 "data/maps/MtChimney/scripts.pory"
	walk_down
# 867 "data/maps/MtChimney/scripts.pory"
	walk_down
# 868 "data/maps/MtChimney/scripts.pory"
	walk_down
# 869 "data/maps/MtChimney/scripts.pory"
	step_end
# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 872 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 873 "data/maps/MtChimney/scripts.pory"
	end
# 874 "data/maps/MtChimney/scripts.pory"

# 875 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 876 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 877 "data/maps/MtChimney/scripts.pory"
	end
# 878 "data/maps/MtChimney/scripts.pory"

# 879 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 880 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 881 "data/maps/MtChimney/scripts.pory"
	end
# 882 "data/maps/MtChimney/scripts.pory"

# 883 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger1::
# 884 "data/maps/MtChimney/scripts.pory"
	lockall
# 885 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 886 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 887 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 888 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 889 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 890 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 891 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 892 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 893 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 894 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 895 "data/maps/MtChimney/scripts.pory"
	closemessage
# 896 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 897 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 898 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 899 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 900 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 901 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 902 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 903 "data/maps/MtChimney/scripts.pory"
	closemessage
# 904 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 905 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkRight
# 906 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 907 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 908 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 909 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 910 "data/maps/MtChimney/scripts.pory"
	closemessage
# 911 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 912 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 11, 17
# 913 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 914 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkLeft
# 915 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 916 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 917 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 918 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 919 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 920 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkLeft
# 921 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 922 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 923 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 924 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 925 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 926 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY, TRAINER_BACK_PIC_RED
# 927 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 928 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 929 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 930 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 931 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 932 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 933 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 934 "data/maps/MtChimney/scripts.pory"
	releaseall
# 935 "data/maps/MtChimney/scripts.pory"
	end
# 936 "data/maps/MtChimney/scripts.pory"
	
# 937 "data/maps/MtChimney/scripts.pory"
	
# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger2::
# 939 "data/maps/MtChimney/scripts.pory"
	lockall
# 940 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 941 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 942 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 943 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 944 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 945 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 946 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 947 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 948 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 949 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 950 "data/maps/MtChimney/scripts.pory"
	closemessage
# 951 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 952 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 953 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 954 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 955 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 956 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkLeft
# 957 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 958 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 959 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 960 "data/maps/MtChimney/scripts.pory"
	closemessage
# 961 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 962 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 963 "data/maps/MtChimney/scripts.pory"
	namebox Unknown
# 964 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 965 "data/maps/MtChimney/scripts.pory"
	closemessage
# 966 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 967 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 17
# 968 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 969 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkRight
# 970 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 971 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 972 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 973 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 974 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 975 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkRight
# 976 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 977 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 978 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 979 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 980 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 981 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY, TRAINER_BACK_PIC_RED
# 982 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 983 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 984 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 985 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 986 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 987 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 988 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 989 "data/maps/MtChimney/scripts.pory"
	releaseall
# 990 "data/maps/MtChimney/scripts.pory"
	end
# 991 "data/maps/MtChimney/scripts.pory"

# 992 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaCourtneyLost::
# 993 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 994 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 995 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 996 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 997 "data/maps/MtChimney/scripts.pory"
	namebox Courtney
# 998 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle
# 999 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceUp
# 1000 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1001 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 1002 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle
# 1003 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1004 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1005 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceDown
# 1006 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1007 "data/maps/MtChimney/scripts.pory"
	namebox Tabitha
# 1008 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaYouHaventSeen
# 1009 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1010 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1011 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1012 "data/maps/MtChimney/scripts.pory"
	delay 16
# 1013 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 39, 0
# 1014 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 39, 0
# 1015 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 1016 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_COURTNEY
# 1017 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 1018 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1019 "data/maps/MtChimney/scripts.pory"
	delay 16
# 1020 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FacePlayer
# 1021 "data/maps/MtChimney/scripts.pory"
	return
# 1022 "data/maps/MtChimney/scripts.pory"

# 1023 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LostMultiBattle::
# 1024 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 0
# 1025 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1026 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 1027 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1028 "data/maps/MtChimney/scripts.pory"
	end
# 1029 "data/maps/MtChimney/scripts.pory"

# 1030 "data/maps/MtChimney/scripts.pory"

# 1031 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PrepareMultiBattle::
# 1032 "data/maps/MtChimney/scripts.pory"
    lockall
# 1033 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 1034 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 1035 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1036 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1037 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 1038 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 1039 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_NeedToChoose3ValidMons
# 1040 "data/maps/MtChimney/scripts.pory"
    return
# 1041 "data/maps/MtChimney/scripts.pory"

# 1042 "data/maps/MtChimney/scripts.pory"
script_NeedToChoose3ValidMons::
# 1043 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 1044 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1045 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1046 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 1047 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 1048 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_CancelBattle
# 1049 "data/maps/MtChimney/scripts.pory"
    return
# 1050 "data/maps/MtChimney/scripts.pory"

# 1051 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieYouCanDoIt::
# 1052 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 1053 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieYouCanDoIt
# 1054 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1055 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1056 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1057 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieWalkDown
# 1058 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1059 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 2
# 1060 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1061 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareTeamMagmaCheating
# 1062 "data/maps/MtChimney/scripts.pory"
	special DrawWholeMapView
# 1063 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1064 "data/maps/MtChimney/scripts.pory"
	return
# 1065 "data/maps/MtChimney/scripts.pory"

# 1066 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieWalkDown:
# 1067 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1068 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1069 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1070 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1071 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1072 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1073 "data/maps/MtChimney/scripts.pory"
	step_end
# 1074 "data/maps/MtChimney/scripts.pory"

# 1075 "data/maps/MtChimney/scripts.pory"
PleasePick3Mons::
# 1076 "data/maps/MtChimney/scripts.pory"
	.string "Deberás elegir 3 o\nmenos Pokémon.$"
# 1077 "data/maps/MtChimney/scripts.pory"

# 1078 "data/maps/MtChimney/scripts.pory"
script_CancelBattle::
# 1079 "data/maps/MtChimney/scripts.pory"
    goto MtChimney_EventScript_PrepareMultiBattle
# 1080 "data/maps/MtChimney/scripts.pory"
    return
# 1081 "data/maps/MtChimney/scripts.pory"

# 1082 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger::
# 1083 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 1084 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1085 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_ExclamationMark
# 1086 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 1087 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1088 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_FaceDown
# 1089 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceDown
# 1090 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1091 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1092 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerDown
# 1093 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1094 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1095 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1096 "data/maps/MtChimney/scripts.pory"
	namebox Archie
# 1097 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieDontWorry
# 1098 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1099 "data/maps/MtChimney/scripts.pory"
	hidenamebox
# 1100 "data/maps/MtChimney/scripts.pory"
	return
# 1101 "data/maps/MtChimney/scripts.pory"
	
# 1102 "data/maps/MtChimney/scripts.pory"

# 1103 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerDown:
# 1104 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1105 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1106 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1107 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1108 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1109 "data/maps/MtChimney/scripts.pory"
	step_end
# 1110 "data/maps/MtChimney/scripts.pory"

# 1111 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 1112 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 1113 "data/maps/MtChimney/scripts.pory"
	end
# 1114 "data/maps/MtChimney/scripts.pory"

# 1115 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 1116 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 1117 "data/maps/MtChimney/scripts.pory"
	end
# 1118 "data/maps/MtChimney/scripts.pory"

# 1119 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 1120 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 1121 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 1122 "data/maps/MtChimney/scripts.pory"
	end
# 1123 "data/maps/MtChimney/scripts.pory"

# 1124 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 1125 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 1126 "data/maps/MtChimney/scripts.pory"
	end
# 1127 "data/maps/MtChimney/scripts.pory"

# 1128 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 1129 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 1130 "data/maps/MtChimney/scripts.pory"
	end
# 1131 "data/maps/MtChimney/scripts.pory"

# 1132 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 1133 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 1134 "data/maps/MtChimney/scripts.pory"
	end
# 1135 "data/maps/MtChimney/scripts.pory"

# 1136 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 1137 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 1138 "data/maps/MtChimney/scripts.pory"
	end
# 1139 "data/maps/MtChimney/scripts.pory"

# 1140 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 1141 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 1142 "data/maps/MtChimney/scripts.pory"
	end
# 1143 "data/maps/MtChimney/scripts.pory"

# 1144 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 1145 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 1146 "data/maps/MtChimney/scripts.pory"
	end
# 1147 "data/maps/MtChimney/scripts.pory"

# 1148 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Magcargo::
# 1149 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_MAGCARGO, CRY_MODE_NORMAL
# 1150 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Magcargo, MSGBOX_SIGN
# 1151 "data/maps/MtChimney/scripts.pory"
	end
# 1152 "data/maps/MtChimney/scripts.pory"

# 1153 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Qwilfish::
# 1154 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_QWILFISH, CRY_MODE_NORMAL
# 1155 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Qwilfish, MSGBOX_SIGN
# 1156 "data/maps/MtChimney/scripts.pory"
	end
# 1157 "data/maps/MtChimney/scripts.pory"

# 1158 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Krokorok::
# 1159 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 1160 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Krokorok, MSGBOX_SIGN
# 1161 "data/maps/MtChimney/scripts.pory"
	end
# 1162 "data/maps/MtChimney/scripts.pory"

# 1163 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Pelipper::
# 1164 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_PELIPPER, CRY_MODE_NORMAL
# 1165 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Pelipper, MSGBOX_SIGN
# 1166 "data/maps/MtChimney/scripts.pory"
	end
# 1167 "data/maps/MtChimney/scripts.pory"

# 1168 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sharpedo::
# 1169 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 1170 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Sharpedo, MSGBOX_SIGN
# 1171 "data/maps/MtChimney/scripts.pory"
	end
# 1172 "data/maps/MtChimney/scripts.pory"

# 1173 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Poochyena::
# 1174 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 1175 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Poochyena, MSGBOX_SIGN
# 1176 "data/maps/MtChimney/scripts.pory"
	end
# 1177 "data/maps/MtChimney/scripts.pory"

# 1178 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 1179 "data/maps/MtChimney/scripts.pory"
	lockall
# 1180 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 1181 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 1182 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 1183 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 1184 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 1185 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 1186 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 1187 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1188 "data/maps/MtChimney/scripts.pory"
	end
# 1189 "data/maps/MtChimney/scripts.pory"

# 1190 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 1191 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 1192 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1193 "data/maps/MtChimney/scripts.pory"
	end
# 1194 "data/maps/MtChimney/scripts.pory"

# 1195 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 1196 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 1197 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1198 "data/maps/MtChimney/scripts.pory"
	end
# 1199 "data/maps/MtChimney/scripts.pory"

# 1200 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 1201 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 1202 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1203 "data/maps/MtChimney/scripts.pory"
	end
# 1204 "data/maps/MtChimney/scripts.pory"

# 1205 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 1206 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 1207 "data/maps/MtChimney/scripts.pory"
	end
# 1208 "data/maps/MtChimney/scripts.pory"

# 1209 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 1210 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 1211 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1212 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 1213 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 1214 "data/maps/MtChimney/scripts.pory"
	release
# 1215 "data/maps/MtChimney/scripts.pory"
	end
# 1216 "data/maps/MtChimney/scripts.pory"

# 1217 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 1218 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1219 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1220 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 1221 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 1222 "data/maps/MtChimney/scripts.pory"
	release
# 1223 "data/maps/MtChimney/scripts.pory"
	end
# 1224 "data/maps/MtChimney/scripts.pory"

# 1225 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 1226 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 1227 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 1228 "data/maps/MtChimney/scripts.pory"
	end
# 1229 "data/maps/MtChimney/scripts.pory"

# 1230 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 1231 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 1232 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 1233 "data/maps/MtChimney/scripts.pory"
	end
# 1234 "data/maps/MtChimney/scripts.pory"

# 1235 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 1236 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 1237 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 1238 "data/maps/MtChimney/scripts.pory"
	end
# 1239 "data/maps/MtChimney/scripts.pory"

# 1240 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 1241 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 1242 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 1243 "data/maps/MtChimney/scripts.pory"
	end
# 1244 "data/maps/MtChimney/scripts.pory"

# 1245 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 1246 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 1247 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 1248 "data/maps/MtChimney/scripts.pory"
	end
# 1249 "data/maps/MtChimney/scripts.pory"

# 1250 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 1251 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 1252 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1253 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 1254 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 1255 "data/maps/MtChimney/scripts.pory"
	release
# 1256 "data/maps/MtChimney/scripts.pory"
	end
# 1257 "data/maps/MtChimney/scripts.pory"

# 1258 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 1259 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1260 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1261 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 1262 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 1263 "data/maps/MtChimney/scripts.pory"
	release
# 1264 "data/maps/MtChimney/scripts.pory"
	end
# 1265 "data/maps/MtChimney/scripts.pory"

# 1266 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 1267 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 1268 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 1269 "data/maps/MtChimney/scripts.pory"
	end
# 1270 "data/maps/MtChimney/scripts.pory"

# 1271 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieYouCanDoIt:
# 1272 "data/maps/MtChimney/scripts.pory"
	.string "Ahora, {PLAYER}, voy a continuar a\n"
# 1273 "data/maps/MtChimney/scripts.pory"
	.string "ayudar a mis Reclutas a combatir al\l"
# 1274 "data/maps/MtChimney/scripts.pory"
	.string "Equipo Magma. Están atacándolos en\l"
# 1275 "data/maps/MtChimney/scripts.pory"
	.string "grupo ahora y realmente me están\l"
# 1276 "data/maps/MtChimney/scripts.pory"
	.string "cansando con su cobardía.\p"
# 1277 "data/maps/MtChimney/scripts.pory"
	.string "¡Tú puedes derrotar a {COLOR RED}Maxie{COLOR DARK_GRAY}!\n"
# 1278 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, que no es alguien que\l"
# 1279 "data/maps/MtChimney/scripts.pory"
	.string "pueda preparar un “Plan B”.\p"
# 1280 "data/maps/MtChimney/scripts.pory"
	.string "Créeme…\p"
# 1281 "data/maps/MtChimney/scripts.pory"
	.string "Bueno, sigue adelante, niñ{OA}, venceremos\n"
# 1282 "data/maps/MtChimney/scripts.pory"
	.string "al Equipo Magma juntos.$"
# 1283 "data/maps/MtChimney/scripts.pory"

# 1284 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 1285 "data/maps/MtChimney/scripts.pory"
	.string "¿¡Qué!?\n"
# 1286 "data/maps/MtChimney/scripts.pory"
	.string "El {COLOR RED}Meteorito{COLOR DARK_GRAY}…\l"
# 1287 "data/maps/MtChimney/scripts.pory"
	.string "Ha sido desconectado de la fuente de\l"
# 1288 "data/maps/MtChimney/scripts.pory"
	.string "poder…\p"
# 1289 "data/maps/MtChimney/scripts.pory"
	.string "Pero si llegamos antes que ese Archie…\n"
# 1290 "data/maps/MtChimney/scripts.pory"
	.string "¡Y-Y que todo el Equipo Aqua también!\l¿Quién pudo ser?\pSanto Arceus, tendría que haber traído a\nmis Pokémon más fuertes…$"
# 1291 "data/maps/MtChimney/scripts.pory"

# 1292 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 1293 "data/maps/MtChimney/scripts.pory"
	.string "Un{A} niñ{OA}… ¡¿Qué estás haciendo aquí!?\p"
# 1294 "data/maps/MtChimney/scripts.pory"
	.string "Creí que Tabitha y Courtney serían\n"
# 1295 "data/maps/MtChimney/scripts.pory"
	.string "defensa suficiente… Apuesto a que ese\l"
# 1296 "data/maps/MtChimney/scripts.pory"
	.string "Archie te ha ayudado…\p"
# 1297 "data/maps/MtChimney/scripts.pory"
	.string "Pero eso es lo de menos. El {COLOR LIGHT_RED SHADOW RED}Equipo Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 1298 "data/maps/MtChimney/scripts.pory"
	.string "y yo, {COLOR RED}su Líder Maxie{COLOR DARK_GRAY}, tenemos objetivos\l"
# 1299 "data/maps/MtChimney/scripts.pory"
	.string "tan grandes que este mero contratiempo\l"
# 1300 "data/maps/MtChimney/scripts.pory"
	.string "no significa nada.\p"
# 1301 "data/maps/MtChimney/scripts.pory"
	.string "La juventud es el futuro, ¿Sabes?\n"
# 1302 "data/maps/MtChimney/scripts.pory"
	.string "Por ese motivo, debo educarte.\p"
# 1303 "data/maps/MtChimney/scripts.pory"
	.string "Al derrotarte, reactivaré la máquina, y\n"
# 1304 "data/maps/MtChimney/scripts.pory"
	.string "con ella formaré una {COLOR RED}Piedra Activadora{COLOR DARK_GRAY}\l"
# 1305 "data/maps/MtChimney/scripts.pory"
	.string "con el poder suficiente para controlar\l"
# 1306 "data/maps/MtChimney/scripts.pory"
	.string "al {COLOR LIGHT_RED SHADOW RED}Legendario Durmiente del Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}…\l"
# 1307 "data/maps/MtChimney/scripts.pory"
	.string "Entonces, ¡Podremos cumplir nuestro\l"
# 1308 "data/maps/MtChimney/scripts.pory"
	.string "objetivo!\p¿Que cuál es, preguntas? No, eso es\n"
# 1309 "data/maps/MtChimney/scripts.pory"
	.string "para la siguiente clase.\p"
# 1310 "data/maps/MtChimney/scripts.pory"
	.string "Y ahora, como es debido, déjame darte\n"
# 1311 "data/maps/MtChimney/scripts.pory"
	.string "un examen que se quemará en tu\l"
# 1312 "data/maps/MtChimney/scripts.pory"
	.string "memoria.$"
# 1313 "data/maps/MtChimney/scripts.pory"

# 1314 "data/maps/MtChimney/scripts.pory"

# 1315 "data/maps/MtChimney/scripts.pory"

# 1316 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 1317 "data/maps/MtChimney/scripts.pory"
	.string "¿¡C-cómo!?\n"
# 1318 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué quieres decir con eso?\p"
# 1319 "data/maps/MtChimney/scripts.pory"
	.string "… … … No importa, estaré ahí en un\n"
# 1320 "data/maps/MtChimney/scripts.pory"
	.string "minuto.\p"
# 1321 "data/maps/MtChimney/scripts.pory"
	.string "Supongo… Que tendremos que proceder\n"
# 1322 "data/maps/MtChimney/scripts.pory"
	.string "con el Plan de Emergencia…\l"
# 1323 "data/maps/MtChimney/scripts.pory"
	.string "No creí que llegara a esto.\p"
# 1324 "data/maps/MtChimney/scripts.pory"
	.string "No falles con esto, ¿Entiendes?$"
# 1325 "data/maps/MtChimney/scripts.pory"

# 1326 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma2:
# 1327 "data/maps/MtChimney/scripts.pory"
	.string "Lo siento, niñ{OA}, pero los adultos tenemos\n"
# 1328 "data/maps/MtChimney/scripts.pory"
	.string "cosas por hacer. La próxima vez que nos\l"
# 1329 "data/maps/MtChimney/scripts.pory"
	.string "veamos, no me contendré.$"
# 1330 "data/maps/MtChimney/scripts.pory"

# 1331 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 1332 "data/maps/MtChimney/scripts.pory"
	.string "Veo que nuestros Reclutas no poseen\nsuficiente poder para derrotar\la un{A} simple niñ{OA}.\p"
# 1333 "data/maps/MtChimney/scripts.pory"
	.string "Pero llegas tarde, ¿No lo ves?\p"
# 1334 "data/maps/MtChimney/scripts.pory"
	.string "¡Nuestro Jefe liberará el poder\ndel Meteorito!$"
# 1335 "data/maps/MtChimney/scripts.pory"

# 1336 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 1337 "data/maps/MtChimney/scripts.pory"
	.string "Equipo… Aqua…$"
# 1338 "data/maps/MtChimney/scripts.pory"

# 1339 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 1340 "data/maps/MtChimney/scripts.pory"
	.string "¡Jefe, es tu oportunidad!$"
# 1341 "data/maps/MtChimney/scripts.pory"

# 1342 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 1343 "data/maps/MtChimney/scripts.pory"
	.string "Intrus{OA}… Rango de visión…\n"
# 1344 "data/maps/MtChimney/scripts.pory"
	.string "Analizando…\p"
# 1345 "data/maps/MtChimney/scripts.pory"
	.string "… … …\p"
# 1346 "data/maps/MtChimney/scripts.pory"
	.string "Procediendo… Protocolo B…$"
# 1347 "data/maps/MtChimney/scripts.pory"

# 1348 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 1349 "data/maps/MtChimney/scripts.pory"
	.string "Interesante…$"
# 1350 "data/maps/MtChimney/scripts.pory"

# 1351 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 1352 "data/maps/MtChimney/scripts.pory"
	.string "Maxie… Lo siento tanto…\n"
# 1353 "data/maps/MtChimney/scripts.pory"
	.string "No pude… Detener…$"
# 1354 "data/maps/MtChimney/scripts.pory"

# 1355 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieStop:
# 1356 "data/maps/MtChimney/scripts.pory"
	.string "¿Atacando a un{A} niñ{OA} indefens{OA}?\p"
# 1357 "data/maps/MtChimney/scripts.pory"
	.string "Compórtense como los adultos que son.$"
# 1358 "data/maps/MtChimney/scripts.pory"

# 1359 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontWorry:
# 1360 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, {PLAYER}, estamos en\n"
# 1361 "data/maps/MtChimney/scripts.pory"
	.string "esta misión para detener al Equipo\l"
# 1362 "data/maps/MtChimney/scripts.pory"
	.string "Magma juntos. No dejaré que te ataquen\l"
# 1363 "data/maps/MtChimney/scripts.pory"
	.string "entre dos de esa manera, ¡Ni yo que soy\l"
# 1364 "data/maps/MtChimney/scripts.pory"
	.string "un pirata haría trucos tan sucios!\p"
# 1365 "data/maps/MtChimney/scripts.pory"
	.string "Principalmente porque no los necesito…$"
# 1366 "data/maps/MtChimney/scripts.pory"

# 1367 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaYouHaventSeen:
# 1368 "data/maps/MtChimney/scripts.pory"
	.string "¡N-{PAUSE 8}n-{PAUSE 16}n-{PAUSE 32}NO ES\n"
# 1369 "data/maps/MtChimney/scripts.pory"
	.string "LO Ú-{PAUSE 16}ÚLTIMO QUE VERÁN DE MÍ!\l"
# 1370 "data/maps/MtChimney/scripts.pory"
	.string "¡Muajajaja!$"
# 1371 "data/maps/MtChimney/scripts.pory"

# 1372 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 1373 "data/maps/MtChimney/scripts.pory"
	.string "¡Nos del Equipo Magma estamos haciendo\n"
# 1374 "data/maps/MtChimney/scripts.pory"
	.string "lo posible para mejorar la vida de los\l"
# 1375 "data/maps/MtChimney/scripts.pory"
	.string "humanos!\p"
# 1376 "data/maps/MtChimney/scripts.pory"
	.string "Todos serán felices si ganamos.$"
# 1377 "data/maps/MtChimney/scripts.pory"

# 1378 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 1379 "data/maps/MtChimney/scripts.pory"
	.string "¿¡CÓMO QUE PERDÍ!?$"
# 1380 "data/maps/MtChimney/scripts.pory"

# 1381 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 1382 "data/maps/MtChimney/scripts.pory"
	.string "Nuestro Jefe siempre dice que todos\n"
# 1383 "data/maps/MtChimney/scripts.pory"
	.string "serán felices si él gana, pero… ¿Porqué\l"
# 1384 "data/maps/MtChimney/scripts.pory"
	.string "entonces somos tan odiados?$"
# 1385 "data/maps/MtChimney/scripts.pory"

# 1386 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 1387 "data/maps/MtChimney/scripts.pory"
	.string "Si hubiera más tierra, ¡Podría comprarme\n"
# 1388 "data/maps/MtChimney/scripts.pory"
	.string "mi propia casa!\p"
# 1389 "data/maps/MtChimney/scripts.pory"
	.string "Supongo que aún así habría que\n"
# 1390 "data/maps/MtChimney/scripts.pory"
	.string "comprarla, y seguro seguría siendo\l"
# 1391 "data/maps/MtChimney/scripts.pory"
	.string "carísima…$"
# 1392 "data/maps/MtChimney/scripts.pory"

# 1393 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 1394 "data/maps/MtChimney/scripts.pory"
	.string "¿Es la falta de tierra el motivo de la\n"
# 1395 "data/maps/MtChimney/scripts.pory"
	.string "falta de casas para la gente?$"
# 1396 "data/maps/MtChimney/scripts.pory"

# 1397 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 1398 "data/maps/MtChimney/scripts.pory"
	.string "Creo que el verdadero enemigo aquí es\n"
# 1399 "data/maps/MtChimney/scripts.pory"
	.string "el capitalismo, ¿No?\p"
# 1400 "data/maps/MtChimney/scripts.pory"
	.string "¿Será que puedo convencer al Jefe de\n"
# 1401 "data/maps/MtChimney/scripts.pory"
	.string "usar el poder que quiere reunir para\l"
# 1402 "data/maps/MtChimney/scripts.pory"
	.string "expandir el comunismo?$"
# 1403 "data/maps/MtChimney/scripts.pory"

# 1404 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 1405 "data/maps/MtChimney/scripts.pory"
	.string "Estos del Equipo Aqua, siempre\n"
# 1406 "data/maps/MtChimney/scripts.pory"
	.string "persiguiéndonos…\p"
# 1407 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Tan enamorados de nosotros están?!$"
# 1408 "data/maps/MtChimney/scripts.pory"

# 1409 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 1410 "data/maps/MtChimney/scripts.pory"
	.string "Quiero un helado.$"
# 1411 "data/maps/MtChimney/scripts.pory"

# 1412 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 1413 "data/maps/MtChimney/scripts.pory"
	.string "No me gustan estos trajes… ¡Hace que\n"
# 1414 "data/maps/MtChimney/scripts.pory"
	.string "todos nos veamos iguales! ¡Me hace\l"
# 1415 "data/maps/MtChimney/scripts.pory"
	.string "morirme de calor!$"
# 1416 "data/maps/MtChimney/scripts.pory"

# 1417 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 1418 "data/maps/MtChimney/scripts.pory"
	.string "Son el Equipo Aqua… Somos el Equipo\n"
# 1419 "data/maps/MtChimney/scripts.pory"
	.string "Magma… ¡Eligieron un nombre tan\l"
# 1420 "data/maps/MtChimney/scripts.pory"
	.string "parecido para confundirme a mí!$"
# 1421 "data/maps/MtChimney/scripts.pory"

# 1422 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 1423 "data/maps/MtChimney/scripts.pory"
	.string "¡Sí! ¡Acábalos!$"
# 1424 "data/maps/MtChimney/scripts.pory"

# 1425 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 1426 "data/maps/MtChimney/scripts.pory"
	.string "¡Sí! ¡Magma!$"
# 1427 "data/maps/MtChimney/scripts.pory"

# 1428 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Sharpedo:
# 1429 "data/maps/MtChimney/scripts.pory"
	.string "¡SHAR! ¡SHAAARRRGGGHHH!$"
# 1430 "data/maps/MtChimney/scripts.pory"

# 1431 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 1432 "data/maps/MtChimney/scripts.pory"
	.string "¡Sabía que vendrías, {PLAYER}!\p"
# 1433 "data/maps/MtChimney/scripts.pory"
	.string "¡Grrr! Tengo que ir a derrotar a Maxie, si\n"
# 1434 "data/maps/MtChimney/scripts.pory"
	.string "logra encender esa máquina, ¡El volcán\l"
# 1435 "data/maps/MtChimney/scripts.pory"
	.string "hará erupción!$"
# 1436 "data/maps/MtChimney/scripts.pory"

# 1437 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 1438 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, odio tener que pedirle esto\n"
# 1439 "data/maps/MtChimney/scripts.pory"
	.string "a un{A} niñ{OA}, pero necesito que vayas a\l"
# 1440 "data/maps/MtChimney/scripts.pory"
	.string "derrotar a Maxie por mí, ¿Lo harías?$"
# 1441 "data/maps/MtChimney/scripts.pory"

# 1442 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 1443 "data/maps/MtChimney/scripts.pory"
	.string "¡{PLAYER}!\p"
# 1444 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja ja ja! ¡Sabía que podías hacerlo!\l"
# 1445 "data/maps/MtChimney/scripts.pory"
	.string "… … … …\l"
# 1446 "data/maps/MtChimney/scripts.pory"
	.string "Ah, ¿Eso?\p"
# 1447 "data/maps/MtChimney/scripts.pory"
	.string "¡No te preocupes, cosa de adultos!\n"
# 1448 "data/maps/MtChimney/scripts.pory"
	.string "Pero lo que quiero saber es… ¿De qué\l"
# 1449 "data/maps/MtChimney/scripts.pory"
	.string "lado estás, niñ{OA}?\l"
# 1450 "data/maps/MtChimney/scripts.pory"
	.string "¡Ah, no importa, siempre y cuando nos\l"
# 1451 "data/maps/MtChimney/scripts.pory"
	.string "ayudes a derrotar a esos idiotas!\p"
# 1452 "data/maps/MtChimney/scripts.pory"
	.string "Espero nos volvamos a ver pronto,\n"
# 1453 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}.$"
# 1454 "data/maps/MtChimney/scripts.pory"

# 1455 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 1456 "data/maps/MtChimney/scripts.pory"
	.string "Maldita sea… ¡El Equipo Magma\n"
# 1457 "data/maps/MtChimney/scripts.pory"
	.string "nos supera en número, no\lpodemos contra ellos así!$"
# 1458 "data/maps/MtChimney/scripts.pory"

# 1459 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 1460 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero si expanden la tierra,\n"
# 1461 "data/maps/MtChimney/scripts.pory"
	.string "matarán a los Pokémon del océano!$"
# 1462 "data/maps/MtChimney/scripts.pory"

# 1463 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 1464 "data/maps/MtChimney/scripts.pory"
	.string "Son el Equipo Magma… Somos el Equipo\n"
# 1465 "data/maps/MtChimney/scripts.pory"
	.string "Aqua… ¡Eligieron un nombre tan\l"
# 1466 "data/maps/MtChimney/scripts.pory"
	.string "parecido para confundirme a mí!$"
# 1467 "data/maps/MtChimney/scripts.pory"

# 1468 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Poochyena:
# 1469 "data/maps/MtChimney/scripts.pory"
	.string "¡Pochyyyyy!$"
# 1470 "data/maps/MtChimney/scripts.pory"

# 1471 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Magcargo:
# 1472 "data/maps/MtChimney/scripts.pory"
	.string "¡Mmmmmaaaagggg!$"
# 1473 "data/maps/MtChimney/scripts.pory"

# 1474 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Qwilfish:
# 1475 "data/maps/MtChimney/scripts.pory"
	.string "¡Qwil! ¡Qwiiil!$"
# 1476 "data/maps/MtChimney/scripts.pory"

# 1477 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Krokorok:
# 1478 "data/maps/MtChimney/scripts.pory"
	.string "¡Krookoroook!$"
# 1479 "data/maps/MtChimney/scripts.pory"

# 1480 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Pelipper:
# 1481 "data/maps/MtChimney/scripts.pory"
	.string "¡Peeeeliiiii!$"
# 1482 "data/maps/MtChimney/scripts.pory"

# 1483 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 1484 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 1485 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 1486 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 1487 "data/maps/MtChimney/scripts.pory"

# 1488 "data/maps/MtChimney/scripts.pory"

# 1489 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 1490 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 1491 "data/maps/MtChimney/scripts.pory"

# 1492 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 1493 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 1494 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 1495 "data/maps/MtChimney/scripts.pory"

# 1496 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 1497 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 1498 "data/maps/MtChimney/scripts.pory"

# 1499 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 1500 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1501 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1502 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 1503 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 1504 "data/maps/MtChimney/scripts.pory"

# 1505 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 1506 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1507 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1508 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 1509 "data/maps/MtChimney/scripts.pory"

# 1510 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 1511 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 1512 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 1513 "data/maps/MtChimney/scripts.pory"

# 1514 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 1515 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 1516 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 1517 "data/maps/MtChimney/scripts.pory"

# 1518 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 1519 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 1520 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 1521 "data/maps/MtChimney/scripts.pory"

# 1522 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 1523 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 1524 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 1525 "data/maps/MtChimney/scripts.pory"

# 1526 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 1527 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 1528 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 1529 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 1530 "data/maps/MtChimney/scripts.pory"

# 1531 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 1532 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1533 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1534 "data/maps/MtChimney/scripts.pory"

# 1535 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 1536 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 1537 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 1538 "data/maps/MtChimney/scripts.pory"

# 1539 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 1540 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 1541 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1542 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1543 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1544 "data/maps/MtChimney/scripts.pory"

# 1545 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1546 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1547 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1548 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1549 "data/maps/MtChimney/scripts.pory"

# 1550 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1551 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1552 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1553 "data/maps/MtChimney/scripts.pory"

# 1554 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1555 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1556 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1557 "data/maps/MtChimney/scripts.pory"

# 1558 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1559 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1560 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1561 "data/maps/MtChimney/scripts.pory"

# 1562 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1563 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1564 "data/maps/MtChimney/scripts.pory"

# 1565 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1566 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1567 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1568 "data/maps/MtChimney/scripts.pory"

# 1569 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1570 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1571 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1572 "data/maps/MtChimney/scripts.pory"

# 1573 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1574 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1575 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1576 "data/maps/MtChimney/scripts.pory"

# 1577 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1578 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1579 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1580 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1581 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1582 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1583 "data/maps/MtChimney/scripts.pory"

# 1584 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1585 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1586 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1587 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1588 "data/maps/MtChimney/scripts.pory"

# 1589 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1590 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1591 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1592 "data/maps/MtChimney/scripts.pory"

# 1593 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1594 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1595 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1596 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1597 "data/maps/MtChimney/scripts.pory"

# 1598 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1599 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1600 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1601 "data/maps/MtChimney/scripts.pory"

# 1602 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1603 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1604 "data/maps/MtChimney/scripts.pory"

# 1605 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1606 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1607 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1608 "data/maps/MtChimney/scripts.pory"

# 1609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1610 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1611 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1612 "data/maps/MtChimney/scripts.pory"

# 1613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1614 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1615 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1616 "data/maps/MtChimney/scripts.pory"

# 1617 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1618 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1619 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1620 "data/maps/MtChimney/scripts.pory"

# 1621 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1622 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1623 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 252 "data/maps/MtChimney/scripts.pory"
	.string "{SHAKE_SCREEN 8 10 3 0}¡GROUUUUUUUDON!$"
