Route101_EventScript_HelpMe::
# 5 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HelpMe_Text_0
	return


Route101_EventScript_Youngster::
# 17 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0
	return


Route101_EventScript_PleaseHelp::
# 29 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PleaseHelp_Text_0
	return


Route101_EventScript_DontLeaveMe::
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_DontLeaveMe_Text_0
	return


Route101_EventScript_YouSavedMe::
# 53 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_0
# 57 "data/maps/Route101/scripts.pory"
	hidenamebox
# 58 "data/maps/Route101/scripts.pory"
	namebox Birch
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_1
# 60 "data/maps/Route101/scripts.pory"
	hidenamebox
	return


# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 77 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 78 "data/maps/Route101/scripts.pory"

# 79 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 80 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 81 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 82 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 83 "data/maps/Route101/scripts.pory"
	.byte 0
# 84 "data/maps/Route101/scripts.pory"

# 85 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 86 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 87 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnResume_Night
# 88 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnResume_Day
# 89 "data/maps/Route101/scripts.pory"
	end
# 90 "data/maps/Route101/scripts.pory"
	
# 91 "data/maps/Route101/scripts.pory"
Route101_OnResume_Night:
# 92 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 93 "data/maps/Route101/scripts.pory"
	end
# 94 "data/maps/Route101/scripts.pory"
	
# 95 "data/maps/Route101/scripts.pory"
Route101_OnResume_Day:
# 96 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 97 "data/maps/Route101/scripts.pory"
	end
# 98 "data/maps/Route101/scripts.pory"

# 99 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 100 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 101 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnTransition_Night
# 102 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnTransition_Day
# 103 "data/maps/Route101/scripts.pory"
	end
# 104 "data/maps/Route101/scripts.pory"
	
# 105 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 106 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 107 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 108 "data/maps/Route101/scripts.pory"
	end
# 109 "data/maps/Route101/scripts.pory"

# 110 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 111 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 112 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 113 "data/maps/Route101/scripts.pory"
	end
# 114 "data/maps/Route101/scripts.pory"

# 115 "data/maps/Route101/scripts.pory"

# 116 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 117 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 118 "data/maps/Route101/scripts.pory"
	.2byte 0
# 119 "data/maps/Route101/scripts.pory"

# 120 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 121 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 122 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 123 "data/maps/Route101/scripts.pory"
	end
# 124 "data/maps/Route101/scripts.pory"

# 125 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 126 "data/maps/Route101/scripts.pory"
	lockall
# 127 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 128 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 129 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 130 "data/maps/Route101/scripts.pory"
	closemessage
# 131 "data/maps/Route101/scripts.pory"
	hidenamebox
# 132 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 16
# 133 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 17
# 134 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 135 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 136 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 137 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 139 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 140 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 142 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 144 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 145 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 147 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 148 "data/maps/Route101/scripts.pory"
	closemessage
# 149 "data/maps/Route101/scripts.pory"
	hidenamebox
# 150 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 151 "data/maps/Route101/scripts.pory"
	releaseall
# 152 "data/maps/Route101/scripts.pory"
	end
# 153 "data/maps/Route101/scripts.pory"

# 154 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 155 "data/maps/Route101/scripts.pory"
	lockall
# 156 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 157 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 158 "data/maps/Route101/scripts.pory"
	hidenamebox
# 159 "data/maps/Route101/scripts.pory"
	closemessage
# 160 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 161 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route101/scripts.pory"
	releaseall
# 163 "data/maps/Route101/scripts.pory"
	end
# 164 "data/maps/Route101/scripts.pory"

# 165 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 166 "data/maps/Route101/scripts.pory"
	lockall
# 167 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 168 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 169 "data/maps/Route101/scripts.pory"
	closemessage
# 170 "data/maps/Route101/scripts.pory"
	hidenamebox
# 171 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 172 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route101/scripts.pory"
	releaseall
# 174 "data/maps/Route101/scripts.pory"
	end
# 175 "data/maps/Route101/scripts.pory"

# 176 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 177 "data/maps/Route101/scripts.pory"
	lockall
# 178 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 179 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 180 "data/maps/Route101/scripts.pory"
	closemessage
# 181 "data/maps/Route101/scripts.pory"
	hidenamebox
# 182 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 183 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route101/scripts.pory"
	releaseall
# 185 "data/maps/Route101/scripts.pory"
	end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 188 "data/maps/Route101/scripts.pory"
	walk_up
# 189 "data/maps/Route101/scripts.pory"
	step_end
# 190 "data/maps/Route101/scripts.pory"

# 191 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 192 "data/maps/Route101/scripts.pory"
	walk_right
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 196 "data/maps/Route101/scripts.pory"
	walk_down
# 197 "data/maps/Route101/scripts.pory"
	step_end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 211 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 215 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 218 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 220 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 221 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 223 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 224 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 225 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 227 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 228 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 230 "data/maps/Route101/scripts.pory"
	step_end
# 231 "data/maps/Route101/scripts.pory"

# 232 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 233 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 234 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 235 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 239 "data/maps/Route101/scripts.pory"
	step_end
# 240 "data/maps/Route101/scripts.pory"

# 241 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 242 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 243 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 244 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 245 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 246 "data/maps/Route101/scripts.pory"
	step_end
# 247 "data/maps/Route101/scripts.pory"

# 248 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 251 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 252 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 253 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 254 "data/maps/Route101/scripts.pory"
	step_end
# 255 "data/maps/Route101/scripts.pory"

