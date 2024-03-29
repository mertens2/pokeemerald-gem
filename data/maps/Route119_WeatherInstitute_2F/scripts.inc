.set LOCALID_GRUNT_1, 1
.set LOCALID_GRUNT_2, 2
.set LOCALID_SHELLY, 3
.set LOCALID_SCIENTIST, 5
.set LOCALID_GRUNT_3, 7
.set LOCALID_GRUNT_4, 8
.set LOCALID_DELTA_DIVISION_GRUNT_A, 9
.set LOCALID_DELTA_DIVISION_GRUNT_B, 10

Route119_WeatherInstitute_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
	.byte 0

Route119_WeatherInstitute_2F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
	end

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
	return

Route119_WeatherInstitute_2F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Shelly::
	lockall
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1, MSGBOX_INTERRUPT
	hidenamebox
	applymovement LOCALID_DELTA_DIVISION_GRUNT_A, Common_Movement_WalkInPlaceDown
	waitmovement 0
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2
	applymovement LOCALID_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4, MSGBOX_INTERRUPT
	fadescreen FADE_TO_BLACK
	delay 16
	playse SE_SUPER_EFFECTIVE
	waitse
	playse SE_FAINT
	waitse
	fadescreen FADE_FROM_BLACK
	delay 16
	playse SE_PIN
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5, MSGBOX_INTERRUPT
	hidenamebox
	applymovement LOCALID_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceUp
	waitmovement 0
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6
	playse SE_PIN
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7, MSGBOX_INTERRUPT
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	delay 16
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10, MSGBOX_INTERRUPT
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11
	closemessage
	hidenamebox
	playse SE_SUPER_EFFECTIVE
	waitse
	playse SE_FAINT
	waitse
	playse SE_FAINT
	waitse
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12, MSGBOX_INTERRUPT
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13
	closemessage
	hidenamebox
	playse SE_SUPER_EFFECTIVE
	waitse
	playse SE_FAINT
	waitse
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14
	closemessage
	hidenamebox
	playse SE_SUPER_EFFECTIVE
	waitse
	playse SE_FAINT
	waitse
	playse SE_SUPER_EFFECTIVE
	waitse
	playse SE_FAINT
	waitse
	fadescreen FADE_FROM_BLACK
	delay 16
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15
	delay 16
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16
	namebox Unknown
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17
	fadescreen FADE_TO_BLACK
	delay 16
	closemessage
	hidenamebox
	setobjectxy LOCALID_DELTA_DIVISION_GRUNT_A, 19, 0
	setobjectxy LOCALID_DELTA_DIVISION_GRUNT_B, 19, 0
	setobjectxy LOCALID_GRUNT_1, 5, 6
	setobjectxy LOCALID_GRUNT_2, 6, 6
	turnobject LOCALID_GRUNT_1, DIR_WEST
	delay 8
	turnobject LOCALID_GRUNT_2, DIR_WEST
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18
	hidenamebox
	closemessage
	namebox Aqua
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19
	hidenamebox
	closemessage
	namebox Aqua
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20
	hidenamebox
	closemessage
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21
	hidenamebox
	closemessage
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22
	hidenamebox
	closemessage
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
	waitmovement 0
	namebox Aqua
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23
	hidenamebox
	closemessage
	applymovement LOCALID_SHELLY, Route119_WeatherInstitute_2F_Movement_ShellyAttacks
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24
	namebox Aqua
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25
	hidenamebox
	closemessage
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsHack
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsHack
	waitmovement 0
	trainerbattle_no_whiteout_continue_script TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
	return


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1
	hidenamebox
	closemessage
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1:
	applymovement LOCALID_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsBack
	applymovement LOCALID_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsBack
	waitmovement 0
	namebox Aqua
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceUp
	waitmovement 0
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4
	hidenamebox
	closemessage
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_SHELLY
	removeobject LOCALID_GRUNT_4
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_DELTA_DIVISION_GRUNT_A
	removeobject LOCALID_DELTA_DIVISION_GRUNT_B
	setobjectxy LOCALID_SCIENTIST, 1, 6
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
	waitmovement 0
	copyobjectxytoperm LOCALID_SCIENTIST
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	releaseall
	return

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2:
	namebox Shelly
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0
	hidenamebox
	closemessage
	goto Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1


Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay:
	walk_down
	walk_down
	walk_down
	face_up
	step_end

Route119_WeatherInstitute_2F_Movement_ShellyAttacks:
	walk_right
	walk_down
	walk_down
	step_end

Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay:
	walk_up
	face_down
	step_end

