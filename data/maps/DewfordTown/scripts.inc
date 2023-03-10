@ Sailing to and from Dewford uses local IDs from different maps
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DEWFORD, 2
.equ LOCALID_BOAT_DEWFORD, 4

.equ LOCALID_BOAT_R109, 1
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 7
.equ LOCALID_BRINEY_R104, 8
.equ LOCALID_GRUNT, 6
.equ LOCALID_WALLY, 7

DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_OnFrame
	.byte 0

DewfordTown_OnTransition:
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_OnFrame:
	map_script_2 VAR_DEWFORD_TOWN_STATE, 3, DewfordTown_OnFrameWally
	.2byte 0

DewfordTown_EventScript_Wally::
	lockall
	faceplayer
	namebox Wally
	msgbox DewfordTown_EventScript_WallyHello, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_FaceRight
	waitmovement 0
	namebox Wally
	msgbox DewfordTown_EventScript_WallyBeginSpeech, MSGBOX_DEFAULT
	hidenamebox
	closemessage
	setflag FLAG_SPAWN_INVISIBLE
	setvar VAR_PETALBURG_CITY_STATE, 6
	specialvar VAR_RESULT, GetPlayerFacingDirection
	setvar VAR_0x8004, VAR_RESULT
    warp MAP_PETALBURG_CITY, 15, 16
	release
	end

DewfordTown_OnFrameWally::
	lockall
	call Script_RemoveTint
	call_if_eq VAR_0x8004, DIR_EAST, DewfordTown_OnFrameWallyEast
	call_if_eq VAR_0x8004, DIR_WEST, DewfordTown_OnFrameWallyWest
	call_if_eq VAR_0x8004, DIR_NORTH, DewfordTown_OnFrameWallyNorth
	call_if_eq VAR_0x8004, DIR_SOUTH, DewfordTown_OnFrameWallySouth
	msgbox DewfordTown_EventScript_WallyContinueSpeech, MSGBOX_DEFAULT
	setvar VAR_DEWFORD_TOWN_STATE, 4
	releaseall
	end

DewfordTown_OnFrameWallyEast::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayer
	waitmovement 0
	return

DewfordTown_OnFrameWallyWest::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerWest
	waitmovement 0
	return

DewfordTown_OnFrameWallyNorth::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerNorth
	waitmovement 0
	return

DewfordTown_OnFrameWallySouth::
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_VisiblePlayerSouth
	waitmovement 0
	return

DewfordTown_EventScript_WallyContinueSpeech::
	.string ".$"

DewfordTown_Movement_VisiblePlayer::
	face_right
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerWest::
	face_left
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerNorth::
	face_up
	set_visible
	step_end

DewfordTown_Movement_VisiblePlayerSouth::
	face_down
	set_visible
	step_end

DewfordTown_EventScript_Trigger::
	goto_if_ne VAR_DEWFORD_TOWN_STATE, 0, DewfordTown_EventScript_TriggerNada
	lockall
	playse SE_BALL_TRADE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GRUNT, Common_Movement_FacePlayer
	waitmovement 0
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach1
	waitmovement 0
	delay 16
	applymovement LOCALID_GRUNT, DewfordTown_Movement_GruntEscapes
	waitmovement 0
	removeobject LOCALID_GRUNT
	setflag FLAG_DEWFORD_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerApproach2
	waitmovement 0
	namebox Player
	msgbox DewfordTown_EventScript_Trigger_Text_0
	hidenamebox
	setvar VAR_DEWFORD_TOWN_STATE, 1
	releaseall
	return
	end

DewfordTown_EventScript_Trigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox DewfordTown_EventScript_Trigger_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBackDown
	waitmovement 0
	releaseall
	end

DewfordTown_Movement_PlayerBackDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

DewfordTown_EventScript_Trigger_Text_2:
	.string "El Gimnasio est?? cerrado.$"
DewfordTown_EventScript_TriggerNada::
	releaseall
	end

DewfordTown_Movement_PlayerApproach1:
	walk_slow_left
	step_end

DewfordTown_Movement_GruntEscapes:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_16
	delay_16
	lock_facing_direction
	walk_slow_up
	walk_slow_up
	walk_slow_up
	unlock_facing_direction
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

DewfordTown_Movement_PlayerApproach2:
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

DewfordTown_EventScript_Trigger_Text_0:
	.string "(??Q-qu?? fue eso...?)$"



DewfordTown_EventScript_Briney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 1, DewfordTown_EventScript_ChooseSlateport
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_ChoosePetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport::
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect::
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt::
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailBackToPetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman::
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign::
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign::
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign::
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
	end

DewfordTown_EventScript_GiveOldRod::
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing::
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
	end

DewfordTown_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods::
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_LandedSlateport::
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DewfordTown_Movement_SailToPetalburg:
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_SailToSlateport:
	walk_right
	walk_fast_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_PlayerBoardBoat:
	walk_right
	walk_up
	step_end

DewfordTown_Movement_ExitBoatPetalburg:
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_ExitBoatSlateport:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

DewfordTown_Movement_BrineyBoardBoat:
	walk_up
	step_end

DewfordTown_Movement_BrineyExitBoat:
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_TrendyPhraseBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
	end

