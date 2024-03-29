.set LOCALID_STAIR_GUARD, 2

RustboroCity_DevonCorp_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
	.byte 0

RustboroCity_DevonCorp_1F_OnTransition:
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
	end

RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
	return

RustboroCity_DevonCorp_1F_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StairGuard::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Greeter::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
	.string "¡Bienvenid{0A} a Devon!$"

RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
	.string "Uno de nuestros miembros dejo que\n"
	.string "un estúpido le robara estúpidamente.$"

RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
	.string "¡Ey, ese Sistema de\n"
	.string "Almacenamiento portátil!\n"
	.string "¡Es nuestra última invención!\p"
	.string "Me enorgullece ver que lo usen.$"

RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
	.string "Las {COLOR BLUE}Partes robadas{COLOR DARK_GRAY}…\p"
	.string "Son importantes, pero no son algo\n"
	.string "que cualquiera pueda usar.\p"
	.string "O bien el ladrón es idiota,\n"
	.string "o hay algo que no sepamos sobre él.$"

RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
	.string "Las Partes fueron recuperadas.$"

RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
	.string "Sólo personal autorizado. Vete.$"

RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
	.string "Ese estúpido debería ser despedido.$"

RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
	.string "¡Bienvenid{OA}!$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
	.string "Unas placas metálicas que detallan\n"
	.string "la historia de la compañía.\p"
	.string "“Al principio, Devon era una compañía\n"
	.string "de extracción de rocas preciosas,\l"
	.string "siguiendo a eso, se convirtió en una\l"
	.string "productora de aleaciones de metal.”\p"
	.string "“Poco a poco, el negocio se fue\n"
	.string "expandiendo dando lugar a la productora\l"
	.string "de tecnología líden en Hoenn\l"
	.string "que es hoy en día.”$"

RustboroCity_DevonCorp_1F_Text_ProductDisplay:
	.string "Unas placas metálicas que detallan\n"
	.string "la historia de la compañía.\p"
	.string "“Además de proveer tecnología de\l"
	.string "primera categoría, Devon también posee\n"
	.string "monopolio de farmacéutica y arquitectura\l"
	.string "en Hoenn, teniendo así el poder de\l"
	.string "crear cualquier proyecto imaginable.”$"