Route119_WeatherInstitute_2F_Movement_GruntsHack:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route119_WeatherInstitute_2F_Movement_GruntsBack:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0:
	.string "¿Quiénes son ustedes?\n"
	.string "¿Qué están haciendo aquí?\p"
	.string "¿Acaso saben en lo que se están\n"
	.string "metiendo al interponerse conmigo,\l"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}, la {COLOR BLUE}Comandante del Equipo Aqua{COLOR DARK_GRAY}?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1:
	.string "¡Salgan de nuestro camino si no quieren\n"
	.string "ser aplastados!\l"
	.string "¡Nuestra racha de victorias es muestra\l"
	.string "de las pocas posibilidades que tienen!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2:
	.string "Acábala, ¿Quieres?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3:
	.string "Dalo por hecho.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4:
	.string "¿¡C-cómo se atreven!?\n"
	.string "¡Nadie dudará jamás del Equipo Aqu-{PAUSE 16} $"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5:
	.string "P-{PAUSE 16}pero... ¿¡CÓMO!?\n"
	.string "¡Todos mis Pokémon... Derrotados por\l"
	.string "sólo uno de los suyos!\p"
	.string "¡Pagarán por est-{PAUSE 16}  $"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6:
	.string "Hemos terminado aquí.\p"
	.string "Tenemos la {COLOR BLUE}información necesaria{COLOR DARK_GRAY}.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7:
	.string "¡Si me interrumpen una ves m-{PAUSE 16}!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8:
	.string "Concuerdo. Regresemos a la base e\n"
	.string "infomémosle de lo ocurrido.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9:
	.string "¡Me harté!\p"
	.string "¡No soportaré que manchen el honor del\n"
	.string "Equipo Aqua!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10:
	.string "Ah. Supongo que tendré que acabarte\n"
	.string "denuevo.\p"
	.string "Usa {COLOR GREEN}Gigadr{COLOR DARK_GRAY}-{PAUSE 8} $"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11:
	.string "¡Frilish, usa {COLOR BLUE}Mismodestino{COLOR DARK_GRAY}!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12:
	.string "Hmmm... Interesante. Acabemos con esto,\n"
	.string "{COLOR BLUE}Al{COLOR DARK_GRAY}-{PAUSE 8} $"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13:
	.string "¡{COLOR BLUE}Rayo de Hielo{COLOR DARK_GRAY}!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14:
	.string "¡SUFICIENTE!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15:
	.string "Derrotada... ¿De nuevo?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16:
	.string "Seguir entreteniéndonos con estos\n"
	.string "criminales sería una pérdida de tiempo.\p"
	.string "Creí que esta sería más fuerte, pero\n"
	.string "apenas consiguió derrotar a dos de mis\l"
	.string "Pokémon.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17:
	.string "Vámonos. No necesitamos seguir\n"
	.string "aplastando su espíritu.\p"
	.string "Aunque admito que es entretenido.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18:
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19:
	.string "¡Comandante Shelly!\p"
	.string "¿Está bien?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20:
	.string "Queríamos ayudar, pero est{EA} niñ{OA} derrotó\n"
	.string "a nuestros Pokémon fuertes. ¿Qué\l"
	.string "vamos a hacer ahora?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21:
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}\p"
	.string "La recuperaremos.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22:
	.string "¡No importa quiénes ellos se crean que\n"
	.string "son!\p"
	.string "¡No importa que nos hayan derrotado!\p"
	.string "La información no se puede borrar.\n"
	.string "Sigue en el servidor de este lugar, y\l"
	.string "van a recuperarla.\p"
	.string "Y no se preocupen, que tengo\n"
	.string "suficientes Objetos como para curar a\l"
	.string "mis Pokémon y derrotar a est{EA} inútil\l"
	.string "Entrenador{A} que tantos problemas les\l"
	.string "dio a ustedes.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23:
	.string "¡Vamos, Comandante!\p"
	.string "¡Usted puede!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24:
	.string "De mientras, encárgense ustedes de\n"
	.string "recuperar la información.\p"
	.string "Todo lo necesario está en el Pendrive\n"
	.string "que les di.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25:
	.string "¡Si, Comandante!$"

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0:
	.string "¡Ah!\p"
	.string "Es impresionante el poder que tienes...\n"
	.string "¡Pero no importa, pues el poder de\l"
	.string "{COLOR BLUE}nuestro Líder{COLOR DARK_GRAY} es incluso más grande!$"

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1:
	.string "La derrota que sufrí te hiso confiarte,\n"
	.string "¿No es así?\p"
	.string "¡Pues que sirva de testamento del poder\n"
	.string "que posee el Equipo Aqua!\p"
	.string "{COLOR BLUE}Nuestro Líder{COLOR DARK_GRAY} podría barrer el piso él\n"
	.string "sólo aunque el {COLOR BLUE}Comandante Matt y yo\l"
	.string "luchemos juntos en su contra{COLOR DARK_GRAY}.\p"
	.string "Que sirva también de aviso para que no\n"
	.string "te metas con esa pandilla de idiotas\l"
	.string "que me derrotaron... ¡O podría no volver\l"
	.string "a disfrutar de aplastarte!$"

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2:
	.string "Todo listo, ¡La información es nuestra,\n"
	.string "señorita!$"

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3:
	.string "Perfecto.$"

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4:
	.string "Como verás, tus acciones aquí, las\n"
	.string "veces que has derrotado a miembros de\l"
	.string "nuestro equipo, han sido todas en vano,\l"
	.string "pues hemos terminado exitosamente las\l"
	.string "primeras dos fases.\p"
	.string "Aunque tengo mis dudas con respecto a\n"
	.string "nuestros métodos y objetivos, ¡Mi\l"
	.string "lealtad es mucho más fuerte!\p"
	.string "Ahora, equipo, ¡Vayamos al Monte Pyre a\n"
	.string "detener al Equipo Magma como\l"
	.string "acordamos!$"

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon
	showmonpicshiny SPECIES_CASTFORM, 10, 3, 0
	msgbox Route119_WeatherInstitute_2F_Text_ExplainCastform, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_RejectCastform
	closemessage
	hidemonpic
	setvar VAR_TEMP_1, SPECIES_CASTFORM
	givemon SPECIES_CASTFORM, 30, ITEM_DAMP_ROCK
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route119_WeatherInstitute_2F_EventScript_RejectCastform::
	closemessage
	hidemonpic
	msgbox Route119_WeatherInstitute_2F_Text_RejectedCastform
	releaseall
	end

