LavaridgeTown_MapScripts::
# 9 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	goto_if_eq LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 25 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 26 "data/maps/LavaridgeTown/scripts.pory"
	fadeoutbgm 0
# 28 "data/maps/LavaridgeTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 34 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_INTERRUPT
# 37 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 38 "data/maps/LavaridgeTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 39 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 40 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 46 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 49 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 50 "data/maps/LavaridgeTown/scripts.pory"
	fadeinbgm 0
# 51 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 52 "data/maps/LavaridgeTown/scripts.pory"
	release
	return


LavaridgeTown_EventScript_EggWoman::
# 61 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 62 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 63 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 80 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_1, MSGBOX_YESNO
# 83 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
# 95 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 96 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 113 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_4
# 116 "data/maps/LavaridgeTown/scripts.pory"
	random 100
# 117 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt LavaridgeTown_EventScript_EggWoman_11
# 121 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_NO_SHINIES
LavaridgeTown_EventScript_EggWoman_10:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	dynmultichoice 25, 4, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LavaridgeTown_EventScript_EggWoman_Text_5, LavaridgeTown_EventScript_EggWoman_Text_6, LavaridgeTown_EventScript_EggWoman_Text_7, LavaridgeTown_EventScript_EggWoman_Text_8, LavaridgeTown_EventScript_EggWoman_Text_9, LavaridgeTown_EventScript_EggWoman_Text_10
# 131 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LavaridgeTown_EventScript_EggWoman_15
LavaridgeTown_EventScript_EggWoman_14:
# 140 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_19
# 169 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_20
# 199 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_21
# 228 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_22
# 258 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_23
LavaridgeTown_EventScript_EggWoman_17:
# 303 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 304 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 305 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_EventScript_EggWoman_Text_11
# 306 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 307 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 308 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 309 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_12
# 310 "data/maps/LavaridgeTown/scripts.pory"
	release
	return

LavaridgeTown_EventScript_EggWoman_2:
# 69 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_0
# 72 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_5:
# 89 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_2
# 92 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_8:
# 102 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_3
# 105 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_11:
# 118 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_SHINY_CREATION
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_15:
# 132 "data/maps/LavaridgeTown/scripts.pory"
	random 6
	goto LavaridgeTown_EventScript_EggWoman_14

LavaridgeTown_EventScript_EggWoman_19:
# 142 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 143 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_26
# 147 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_27
# 151 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_28
# 154 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_29
# 157 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_30
# 160 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_31
# 163 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_32
LavaridgeTown_EventScript_EggWoman_24:
# 167 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SHIFT_GEAR
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_20:
# 170 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 172 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_35
# 177 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_36
# 180 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_37
# 183 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_38
# 186 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_39
# 189 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_40
# 193 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_41
LavaridgeTown_EventScript_EggWoman_33:
# 197 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_FREEZY_FROST
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_21:
# 200 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 201 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_44
# 205 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_45
# 208 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_46
# 212 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_47
# 216 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_48
# 219 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_49
# 222 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_50
LavaridgeTown_EventScript_EggWoman_42:
# 226 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SPARKLY_SWIRL
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_22:
# 229 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 230 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_53
# 234 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_54
# 237 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_55
# 241 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_56
# 245 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_57
# 249 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_58
# 252 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_59
LavaridgeTown_EventScript_EggWoman_51:
# 256 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_NO_RETREAT
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_23:
# 259 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 260 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 261 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_62
# 265 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_63
# 269 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_64
# 272 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_65
# 276 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_66
# 279 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_67
# 282 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_68
LavaridgeTown_EventScript_EggWoman_60:
# 286 "data/maps/LavaridgeTown/scripts.pory"
	random 4
