Debug_Script_1::
# 3 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 4 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 5 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKENAV_GET
# 6 "data/scripts/debug.pory"
	setflag FLAG_MENU_DEXRELATED
# 7 "data/scripts/debug.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 8 "data/scripts/debug.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 9 "data/scripts/debug.pory"
	setflag FLAG_ENABLED_PC
# 10 "data/scripts/debug.pory"
	goto_if_unset FLAG_SHINY_CREATION, Debug_Script_1_2
# 14 "data/scripts/debug.pory"
	clearflag FLAG_SHINY_CREATION
Debug_Script_1_1:
# 16 "data/scripts/debug.pory"
	clearflag FLAG_NO_SHINIES
# 17 "data/scripts/debug.pory"
	releaseall
	end

Debug_Script_1_2:
# 11 "data/scripts/debug.pory"
	setflag FLAG_SHINY_CREATION
	goto Debug_Script_1_1


Debug_Script_GiveAllDecor::
# 22 "data/scripts/debug.pory"
	lockall
# 23 "data/scripts/debug.pory"
	msgbox Debug_Script_GiveAllDecor_Text_0
# 24 "data/scripts/debug.pory"
	setvar VAR_0x8004, 120
Debug_Script_GiveAllDecor_2:
# 25 "data/scripts/debug.pory"
	compare VAR_0x8004, 0
	goto_if_gt Debug_Script_GiveAllDecor_3
# 30 "data/scripts/debug.pory"
	msgbox Debug_Script_GiveAllDecor_Text_1
# 31 "data/scripts/debug.pory"
	closemessage
# 32 "data/scripts/debug.pory"
	releaseall
	return

Debug_Script_GiveAllDecor_3:
# 26 "data/scripts/debug.pory"
	setflag FLAG_TEMP_1
# 27 "data/scripts/debug.pory"
	givedecoration VAR_0x8004
# 28 "data/scripts/debug.pory"
	subvar VAR_0x8004, 1
	goto Debug_Script_GiveAllDecor_2


Debug_Script_5::
# 36 "data/scripts/debug.pory"
	lockall
# 37 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 38 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 39 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 40 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 41 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 42 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 43 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 44 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 45 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 46 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 47 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 48 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 49 "data/scripts/debug.pory"
	givedecoration DECOR_G_NOTE_MAT
# 50 "data/scripts/debug.pory"
	givedecoration DECOR_F_NOTE_MAT
# 51 "data/scripts/debug.pory"
	givedecoration DECOR_C_HIGH_NOTE_MAT
# 52 "data/scripts/debug.pory"
	givedecoration DECOR_C_LOW_NOTE_MAT
# 53 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 54 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 55 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 56 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 57 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 58 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 59 "data/scripts/debug.pory"
	givedecoration DECOR_B_NOTE_MAT
# 60 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 61 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 62 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 63 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 64 "data/scripts/debug.pory"
	givedecoration DECOR_A_NOTE_MAT
# 65 "data/scripts/debug.pory"
	givedecoration DECOR_G_NOTE_MAT
# 66 "data/scripts/debug.pory"
	givedecoration DECOR_F_NOTE_MAT
# 76 "data/scripts/debug.pory"
	closemessage
# 77 "data/scripts/debug.pory"
	releaseall
	return


Debug_Script_3::
# 81 "data/scripts/debug.pory"
	lockall
# 82 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_0
# 83 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_2, Debug_Script_3_Text_3, Debug_Script_3_Text_4, Debug_Script_3_Text_5, Debug_Script_3_Text_6
# 84 "data/scripts/debug.pory"
	setvar VAR_0x8004, 0
# 85 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 86 "data/scripts/debug.pory"
	special SetCustomization
# 87 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_7
# 88 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15
# 89 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 90 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_2
Debug_Script_3_1:
# 93 "data/scripts/debug.pory"
	setvar VAR_0x8004, 1
# 94 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 95 "data/scripts/debug.pory"
	special SetCustomization
# 96 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_16
# 97 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15
# 98 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 99 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_5
Debug_Script_3_4:
# 102 "data/scripts/debug.pory"
	setvar VAR_0x8004, 2
# 103 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 104 "data/scripts/debug.pory"
	special SetCustomization
