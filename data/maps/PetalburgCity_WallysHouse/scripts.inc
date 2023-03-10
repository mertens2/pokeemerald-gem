.set LOCALID_WALLYS_DAD, 1

PetalburgCity_WallysHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
	.byte 0

PetalburgCity_WallysHouse_OnWarp:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
	.2byte 0

PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
	end

PetalburgCity_WallysHouse_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHM03Surf
	.2byte 0

PetalburgCity_WallysHouse_EventScript_GiveHM03Surf::
	lockall
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
	hidenamebox
	giveitem ITEM_HM03
	setflag FLAG_RECEIVED_HM03
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
	hidenamebox
	setvar VAR_PETALBURG_CITY_STATE, 5
	releaseall
	end

PetalburgCity_WallysHouse_EventScript_WallysDad::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
	hidenamebox
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford::
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_WallyCantGoDewford, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf::
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
	namebox PapaWally
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_WallysMom::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf
	namebox MamaWally
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom::
	namebox MamaWally
	msgbox PetalburgCity_WallysHouse_Text_WallyCanDoAnything, MSGBOX_DEFAULT
	hidenamebox
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf::
	namebox MamaWally
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
	hidenamebox
	release
	end


PetalburgCity_WallysHouse_Text_WallyCanDoAnything:
	.string "Entonces??? Ten??a raz??n. Wally pudo\n"
	.string "ganarle a Brawly.\p"
	.string "Junto con sus Pok??mon, seguro fue\n"
	.string "tarea f??cil para ??l, pero al mismo\l"
	.string "tiempo, estoy preocupada por su asma???\p"
	.string "Quis??s??? Estar con los Pok??mon pueda\n"
	.string "hacer mejorar su condici??n???\l"
	.string "Quiero que lo sigas cuidando, que le\l"
	.string "sigas ayudando, y que lo sigas\l"
	.string "alentando a que siga sus sue??os.$"

PetalburgCity_WallysHouse_Text_WallyCantGoDewford:
	.string "??Pueblo Dewford?\p"
	.string "Pues s??, quiz?? fue a comprar algo con la\n"
	.string "familia, aunque raro se me hace que no\l"
	.string "dijeran nada. Supongo que su condici??n\l"
	.string "est?? tan mejorada que viajar en barco\l"
	.string "no hizo que se desmayara.\p"
	.string "Pero, ??Pelear?\n"
	.string "Nah, Wally no puede mantenerse en pie\l"
	.string "durante un Combate Pok??mon.$"

PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
	.string "Eres???\n"
	.string "Ah, debes ser {PLAYER}, ??no?\p"
	.string "Pues debo agradecerte, porque Wally se\n"
	.string "ha encari??ado mucho contigo, ??Se\l"
	.string "emociona tanto al hablar de ti, ja ja!\l"
	.string "Deber??as ver el brillo en sus ojitos\l"
	.string "cuando te menciona alguien de la\l"
	.string "familia. Eres realmente especial en su\l"
	.string "vida, {PLAYER}, por favor, cu??dalo\l"
	.string "mucho, ??S???\p"
	.string "??l siempre est?? enfermo, tosiendo\n"
	.string "mucho, y no ayuda que su asma empeore\l"
	.string "en lugares que no tienen el aire tan\l"
	.string "limpio, como aqu??. Por eso, lo hemos\l"
	.string "enviado a Verdanturf, donde el aire\l"
	.string "limpio lo ayuda a respirar mejor???\p"
	.string "{PLAYER}???\n"
	.string "Le importas much??simo a Wally, as?? que,\l"
	.string "cu??date mucho, ??S???\l"
	.string "No podr??a soportar que les pasara algo\l"
	.string "a alguno de los dos???$"


PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
	.string "??C??mo estar?? Wally????\n"
	.string "Espero que est?? tomando sus pastillas\l"
	.string "y usando regularmente su inhalador???$"


PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
	.string "??{PLAYER}! Disculpa por haberte\n"
	.string "tra??do ac?? de esa forma, pero tengo\l"
	.string "que agradecerte por haber ayudado a\l"
	.string "Wally.\p"
	.string "Desde que tiene un Pok??mon, ha estado\n"
	.string "actuando mucho m??s energ??tico??? Mucho\l"
	.string "m??s saludable???\p"
	.string "Gracias tambi??n por sacarle ese sue??o\n"
	.string "est??pido de batallar con Pok??mon, ??l\l"
	.string "sabe que no puede por su asma y sus\l"
	.string "enfermedades constantes???\p"
	.string "No, disculpa, no es un sue??o est??pido,\n"
	.string "{PLAYER}, amar??a verlo feliz siendo\l"
	.string "un Entrenador, pero ese sue??o no es\l"
	.string "muy realista, ??No te parece?\p"
	.string "Pero bueno, ??Toma esto!$"

PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
	.string "Creo que ya sabes lo que hace, ??No?$"
	
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
	.string "Wally viene a visitarnos, y estoy\n"
	.string "emocionado por eso.\p"
	.string "Extra??o a mi hijo demasiado, verlo\n"
	.string "emocionarse por sus intereses, como\l"
	.string "los Pok??mon, el aprendizaje, pero\l"
	.string "tambi??n t??, {PLAYER}, ??No puedo\l"
	.string "esperar a verlo otra vez!$"

PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
	.string "??C??mo? ??Que viste a Wally en la Ciudad\n"
	.string "Evergrande?\p"
	.string "Que broma tan mala, {PLAYER}, Wally\n"
	.string "sigue tranqui en la casa de sus\l"
	.string "familiares en Verdanturf. Ni a\l"
	.string "visitarnos vino.$"

PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
	.string "Wally estaba TAN, TAN contento cuando\n"
	.string "nos dijo que est{EA} incre??ble y asombros{OA}\l"
	.string "chic{OA} le ayud?? a capturar un Pok??mon???\p"
	.string "No le hab??a visto as?? de contento en\n"
	.string "much??simo tiempo???\l"
	.string "Creo que realmente te aprecia,\l"
	.string "{PLAYER}.$"

PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
	.string "No le digas a mi esposo, pero??? Wally se\n"
	.string "fue de Verdanturf hace un tiempo??? Y\l"
	.string "quer??a pedirte que POR FAVOR, lo cuides\l"
	.string "mucho. Wally es muy fr??gil, y no podr??a\l"
	.string "soportar que algo le pasara???\l"
	.string "As?? que quer??a que lo acompa??es en\l"
	.string "esta aventura suya, para guiarle y\l"
	.string "apoyarle cuando te necesite, para que\l"
	.string "vea que si alguien que ??l quiere tanto\l"
	.string "conf??a en ??l, podr?? comenzar a confiar\l"
	.string "en sus propias capacidades tambi??n???$"

