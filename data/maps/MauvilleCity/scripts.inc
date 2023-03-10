.set LOCALID_WALLY, 6
.set LOCALID_WALLYS_UNCLE, 7
.set LOCALID_SCOTT, 11

MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0

MauvilleCity_OnTransition:
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_SYS_TV_START
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	setvar VAR_MAUVILLE_GYM_STATE, 0
	call_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
	end

MauvilleCity_EventScript_MoveWattsonBackToGym::
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return

MauvilleCity_EventScript_Boy::
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end

MauvilleCity_EventScript_Maniac::
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end

MauvilleCity_EventScript_Woman::
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end

MauvilleCity_EventScript_RichBoy::
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end

MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GymSign::
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_BikeShopSign::
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GameCornerSign::
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_SchoolKidM::
	lock
	faceplayer
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
	setflag FLAG_TV_EXPLAINED
	release
	end

MauvilleCity_EventScript_TVExplained::
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
	namebox TioWally
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
	namebox TioWally
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_Wally::
	lockall
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	namebox Wally
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
	namebox TioWally
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
	namebox Wally
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay48
	waitmovement 0
	namebox Wally
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_BattleWallyPrompt::
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
	closemessage
	hidenamebox
	switch VAR_FACING
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
	end

MauvilleCity_EventScript_WallyAndUncleExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	namebox Wally
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
	closemessage
	namebox TioWally
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
	waitmovement 0
	delay 36
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
	waitmovement 0
	namebox TioWally
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_WallyAndUncleExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	namebox Wally
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
	closemessage
	namebox TioWally
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
	waitmovement 0
	delay 36
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
	waitmovement 0
	namebox TioWally
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_DefeatedWally::
	removeobject LOCALID_WALLY
	removeobject LOCALID_WALLYS_UNCLE
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	namebox Scott
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	addvar VAR_SCOTT_STATE, 1
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
	removeobject LOCALID_SCOTT
	releaseall
	end

MauvilleCity_EventScript_ScottApproachPlayerNorth::
	addobject LOCALID_SCOTT
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottApproachPlayerEast::
	setobjectxyperm LOCALID_SCOTT, 12, 13
	addobject LOCALID_SCOTT
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
	waitmovement 0
	return

MauvilleCity_EventScript_BattleWally::
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	namebox Wally
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	namebox TioWally
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_DeclineWallyBattle::
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
	namebox Wally
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	release
	end

MauvilleCity_EventScript_WallyRequestBattleAgain::
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_Movement_WallyExitNorth1:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

MauvilleCity_Movement_WallyExitEast1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallyExitNorth2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_WallyExitEast2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast2:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitNorth:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitEast:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast1:
	delay_16
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_WallysUncleExitNorth1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_WallysUncleExitEast1:
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_PlayerFaceUncleNorth:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerEast:
	walk_right
	walk_up
	step_end

MauvilleCity_Movement_WallysUncleExitNorth2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallysUncleExitEast2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_ScottApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_ScottApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MauvilleCity_Movement_ScottExitNorth:
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

MauvilleCity_Movement_ScottExitEast:
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
	step_end

MauvilleCity_EventScript_Wattson::
	lock
	faceplayer
	checkitem ITEM_TM55
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_EventScript_ReceivedThunderbolt
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_BegunNewMauville::
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_TM55
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_ReceivedThunderbolt::
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RegisterWallyCall::
	lockall
	pokenavcall MauvilleCity_Text_WallyPokenavCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	releaseall
	end

MauvilleCity_Text_UncleHesTooPeppy:
	.string "Mi Wally se emociona mucho, gracias a\n"
	.string "los Pok??mon.\p"
	.string "Me parece que es mucha emoci??n???$"

MauvilleCity_Text_WallyWantToChallengeGym:
	.string "??Ay, porfa, T??o, d??jame tomar el {COLOR BLUE}Desaf??o\n"
	.string "de los Gimnasios{COLOR DARK_GRAY}, ya soy muy fuerte!\p"
	.string "??Ralts y yo aprendimos t??cnicas s??per\n"
	.string "fuertes!$"

MauvilleCity_Text_UncleYourePushingIt:
	.string "Wally, Wally, tranquilo.\p"
	.string "??No te est??s precipitando?{PAUSE 2} Entiendo\n"
	.string "que se hayan fortalecido, pero los\l"
	.string "{COLOR BLUE}L??deres de Gimnasio{COLOR DARK_GRAY} son MUY fuertes???$"

MauvilleCity_Text_WallyWeCanBeatAnyone:
	.string "??No me estoy precipitando, T??o!\p"
	.string "Si Ralts me ayuda, {PAUSE 5}??Podr?? vencer a\n"
	.string "cualquier rival!$"

