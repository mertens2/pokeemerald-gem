JaggedPass_EventScript_GroudonScene::
# 3 "data/maps/JaggedPass/scripts.pory"
	lockall
# 4 "data/maps/JaggedPass/scripts.pory"
	fadeoutbgm 0
# 5 "data/maps/JaggedPass/scripts.pory"
	special SpawnCameraObject
# 6 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 7 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JaggedPass_Movement_PanCameraToMiddle
# 8 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 9 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 3
# 10 "data/maps/JaggedPass/scripts.pory"
	applymovement 1, JaggedPass_Movement_ConfusedLookAround
# 11 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 12 "data/maps/JaggedPass/scripts.pory"
	applymovement 2, JaggedPass_Movement_ConfusedLookAround
# 13 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 14 "data/maps/JaggedPass/scripts.pory"
	applymovement 4, JaggedPass_Movement_ConfusedLookAround
# 15 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 16 "data/maps/JaggedPass/scripts.pory"
	applymovement 6, JaggedPass_Movement_ConfusedLookAround
# 17 "data/maps/JaggedPass/scripts.pory"
	delay 2
# 18 "data/maps/JaggedPass/scripts.pory"
	applymovement 7, JaggedPass_Movement_ConfusedLookAround
# 19 "data/maps/JaggedPass/scripts.pory"
	waitmovement 7
# 20 "data/maps/JaggedPass/scripts.pory"
	namebox JaggedPass_EventScript_GroudonScene_Text_0
# 21 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_GroudonScene_Text_1
# 22 "data/maps/JaggedPass/scripts.pory"
	namebox JaggedPass_EventScript_GroudonScene_Text_2
# 23 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_GroudonScene_Text_3
# 24 "data/maps/JaggedPass/scripts.pory"
	namebox JaggedPass_EventScript_GroudonScene_Text_4
# 25 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_GroudonScene_Text_5
# 26 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 27 "data/maps/JaggedPass/scripts.pory"
	hidenamebox
# 28 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 4
# 29 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 4
# 30 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 6
# 31 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 4
# 32 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 33 "data/maps/JaggedPass/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 34 "data/maps/JaggedPass/scripts.pory"
	waitmoncry
# 35 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 36 "data/maps/JaggedPass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/JaggedPass/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 38 "data/maps/JaggedPass/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 39 "data/maps/JaggedPass/scripts.pory"
	waitmovement 4
# 40 "data/maps/JaggedPass/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 41 "data/maps/JaggedPass/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 42 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 43 "data/maps/JaggedPass/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data/maps/JaggedPass/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/JaggedPass/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 46 "data/maps/JaggedPass/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/JaggedPass/scripts.pory"
	waitmovement 4
# 48 "data/maps/JaggedPass/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/JaggedPass/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/JaggedPass/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 52 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JaggedPass_Movement_PanCameraToTop
# 53 "data/maps/JaggedPass/scripts.pory"
	namebox JaggedPass_EventScript_GroudonScene_Text_2
# 54 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_GroudonScene_Text_6
# 55 "data/maps/JaggedPass/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 56 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 57 "data/maps/JaggedPass/scripts.pory"
	hidenamebox
# 58 "data/maps/JaggedPass/scripts.pory"
	special RemoveCameraObject
# 59 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 60 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 5
# 61 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 62 "data/maps/JaggedPass/scripts.pory"
	fadeinbgm 0
# 63 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 64 "data/maps/JaggedPass/scripts.pory"
	warp MAP_MT_CHIMNEY, 20, 40
	end


JaggedPass_EventScript_GroudonScene2::
	return


# 72 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_ConfusedLookAround:
# 73 "data/maps/JaggedPass/scripts.pory"
	face_right
# 74 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 75 "data/maps/JaggedPass/scripts.pory"
	face_left
# 76 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 77 "data/maps/JaggedPass/scripts.pory"
	face_up
# 78 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 79 "data/maps/JaggedPass/scripts.pory"
	face_down
# 80 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 81 "data/maps/JaggedPass/scripts.pory"
	walk_in_place_faster_up
# 82 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 83 "data/maps/JaggedPass/scripts.pory"
	walk_in_place_faster_down
# 84 "data/maps/JaggedPass/scripts.pory"
	delay_8
# 85 "data/maps/JaggedPass/scripts.pory"
	walk_in_place_faster_up
# 86 "data/maps/JaggedPass/scripts.pory"
	delay_8
	step_end

# 89 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PanCameraToMiddle:
# 90 "data/maps/JaggedPass/scripts.pory"
	walk_diag_southwest
# 90 "data/maps/JaggedPass/scripts.pory"
	walk_diag_southwest
# 91 "data/maps/JaggedPass/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PanCameraToTop:
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 95 "data/maps/JaggedPass/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/JaggedPass/scripts.pory"

