OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_ExpandedItems::
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "La mayoría de las Tiendas Pokémon\n"
	.string "eran parejas de casados que habían\l"
	.string "abierto el establecimiento con sus\l"
	.string "propias manos. Este es el último.\p"
	.string "Uno vende objetos como Pokéballs y\n"
	.string "objetos curativos, mientras que otro\l"
	.string "vende objetos que sirven para\l"
	.string "atrapar y entrenar a tus Pokémon.\l"
	.string "¡Ahora están en el Centro Pokémon!$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "¿Sabías que esta es la última\ntienda de Hoenn, sin contar el\lCentro Comercial?\p"
	.string "Esto es debido a que las Tiendas\ny los Centros Pokémon se han\lcombinado en uno solo.$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "Los objetos que encuentres en una\n"
	.string "Centro o Tienda cambiarán por la\l"
	.string "cantidad de Medallas que poseas, ¡Pero\l"
	.string "escuché que hay una Floristería con\l"
	.string "bayas, y cambian sus reservas también!$"

