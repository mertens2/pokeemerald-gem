.set LOCALID_ATTENDANT, 1

NewMap1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap1_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewMap1_OnFrame
	.byte 0

NewMap1_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, NewMap1_EventScript_EnterSafariZone
	.2byte 0

NewMap1_EventScript_EnterSafariZone::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerEnter
	waitmovement 0
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_ExitAttendantBlockDoor
	waitmovement 0
	setobjectxyperm LOCALID_ATTENDANT, 44, 34
	setvar VAR_SAFARI_ZONE_STATE, 4
	releaseall
	end

NewMap1_OnTransition:
	call_if_eq VAR_SAFARI_ZONE_STATE, 2, NewMap1_EventScript_SetExitAttendantAside
	end

NewMap1_EventScript_SetExitAttendantAside::
	setobjectxyperm LOCALID_ATTENDANT, 44, 34
	return

NewMap1_Movement_PlayerEnter:
	walk_down
	step_end

NewMap1_Movement_ExitAttendantBlockDoor:
	walk_right
	walk_in_place_faster_down
	step_end

NewMap1_EventScript_ExitAttendant::
	lock
	faceplayer
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, NewMap1_EventScript_GoodLuck
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewMap1_EventScript_ExitEarly
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
	release
	end

NewMap1_EventScript_GoodLuck::
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
	release
	end

NewMap1_EventScript_ExitEarly::
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, NewMap1_EventScript_ExitEarlyNorth
	case DIR_EAST, NewMap1_EventScript_ExitEarlyEast
	end

NewMap1_EventScript_ExitEarlyNorth::
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_MoveExitAttendantNorth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerExitNorth
	waitmovement 0
	goto NewMap1_EventScript_Exit
	end

NewMap1_EventScript_ExitEarlyEast::
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_MoveExitAttendantEast
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerExitEast
	waitmovement 0
	goto NewMap1_EventScript_Exit
	end
	
NewMap1_EventScript_OldMan::
	lockall
	faceplayer
	msgbox NewMap1_EventScript_OldMan_Text_0
	releaseall
	return

NewMap1_EventScript_OldMan_Text_0:
	.string "Estoy muy emocionado por probar este\n"
	.string "nuevo Safari.\p"
	.string "Sólo un áera y una cueva pequeña\n"
	.string "suena limitante, pero entiendo porqué\l"
	.string "es así. ¡Espero se expanda en el\l"
	.string "futuro!$"

NewMap1_EventScript_Fisherman::
	lockall
	faceplayer
	msgbox NewMap1_EventScript_Fisherman_Text_0
	releaseall
	return

NewMap1_EventScript_Fisherman_Text_0:
	.string "¡Este lugar es increíble!\p"
	.string "¡Hasta la Caña Vieja saca cosas\n"
	.string "interesantes! ¡Todas las cañas tienen\l"
	.string "algún Pokémon interesante o exclusivo!\p¡Incluso de noche hay nuevos Pokémon!$"

NewMap1_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warpdoor MAP_MINI_SAFARI_MIDDLE, 2, 5
	waitstate
	end

NewMap1_Movement_PlayerExitNorth:
	walk_up
	step_end

NewMap1_Movement_PlayerExitEast:
	walk_right
	walk_in_place_faster_up
	step_end

NewMap1_Movement_MoveExitAttendantNorth:
	walk_left
	walk_in_place_faster_right
	step_end

NewMap1_Movement_MoveExitAttendantEast:
	walk_down
	walk_in_place_faster_up
	step_end
