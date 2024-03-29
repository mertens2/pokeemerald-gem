.set LOCALID_WALLY, 8
FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end


FortreeCity_Trigger_Wally::
	lockall
	setflag FLAG_HIDE_WALLY_DEWFORD_TOWN
	setflag FLAG_HIDE_WALLY_RUSTBORO
	setflag FLAG_HIDE_WALLY_111
	namebox Unknown
	msgbox FortreeCity_Trigger_Wally_Text_0
	hidenamebox
	closemessage
	addobject LOCALID_WALLY
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 16
	applymovement LOCALID_WALLY, FortreeCity_Movement_WallyApproach
	waitmovement 0
	namebox Wally
	goto_if_set FLAG_WALLY_QUEST_SEEN, FortreeCity_Trigger_Wally_2
	msgbox FortreeCity_Trigger_Wally_Text_2
FortreeCity_Trigger_Wally_1:
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_WALLY2, FortreeCity_Trigger_Wally_Text_3
	namebox Wally
	msgbox FortreeCity_Trigger_Wally_Text_4
	hidenamebox
	closemessage
	applymovement LOCALID_WALLY, FortreeCity_Movement_WallyLeave
	waitmovement 0
	removeobject LOCALID_WALLY
	setvar VAR_FORTREE_CITY_STATE, 1
	releaseall
	return

FortreeCity_Trigger_Wally_2:
	msgbox FortreeCity_Trigger_Wally_Text_1
	goto FortreeCity_Trigger_Wally_1


FortreeCity_Movement_WallyApproach:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

FortreeCity_Movement_WallyLeave:
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

FortreeCity_Trigger_Wally_Text_0:
	.string "¡Oh, {PLAYER}!$"

FortreeCity_Trigger_Wally_Text_1:
	.string "Desde la última vez que nos vimos, he\n"
	.string "progresado mucho, {PLAYER}.\p"
	.string "Flannery me ha ayudado a entrenar, y\n"
	.string "con sus consejos, tu ayuda y apoyo, he\l"
	.string "logrado derrotar incluso a Norman. Te\l"
	.string "estoy alcanzando, {PLAYER}.\p"
	.string "Tengo un equipo fuerte, ¿Sabes?, uno\n"
	.string "que ha logrado sobreponerse a todo.\p"
	.string "Entonces, {PLAYER}, me anima decir,\n"
	.string "¡Te desafío a una Batalla Pokémon!$"

FortreeCity_Trigger_Wally_Text_2:
	.string "No nos vemos desde hace mucho,\n"
	.string "{PLAYER}, pero desde entonces he\l"
	.string "progresado mucho.\p"
	.string "Cada Líder de Gimnasio que has\n"
	.string "conocido hasta ahora, los he derrotado\l"
	.string "todos.\p"
	.string "Tengo un equipo fuerte, {PLAYER}, uno\n"
	.string "que ha logrado sobreponerse a todo lo\l"
	.string "que he enfrentado hasta el momento.\p"
	.string "Entonces, {PLAYER}, me anima decir,\n"
	.string "¡Te desafío a una Batalla Pokémon!$"

FortreeCity_Trigger_Wally_Text_3:
	.string "... He vuelto a perder...\p¡Pero gracias a tí, estoy\naprendiendo cada día más!$"

FortreeCity_Trigger_Wally_Text_4:
	.string "Incluso aunque haya sido derrotado,\n"
	.string "{PLAYER}, sé que estoy pudiendo\l"
	.string "mejorar cada día. {PAUSE 20}-COF, COF-{PAUSE 20}... Mhhh.{PAUSE 10}.{PAUSE 10}.\p"
	.string "{PLAYER}, prepárate. ¡La próxima vez\n"
	.string "que nos veamos, me habré hecho más\l"
	.string "fuerte! ¡Mis Pokémon habrán alcanzado\l"
	.string "su máxima etapa y poder!$"


FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_Kecleon::
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_AskUseDevonScope::
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
	release
	end

FortreeCity_EventScript_UseDevonScope::
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_KecleonFlee:
	walk_right
	step_end

FortreeCity_Text_SawGiganticPokemonInSky:
	.string "No one believes me, but I saw this\n"
	.string "gigantic POKéMON in the sky.\p"
	.string "It seemed to squirm as it flew toward\n"
	.string "ROUTE 131.\p"
	.string "By the way… Sniff…\n"
	.string "Um… You, uh…smell singed.\p"
	.string "Were you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym:
	.string "I want to go to the POKéMON GYM,\n"
	.string "but something's blocking the way.\p"
	.string "After all the bother I went through\n"
	.string "training on ROUTE 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "I've got my pride-and-joy POKéMON\n"
	.string "with me. This time, I'll beat WINONA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "The ground absorbs rainwater, and\n"
	.string "trees grow by drinking that water…\p"
	.string "Our FORTREE CITY exists because\n"
	.string "there's both water and soil.$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "The CITY consists of homes built on\n"
	.string "trees.\p"
	.string "Perhaps because of that lifestyle,\n"
	.string "everyone is healthy and lively.\p"
	.string "Why, even myself--I feel as if I've\n"
	.string "grown thirty years younger.$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "Living on top of trees is okay.\p"
	.string "But sometimes BUG POKéMON come in\n"
	.string "through windows.\l"
	.string "It can be really startling.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "There are POKéMON that evolve when\n"
	.string "you trade them! That's what I heard.$"

FortreeCity_Text_SomethingUnseeable:
	.string "Something unseeable is in the way.$"

FortreeCity_Text_UnseeableUseDevonScope:
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

FortreeCity_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON fled!$"

FortreeCity_Text_CitySign:
	.string "FORTREE CITY\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign:
	.string "FORTREE CITY POKéMON GYM\n"
	.string "LEADER: WINONA\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"

