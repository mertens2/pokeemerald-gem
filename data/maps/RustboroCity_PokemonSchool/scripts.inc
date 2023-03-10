RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	checkitem ITEM_TM69
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonSchool_EventScript_LassHasTM69
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	giveitem ITEM_TM69
	msgbox RustboroCity_PokemonSchool_Text_UTurnExplain, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_LassHasTM69::
	msgbox RustboroCity_PokemonSchool_Text_UTurnExplain, MSGBOX_NPC
	end
	

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "El pizarr??n tiene informaci??n\nsobre los diferentes estados\ly lo diferentes que son ahora.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "??Cu??l leer??s?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "Si un Pok??mon est?? envenenado,\nperder?? PS gradualmente mientras est??\len el campo de batalla.\pAdem??s, su Defensa Especial se\nver?? reducida en un 15%.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "Antes, los Pok??mon tipo Hielo\npod??an congelar a sus rivales, pero,\lpor culpa del cambio clim??tico,\lahora s??lo pueden helarlos.\p"
	.string "Cuando un Pok??mon est?? helado, perder??\n1/16 de sus PS totales cada turno,\ly se reducir?? su Ataque Especial\la la mitad.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "Si un Pok??mon se confunde,\npuede llegar a atacarse a s?? mismo.\lEl efecto desaparece al ser\lreemplazado, y los Pok??mon tipo Bicho\lson inmunes a dicho estado.$"


RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "Un Pok??mon enamorado tendr??\nreducidos ambos de sus ataques en\lun 10%, y no podr??n atacar un\l50% de las veces.\p"
	.string "Adem??s, se ha descubierto que\nno hay restricci??n de g??nero para\lenamorar a un Pok??mon.\pEs decir, un Pok??mon macho puede\nenamorar a otro Pok??mon macho.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "Un Pok??mon atrapado, perder?? 1/8\nde sus PS en cada turno.\pAdem??s, no podr?? ser intercambiado.\nLos Pok??mon fantasma no se\lver??n afectados por dicho efecto.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Est??bamos estudiando este objeto.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "La Garra R??pida hace que\nel Pok??mon pueda atacar primero,\lindependientemente de su velocidad.\p"
	.string "??Recuerda leer el pizarr??n!\n??Puede que haya algo que\lno sepas!$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "Estoy intercambiando Pok??mon\nen Pok??mon Rub??.\p??No es raro que yo aparezca\nhaciendo lo mismo ah???$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "??Siempre quise un Seedot!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "Siempre les ense??o el movimiento\nAtracci??n a mis Pok??mon.\p??Hace que rivales de cualquier\ng??nero dejen de atacar!$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "La confusi??n puede costarte\nun combate.\pEsto podr??a ayudarte.$"

RustboroCity_PokemonSchool_Text_UTurnExplain:
	.string "Ida y Vuelta es un movimiento\ntipo Bicho que ataca, y luego\lregresa al usuario a su Pok??ball.\pMuy ??til para librarse de\nciertos cambios de estado.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "?????????????????????????????????\n????????????????????????\pD??jame, tengo que prestar atenci??n.$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "Lleno de dibujos sobre\nPok??mon de Hoenn, con algunas notas\lsobre sus tipos y habilidades.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "??Hola? ??Te conosco?\pAh, ??S??!\n??Eres {ELLA} Entrenador{A} que\lconoc?? en Petalburg!\p"
	.string "Si no te molesta, te dir??\nunos consejos para entrenar\lmejor a tus Pok??mon.\p"
	.string "Si entrenas lo suficiente,\nver??s que aparece un nuevo men??\lque te deja seleccionar los\lmovimientos que pueden aprender\llos Pok??mon.\p"
	.string "Siempre recuerda revisar qu??\nmovimientos pueden aprender tus\lPok??mon luego de evolucionarlos.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "Esos ni??os carecen de potencial.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "Esa medalla??? No es nada especial.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "??Hola? ??Te conosco?\pAh, ??S??!\n??Eres {ELLA} Entrenador{A} que\lconoc?? en Petalburg!\p"
	.string "Si no te molesta, te dir??\nunos consejos para entrenar\lmejor a tus Pok??mon.\p"
	.string "Si entrenas lo suficiente,\nver??s que aparece un nuevo men??\lque te deja seleccionar los\lmovimientos que pueden aprender\llos Pok??mon.\p"
	.string "Siempre recuerda revisar qu??\nmovimientos pueden aprender tus\lPok??mon luego de evolucionarlos.\p"
	.string "Deber??as intentar hacerlo\nantes de cada Batalla de Gimnasio.$"


