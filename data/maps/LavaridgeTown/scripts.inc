LavaridgeTown_EventScript_EggWoman::
# 10 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 22 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_1, MSGBOX_YESNO
# 25 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
# 37 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 38 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 55 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_4
# 58 "data/maps/LavaridgeTown/scripts.pory"
	random 100
# 59 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt LavaridgeTown_EventScript_EggWoman_11
# 63 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_NO_SHINIES
LavaridgeTown_EventScript_EggWoman_10:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	dynmultichoice 25, 4, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LavaridgeTown_EventScript_EggWoman_Text_5, LavaridgeTown_EventScript_EggWoman_Text_6, LavaridgeTown_EventScript_EggWoman_Text_7, LavaridgeTown_EventScript_EggWoman_Text_8, LavaridgeTown_EventScript_EggWoman_Text_9, LavaridgeTown_EventScript_EggWoman_Text_10
# 73 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LavaridgeTown_EventScript_EggWoman_15
LavaridgeTown_EventScript_EggWoman_14:
# 82 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_19
# 111 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_20
# 141 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_21
# 170 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_22
# 200 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_23
LavaridgeTown_EventScript_EggWoman_17:
# 245 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 246 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 247 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_EventScript_EggWoman_Text_11
# 248 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 249 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 250 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 251 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_12
# 252 "data/maps/LavaridgeTown/scripts.pory"
	release
	return

LavaridgeTown_EventScript_EggWoman_2:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_0
# 14 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_5:
# 31 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_2
# 34 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_8:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_3
# 47 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_11:
# 60 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_SHINY_CREATION
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_15:
# 74 "data/maps/LavaridgeTown/scripts.pory"
	random 6
	goto LavaridgeTown_EventScript_EggWoman_14

LavaridgeTown_EventScript_EggWoman_19:
# 84 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 85 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_26
# 89 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_27
# 93 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_28
# 96 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_29
# 99 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_30
# 102 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_31
# 105 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_32
LavaridgeTown_EventScript_EggWoman_24:
# 109 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SHIFT_GEAR
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_20:
# 112 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 114 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_35
# 119 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_36
# 122 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_37
# 125 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_38
# 128 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_39
# 131 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_40
# 135 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_41
LavaridgeTown_EventScript_EggWoman_33:
# 139 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_FREEZY_FROST
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_21:
# 142 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 143 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_44
# 147 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_45
# 150 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_46
# 154 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_47
# 158 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_48
# 161 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_49
# 164 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_50
LavaridgeTown_EventScript_EggWoman_42:
# 168 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SPARKLY_SWIRL
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_22:
# 171 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 172 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_53
# 176 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_54
# 179 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_55
# 183 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_56
# 187 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_57
# 191 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_58
# 194 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_59
LavaridgeTown_EventScript_EggWoman_51:
# 198 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_NO_RETREAT
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_23:
# 201 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 202 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_62
# 207 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_63
# 211 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_64
# 214 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_65
# 218 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_66
# 221 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_67
# 224 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_68
LavaridgeTown_EventScript_EggWoman_60:
# 228 "data/maps/LavaridgeTown/scripts.pory"
	random 4