# 287 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_71
# 291 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_72
# 294 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_73
# 297 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_74
LavaridgeTown_EventScript_EggWoman_69:
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_26:
# 145 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MEOWTH_GALARIAN
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_27:
# 148 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PAWNIARD
# 149 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SACRED_SWORD
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_28:
# 152 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HONEDGE
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_29:
# 155 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FERROSEED
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_30:
# 158 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_31:
# 161 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BELDUM
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_32:
# 164 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BONSLY
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_35:
# 174 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_DARUMAKA_GALARIAN
# 175 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_36:
# 178 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VULPIX_ALOLAN
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_37:
# 181 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOM
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_38:
# 184 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPHEAL
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_39:
# 187 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VANILLITE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_40:
# 190 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 191 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_41:
# 194 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOVER
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_44:
# 203 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_45:
# 206 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_46:
# 209 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SWIRLIX
# 210 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_47:
# 213 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRITZEE
# 214 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_48:
# 217 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_AZURILL
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_49:
# 220 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_50:
# 223 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MIME_JR
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_53:
# 232 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_RIOLU
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_54:
# 235 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_55:
# 238 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ELEKID
# 239 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_ZIPPY_ZAP
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_56:
# 242 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MAGBY
# 243 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_57:
# 246 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 247 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_58:
# 250 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_59:
# 253 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOXEL
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_62:
# 262 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 263 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_63:
# 266 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 267 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_COPYCAT
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_64:
# 270 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BUDEW
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_65:
# 273 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHINGLING
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_66:
# 277 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HAPPINY
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_67:
# 280 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MANTYKE
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_68:
# 283 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_71:
# 289 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BOUNCY_BUBBLE
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_72:
# 292 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_73:
# 295 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_74:
# 298 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SAPPY_SEED
	goto LavaridgeTown_EventScript_EggWoman_69


# 314 "data/maps/LavaridgeTown/scripts.pory"

# 315 "data/maps/LavaridgeTown/scripts.pory"

# 316 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 317 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 318 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 319 "data/maps/LavaridgeTown/scripts.pory"
	end
# 320 "data/maps/LavaridgeTown/scripts.pory"

# 321 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 322 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 323 "data/maps/LavaridgeTown/scripts.pory"
	end
# 324 "data/maps/LavaridgeTown/scripts.pory"

# 325 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 326 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 327 "data/maps/LavaridgeTown/scripts.pory"
	end
# 328 "data/maps/LavaridgeTown/scripts.pory"

# 329 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 330 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 331 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
# 332 "data/maps/LavaridgeTown/scripts.pory"
	end
# 333 "data/maps/LavaridgeTown/scripts.pory"

# 334 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 335 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 336 "data/maps/LavaridgeTown/scripts.pory"
	end
# 337 "data/maps/LavaridgeTown/scripts.pory"

# 338 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 339 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 340 "data/maps/LavaridgeTown/scripts.pory"
	end
# 341 "data/maps/LavaridgeTown/scripts.pory"

# 342 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 343 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 344 "data/maps/LavaridgeTown/scripts.pory"
	end
# 345 "data/maps/LavaridgeTown/scripts.pory"

# 346 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 347 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 348 "data/maps/LavaridgeTown/scripts.pory"
	end
# 349 "data/maps/LavaridgeTown/scripts.pory"

# 350 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 351 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 352 "data/maps/LavaridgeTown/scripts.pory"
	end
# 353 "data/maps/LavaridgeTown/scripts.pory"

# 354 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 355 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 356 "data/maps/LavaridgeTown/scripts.pory"
	end
# 357 "data/maps/LavaridgeTown/scripts.pory"

# 358 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 359 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 360 "data/maps/LavaridgeTown/scripts.pory"
	end
# 361 "data/maps/LavaridgeTown/scripts.pory"

# 362 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 365 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 366 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 371 "data/maps/LavaridgeTown/scripts.pory"

# 372 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 383 "data/maps/LavaridgeTown/scripts.pory"

# 384 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 391 "data/maps/LavaridgeTown/scripts.pory"

# 392 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 400 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 405 "data/maps/LavaridgeTown/scripts.pory"

# 406 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 413 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 414 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 418 "data/maps/LavaridgeTown/scripts.pory"

