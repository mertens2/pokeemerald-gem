RustboroCity_Flat2_3F_MapScripts::
	.byte 0

RustboroCity_Flat2_3F_EventScript_DevonEmployee::
	msgbox RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_EventScript_Woman::
	lock
	faceplayer
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_3F_EventScript_WomanNo
	removeitem ITEM_POKE_BALL, 1
	giveitem ITEM_GREAT_BALL, 1
	msgbox RustboroCity_Flat2_3F_Text_IHaveAllYouNeed
	release
	end
RustboroCity_Flat2_3F_EventScript_WomanNo::
	msgbox RustboroCity_Flat2_3F_Text_MaybeUltra, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_3F_EventScript_WomanNo2
	removeitem ITEM_GREAT_BALL, 1
	giveitem ITEM_ULTRA_BALL, 1
	msgbox RustboroCity_Flat2_3F_Text_IHaveAllYouNeed
	release
	end
RustboroCity_Flat2_3F_EventScript_WomanNo2::
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRare
	release
	end
RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones:
	.string "A los Stone les encantan las piedras\npreciosas. Entonces...\p¿Qué fue primero, el apellido,\no el oficio?$"

RustboroCity_Flat2_3F_Text_MaybeUltra:
	.string "Entonces, ¿Quieres cambiar\nSúperballs por Ultraballs?$"

RustboroCity_Flat2_3F_Text_IHaveAllYouNeed:
	.string "¡Vuelve cuando quieras!\p¡Tengo todas las que quieras!$"

RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRare:
	.string "Pero, ¿Porqué no?$"

RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
	.string "Casi no tenemos visitas, así que\nsi quieres, puedo cambiarte tus\lPokéball por Superball.\p¿Te parece?$"