# 229 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 230 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_71
# 233 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_72
# 236 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_73
# 239 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_74
LavaridgeTown_EventScript_EggWoman_69:
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_26:
# 87 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MEOWTH_GALARIAN
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_27:
# 90 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PAWNIARD
# 91 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SACRED_SWORD
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_28:
# 94 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HONEDGE
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_29:
# 97 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FERROSEED
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_30:
# 100 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_31:
# 103 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BELDUM
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_32:
# 106 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BONSLY
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_35:
# 116 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_DARUMAKA_GALARIAN
# 117 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_36:
# 120 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VULPIX_ALOLAN
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_37:
# 123 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOM
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_38:
# 126 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPHEAL
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_39:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VANILLITE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_40:
# 132 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 133 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_41:
# 136 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOVER
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_44:
# 145 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_45:
# 148 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_46:
# 151 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SWIRLIX
# 152 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_47:
# 155 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRITZEE
# 156 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_48:
# 159 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_AZURILL
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_49:
# 162 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_50:
# 165 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MIME_JR
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_53:
# 174 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_RIOLU
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_54:
# 177 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_55:
# 180 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ELEKID
# 181 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_ZIPPY_ZAP
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_56:
# 184 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MAGBY
# 185 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_57:
# 188 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 189 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_58:
# 192 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_59:
# 195 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOXEL
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_62:
# 204 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 205 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_63:
# 208 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 209 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_COPYCAT
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_64:
# 212 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BUDEW
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_65:
# 215 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHINGLING
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_66:
# 219 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HAPPINY
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_67:
# 222 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MANTYKE
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_68:
# 225 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_71:
# 231 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BOUNCY_BUBBLE
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_72:
# 234 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_73:
# 237 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_74:
# 240 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SAPPY_SEED
	goto LavaridgeTown_EventScript_EggWoman_69


# 255 "data/maps/LavaridgeTown/scripts.pory"

# 256 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 257 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 258 "data/maps/LavaridgeTown/scripts.pory"

# 259 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 260 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 261 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 262 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 263 "data/maps/LavaridgeTown/scripts.pory"

# 264 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 265 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 266 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 267 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 268 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 269 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 270 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 271 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 272 "data/maps/LavaridgeTown/scripts.pory"
	end
# 273 "data/maps/LavaridgeTown/scripts.pory"

# 274 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 275 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 276 "data/maps/LavaridgeTown/scripts.pory"
	return
# 277 "data/maps/LavaridgeTown/scripts.pory"

# 278 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 279 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 280 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 281 "data/maps/LavaridgeTown/scripts.pory"
	return
# 282 "data/maps/LavaridgeTown/scripts.pory"

# 283 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 284 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 285 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 286 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 287 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 288 "data/maps/LavaridgeTown/scripts.pory"
	return
# 289 "data/maps/LavaridgeTown/scripts.pory"

# 290 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 291 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 292 "data/maps/LavaridgeTown/scripts.pory"
	return
# 293 "data/maps/LavaridgeTown/scripts.pory"

# 294 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 295 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 296 "data/maps/LavaridgeTown/scripts.pory"
	return
# 297 "data/maps/LavaridgeTown/scripts.pory"

# 298 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 299 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 301 "data/maps/LavaridgeTown/scripts.pory"

# 302 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 303 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 304 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 305 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 306 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 307 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 308 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 309 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 310 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 311 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 312 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 313 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 314 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 315 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 316 "data/maps/LavaridgeTown/scripts.pory"
	end
# 317 "data/maps/LavaridgeTown/scripts.pory"

# 318 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 319 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 320 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 321 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 322 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 323 "data/maps/LavaridgeTown/scripts.pory"
	end
# 324 "data/maps/LavaridgeTown/scripts.pory"

# 325 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 326 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 327 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 328 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 329 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 330 "data/maps/LavaridgeTown/scripts.pory"
	end
# 331 "data/maps/LavaridgeTown/scripts.pory"

# 332 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 333 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 334 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 335 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 336 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 337 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 338 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 339 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 340 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 341 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 342 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 343 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 344 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 345 "data/maps/LavaridgeTown/scripts.pory"
	end
# 346 "data/maps/LavaridgeTown/scripts.pory"

# 347 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 348 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 349 "data/maps/LavaridgeTown/scripts.pory"
	return
# 350 "data/maps/LavaridgeTown/scripts.pory"

# 351 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 352 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 353 "data/maps/LavaridgeTown/scripts.pory"
	return
# 354 "data/maps/LavaridgeTown/scripts.pory"

