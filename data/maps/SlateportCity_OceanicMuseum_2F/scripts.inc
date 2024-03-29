.set LOCALID_CAPT_STERN, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_GRUNT_1, 3
.set LOCALID_GRUNT_2, 4

SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
	lock
	faceplayer
	namebox Stern
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	playse SE_BALL_TRADE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	delay 16
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	addobject LOCALID_GRUNT_1
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
	waitmovement 0
	addobject LOCALID_GRUNT_2
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
	waitmovement 0
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	namebox Aqua
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
	namebox Stern
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
	namebox Aqua
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
	namebox Aqua
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	namebox Aqua
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	namebox Aqua
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	delay 35
	addobject LOCALID_ARCHIE
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
	waitmovement 0
	namebox Unknown
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
	waitmovement 0
	namebox Unknown
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
	namebox Archie
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	applymovement LOCALID_ARCHIE, Common_Movement_FaceAwayPlayer
	waitmovement 0
	namebox Archie
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving, MSGBOX_DEFAULT
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	fadescreen FADE_FROM_BLACK
	delay 30
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_DEVON_PARTS
	call Common_EventScript_PlayerHandedOverTheItem
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	removeobject LOCALID_CAPT_STERN
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
	setflag FLAG_DELIVERED_DEVON_GOODS
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	fadescreen FADE_FROM_BLACK
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_Unused:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	delay_8
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
	walk_down
	walk_right
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_faster_up
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
	checkitem ITEM_TM56
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
	giveitem ITEM_TM56
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
	releaseall
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
	releaseall
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
	.string "Ah, ¡Pero si es {PLAYER}!\n"
	.string "¿Traes las {COLOR BLUE}Partes{COLOR DARK_GRAY} que pedí?\p"
	.string "Ahora te recomendaría que\nte fueras inmediatamente.$"

SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
	.string "¡Alto ahí, señores!\n"
	.string "¡Nos llevaremos esas Partes!$"

SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
	.string "¡Oh! ¡Eh! ¿Qué?\n"
	.string "¿Q-quiénes son?$"

SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
	.string "¡Somos el Equipo Aqua!\p"
	.string "¡Y nuestro Jefecito nos envió\na buscar esas Partes!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
	.string "¡Aaaahh!\n"
	.string "¡Me ganó un{A} niñ{OA}!$"

SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
	.string "¿Porqué tenía que pasar esto…?\n"
	.string "El Jefecito no estará complacido…$"

SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
	.string "¡Pedazo de inútil!\n"
	.string "¡Déjame que yo me encargo!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
	.string "¡¿QUÉ?!\n"
	.string "¡También perdí!$"

SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
	.string "¿Ahora qué? Se supone que las Partes\n"
	.string "son nuestras, ¡Esto es injusto!$"

SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
	.string "Sabía que alguien terminaría\nentrometiéndose en nuestros planes,\ly por ende, vine aquí.\p¡Pero no me imaginé que\nsería un{A} niñ{OA}!$"

SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
	.string "¡Somos el {COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY},\ny vamos a cambiar el mundo!\p"
	.string "¡Y yo, {COLOR BLUE}soy el Líder del Equipo{COLOR DARK_GRAY},\n"
	.string "{COLOR BLUE}el Grandioso Archie{COLOR DARK_GRAY}!$"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2:
	.string "La gente, y los Pokémon…\n¡Merecen un mundo mejor!\p¡Pero nosotros, los humanos,\nhemos contaminado el mundo!\p"
	.string "… … … … … …\p"
	.string "En pocos años, llegaremos {COLOR RED}a un punto\nsin retorno{COLOR DARK_GRAY}, uno donde nuestras\lacciones dejarán este mundo inhabitable.\p"
	.string "El Equipo Aqua, mi maravillosa\norganización… ¡Nos salvará a todos!\p"
	.string "Y si te metes en mi camino\nde nuevo…\p¡Te destruiré por completo!$"
SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving:
	.string "¡Ahora, ustedes dos!\n¡Nos vamos!\p"
	.string "Díganle a todos en el museo que nos\nvamos a las aguas termales, lo merecen.\p"
	.string "Tengo mis métodos para\nobtener esas {COLOR BLUE}Partes{COLOR DARK_GRAY}.$"

SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
	.string "Eh… Bueno…\n"
	.string "{PLAYER}… Ese {COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY}… …\p"
	.string "¡Es horrible!\n"
	.string "¡Entrar así a la fuerza y querer robar\n"
	.string "las {COLOR BLUE}Partes{COLOR DARK_GRAY}!\p"
	.string "No puedo creer que esta ciudad esté\n"
	.string "tan de acuerdo con ese grupo de\l"
	.string "criminales intentando “ayudar,”\l"
	.string "¡Cuando en verdad son un peligro!\pPero bueno, ¡Me llevaré las Partes,\ngracias!$"

SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
	.string "Estas Partes son necesarias para la\n"
	.string "construcción de un {COLOR BLUE}submarino{COLOR DARK_GRAY} que\l"
	.string "estoy construyendo…\p"
	.string "¡Pero no le digas a Devon!$"

SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
	.string "Hace mucho, se creó en el medio del mar\n"
	.string "una fábrica flotante que dio trabajo a\l"
	.string "más de cien personas, sin embargo…\p"
	.string "Cerró, y ahora es hogar de muchos\n"
	.string "Pokémon.$"


SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
	.string "¡Amo este museo!\p"
	.string "A veces me pregunto si recibirán\n"
	.string "donaciones, tengo muchos objetos\l"
	.string "marinos interesantes que encontré\l"
	.string "buceando.\p"
	.string "¡Ah, toma este por escucharme!$"

SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2:
	.string "No tengo mucha idea de que es una...\n"
	.string "¿Emeté?\p"
	.string "¡Pero seguro que te sirve de algo!$"

SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
	.string "¡Qué lindo el submarino!\p"
	.string "¡Me pregunto cómo lo convertirán en\n"
	.string "bebida!$"


SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
	.string "“MUESTRA 1,” dice la\n"
	.string "etiqueta.\p"
	.string "Contiene una muestra de agua de\n"
	.string "océano, y explica porqué algunos\l"
	.string "Pokémon viven en agua salada, y otros\l"
	.string "en dulce.$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
	.string "“MUESTRA 2,” dice la\n"
	.string "etiqueta.\p"
	.string "Contiene una muestra de agua, también,\n"
	.string "pero explica que el agua tiene millones\l"
	.string "de pequeñísimos Pokémon llamados\l"
	.string "“plankton,” que sirven de comida para\l"
	.string "Pokémon marinos.\p"
	.string "También hay una etiqueta que dice:\p"
	.string "“Evelyn, deja de tomarte el agua de\n"
	.string "plankton, te vas a enfermar,” seguido\l"
	.string "de una cara triste dibujada.$"

SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
	.string "Una bola de goma que se expande y\n"
	.string "contrae.\p"
	.string "“En el mar, el peso del agua crea\n"
	.string "presión.”\p"
	.string "“Mientras más profundo se va, más\n"
	.string "fuerte es dicha presión.”\p"
	.string "“En el fondo del mar, hay Pokémon que ni\n"
	.string "huesos tienen, o que poseen\l"
	.string "exoesqueletos. Esto es para adaptarse\l"
	.string "a la increíblemente fuerte presión del\l"
	.string "fondo marino.\p"
	.string "Sólo se conoce el 1% de dicho fondo.”$"


SlateportCity_OceanicMuseum_2F_Text_HoennModel:
	.string "“MAQUETA DE HOENN”\p"
	.string "Es una maquetita de Hoenn.\p"
	.string "¿Dónde estará Littleroot?$"

SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
	.string "Parece ser un simulador de corriente\n"
	.string "marina.\p"
	.string "Al museo le hacen falta figuritas de\n"
	.string "Pokémon raros del fondo del mar.$"

SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
	.string "Parece ser un simulador de corriente\n"
	.string "marina.\p"
	.string "Qué bueno que el museo no tiene\nfiguritas de Tentacool.$"

SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
	.string "“FERRY SS MAREA”\p"
	.string "Una maqueta del Ferry que construyó\n"
	.string "el Capitán Stern.$"

SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
	.string "“RÉPLICA DE SUBMARINO”\p"
	.string "Es un submarino usado para\n"
	.string "expediciones en el fondo del mar.$"

SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
	.string "“CÁMARA DE ESCAPE”\p"
	.string "Sirve para escapar de una nave o\n"
	.string "submarino en situación crítica.\p"
	.string "Unas escrituras parecen haber sido\n"
	.string "hechas en la cámara, pero están\l"
	.string "borrosas:\p"
	.string "A D-v-n le i-p-rt- m-s -- d-n--o q--\n"
	.string "n---t-a s-g---d-d.\p"
	.string "--s cá---as -- e----e ---n m-ra----e\n"
	.string "e-té-i--s.$"

SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
	.string "“SS ANNE”\p"
	.string "Una nave que viaja de Kanto a\n"
	.string "otras regiones cada año.\p"
	.string "Hay algo escrito en fibrón:\p"
	.string "No regresará jamás... Firma, Joven Chano\p"
	.string "¡JA, SE LA CREYERON!\p"
	.string "................\p"
	.string "Maldito Joven Chano...$"