# 105 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_17
# 106 "data/scripts/debug.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, Debug_Script_3_Text_1, Debug_Script_3_Text_8, Debug_Script_3_Text_9, Debug_Script_3_Text_10, Debug_Script_3_Text_11, Debug_Script_3_Text_12, Debug_Script_3_Text_13, Debug_Script_3_Text_14, Debug_Script_3_Text_15, Debug_Script_3_Text_18
# 107 "data/scripts/debug.pory"
	addvar VAR_RESULT, 5
# 108 "data/scripts/debug.pory"
	compare VAR_RESULT, 5
	goto_if_eq Debug_Script_3_8
Debug_Script_3_7:
# 111 "data/scripts/debug.pory"
	setvar VAR_0x8004, 3
# 112 "data/scripts/debug.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 113 "data/scripts/debug.pory"
	special SetCustomization
# 114 "data/scripts/debug.pory"
	msgbox Debug_Script_3_Text_19
# 115 "data/scripts/debug.pory"
	releaseall
	return

Debug_Script_3_2:
# 91 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_1

Debug_Script_3_5:
# 100 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_4

Debug_Script_3_8:
# 109 "data/scripts/debug.pory"
	setvar VAR_RESULT, 0
	goto Debug_Script_3_7


# 118 "data/scripts/debug.pory"

# 119 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 120 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 121 "data/scripts/debug.pory"
	waitmessage
# 122 "data/scripts/debug.pory"
	waitbuttonpress
# 123 "data/scripts/debug.pory"
	releaseall
# 124 "data/scripts/debug.pory"
	end
# 125 "data/scripts/debug.pory"

# 126 "data/scripts/debug.pory"
Debug_CheckWeekDay_Text:
# 127 "data/scripts/debug.pory"
	.string "Aaaaah, yes!\l"
# 128 "data/scripts/debug.pory"
	.string "{STR_VAR_1}s are made for dads!\l"
# 129 "data/scripts/debug.pory"
	.string "And dad's car!$"
# 130 "data/scripts/debug.pory"

# 131 "data/scripts/debug.pory"
Debug_CheatStart::
# 132 "data/scripts/debug.pory"
	lockall
# 133 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 134 "data/scripts/debug.pory"
	setflag FLAG_RESCUED_BIRCH
# 135 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 136 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 137 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 138 "data/scripts/debug.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 139 "data/scripts/debug.pory"
	setvar VAR_ROUTE101_STATE, 3
# 140 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 141 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 142 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 143 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 144 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 145 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 146 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 147 "data/scripts/debug.pory"
	 setflag FLAG_SYS_NATIONAL_DEX
# 148 "data/scripts/debug.pory"
	 special EnableNationalPokedex
# 149 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 150 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 151 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
# 152 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 153 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 154 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 155 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 156 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 157 "data/scripts/debug.pory"
	giveitem ITEM_ACRO_BIKE
# 158 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 159 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 160 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 161 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 162 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 163 "data/scripts/debug.pory"
	 additem ITEM_MAX_REPEL, 10
# 164 "data/scripts/debug.pory"
	 giveitem ITEM_EON_TICKET
# 165 "data/scripts/debug.pory"
	 setflag FLAG_SHOWN_EON_TICKET
# 166 "data/scripts/debug.pory"
	 setvar VAR_DISTRIBUTE_EON_TICKET, 0
# 167 "data/scripts/debug.pory"
	 giveitem ITEM_MYSTIC_TICKET
# 168 "data/scripts/debug.pory"
	 setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 169 "data/scripts/debug.pory"
	 setflag FLAG_RECEIVED_MYSTIC_TICKET
# 170 "data/scripts/debug.pory"
	 giveitem ITEM_AURORA_TICKET
# 171 "data/scripts/debug.pory"
	 setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 172 "data/scripts/debug.pory"
	 setflag FLAG_RECEIVED_AURORA_TICKET
# 173 "data/scripts/debug.pory"
	 setflag FLAG_BADGE06_GET @ Badge for flying filed move
# 174 "data/scripts/debug.pory"
	closemessage
# 175 "data/scripts/debug.pory"
	release
# 176 "data/scripts/debug.pory"
	end
