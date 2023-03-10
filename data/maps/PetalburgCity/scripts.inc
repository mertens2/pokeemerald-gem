.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 6, PetalburgCity_EventScript_SetTintForMemory
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return

PetalburgCity_EventScript_DisableMapNameAndMusic::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_FOLLOW_ME
	return

PetalburgCity_EventScript_SetTintForMemory::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	call Script_SetSepiaTint
	addobject LOCALID_WALLY
	addobject LOCALID_WALLYS_DAD
	setobjectxy LOCALID_WALLY, 15, 17
	setobjectxy LOCALID_WALLYS_DAD, 14, 17
	savebgm MUS_END
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	map_script_2 VAR_PETALBURG_CITY_STATE, 6, PetalburgCity_EventScript_WallysFlashback
	.2byte 0
	
PetalburgCity_EventScript_WallysFlashback::
	lockall
	
	setobjectxyperm LOCALID_GYM_BOY, 12, 11
	special SpawnCameraObject
	applymovement LOCALID_WALLY, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_WALLYS_DAD, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_BOY, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadMemory
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Movement_WallyMemoryCamera
	msgbox PetalburgCity_Text_WallysMemory1, MSGBOX_DEFAULT
	namebox PapaWally
	msgbox PetalburgCity_Text_WallysMemory2, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	delay 16
	namebox Wally
	msgbox PetalburgCity_Text_WallysMemory3, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	waitmovement 0
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory2
	waitmovement 0
	opendoor 7, 5
	waitdooranim
	delay 8
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory3
	waitmovement 0
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadMemory2
	waitmovement 0
	delay 16
	closedoor 7, 5
	waitdooranim
	setvar VAR_DEWFORD_TOWN_STATE, 3
	setvar VAR_VERDANTURF_TOWN_STATE, 1
	setvar VAR_PETALBURG_CITY_STATE, 7
	setflag FLAG_HIDE_WALLY_VERDANTURF
	special RemoveCameraObject
	setflag FLAG_SPAWN_INVISIBLE
	warp MAP_VERDANTURF_TOWN, 10, 15
	release
	end

PetalburgCity_Movement_WallyMemory:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

PetalburgCity_Movement_WallyMemoryCamera:
	delay_8
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

PetalburgCity_Movement_WallyDadMemory:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	delay_16
	delay_8
	delay_4
	walk_in_place_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_in_place_slow_right
	step_end

PetalburgCity_Movement_WallyMemory2:
	walk_in_place_slow_up
	step_end

PetalburgCity_Movement_WallyMemory3:
	walk_slow_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyDadMemory2:
	walk_slow_right
	walk_slow_up
	set_invisible
	step_end

PetalburgCity_EventScript_WallyTutorial::
	lockall
	special SavePlayerParty
	special PutZigzagoonInPlayerParty
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	closemessage
	delay 60
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	delay 60
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
	playse SE_BALL_THROW
	waitse
	closemessage
	playse SE_BALL_OPEN
	delay 10
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	delay 60
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL
	waitse
	delay 60
	playse SE_PIN
	waitse
	fadescreen FADE_FROM_BLACK
	playfanfare MUS_EVOLVED
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_PETALBURG_CITY_STATE, 3
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	special LoadPlayerParty
	setvar VAR_PETALBURG_GYM_STATE, 1
	warp MAP_PETALBURG_CITY_GYM, 4, 108
	waitstate
	releaseall
	end

Route102_Text_Sigsa:
	.string "??ZIGZA!$"
Route102_Text_Ralts:
	.string "??R-RALTS!$"
Route102_Text_UnRalts:
	.string "Wally: ??WOW! ??Un Ralts!\n"
	.string "Estos son raros, le?? en un libro.\l"
	.string "Bueno, ahora es tiempo de atraparlo???\l"
	.string "Eh??? ??C??mo????\p"
	.string "Em??? Z-Zigzagon??? ??Tacleada!$"

Route102_Text_PokeballVe:
	.string "Wally: ??Y-y-y-y ahora, eh???!\p"
	.string "??POK??BALL, CAPT??RALO!$"

PetalburgCity_EventScript_WalkToWallyHouse::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_FOLLOW_ME, FALSE
	playse SE_PIN
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_BoyApproachPlayer0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

Petalburg_Leaf::
	lockall
	faceplayer
	goto_if_unset FLAG_DEFEATED_LEAF, Petalburg_Leaf_2
	namebox CampeonaLeaf
	msgbox Petalburg_Leaf_Text_3
	fadescreen FADE_TO_BLACK
	hidenamebox
	setflag FLAG_DEFEATED_LEAF
	removeobject 10
	delay 60
	fadescreen FADE_FROM_BLACK
