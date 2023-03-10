MirageTower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_1F_SetHoleWarp
	map_script MAP_SCRIPT_ON_LOAD, MirageTower_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
	.byte 0

MirageTower_1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MIRAGE_TOWER_SECRET_ROOM
	end

MirageTower_1F_OnLoad:
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, MirageTower_1F_SetFloorCracks
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_1F_SetSecretStairs
	release
	end

MirageTower_1F_SetSecretStairs:
	setmetatile 5, 2, 0x205, TRUE
	special DrawWholeMapView
	releaseall
	end

MirageTower_1F_SetFloorCracks:
	setmetatile 4, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 5, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 6, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 7, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 8, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 11, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 12, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 13, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 14, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 15, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 16, 14, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 6, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 7, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 8, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 9, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 10, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 11, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 12, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 13, 13, METATILE_Cave_CrackedFloor, TRUE
	setmetatile 16, 13, METATILE_Cave_CrackedFloor, TRUE
	special DrawWholeMapView
	release
	end

MirageTower_1F_OnTransition:
	call CaveHole_FixCrackedGround
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end