Route119_WeatherInstitute_2F_Text_RejectedCastform:
	.string "¡No te preocupes!\p¡Seguiré aquí si lo quieres!$"

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	end

Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
	call Common_EventScript_TransferredToPC
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
	return

Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_CASTFORM
	release
	end

Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
	special CreateAbnormalWeatherEvent
	setflag FLAG_TEMP_2
	return

Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	ride_water_current_up
	walk_in_place_faster_down
	step_end

Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
	slide_up
	slide_up
	slide_up
	walk_in_place_faster_left
	step_end

Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_Text_Grunt2Intro:
	.string "The INSTITUTE created a type of\n"
	.string "POKéMON that has something to do with\l"
	.string "the weather. We're here to take them!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
	.string "Our plan's being spoiled by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
	.string "If the POKéMON they made here can\n"
	.string "control the weather freely, then we of\l"
	.string "TEAM AQUA definitely need it!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro:
	.string "We're TEAM AQUA!\n"
	.string "We appear wherever anything rare is\l"
	.string "found!$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
	.string "You got me!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
	.string "You don't have any idea what we of\n"
	.string "TEAM AQUA are working towards!\l"
	.string "You stay out of our way!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro:
	.string "Don't tell me you're looking for that\n"
	.string "weather POKéMON, too?\p"
	.string "That's a no-no!\n"
	.string "We were here to get it first!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
	.string "Oh, will you look at my POKéMON?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
	.string "Humph, so what?\n"
	.string "What we want…\p"
	.string "What we really want isn't here…\n"
	.string "Ihihihihi…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro:
	.string "¡Te arrepentirás de haber derrotado\n"
	.string "a nuestros Reclutas!\p"
	.string "¡Prepárate para ahogarte con\nel tsunami de mi poder!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat:
	.string "¿¡Q-qué!?\n"
	.string "¡Ja, tu poder es asqueroso!$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
	.string "It's bad enough to have TEAM MAGMA\n"
	.string "blunder about, but now there's you!\p"
	.string "What makes you want to sniff around\n"
	.string "in our business, anyway?$"

Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
	.string "We have a situation here!\p"
	.string "A TEAM MAGMA mob just passed\n"
	.string "the WEATHER INSTITUTE.\p"
	.string "They appear to be headed for\n"
	.string "MT. PYRE!$"

Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
	.string "What?!\p"
	.string "We can't waste any more time here!\n"
	.string "We have to hurry to MT. PYRE, too!\p"
	.string "Ahahahaha!\n"
	.string "TEAM MAGMA, just you wait!$"

Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
	.string "Thanks!\n"
	.string "Thanks to you, we're safe!\p"
	.string "It might be an odd way of thanking you,\n"
	.string "but take this POKéMON.$"

Route119_WeatherInstitute_2F_Text_ExplainCastform:
	.string "¡Es un Castform!\pSolía ser bastante débil, pero las\namables personas que detuvieron\lal Equipo Aqua lo modificaron genéticamente.\p¡Ahora es increíblemente rápido!\p¿Lo quieres, no?$"

@ Unused
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
	.string "Hm? You don't seem to have any room\n"
	.string "for this POKéMON.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
	.string "{PLAYER} received CASTFORM!$"

Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
	.string "Ese Pokémon puede usar Meteorobola,\n"
	.string "que cambia el clima, (y su tipo)\l"
	.string "dependiendo del Objeto que tenga\l"
	.string "equipado, ¡Es muy fuerte!.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
	.string "I've been researching rain for many\n"
	.string "years, but it's ridiculous to think that\l"
	.string "humans can freely change the weather.$"

Route119_WeatherInstitute_2F_Text_GroudonWeather:
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, a drought has been recorded\n"
	.string "in {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_KyogreWeather:
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, heavy rainfall has been\n"
	.string "recorded over {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
	.string "Abnormal weather conditions are\n"
	.string "no longer being reported.\p"
	.string "The occasional rainfall is a blessing,\n"
	.string "really.$"