# 98 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 99 "data/maps/JaggedPass/scripts.pory"

# 100 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 101 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 102 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 103 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 104 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JaggedPass_OnFrame
# 105 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 106 "data/maps/JaggedPass/scripts.pory"

# 107 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 108 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 109 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
# 110 "data/maps/JaggedPass/scripts.pory"
	end
# 111 "data/maps/JaggedPass/scripts.pory"

# 112 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 113 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 114 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 115 "data/maps/JaggedPass/scripts.pory"
	return
# 116 "data/maps/JaggedPass/scripts.pory"

# 117 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 118 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 119 "data/maps/JaggedPass/scripts.pory"
	return
# 120 "data/maps/JaggedPass/scripts.pory"

# 121 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 122 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 123 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 2, JaggedPass_EventScript_SetWeatherHarshSunlight
# 124 "data/maps/JaggedPass/scripts.pory"
	end
# 125 "data/maps/JaggedPass/scripts.pory"

# 126 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 127 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 128 "data/maps/JaggedPass/scripts.pory"
	doweather
# 129 "data/maps/JaggedPass/scripts.pory"
	return
# 130 "data/maps/JaggedPass/scripts.pory"

# 131 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherHarshSunlight::
# 132 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_DROUGHT
# 133 "data/maps/JaggedPass/scripts.pory"
	doweather
# 134 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm 1, 10, 17
# 135 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm 2, 18, 22
# 136 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm 6, 12, 22
# 137 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm 7, 13, 22
# 138 "data/maps/JaggedPass/scripts.pory"
	addobject 1
# 139 "data/maps/JaggedPass/scripts.pory"
	addobject 2
# 140 "data/maps/JaggedPass/scripts.pory"
	addobject 6
# 141 "data/maps/JaggedPass/scripts.pory"
	addobject 7
# 142 "data/maps/JaggedPass/scripts.pory"
	return
# 143 "data/maps/JaggedPass/scripts.pory"

# 144 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 145 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
# 146 "data/maps/JaggedPass/scripts.pory"
	end
# 147 "data/maps/JaggedPass/scripts.pory"

# 148 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 149 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 150 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 151 "data/maps/JaggedPass/scripts.pory"
	end
# 152 "data/maps/JaggedPass/scripts.pory"
	
# 153 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnFrame:
# 154 "data/maps/JaggedPass/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 2, JaggedPass_EventScript_GroudonScene
# 155 "data/maps/JaggedPass/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 3, JaggedPass_EventScript_GroudonScene2
# 156 "data/maps/JaggedPass/scripts.pory"
	.2byte 0
# 157 "data/maps/JaggedPass/scripts.pory"

# 158 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 159 "data/maps/JaggedPass/scripts.pory"
	lockall
# 160 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 161 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 162 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 163 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 164 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 165 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 166 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 167 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 168 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 169 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 170 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 171 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 172 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 173 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 174 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 175 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 176 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 177 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 178 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 179 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 180 "data/maps/JaggedPass/scripts.pory"
	waitse
# 181 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 182 "data/maps/JaggedPass/scripts.pory"
	end
# 183 "data/maps/JaggedPass/scripts.pory"

# 184 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 185 "data/maps/JaggedPass/scripts.pory"
	lockall
# 186 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 187 "data/maps/JaggedPass/scripts.pory"
	waitse
# 188 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 189 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 190 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 191 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 192 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 193 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 194 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 195 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 196 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 197 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 198 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 199 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 200 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 201 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 202 "data/maps/JaggedPass/scripts.pory"
	end
# 203 "data/maps/JaggedPass/scripts.pory"

# 204 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 205 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 206 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 207 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 208 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 209 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 210 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 211 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 212 "data/maps/JaggedPass/scripts.pory"
	end
# 213 "data/maps/JaggedPass/scripts.pory"

# 214 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 215 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 216 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/JaggedPass/scripts.pory"
	end
# 218 "data/maps/JaggedPass/scripts.pory"

# 219 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 220 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 221 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 222 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
# 223 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 224 "data/maps/JaggedPass/scripts.pory"
	release
# 225 "data/maps/JaggedPass/scripts.pory"
	end
# 226 "data/maps/JaggedPass/scripts.pory"

# 227 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 228 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 229 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 230 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 231 "data/maps/JaggedPass/scripts.pory"
	release
# 232 "data/maps/JaggedPass/scripts.pory"
	end
# 233 "data/maps/JaggedPass/scripts.pory"

# 234 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 235 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 236 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 237 "data/maps/JaggedPass/scripts.pory"
	end
# 238 "data/maps/JaggedPass/scripts.pory"

# 239 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 240 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 241 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 242 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 243 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 244 "data/maps/JaggedPass/scripts.pory"
	release
# 245 "data/maps/JaggedPass/scripts.pory"
	end
# 246 "data/maps/JaggedPass/scripts.pory"