Petalburg_Leaf_1:
	releaseall
	return

Petalburg_Leaf_2:
	namebox Unknown
	msgbox Petalburg_Leaf_Text_0
	hidenamebox
	namebox CampeonaLeaf
	msgbox Petalburg_Leaf_Text_02
	hidenamebox
	trainerbattle_no_intro TRAINER_LEAF, Leaf_Defeated_Message
	namebox Leaf
	msgbox Petalburg_Leaf_Text_1
	hidenamebox
	giveitem ITEM_CHERISH_BALL, 30
	namebox Leaf
	msgbox Petalburg_Leaf_Text_2
	fadescreen FADE_TO_BLACK
	hidenamebox
	closemessage
	setflag FLAG_DEFEATED_LEAF
	removeobject 10
	delay 60
	fadescreen FADE_FROM_BLACK
	goto Petalburg_Leaf_1


Petalburg_Leaf_Text_0:
	.string "??AH!\n"
	.string "??Me encontraste!\p"
	.string "??P-por favor no me hagas nada! ??S-solo\n"
	.string "estoy jugando con los Pok??mon Beb??\l"
	.string "que aparecen ac??!\p"
	.string "??? ??? ??? ??? ???\n"
	.string "Ah, que solo ven??as a explorar???\l"
	.string "Entiendo???\l"
	.string "Pues ya que me encontraste, d??jame\l"
	.string "contarte algo, y escucha bien que es un\l"
	.string "secretito important??simo que no debe\l"
	.string "saber nadie pero nadie nadie, ??s???\p"
	.string "Bueeeeno, pues???\n"
	.string "Yo???\l"
	.string "Soy {COLOR GREEN}Leaf{COLOR DARK_GRAY}, y soy una de las {COLOR GREEN}Campeonas de\l"
	.string "la Liga A??il de Kanto{COLOR DARK_GRAY} y me propuse a\l"
	.string "venir a Hoenn para investigar la\l"
	.string "migraci??n de Pok??mon, que parece estar\l"
	.string "relacionada al clima. ??Y te digo otro\l"
	.string "secretito m??s, uno que a??n m??s\l"
	.string "secretoso que el otro, y que nadie\l"
	.string "NADIE debe saber?$"
Petalburg_Leaf_Text_02:
	.string "Bueno, bueno ahorita te cuento???\n"
	.string "Hace poco volv?? a iniciar, con un Equipo\l"
	.string "Pok??mon nuevo bien nuevecito??? Una\l"
	.string "nueva aventura por la Regi??n de Hoenn,\l"
	.string "para investigar qu?? est?? pasando???\p"
	.string "Y como veo que tienes potencial, voy a\n"
	.string "hacer una cosita muy cositezca???\l"
	.string "??Vamos a tener una Batalla, y voy a\l"
	.string "ganarte, JA JA JA!$"

Petalburg_Leaf_Text_1:
	.string "??AH!\n"
	.string "??Me ganaste!\l"
	.string "??INCRE??BLE!\p"
	.string "??Eres un{A} Entrenador{A}\n"
	.string "poderosisimisim??sim{OA} de l{OA}s que ganan\l"
	.string "batallas batallonezcas!\p"
	.string "Pero bueno, bueeno, me ganaste, as?? que\n"
	.string "tengo que decirte al menos una de las\l"
	.string "cosas que descubr??: {COLOR GREEN}Hoenn tiene una\l"
	.string "gran resistencia al cambio clim??tico{COLOR DARK_GRAY},\l"
	.string "pero incluso con eso, el ser humano\l"
	.string "sigue logrando arruinar tanto las\l"
	.string "cosas, que est?? afectando incluso a\l"
	.string "Hoenn.\p"
	.string "Mi sospecha es que los Pok??mon han\n"
	.string "venido a Hoenn en busca de un hogar\l"
	.string "m??s seguro, pero por ahora es solo una\l"
	.string "teor??a teorizadora, nada m??s ni nada\l"
	.string "menos.\p"
	.string "??? ??? ??? ??? ???\n"
	.string "??Ah!\l"
	.string "Se me olvidaba darte algo por vencer a\l"
	.string "una campeona campeon??stica como yo.$"