DewfordTown_EventScript_ConfirmTrendyPhrase::
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase::
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase::
	incrementgamestat GAME_STAT_STARTED_TRENDS
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase::
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough::
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_TinyIslandCommunity:
	.string "Dewford es una peque??a comunidad.\pSi algo se pone de moda,\ntodos lo saben.$"

DewfordTown_Text_TownSign:
	.string "PUEBLO DEWFORD\n"
	.string "???Una islita en el mar azul.???$"

DewfordTown_Text_GymSign:
	.string "GIMNASIO DE PUEBLO DEWFORD\n"
	.string "L??der: Brawly\l"
	.string "?????Una enorme ola de poder!???$"

DewfordTown_Text_HallSign:
	.string "SAL??N COMUNITARIO DEWFORD\n"
	.string "?????Un lugar de encuentros!???$"

Route104_Text_LandedInDewfordDeliverLetter:
	.string "??Ahoy, mariner{OA}!\n??Esto es Dewford!\pAhora podr??s entregar la carta.$"

DewfordTown_Text_SetSailBackToPetalburg:
	.string "??Has terminado y quieres volver?$"

DewfordTown_Text_PetalburgWereSettingSail2:
	.string "??A Petalburg entonces!$"

DewfordTown_Text_GoDeliverIllBeWaiting:
	.string "Ah, esperar?? entonces.$"

DewfordTown_Text_BrineyLandedInDewford:
	.string "??Ahoy!\n??Llegamos!$"

DewfordTown_Text_WhereAreWeBound:
	.string "??Ahoy! ??All?? vamos!$"

DewfordTown_Text_PetalburgWereSettingSail:
	.string "??A Petalburg?\n??Vamos, Peeko, queridita!$"

DewfordTown_Text_SlateportWereSettingSail:
	.string "??A Slaterport?\n??Vamos, Peeko, queridita!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
	.string "??Aqu?? esperar??!$"

DewfordTown_Text_GettingItchToFish:
	.string "??Ah! ??Quiero pescar!\p??T?? no?$"

DewfordTown_Text_GiveYouOneOfMyRods:
	.string "??Te escucho fuerte y claro!\p??Toma esto, peque??{OA}!$"

DewfordTown_Text_ThrowInFishingAdvice:
	.string "??Sabes?\pHe desarrollado una ca??a que puede\npescar Pok??mon, ??Sin necesidad\lde esperar tanto!$"

DewfordTown_Text_ThatsTooBadThen:
	.string "Qu?? mal.$"

DewfordTown_Text_HowsYourFishing:
	.string "??Ey!\n"
	.string "??C??mo va todo?$"

DewfordTown_Text_GreatHaulInSomeBigOnes:
	.string "??Genial, atrapa unos grandes!$"

DewfordTown_Text_FishingAdvice:
	.string "Oh, bueno, ??Ya ir?? mejor!$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight:
	.string "Osea, est?? muy de moda eso de\n???{STR_VAR_1}???\p"
	.string "Obvio lo conoces, osea,\n"
	.string "???{STR_VAR_1}??????\l"
	.string "??Todos hablan de eso!\n"
	.string "???{STR_VAR_1}???\l"
	.string "Es lo m??s, ??no?$"

DewfordTown_Text_TellMeWhatsNewAndIn:
	.string "??Qu???\n??Ya pas?? de moda?\pEntonces, ??Qu?? es lo m??s?$"

DewfordTown_Text_OfCourseIKnowAboutThat:
	.string "?????{STR_VAR_2}????\p"
	.string "??? ???\p"
	.string "???Eh??? ??S??! ??Claro, claro!\n"
	.string "???{STR_VAR_2},??? ??No?\p"
	.string "Pfff, ??Obvio!\n"
	.string "???{STR_VAR_2}???\pEs lo m??s.$"

DewfordTown_Text_XHuhIThinkYIsCool:
	.string "Mmmhhh???\n"
	.string "???{STR_VAR_2},??? ??No?\p"
	.string "Aunque pienso que\n"
	.string "???{STR_VAR_1}???\l"
	.string "es mucho mejor.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
	.string "Bueno, si hay otras\ntrends, d??melo, ??S???$"

DewfordTown_Text_YeahDefinitionOfInRightNow:
	.string "??Osea, obvio!\p"
	.string "???{STR_VAR_1}??? es la\n"
	.string "definici??n de cool.$"

DewfordTown_EventScript_WallyHello:
	.string "??O-oh!\n"
	.string "-COF COF-\l"
	.string "??{PLAYER}!\p"
	.string "N-no sab??a que vendr??as...\n"
	.string "??Pero que bien que est??s aqu??!$"

DewfordTown_EventScript_WallyBeginSpeech:
	.string "Sabes, tengo mucho miedo de comenzar mi\n"
	.string "{COLOR BLUE}Desaf??o de los Gimnasios{COLOR DARK_GRAY}, y n-no s?? si\l"
	.string "sea algo en lo que pueda siquiera\l"
	.string "aspirar a ser bueno...\p"
	.string "Tengo miedo de fallar, y que todos se\n"
	.string "burlen de m?? denuevo...$"
	