# 256 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 257 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 258 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 261 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 262 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 263 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 264 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 265 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 266 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 271 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 272 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 273 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 274 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 275 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 276 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 277 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 278 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 279 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 280 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 281 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 282 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 283 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 284 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 285 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 286 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 287 "data/maps/Route101/scripts.pory"
	step_end
# 288 "data/maps/Route101/scripts.pory"

# 289 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 290 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 291 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 292 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 293 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 294 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 295 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 296 "data/maps/Route101/scripts.pory"
	step_end
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 299 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 300 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 301 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 302 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 303 "data/maps/Route101/scripts.pory"
	step_end
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 306 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 307 "data/maps/Route101/scripts.pory"
	delay_8
# 308 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 309 "data/maps/Route101/scripts.pory"
	delay_8
# 310 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 311 "data/maps/Route101/scripts.pory"
	delay_8
# 312 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 313 "data/maps/Route101/scripts.pory"
	delay_8
# 314 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 315 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 316 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 317 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 318 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 319 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 320 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 321 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 325 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 326 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 327 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 328 "data/maps/Route101/scripts.pory"
	set_invisible
# 329 "data/maps/Route101/scripts.pory"
	step_end
# 330 "data/maps/Route101/scripts.pory"

# 331 "data/maps/Route101/scripts.pory"

# 332 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 333 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 334 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 335 "data/maps/Route101/scripts.pory"
	dowildbattle
# 336 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 337 "data/maps/Route101/scripts.pory"
	clearflag FLAG_EVENTOMISTERIOSO1
# 338 "data/maps/Route101/scripts.pory"
	end
# 339 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 340 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 341 "data/maps/Route101/scripts.pory"
	end
# 342 "data/maps/Route101/scripts.pory"

# 343 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 344 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 345 "data/maps/Route101/scripts.pory"
	end
# 346 "data/maps/Route101/scripts.pory"

# 347 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 348 "data/maps/Route101/scripts.pory"
	lock
# 349 "data/maps/Route101/scripts.pory"
	faceplayer
# 350 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 351 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 352 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 353 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 354 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 355 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 356 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 358 "data/maps/Route101/scripts.pory"
	waitstate
# 359 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 360 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Common_Movement_ExclamationMark
# 361 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_PokemonEscape
# 363 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 365 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 367 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 368 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 369 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 370 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 371 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 372 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 373 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 374 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 375 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 376 "data/maps/Route101/scripts.pory"
	getemptyslot
# 377 "data/maps/Route101/scripts.pory"
	checkplayergender
# 378 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 379 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 380 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 381 "data/maps/Route101/scripts.pory"
	waitstate
# 382 "data/maps/Route101/scripts.pory"
	release
# 383 "data/maps/Route101/scripts.pory"
	end
# 384 "data/maps/Route101/scripts.pory"

# 385 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 386 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 387 "data/maps/Route101/scripts.pory"
	return
# 388 "data/maps/Route101/scripts.pory"

# 389 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 390 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 391 "data/maps/Route101/scripts.pory"
	return
# 392 "data/maps/Route101/scripts.pory"

# 393 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 394 "data/maps/Route101/scripts.pory"
	walk_right
# 395 "data/maps/Route101/scripts.pory"
	step_end
# 396 "data/maps/Route101/scripts.pory"

# 397 "data/maps/Route101/scripts.pory"

# 398 "data/maps/Route101/scripts.pory"

# 399 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 400 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 401 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 402 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 403 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 404 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 405 "data/maps/Route101/scripts.pory"

# 406 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 407 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 408 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 409 "data/maps/Route101/scripts.pory"
	.string "{DOWN_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}VILLA LITTLEROOT{COLOR DARK_GRAY SHADOW LIGHT_GRAY}$"

Route101_EventScript_HelpMe_Text_0:
# 5 "data/maps/Route101/scripts.pory"
	.string "¡ALGUIEN, {SHAKE_SCREEN 3 3 2 3}AYÚDEME!$"

Route101_EventScript_Youngster_Text_0:
# 17 "data/maps/Route101/scripts.pory"
	.string "Es raro pensar en cómo cambian las\n"
	.string "cosas, ¿No te parece?\p"
	.string "Hace mucho, ¡Solíamos temer a los\n"
	.string "Pokémon!\l"
	.string "¿Te imaginas temerle a un Ralts?\l"
	.string "¡JAJAJA!$"

Route101_EventScript_PleaseHelp_Text_0:
# 29 "data/maps/Route101/scripts.pory"
	.string "¡Tú, ayúdame, soy alérgico a este\n"
	.string "Pokémon, y olvidé mi EPI-Pen!\p"
	.string "¡Usa las PokéBall que están en mi\n"
	.string "maletín!$"

Route101_EventScript_DontLeaveMe_Text_0:
# 41 "data/maps/Route101/scripts.pory"
	.string "{SHAKE_SCREEN 3 3 2 3}¡No me dejes así!$"

Route101_EventScript_YouSavedMe_Text_0:
# 54 "data/maps/Route101/scripts.pory"
	.string "¡UFF! {SHAKE_SCREEN 2 3 2 1}¡MUCHÍSIMAS GRACIAS!\p"
	.string "Eso estuvo cerca…\n"
	.string "Estaba estudiando los Pokémon de esta\l"
	.string "ruta, y me atacó un Zigzagoon…\p"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!$"

Route101_EventScript_YouSavedMe_Text_1:
# 59 "data/maps/Route101/scripts.pory"
	.string "¡Encantado!\n"
	.string "Te invito a mi Laboratorio para charlar\l"
	.string "más.$"