# 355 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 356 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 357 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 359 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 360 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 361 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 362 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/LavaridgeTown/scripts.pory"
	return
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 366 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 367 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 368 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 369 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 370 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 372 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 373 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 374 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 375 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 376 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 377 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 379 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 381 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/LavaridgeTown/scripts.pory"
	return
# 383 "data/maps/LavaridgeTown/scripts.pory"

# 384 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 385 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 386 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/LavaridgeTown/scripts.pory"
	return
# 388 "data/maps/LavaridgeTown/scripts.pory"

# 389 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 390 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 391 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/LavaridgeTown/scripts.pory"
	return
# 393 "data/maps/LavaridgeTown/scripts.pory"

# 394 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 395 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 396 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 397 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/LavaridgeTown/scripts.pory"
	return
# 399 "data/maps/LavaridgeTown/scripts.pory"

# 400 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 401 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 402 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 403 "data/maps/LavaridgeTown/scripts.pory"
	return
# 404 "data/maps/LavaridgeTown/scripts.pory"

# 405 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 407 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 408 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 409 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 410 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 411 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 412 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 413 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 414 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 415 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 416 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 417 "data/maps/LavaridgeTown/scripts.pory"

# 418 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 419 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 420 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 421 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 422 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 423 "data/maps/LavaridgeTown/scripts.pory"

# 424 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 425 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 426 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 427 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 428 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 429 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 430 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 431 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 432 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 433 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 434 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 435 "data/maps/LavaridgeTown/scripts.pory"

# 436 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 437 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 438 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 439 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 440 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 441 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 442 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 443 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 444 "data/maps/LavaridgeTown/scripts.pory"

# 445 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 446 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 447 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 448 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 449 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 450 "data/maps/LavaridgeTown/scripts.pory"

# 451 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 452 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 453 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 454 "data/maps/LavaridgeTown/scripts.pory"

# 455 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 456 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 457 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 458 "data/maps/LavaridgeTown/scripts.pory"
	end
# 459 "data/maps/LavaridgeTown/scripts.pory"

# 460 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 461 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 462 "data/maps/LavaridgeTown/scripts.pory"
	end
# 463 "data/maps/LavaridgeTown/scripts.pory"

# 464 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 465 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 466 "data/maps/LavaridgeTown/scripts.pory"
	end
# 467 "data/maps/LavaridgeTown/scripts.pory"

# 468 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 469 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 470 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
# 471 "data/maps/LavaridgeTown/scripts.pory"
	end
# 472 "data/maps/LavaridgeTown/scripts.pory"

# 473 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 474 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 475 "data/maps/LavaridgeTown/scripts.pory"
	end
# 476 "data/maps/LavaridgeTown/scripts.pory"

# 477 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 478 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 479 "data/maps/LavaridgeTown/scripts.pory"
	end
# 480 "data/maps/LavaridgeTown/scripts.pory"

# 481 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 482 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 483 "data/maps/LavaridgeTown/scripts.pory"
	end
# 484 "data/maps/LavaridgeTown/scripts.pory"

# 485 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 486 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 487 "data/maps/LavaridgeTown/scripts.pory"
	end
# 488 "data/maps/LavaridgeTown/scripts.pory"

# 489 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 490 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 491 "data/maps/LavaridgeTown/scripts.pory"
	end
# 492 "data/maps/LavaridgeTown/scripts.pory"

# 493 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 494 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 495 "data/maps/LavaridgeTown/scripts.pory"
	end
# 496 "data/maps/LavaridgeTown/scripts.pory"

# 497 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 498 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 499 "data/maps/LavaridgeTown/scripts.pory"
	end
# 500 "data/maps/LavaridgeTown/scripts.pory"

# 501 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 502 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 503 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 504 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 505 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 506 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 507 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 508 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 509 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 510 "data/maps/LavaridgeTown/scripts.pory"

# 511 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 512 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 513 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 514 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 515 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 516 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 517 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 518 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 519 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 520 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 521 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 522 "data/maps/LavaridgeTown/scripts.pory"