# 247 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 248 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 249 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 250 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 251 "data/maps/JaggedPass/scripts.pory"
	release
# 252 "data/maps/JaggedPass/scripts.pory"
	end
# 253 "data/maps/JaggedPass/scripts.pory"

# 254 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 255 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 256 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 257 "data/maps/JaggedPass/scripts.pory"
	end
# 258 "data/maps/JaggedPass/scripts.pory"

# 259 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 260 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 261 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/JaggedPass/scripts.pory"
	end
# 263 "data/maps/JaggedPass/scripts.pory"

# 264 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 265 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 266 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/JaggedPass/scripts.pory"
	end
# 268 "data/maps/JaggedPass/scripts.pory"

# 269 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 270 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 271 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 272 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 273 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 274 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 275 "data/maps/JaggedPass/scripts.pory"

# 276 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 277 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 278 "data/maps/JaggedPass/scripts.pory"

# 279 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 280 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 281 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 282 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 283 "data/maps/JaggedPass/scripts.pory"

# 284 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 285 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 286 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 287 "data/maps/JaggedPass/scripts.pory"

# 288 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 289 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 290 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 291 "data/maps/JaggedPass/scripts.pory"

# 292 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 293 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 294 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 295 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 296 "data/maps/JaggedPass/scripts.pory"

# 297 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 298 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 299 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 300 "data/maps/JaggedPass/scripts.pory"

# 301 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 302 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 303 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 304 "data/maps/JaggedPass/scripts.pory"

# 305 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 306 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 307 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 308 "data/maps/JaggedPass/scripts.pory"

# 309 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 310 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 311 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 312 "data/maps/JaggedPass/scripts.pory"

# 313 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 314 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 315 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 316 "data/maps/JaggedPass/scripts.pory"

# 317 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 318 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 319 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 320 "data/maps/JaggedPass/scripts.pory"

# 321 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 322 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 323 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 324 "data/maps/JaggedPass/scripts.pory"

# 325 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 326 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 327 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 328 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 329 "data/maps/JaggedPass/scripts.pory"

# 330 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 331 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 332 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 333 "data/maps/JaggedPass/scripts.pory"

# 334 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 335 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 336 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 337 "data/maps/JaggedPass/scripts.pory"

# 338 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 339 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 340 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 341 "data/maps/JaggedPass/scripts.pory"

# 342 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 343 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 344 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 345 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 346 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 347 "data/maps/JaggedPass/scripts.pory"

# 348 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 349 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 350 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 351 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 352 "data/maps/JaggedPass/scripts.pory"

# 353 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 354 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 355 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 356 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 357 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 358 "data/maps/JaggedPass/scripts.pory"

# 359 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 360 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 361 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 362 "data/maps/JaggedPass/scripts.pory"

# 363 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 364 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 365 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 366 "data/maps/JaggedPass/scripts.pory"

# 367 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 368 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 369 "data/maps/JaggedPass/scripts.pory"

# 370 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 371 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 372 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 373 "data/maps/JaggedPass/scripts.pory"

# 374 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 375 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 376 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 377 "data/maps/JaggedPass/scripts.pory"

# 378 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 379 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 380 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 381 "data/maps/JaggedPass/scripts.pory"

# 382 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 383 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 384 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"

JaggedPass_EventScript_GroudonScene_Text_0:
# 20 "data/maps/JaggedPass/scripts.pory"
	.string "{COLOR RED}Mujer$"

JaggedPass_EventScript_GroudonScene_Text_1:
# 21 "data/maps/JaggedPass/scripts.pory"
	.string "¿Qué está pasando? ¿Por qué hay tanto\n"
	.string "sol?$"

JaggedPass_EventScript_GroudonScene_Text_2:
# 22 "data/maps/JaggedPass/scripts.pory"
	.string "{COLOR BLUE}Hombre$"

JaggedPass_EventScript_GroudonScene_Text_3:
# 23 "data/maps/JaggedPass/scripts.pory"
	.string "¡Es una señal! ¡Arceus nos está\n"
	.string "castigando!$"

JaggedPass_EventScript_GroudonScene_Text_4:
# 24 "data/maps/JaggedPass/scripts.pory"
	.string "{COLOR RED}Mujer 2$"

JaggedPass_EventScript_GroudonScene_Text_5:
# 25 "data/maps/JaggedPass/scripts.pory"
	.string "¡El sol es lo de menos, ¿Qué pasó con la\n"
	.string "ceniza?!$"

JaggedPass_EventScript_GroudonScene_Text_6:
# 54 "data/maps/JaggedPass/scripts.pory"
	.string "{TEXT_SPEED 5}¡V-{PAUSE 10}¡VI-{PAUSE 10}¡VINO{TEXT_SPEED 0} {SHAKE_SCREEN 6 3 1 1} DEL VOLCÁN!$"