MauvilleCity_Text_WallyWillYouBattleMe:
	.string "Ah, {PAUSE 2}??{PLAYER}, {PLAYER}!\p"
	.string "??Hace tanto que no te veo, amig{OA}!\p"
	.string "??{PLAYER}, {PLAYER}, quiero\n"
	.string "mostrarte lo fuerte que me he vuelto!\l"
	.string "Mi Ralts hasta ha aprendido muchos\l"
	.string "ataques nuevos, {PLAYER}.\p"
	.string "??Te gustar??a combatir conmigo,\n"
	.string "{PLAYER}, por favor?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
	.string "Pero??? {PAUSE 5}Pero si no combatimos, mi T??o no\n"
	.string "me dejar?? combatir en los Gimnasios???$"

MauvilleCity_Text_UncleCanYouBattleWally:
	.string "{PLAYER}, {PAUSE 2}??Verdad?\p"
	.string "Wally te admira much??simo, y no querr??\n"
	.string "irse de aqu?? hasta que tengan una\l"
	.string "batalla, as?? que, por favor, por su bien\l"
	.string "y por el m??o, {PAUSE 2}??Podr??as hacerlo?$"

MauvilleCity_Text_WallyPleaseBattleMe:
	.string "??Porfa, {PLAYER}cit{OA}, porfa!$"

MauvilleCity_Text_WallyHereICome:
	.string "Gracias, muchas gracias.\p"
	.string "-inhala-, -suspira-??? Entonces???\p"
	.string "??{PLAYER}, t-{PAUSE 1}te desaf??o a una Batalla\n"
	.string "Pok??mon!$"

MauvilleCity_Text_WallyDefeat:
	.string "Wally: ??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\p"
	.string "??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\p"
	.string "Perd?????\pY en frente de {PLAYER}???$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf:
	.string "T-{PAUSE 2}t??o??? {PAUSE 5}Q-{PAUSE 2}quiero??? Ir a Verdanturf???\p"
	.string "??? ??? ??? ??? ???$"

MauvilleCity_Text_ThankYouNotEnoughToBattle:
	.string "??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\p"
	.string "G-{PAUSE 2}gr???{PAUSE 2}gra???{PAUSE 2}gracias, {PLAYER}???\p"
	.string "Y-{PAUSE 2}yo??? {PAUSE 5}R-{PAUSE 2}realme??? {PAUSE 5}Realmente??? {PAUSE 5}Aprecio\n"
	.string "que??? {PAUSE 5}Te hayas tomado el tiempo de\l"
	.string "ense??arme que ser Entrenador se trata\l"
	.string "de mucho m??s que subir unos niveles???\p"
	.string "Necesito???\n"
	.string "??? {PAUSE 5}???\l"
	.string "??? {PAUSE 5}Talento, {PAUSE 2}??No es as???$"

MauvilleCity_Text_UncleNoNeedToBeDown:
	.string "No, Wally. Est??s equivoc??ndote.\p"
	.string "No seas tan duro contigo mismo, eso no\n"
	.string "te llevar?? a ningun lado, cre??me.\p"
	.string "Lo que necesitas no es talento, es\n"
	.string "esfuerzo; confianza en tus Pok??mon.\p"
	.string "Sigue esforz??ndote, con cuidado para\n"
	.string "no agitarte, despacio para no\l"
	.string "sobrepasarte, y llegar??s a ser incluso\l"
	.string "m??s fuerte que {PLAYER}.$"
	
MauvilleCity_Text_WallyNoNeedTo:
	.string "Ir?? solo a Verdanturf.\pNecesito pensar, T??o.$"

MauvilleCity_Text_WallysUncleItsOkay:
	.string "Est?? bien, Wally.\nCu??date mucho.$"

MauvilleCity_Text_UncleVisitUsSometime:
	.string "??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\p"
	.string "??? {PAUSE 5}Creo??? {PAUSE 5}Que eso fue demasiado,\n"
	.string "{PLAYER}, realmente has aplastado su\l"
	.string "esp??ritu totalmente???\p"
	.string "??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\n"
	.string "??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}??? {PAUSE 5}???\p"
	.string "No.\n"
	.string "Lo que hiciste estuvo bien.\p"
	.string "Si ganaba contra t??, o estaba muy cerca\n"
	.string "de vencerte, pero perd??a con\l"
	.string "Entrenadores del mont??n de las Rutas\l"
	.string "cercanas??? {PAUSE 5}Su esp??ritu se habr??a roto\l"
	.string "a??n m??s.\p"
	.string "Gracias por ser honest{OA}, {PLAYER},\n"
	.string "realmente le has ayudado.$"

