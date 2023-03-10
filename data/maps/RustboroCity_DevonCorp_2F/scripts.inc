.set LOCALID_FOSSIL_SCIENTIST, 5

RustboroCity_DevonCorp_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0

RustboroCity_DevonCorp_2F_OnTransition:

	end

RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
	return

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
	lock
	faceplayer

	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer::
	lockall
	switch VAR_TEMP_0
	case 8, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_3
	case 7, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_4
	case 6, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_5
	case 5, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_6
	case 4, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_7
	case 3, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_8
	case 2, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_9
	case 1, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_10
	case 0, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_8
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1:
	releaseall
	return

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_3:
	clearflag VAR_TEMP_0 
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_0
	addmoney 100
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_4:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_1
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_5:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_2
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_6:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_3
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_7:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_4
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_8:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_5
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_9:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_6
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_10:
	addvar VAR_TEMP_0 , 1
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_7
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1


RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_0:
	.string "??Eh? ??Hay ??100 escondidos debajo del\n"
	.string "monitor!$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_1:
	.string "??C??mo se llama esto?$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_2:
	.string "??Contempla! Una computadora.$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_3:
	.string "??En serio ser?? una computadora?$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_4:
	.string "Computadora.$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_5:
	.string "Sorpresivamente, una computadora.$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_6:
	.string "Esto, sin embargo, es\n"
	.string "una computadora.$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_7:
	.string "Y esto???\n"
	.string "Una computadora.$"

RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_8:
	.string "Es una computadora.$"


RustboroCity_DevonCorp_2F_EventScript_BallScientist::
	lock
	faceplayer

	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
	lock
	faceplayer

	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
	lock
	faceplayer
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
	lock
	faceplayer
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	msgbox Rustboro_Text_WhichOne
	chooseitem ITEMS_POCKET
	call Fossils_Check
	release
	end

Rustboro_Text_WhichOne::
	.string "??Qu?? f??sil querr??as revivir?$"

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
	lock
	faceplayer

	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
	.string "??Estamos haciendo una m??quina\nque nos deje entender a los Pok??mon!\pPero no funciona???$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
	.string "??Estoy haciendo nuevas Pok??ball!\pVoy a buen paso, no deber??a tardar???$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
	.string "??Lo logramos!\nAdem??s de las Malla y Repeat Balls,\lmodificamos otras Balls para\lque sean m??s ??tiles.\pPor ejemplo, la Parque Ball funciona\n"
	.string "mejor con Pok??mon tipo Normal,\lPlanta y Bicho, mientras que\lla Sana Ball funciona mejor\lcon Pok??mon tipo Ps??quico y Hada.\p"
	.string "Pero, estoy m??s orgulloso de mi avance\ncon la Honor Ball, que ahora\lcaptura mejor a Pok??mon con ratio de\lcaptura bajo, a cambio de ser\l"
	.string "terrible con los Pok??mon f??ciles\lde capturar.$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav:
	.string "??Hice el Pok??nav!$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
	.string "Estoy intentando hacer una m??quina\npara ver los sue??os de los Pok??mon.\pNo hay avance???$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
	.string "??Hola! He estado desarrollando\nuna m??quina que tiene la capacidad\lde resucitar f??siles???\p"
	.string "??Y funciona!\p??Te gustar??a revivir un f??sil?\nPuedes elegirlo de la bolsa.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
	.string "??Vuelve pronto!$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
	.string "??Hola! Yo desarroll?? la funci??n de\nver el hambre de los Pok??mon\len el Pok??nav.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
	.string "Me gustar??a desarrollar algo nuevo,\nalgo que haga que la mala reputaci??n\lque tiene Devon con los\ladultos mayores mejore.\p??Aj??! ??Har?? un resurrector\nde bastones rotos!$"