Petalburg_Leaf_Text_2:
	.string "Es una Gloria Ball, una Pok??ball\n"
	.string "especial creada para conmemorar un\l"
	.string "evento important??simo; y tiene la\l"
	.string "peculiar capacidad de atrapar a los\l"
	.string "Pok??mon raros, de esos rar??simos que\l"
	.string "no se dejan atrapar ni con las Ultra\l"
	.string "Ball ni las Ocaso Ball.\p"
	.string "??sala sabiamente, pues no sirve muy\n"
	.string "bien con Pok??mon f??ciles facilitos de\l"
	.string "atrapar, solo con los m??s caprichosos.\p"
	.string "Bueeeeno, ya no te detengo m??s. ??Sigue\n"
	.string "adelante! ??Nos vemos!$"

Petalburg_Leaf_Text_3:
	.string "??????QUE HAGO AC?? NO SE SUPONE QUE\n"
	.string "EST?? AC?? QUE???$"
	
Leaf_Defeated_Message:
	.string "??AH! ??WOW!\p"
	.string "Los Entrenadores en Hoenn\n"
	.string "no dejan nada que desear!$"

PetalburgCity_Text_WhereIsWally:
	.string "??A d??nde se ha ido Wally?\p"
	.string "Tenemos que irnos a la\n"
	.string "Ciudad Verdantuff pronto???$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "??Holis! ??Ser?? que eres???\n"
	.string "Un{A} novat{OA}?\p"
	.string "??Pues ven aqu??!$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "Este es el Gimnasio Petalburg.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "??Buena suerte!$"

PetalburgCity_Text_WaterReflection:
	.string "Reflejada es,\n"
	.string "mi cara en el agua,\l"
	.string "melac??lica.\p"
	.string "??Y tu cara, cu??l\n"
	.string "emoci??n reflejar???\l"
	.string "??Ser?? que lo sabr??s?$"

PetalburgCity_Text_FullPartyExplanation:
	.string "El PC es maravilloso.\n"
	.string "Ojal?? tuviera m??s espacio???$"

PetalburgCity_Text_GymSign:
	.string "Gimnasio Pok??mon de Petalburg\n"
	.string "L??der: Norman\l"
	.string "?????El hombre que persigue el poder!???$"

PetalburgCity_Text_CitySign:
	.string "{COLOR RED}CIUDAD PETALBURG{COLOR DARK_GRAY}\n"
	.string "???Donde las personas viven en armon??a\l"
	.string "con la naturaleza???$"


PetalburgCity_Text_WallyHouseSign:
	.string "Casa de Wally$"

PetalburgCity_Text_AreYouATrainer:
	.string "Hola, dime, ??Eres un{A} Entrenador{A}?$"

PetalburgCity_Text_WellMaybeNot:
	.string "Quiz??s no??? Algo me dice, en la forma en\n"
	.string "la que te vistes??? Que, o bien eres un{A}\l"
	.string "novat{OA}, o s??lamente eres un{A} ni??{OA}\l"
	.string "ordinari{OA}???$"


PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "Ver??s, estoy en busca de Entrenadores\n"
	.string "poderosos para {COLOR BLUE}un proyecto especial{COLOR DARK_GRAY}\l"
	.string "en el que estoy trabajando???$"
	
PetalburgCity_Text_WallysMemory1:
	.string "Chico 1: ??Hey, Wally! ??Qu?? pasa? ??No\n"
	.string "puedes volver a tu casa solito sin que\l"
	.string "tu papito te lleve de la mano?\p"
	.string "Chico 2: ??Ja! Y pensaba que verte correr\n"
	.string "de los Poochyena salvajes y\l"
	.string "desmayarte era pat??tico...$"

PetalburgCity_Text_WallysMemory2:
	.string "Tranquilo, Wally, no les hagas caso.\p"
	.string "S??lo te dicen esas cosas porque no\n"
	.string "pueden ni atravesar el Bosque\l"
	.string "Petalburg.\p"
	.string "Te hacen sentir mal para ellos sentirse\n"
	.string "mejor.$"

PetalburgCity_Text_WallysMemory3:
	.string "All?? en Petalburg, todos me trataban\n"
	.string "muy mal...\p"
	.string "Mi pap?? intentaba ayudarme, pero... S??lo\n"
	.string "me hac??a sentir peor...\p"
	.string "Sin un Pok??mon que me protegiera, y\n"
	.string "estando siempre d??bil por mis\l"
	.string "enfermedades, siempre se aprovechaban\l"
	.string "de m?? para burlarse y hacer cosas como\l"
	.string "empujarme hacia la hierba alta y\l"
	.string "escapar...$"