# 523 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 524 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 525 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 526 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 527 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 528 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 529 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 530 "data/maps/LavaridgeTown/scripts.pory"

# 531 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 532 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 533 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 534 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 535 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 536 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 537 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 538 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 539 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 540 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 541 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 542 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 543 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 544 "data/maps/LavaridgeTown/scripts.pory"

# 545 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 546 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 547 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 548 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 549 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 550 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 551 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 552 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 553 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 554 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 555 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 556 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 557 "data/maps/LavaridgeTown/scripts.pory"

# 558 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 559 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 560 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 561 "data/maps/LavaridgeTown/scripts.pory"

# 562 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 563 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 564 "data/maps/LavaridgeTown/scripts.pory"

# 565 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 566 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 567 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 568 "data/maps/LavaridgeTown/scripts.pory"

# 569 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 570 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 571 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 572 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 573 "data/maps/LavaridgeTown/scripts.pory"

# 574 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 575 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 576 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 577 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 578 "data/maps/LavaridgeTown/scripts.pory"

# 579 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 580 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 581 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 582 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 583 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 584 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 585 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 586 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 587 "data/maps/LavaridgeTown/scripts.pory"

# 588 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 589 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 590 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 591 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 592 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 593 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 594 "data/maps/LavaridgeTown/scripts.pory"

# 595 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 596 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 597 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 598 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 599 "data/maps/LavaridgeTown/scripts.pory"

# 600 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 601 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 602 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 603 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 604 "data/maps/LavaridgeTown/scripts.pory"

# 605 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 606 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 607 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 608 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 609 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 610 "data/maps/LavaridgeTown/scripts.pory"

# 611 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 612 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 613 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 614 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 615 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 616 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 617 "data/maps/LavaridgeTown/scripts.pory"

# 618 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 619 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 620 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 621 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 622 "data/maps/LavaridgeTown/scripts.pory"

# 623 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 624 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 625 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 626 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 627 "data/maps/LavaridgeTown/scripts.pory"

# 628 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 629 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 630 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_EventScript_EggWoman_Text_0:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	.string "Si quieres más Huevos Pokémon para\n"
	.string "cuidar, habrán en la Guardería a veces...\l"
	.string "¡La cuidadora es mi amiga, seguro te\l"
	.string "dejará cuidarlo si encuentra alguno!$"

LavaridgeTown_EventScript_EggWoman_Text_1:
# 22 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hola, joven... Se ve que eres un{A}\n"
	.string "Entrenador{A} muy fuerte...\p"
	.string "¿Te gustaría cuidar uno de los Huevos\n"
	.string "que encontramos en la Guardería?$"

LavaridgeTown_EventScript_EggWoman_Text_2:
# 31 "data/maps/LavaridgeTown/scripts.pory"
	.string "Como quieras entonces... Podemos\n"
	.string "cuidarlo mi esposo y yo...$"

LavaridgeTown_EventScript_EggWoman_Text_3:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh... No tienes espacio...$"

LavaridgeTown_EventScript_EggWoman_Text_4:
# 55 "data/maps/LavaridgeTown/scripts.pory"
	.string "Me pregunto...\p"
	.string "¿Qué Pokémon te gustan más?$"

LavaridgeTown_EventScript_EggWoman_Text_5:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Resistentes$"

LavaridgeTown_EventScript_EggWoman_Text_6:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fríos$"

LavaridgeTown_EventScript_EggWoman_Text_7:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Mágicos$"

LavaridgeTown_EventScript_EggWoman_Text_8:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fuertes$"

LavaridgeTown_EventScript_EggWoman_Text_9:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lindos$"

LavaridgeTown_EventScript_EggWoman_Text_10:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Todos!$"

LavaridgeTown_EventScript_EggWoman_Text_11:
# 247 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡{PLAYER} recibió el Huevo Extraño!$"

LavaridgeTown_EventScript_EggWoman_Text_12:
# 251 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Cuida bien de él, joven!$"