# 419 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 422 "data/maps/LavaridgeTown/scripts.pory"

# 423 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 425 "data/maps/LavaridgeTown/scripts.pory"

# 426 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 427 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 429 "data/maps/LavaridgeTown/scripts.pory"

# 430 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 431 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 432 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 433 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 434 "data/maps/LavaridgeTown/scripts.pory"

# 435 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 436 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 437 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 438 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 439 "data/maps/LavaridgeTown/scripts.pory"

# 440 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 441 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 442 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 443 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 444 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 445 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 446 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 447 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 448 "data/maps/LavaridgeTown/scripts.pory"

# 449 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 450 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 451 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 452 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 453 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 454 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 455 "data/maps/LavaridgeTown/scripts.pory"

# 456 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 457 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 458 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 459 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 460 "data/maps/LavaridgeTown/scripts.pory"

# 461 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 462 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 463 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 464 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 465 "data/maps/LavaridgeTown/scripts.pory"

# 466 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 467 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 468 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 469 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 470 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 471 "data/maps/LavaridgeTown/scripts.pory"

# 472 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 473 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 474 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 475 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 476 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 477 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 478 "data/maps/LavaridgeTown/scripts.pory"

# 479 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 480 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 481 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 482 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 483 "data/maps/LavaridgeTown/scripts.pory"

# 484 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 485 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 486 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 487 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 488 "data/maps/LavaridgeTown/scripts.pory"

# 489 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 490 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 491 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 34 "data/maps/LavaridgeTown/scripts.pory"
	.string "{TEXT_SPEED 4}{PLAYER} sintió algo en la mano.\p"
	.string "{TEXT_SPEED 8}Miró lo que era, y…{PAUSE 12}$"

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 46 "data/maps/LavaridgeTown/scripts.pory"
	.string "Por alguna razón…\n"
	.string "Se sintió como si siempre las hubieses\l"
	.string "tenido…$"

LavaridgeTown_EventScript_EggWoman_Text_0:
# 69 "data/maps/LavaridgeTown/scripts.pory"
	.string "Si quieres más Huevos Pokémon para\n"
	.string "cuidar, habrán en la Guardería a\l"
	.string "veces…\p"
	.string "¡La cuidadora es mi amiga, seguro te\n"
	.string "dejará cuidarlo si encuentra alguno!$"

LavaridgeTown_EventScript_EggWoman_Text_1:
# 80 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hola, joven… Se ve que eres un{A}\n"
	.string "Entrenador{A} muy fuerte…\p"
	.string "¿Te gustaría cuidar uno de los Huevos\n"
	.string "que encontramos en la Guardería?$"

LavaridgeTown_EventScript_EggWoman_Text_2:
# 89 "data/maps/LavaridgeTown/scripts.pory"
	.string "Como quieras entonces… Podemos\n"
	.string "cuidarlo mi esposo y yo…$"

LavaridgeTown_EventScript_EggWoman_Text_3:
# 102 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh… No tienes espacio…$"

LavaridgeTown_EventScript_EggWoman_Text_4:
# 113 "data/maps/LavaridgeTown/scripts.pory"
	.string "Me pregunto…\p"
	.string "¿Qué Pokémon te gustan más?$"

LavaridgeTown_EventScript_EggWoman_Text_5:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "Resistentes$"

LavaridgeTown_EventScript_EggWoman_Text_6:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fríos$"

LavaridgeTown_EventScript_EggWoman_Text_7:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "Mágicos$"

LavaridgeTown_EventScript_EggWoman_Text_8:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fuertes$"

LavaridgeTown_EventScript_EggWoman_Text_9:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lindos$"

LavaridgeTown_EventScript_EggWoman_Text_10:
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Todos!$"

LavaridgeTown_EventScript_EggWoman_Text_11:
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡{PLAYER} recibió el Huevo Extraño!$"

LavaridgeTown_EventScript_EggWoman_Text_12:
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Cuida bien de él, joven!$"