# 177 "data/scripts/debug.pory"

# 178 "data/scripts/debug.pory"

# 179 "data/scripts/debug.pory"

# 180 "data/scripts/debug.pory"
Debug_Script_2::
# 181 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 182 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 183 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 184 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 185 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 186 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 187 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 188 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 189 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 190 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 191 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 192 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 193 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 194 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 195 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 196 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 197 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 198 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 199 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 200 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 201 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 202 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 203 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 204 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 205 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 206 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 207 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 208 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 209 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 210 "data/scripts/debug.pory"
	givemon SPECIES_UNOWN, 20, ITEM_NONE
# 211 "data/scripts/debug.pory"
	end
# 212 "data/scripts/debug.pory"

# 213 "data/scripts/debug.pory"
Debug_Script_2B::
# 214 "data/scripts/debug.pory"
	clearflag FLAG_SHINY_CREATION
# 215 "data/scripts/debug.pory"
	end
# 216 "data/scripts/debug.pory"

# 217 "data/scripts/debug.pory"

# 218 "data/scripts/debug.pory"
Debug_Script_6::
# 219 "data/scripts/debug.pory"
	end
# 220 "data/scripts/debug.pory"

# 221 "data/scripts/debug.pory"
Debug_Script_7::
# 222 "data/scripts/debug.pory"
	end
# 223 "data/scripts/debug.pory"

# 224 "data/scripts/debug.pory"
Debug_Script_8::
# 225 "data/scripts/debug.pory"
	end

Debug_Script_GiveAllDecor_Text_0:
# 23 "data/scripts/debug.pory"
	.string "Dando decoraciones{TEXT_SPEED 2}..........$"

Debug_Script_GiveAllDecor_Text_1:
# 30 "data/scripts/debug.pory"
	.string "¡{PLAY_SE SE_PIN}Listo! ¡Se han añadido todas las\n"
	.string "decoraciones!$"

Debug_Script_3_Text_0:
# 82 "data/scripts/debug.pory"
	.string "Cambiarás tu apariencia. Elige color de\n"
	.string "piel$"

Debug_Script_3_Text_1:
# 83 "data/scripts/debug.pory"
	.string "Original$"

Debug_Script_3_Text_2:
# 83 "data/scripts/debug.pory"
	.string "Blanca$"

Debug_Script_3_Text_3:
# 83 "data/scripts/debug.pory"
	.string "Clara$"

Debug_Script_3_Text_4:
# 83 "data/scripts/debug.pory"
	.string "Media$"

Debug_Script_3_Text_5:
# 83 "data/scripts/debug.pory"
	.string "Marrón$"

Debug_Script_3_Text_6:
# 83 "data/scripts/debug.pory"
	.string "Oscura$"

Debug_Script_3_Text_7:
# 87 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de ropa principal$"

Debug_Script_3_Text_8:
# 88 "data/scripts/debug.pory"
	.string "Roja$"

Debug_Script_3_Text_9:
# 88 "data/scripts/debug.pory"
	.string "Naranja$"

Debug_Script_3_Text_10:
# 88 "data/scripts/debug.pory"
	.string "Amarilla$"

Debug_Script_3_Text_11:
# 88 "data/scripts/debug.pory"
	.string "Verde$"

Debug_Script_3_Text_12:
# 88 "data/scripts/debug.pory"
	.string "Cyan$"

Debug_Script_3_Text_13:
# 88 "data/scripts/debug.pory"
	.string "Azul$"

Debug_Script_3_Text_14:
# 88 "data/scripts/debug.pory"
	.string "Violeta$"

Debug_Script_3_Text_15:
# 88 "data/scripts/debug.pory"
	.string "Rosa$"

Debug_Script_3_Text_16:
# 96 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de accesorios 1$"

Debug_Script_3_Text_17:
# 105 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}. Elige\n"
	.string "color de accesorios 2$"

Debug_Script_3_Text_18:
# 106 "data/scripts/debug.pory"
	.string "Cristal$"

Debug_Script_3_Text_19:
# 114 "data/scripts/debug.pory"
	.string "{STR_VAR_1} {STR_VAR_2}.\n"
	.string "Gracias.$"
