MiniSafariMiddle_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MiniSafariMiddle_OnFrame
	.byte 0

MiniSafariMiddle_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, MiniSafariMiddle_EventScript_ExitSafariZone
	.2byte 0

MiniSafariMiddle_EventScript_ExitSafariZone::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_ExitSafariZone
	waitmovement 0
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

MiniSafariMiddle_Movement_ExitSafariZone:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MiniSafariMiddle_EventScript_WelcomeAttendant::
	msgbox MiniSafariMiddle_Text_WelcomeToSafariZone, MSGBOX_NPC
	end
MiniSafariMiddle_Text_WelcomeToSafariZone::
	.string "¡Bienvenid{OA} al Mini-Safari!\p"
	.string "Recientemente hemos abierto este\n"
	.string "establecimiento para ayudar a los\l"
	.string "Entrenadores a obtener Pokémon raros\l"
	.string "de forma más accesible. Solíamos solo\l"
	.string "tener un local en la Ruta 121, pero era\l"
	.string "un lugar difícil de acceder.\p"
	.string "Este lugar será más pequeño que la Zona\n"
	.string "Safari, ¡Pero aún podrás ver Pokémon\l"
	.string "que no verás en ningún otro lugar!\p"
	.string "¡Espero que lo disfrutes!$"

MiniSafariMiddle_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox MiniSafariMiddle_Text_WelcomeFirstTime, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MiniSafariMiddle_EventScript_FirstTimeInfo
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release
	end

MiniSafariMiddle_EventScript_FirstTimeInfo::
	msgbox MiniSafariMiddle_Text_FirstTimeInfo, MSGBOX_DEFAULT
	release
	end

MiniSafariMiddle_EventScript_EntranceCounterTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MiniSafariMiddle_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
	end

MiniSafariMiddle_EventScript_TryEnterSafariZone::
	checkitem ITEM_POKEBLOCK_CASE
	goto_if_eq VAR_RESULT, 0, MiniSafariMiddle_EventScript_NoPokeblockCase
	call MiniSafariMiddle_EventScript_CheckHasRoomForPokemon
	checkmoney 500
	goto_if_eq VAR_RESULT, 0, MiniSafariMiddle_EventScript_NotEnoughMoney
	playse SE_SHOP
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
	removemoney 500
	updatemoneybox
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
	waitfanfare
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_EnterSafariZone
	waitmovement 0
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 2
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
	warp MAP_NEW_MAP1, 45, 34
	waitstate
	end

MiniSafariMiddle_EventScript_CheckHasRoomForPokemon::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, MiniSafariMiddle_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, MiniSafariMiddle_EventScript_HasRoomForPokemon
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
	end

MiniSafariMiddle_EventScript_HasRoomForPokemon::
	return

MiniSafariMiddle_EventScript_NoPokeblockCase::
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
	end

MiniSafariMiddle_EventScript_NotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
	end

MiniSafariMiddle_EventScript_MovePlayerBackFromCounter::
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end

MiniSafariMiddle_Movement_BackAwayFromCounter:
	walk_right
	step_end

MiniSafariMiddle_Movement_EnterSafariZone:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	delay_16
	step_end

MiniSafariMiddle_EventScript_TrainerTipSign::
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
	end

MiniSafariMiddle_Text_WelcomeFirstTime::
	.string "¡Bienvenid{OA} al Mini-Safari!\p"
	.string "¿Necesitas que te explique el juego?$"

MiniSafariMiddle_Text_FirstTimeInfo::
	.string "El juego del Mini-Safari es una\n"
	.string "actividad de {COLOR RED}Captura de Pokémon raros{COLOR DARK_GRAY}\l"
	.string "que vienen de otras regiones.\p"
	.string "Al comensar, se te dan 30 Safari Balls y\n"
	.string "el juego acaba cuando se te terminan, o\l"
	.string "das 500 pasos.\p"
	.string "Además, necesitarás un {COLOR RED}Tubo {POKEBLOCK}s\n"
	.string "{COLOR DARK_GRAY}para jugar.$"