MauvilleCity_Text_WallyPokenavCall:
	.string "??? ??? ??? ??? ??? ???\n"
	.string "??? ??? ??? ??? ??? {PAUSE 2}??Biip!\p"
	.string "Wally: ??H-{PAUSE 2}hola, {PLAYER}!\p"
	.string "Q-{PAUSE 2}quer??a decirte que mi T??o me compr??\n"
	.string "un Pok??Nav.\p"
	.string "Ahora podr?? hablar contigo un poco m??s\n"
	.string "seguido.\p"
	.string "C-{PAUSE 2}c-{PAUSE 2}c-{PAUSE 2}c-{PAUSE 2}claro, s-{PAUSE 2}si eso n-{PAUSE 2}no te parece\n"
	.string "m-{PAUSE 2}molesto???\p"
	.string "???\p"
	.string "??Te parece bien?\n"
	.string "??Genial!\p"
	.string "??Hablamos luego, {PLAYER}cit{OA}!\p"
	.string "??? ??? ??? ??? ??? ???\n"
	.string "??? ??? ??? ??? ??? {PAUSE 2}??Click!$"

MauvilleCity_Text_RegisteredWally:
	.string "Registered WALLY\n"
	.string "in the POK??NAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack:
	.string "Batallas como esa que acabo de ver,\n"
	.string "donde ambos Entrenadores dejan\l"
	.string "sentimentalismos de lado y no se\l"
	.string "contienen??? {PAUSE 2}??S??! {PAUSE 2}??Esas son verdaderas\l"
	.string "Batallas Pok??mon!\p"
	.string "Ese que se fue reci??n, {PAUSE 2}??Son amigos, no?\p"
	.string "Me alegra que no te hayas contenido,\n"
	.string "para poder ver tal demostraci??n de\l"
	.string "poder, tal diferencia de fuerzas,\p"
	.string "??Eso le ayudar?? a convertirse en\n"
	.string "alguien capaz de vencer a cualquier\l"
	.string "rival!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey:
	.string "Ah, {PAUSE 2}??{PLAYER}!\p"
	.string "??Que alegr??a verte aqu??!\n"
	.string "??Hasta se ve que est??s hechando\l"
	.string "chispas, BUAJAJAJAJA!\p"
	.string "??Mira, mira, {PLAYER}, necesito que me\n"
	.string "hagas un favor.\p"
	.string "Hace tiempo, cre?? un lugar llamado\n"
	.string "Nueva Mauville, pero por alguna raz??n,\l"
	.string "el generador ha vuelto a encenderse???\l"
	.string "??Y eso molesta a los Pok??mon salvajes,\l"
	.string "podr??a sobrecargarlos y causar\l"
	.string "aprietos!\p"
	.string "Necesito que vayas ah?? y apagues el\n"
	.string "generador. No puedo hacerlo yo porque\l"
	.string "mis piernas ya no son lo que eran???\l"
	.string "As?? que toma estas Llaves, y apaga ese\l"
	.string "generador por m??,{PAUSE 2} ??Okay?$"

MauvilleCity_Text_WattsonWontBeChallenge:
	.string "??Ah, y no te preocupes!\n"
	.string "Ese lugar es inseguro, pero no mortal.\l"
	.string "Estar??s bien, {PAUSE 2}??No es como si un humano\l"
	.string "pudiera sobrecargarse de electricidad\l"
	.string "como un Voltorb, BUAJAJAJAJA!$"

MauvilleCity_Text_WattsonThanksTakeTM:
	.string "??BUAJAJAJAJA!\p"
	.string "??Sab??a que podr??as!\p"
	.string "??Ahora, ten esta MT.\n"
	.string "Contiene el movimiento Rayo Carga, que\l"
	.string "subir?? tu Ataque Especial en un nivel\l"
	.string "despu??s de usarse, {PAUSE 2}??Muy ??til, no?\p"
	.string "??Se podr??a decir que cargas con un arma\n"
	.string "ahora, BUAJAJAJAJAJA!$"

MauvilleCity_Text_WattsonYoungTakeCharge:
	.string "??Se podr??a decir que cargas con un arma\n"
	.string "ahora, BUAJAJAJAJAJA!$"

MauvilleCity_Text_NurseHurtMonBackToHealth:
	.string "You know, it's cool to have POK??MON\n"
	.string "battles and stuff???\p"
	.string "But if your POK??MON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough:
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous:
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike:
	.string "Even if you're riding a BIKE,\n"
	.string "wild POK??MON could jump you.$"

MauvilleCity_Text_CitySign:
	.string "MAUVILLE CITY\n"
	.string "???The bright and shiny city of fun!???$"

MauvilleCity_Text_GymSign:
	.string "MAUVILLE CITY POK??MON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "???The cheerfully electrifying man!???$"

MauvilleCity_Text_BikeShopSign:
	.string "???Ride in gravel and shake up your\n"
	.string "soul!???\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign:
	.string "???The play spot for all!???\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV:
	.string "Hi, do you check out TV at all?\p"
	.string "They've added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I've seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That's why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_BeenCheckingOutTV:
	.string "Hi, have you been checking out TVs?$"
