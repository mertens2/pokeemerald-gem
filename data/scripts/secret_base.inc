# 270 "data/scripts/secret_base.pory"

# 271 "data/scripts/secret_base.pory"

# 272 "data/scripts/secret_base.pory"

# 273 "data/scripts/secret_base.pory"
	.include "data/text/secret_base_trainers.inc"
# 274 "data/scripts/secret_base.pory"

# 275 "data/scripts/secret_base.pory"
SecretBase_EventScript_CheckEntrance::
# 276 "data/scripts/secret_base.pory"
	special GetSecretBaseTypeInFrontOfPlayer
# 277 "data/scripts/secret_base.pory"
	special CheckPlayerHasSecretBase
# 278 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, TRUE, SecretBase_EventScript_AlreadyHasSecretBase
# 279 "data/scripts/secret_base.pory"
	checkpartymove MOVE_SECRET_POWER
# 280 "data/scripts/secret_base.pory"
	setfieldeffectargument 0, VAR_RESULT
# 281 "data/scripts/secret_base.pory"
	buffermovename STR_VAR_2, MOVE_SECRET_POWER
# 282 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_RED_CAVE, SecretBase_EventScript_Cave
# 283 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BROWN_CAVE, SecretBase_EventScript_Cave
# 284 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BLUE_CAVE, SecretBase_EventScript_Cave
# 285 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_YELLOW_CAVE, SecretBase_EventScript_Cave
# 286 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_TREE, SecretBase_EventScript_Tree
# 287 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_SHRUB, SecretBase_EventScript_Shrub
# 288 "data/scripts/secret_base.pory"
	end
# 289 "data/scripts/secret_base.pory"

# 290 "data/scripts/secret_base.pory"
SecretBase_EventScript_Cave::
# 291 "data/scripts/secret_base.pory"
	lockall
# 292 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, SecretBase_EventScript_CaveNoSecretPower
# 293 "data/scripts/secret_base.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 294 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_IndentUseSecretPower, MSGBOX_YESNO
# 295 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 296 "data/scripts/secret_base.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 297 "data/scripts/secret_base.pory"
	closemessage
# 298 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_CAVE
# 299 "data/scripts/secret_base.pory"
	waitstate
# 300 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_CaveEnter
# 301 "data/scripts/secret_base.pory"
	end
# 302 "data/scripts/secret_base.pory"

# 303 "data/scripts/secret_base.pory"
SecretBase_EventScript_CaveUseSecretPower::
# 304 "data/scripts/secret_base.pory"
	lockall
# 305 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_CAVE
# 306 "data/scripts/secret_base.pory"
	waitstate
# 307 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_CaveEnter
# 308 "data/scripts/secret_base.pory"
	end
# 309 "data/scripts/secret_base.pory"

# 310 "data/scripts/secret_base.pory"
SecretBase_EventScript_CaveNoSecretPower::
# 311 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_SmallIndentInWall, MSGBOX_DEFAULT
# 312 "data/scripts/secret_base.pory"
	releaseall
# 313 "data/scripts/secret_base.pory"
	end
# 314 "data/scripts/secret_base.pory"

# 315 "data/scripts/secret_base.pory"
SecretBase_EventScript_CaveEnter::
# 316 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_DiscoveredSmallCavern, MSGBOX_DEFAULT
# 317 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_InitSecretBase
# 318 "data/scripts/secret_base.pory"
	end
# 319 "data/scripts/secret_base.pory"

# 320 "data/scripts/secret_base.pory"
SecretBase_EventScript_Tree::
# 321 "data/scripts/secret_base.pory"
	lockall
# 322 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, SecretBase_EventScript_TreeNoSecretPower
# 323 "data/scripts/secret_base.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 324 "data/scripts/secret_base.pory"
	buffermovename STR_VAR_2, MOVE_SECRET_POWER
# 325 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_TreeUseSecretPower, MSGBOX_YESNO
# 326 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 327 "data/scripts/secret_base.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 328 "data/scripts/secret_base.pory"
	closemessage
# 329 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_TREE
# 330 "data/scripts/secret_base.pory"
	waitstate
# 331 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_TreeEnter
# 332 "data/scripts/secret_base.pory"
	end
# 333 "data/scripts/secret_base.pory"

# 334 "data/scripts/secret_base.pory"
SecretBase_EventScript_TreeUseSecretPower::
# 335 "data/scripts/secret_base.pory"
	lockall
# 336 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_TREE
# 337 "data/scripts/secret_base.pory"
	waitstate
# 338 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_TreeEnter
# 339 "data/scripts/secret_base.pory"
	end
# 340 "data/scripts/secret_base.pory"

# 341 "data/scripts/secret_base.pory"
SecretBase_EventScript_TreeNoSecretPower::
# 342 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_TreeCanBeClimbed, MSGBOX_DEFAULT
# 343 "data/scripts/secret_base.pory"
	releaseall
# 344 "data/scripts/secret_base.pory"
	end
# 345 "data/scripts/secret_base.pory"

# 346 "data/scripts/secret_base.pory"
SecretBase_EventScript_TreeEnter::
# 347 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_VineDroppedDown, MSGBOX_DEFAULT
# 348 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_InitSecretBase
# 349 "data/scripts/secret_base.pory"
	end
# 350 "data/scripts/secret_base.pory"

# 351 "data/scripts/secret_base.pory"
SecretBase_EventScript_Shrub::
# 352 "data/scripts/secret_base.pory"
	lockall
# 353 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, SecretBase_EventScript_ShrubNoSecretPower
# 354 "data/scripts/secret_base.pory"
	buffermovename STR_VAR_2, MOVE_SECRET_POWER
# 355 "data/scripts/secret_base.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 356 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_ClumpUseSecretPower, MSGBOX_YESNO
# 357 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 358 "data/scripts/secret_base.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 359 "data/scripts/secret_base.pory"
	closemessage
# 360 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_SHRUB
# 361 "data/scripts/secret_base.pory"
	waitstate
# 362 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_ShrubEnter
# 363 "data/scripts/secret_base.pory"
	end
# 364 "data/scripts/secret_base.pory"

# 365 "data/scripts/secret_base.pory"
SecretBase_EventScript_ShrubUseSecretPower::
# 366 "data/scripts/secret_base.pory"
	lockall
# 367 "data/scripts/secret_base.pory"
	dofieldeffect FLDEFF_USE_SECRET_POWER_SHRUB
# 368 "data/scripts/secret_base.pory"
	waitstate
# 369 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_ShrubEnter
# 370 "data/scripts/secret_base.pory"
	end
# 371 "data/scripts/secret_base.pory"

# 372 "data/scripts/secret_base.pory"
SecretBase_EventScript_ShrubNoSecretPower::
# 373 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_ClumpOfGrass, MSGBOX_DEFAULT
# 374 "data/scripts/secret_base.pory"
	releaseall
# 375 "data/scripts/secret_base.pory"
	end
# 376 "data/scripts/secret_base.pory"

# 377 "data/scripts/secret_base.pory"
SecretBase_EventScript_ShrubEnter::
# 378 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_DiscoveredSmallEntrance, MSGBOX_DEFAULT
# 379 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_InitSecretBase
# 380 "data/scripts/secret_base.pory"
	end
# 381 "data/scripts/secret_base.pory"

# 382 "data/scripts/secret_base.pory"
SecretBase_EventScript_InitSecretBase::
# 383 "data/scripts/secret_base.pory"
	closemessage
# 384 "data/scripts/secret_base.pory"
	playse SE_EXIT
# 385 "data/scripts/secret_base.pory"
	setvar VAR_INIT_SECRET_BASE, 0
# 386 "data/scripts/secret_base.pory"
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
# 387 "data/scripts/secret_base.pory"
	special SetPlayerSecretBase
# 388 "data/scripts/secret_base.pory"
	special EnterSecretBase
# 389 "data/scripts/secret_base.pory"
	setvar VAR_0x8004, 0
# 390 "data/scripts/secret_base.pory"
	setvar VAR_0x8005, 0
# 391 "data/scripts/secret_base.pory"
	special InitSecretBaseDecorationSprites
# 392 "data/scripts/secret_base.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 1
# 393 "data/scripts/secret_base.pory"
	waitstate
# 394 "data/scripts/secret_base.pory"
	end
# 395 "data/scripts/secret_base.pory"

# 396 "data/scripts/secret_base.pory"
SecretBase_EventScript_FirstEntrance::
# 397 "data/scripts/secret_base.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SecretBase_Movement_EnterBase
# 398 "data/scripts/secret_base.pory"
	waitmovement 0
# 399 "data/scripts/secret_base.pory"
	setvar VAR_INIT_SECRET_BASE, 1
# 400 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_WantToMakeYourSecretBaseHere, MSGBOX_YESNO
# 401 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, YES, SecretBase_EventScript_SetAsBase
# 402 "data/scripts/secret_base.pory"
	closemessage
# 403 "data/scripts/secret_base.pory"
	playse SE_EXIT
# 404 "data/scripts/secret_base.pory"
	special ClearAndLeaveSecretBase
# 405 "data/scripts/secret_base.pory"
	end
# 406 "data/scripts/secret_base.pory"

# 407 "data/scripts/secret_base.pory"
SecretBase_EventScript_SetAsBase::
# 408 "data/scripts/secret_base.pory"
	closemessage
# 409 "data/scripts/secret_base.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
# 410 "data/scripts/secret_base.pory"
	special EnterNewlyCreatedSecretBase
# 411 "data/scripts/secret_base.pory"
	waitstate
# 412 "data/scripts/secret_base.pory"
	end
# 413 "data/scripts/secret_base.pory"

# 414 "data/scripts/secret_base.pory"
SecretBase_Movement_EnterBase:
# 415 "data/scripts/secret_base.pory"
	walk_up
# 416 "data/scripts/secret_base.pory"
	walk_up
# 417 "data/scripts/secret_base.pory"
	step_end
# 418 "data/scripts/secret_base.pory"

# 419 "data/scripts/secret_base.pory"
SecretBase_EventScript_Enter::
# 420 "data/scripts/secret_base.pory"
	lockall
# 421 "data/scripts/secret_base.pory"
	setvar VAR_INIT_SECRET_BASE, 1
# 422 "data/scripts/secret_base.pory"
	playse SE_EXIT
# 423 "data/scripts/secret_base.pory"
	special IsCurSecretBaseOwnedByAnotherPlayer
# 424 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, FALSE, SecretBase_EventScript_EnterPlayersBase
# 425 "data/scripts/secret_base.pory"
	clearflag FLAG_HIDE_SECRET_BASE_TRAINER
# 426 "data/scripts/secret_base.pory"
	special EnterSecretBase
# 427 "data/scripts/secret_base.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 428 "data/scripts/secret_base.pory"
	waitstate
# 429 "data/scripts/secret_base.pory"
	end
# 430 "data/scripts/secret_base.pory"

# 431 "data/scripts/secret_base.pory"
SecretBase_EventScript_EnterPlayersBase::
# 432 "data/scripts/secret_base.pory"
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
# 433 "data/scripts/secret_base.pory"
	special EnterSecretBase
# 434 "data/scripts/secret_base.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 435 "data/scripts/secret_base.pory"
	waitstate
# 436 "data/scripts/secret_base.pory"
	end
# 437 "data/scripts/secret_base.pory"

# 438 "data/scripts/secret_base.pory"
SecretBase_EventScript_AlreadyHasSecretBase::
# 439 "data/scripts/secret_base.pory"
	checkpartymove MOVE_SECRET_POWER
# 440 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, SecretBase_EventScript_NoSecretPower
# 441 "data/scripts/secret_base.pory"
	setfieldeffectargument 0, VAR_RESULT
# 442 "data/scripts/secret_base.pory"
	setorcopyvar VAR_0x8004, VAR_RESULT
# 443 "data/scripts/secret_base.pory"
	lockall
# 444 "data/scripts/secret_base.pory"
	special GetSecretBaseNearbyMapName
# 445 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_WouldYouLikeToMoveBases, MSGBOX_YESNO
# 446 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 447 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_AllDecorationsWillBeReturned, MSGBOX_YESNO
# 448 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 449 "data/scripts/secret_base.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 450 "data/scripts/secret_base.pory"
	special MoveOutOfSecretBaseFromOutside
# 451 "data/scripts/secret_base.pory"
	closemessage
# 452 "data/scripts/secret_base.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 453 "data/scripts/secret_base.pory"
	buffermovename STR_VAR_1, MOVE_SECRET_POWER
# 454 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_MovingCompletedUseSecretPower, MSGBOX_YESNO
# 455 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_CancelOnEntrance
# 456 "data/scripts/secret_base.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 457 "data/scripts/secret_base.pory"
	buffermovename STR_VAR_2, MOVE_SECRET_POWER
# 458 "data/scripts/secret_base.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 459 "data/scripts/secret_base.pory"
	closemessage
# 460 "data/scripts/secret_base.pory"
	closemessage
# 461 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_RED_CAVE, SecretBase_EventScript_CaveUseSecretPower
# 462 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BROWN_CAVE, SecretBase_EventScript_CaveUseSecretPower
# 463 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BLUE_CAVE, SecretBase_EventScript_CaveUseSecretPower
# 464 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_YELLOW_CAVE, SecretBase_EventScript_CaveUseSecretPower
# 465 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_TREE, SecretBase_EventScript_TreeUseSecretPower
# 466 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_SHRUB, SecretBase_EventScript_ShrubUseSecretPower
# 467 "data/scripts/secret_base.pory"
	releaseall
# 468 "data/scripts/secret_base.pory"
	end
# 469 "data/scripts/secret_base.pory"

# 470 "data/scripts/secret_base.pory"
SecretBase_EventScript_NoSecretPower::
# 471 "data/scripts/secret_base.pory"
	lockall
# 472 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_RED_CAVE, SecretBase_EventScript_CaveNoSecretPower
# 473 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BROWN_CAVE, SecretBase_EventScript_CaveNoSecretPower
# 474 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_BLUE_CAVE, SecretBase_EventScript_CaveNoSecretPower
# 475 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_YELLOW_CAVE, SecretBase_EventScript_CaveNoSecretPower
# 476 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_TREE, SecretBase_EventScript_TreeNoSecretPower
# 477 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8007, SECRET_BASE_SHRUB, SecretBase_EventScript_ShrubNoSecretPower
# 478 "data/scripts/secret_base.pory"
	end
# 479 "data/scripts/secret_base.pory"

# 480 "data/scripts/secret_base.pory"
SecretBase_EventScript_CancelOnEntrance::
# 481 "data/scripts/secret_base.pory"
	closemessage
# 482 "data/scripts/secret_base.pory"
	releaseall
# 483 "data/scripts/secret_base.pory"
	end
# 484 "data/scripts/secret_base.pory"

# 485 "data/scripts/secret_base.pory"
SecretBase_EventScript_SetDecorationFlags::
# 486 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_1
# 487 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_2
# 488 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_3
# 489 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_4
# 490 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_5
# 491 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_6
# 492 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_7
# 493 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_8
# 494 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_9
# 495 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_10
# 496 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_11
# 497 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_12
# 498 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_13
# 499 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_14
# 500 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_15
# 501 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_16
# 502 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_17
# 503 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_18
# 504 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_19
# 505 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_20
# 506 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_21
# 507 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_22
# 508 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_23
# 509 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_24
# 510 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_25
# 511 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_26
# 512 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_27
# 513 "data/scripts/secret_base.pory"
	setflag FLAG_DECORATION_28
# 514 "data/scripts/secret_base.pory"
	return
# 515 "data/scripts/secret_base.pory"

# 516 "data/scripts/secret_base.pory"
SecretBase_EventScript_InitDecorations::
# 517 "data/scripts/secret_base.pory"
	setvar VAR_0x8004, 0
# 518 "data/scripts/secret_base.pory"
	setvar VAR_0x8005, 0
# 519 "data/scripts/secret_base.pory"
	special InitSecretBaseDecorationSprites
# 520 "data/scripts/secret_base.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 1
# 521 "data/scripts/secret_base.pory"
	end
# 522 "data/scripts/secret_base.pory"

# 523 "data/scripts/secret_base.pory"
SecretBase_EventScript_SetDecoration::
# 524 "data/scripts/secret_base.pory"
	setvar VAR_0x8005, 0
# 525 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_SetDecoration2
# 526 "data/scripts/secret_base.pory"
	end
# 527 "data/scripts/secret_base.pory"

# 528 "data/scripts/secret_base.pory"
SecretBase_EventScript_SetDecoration2::
# 529 "data/scripts/secret_base.pory"
	special SetDecoration
# 530 "data/scripts/secret_base.pory"
	end
# 531 "data/scripts/secret_base.pory"

# 532 "data/scripts/secret_base.pory"
SecretBase_EventScript_PutAwayDecoration::
# 533 "data/scripts/secret_base.pory"
	setvar VAR_0x8004, 0
# 534 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_PutAwayDecorationLoop
# 535 "data/scripts/secret_base.pory"
	end
# 536 "data/scripts/secret_base.pory"

# 537 "data/scripts/secret_base.pory"
SecretBase_EventScript_PutAwayDecorationLoop::
# 538 "data/scripts/secret_base.pory"
	special PutAwayDecorationIteration
# 539 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_PutAwayDecorationEnd
# 540 "data/scripts/secret_base.pory"
	addvar VAR_0x8004, 1
# 541 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8005, 0, SecretBase_EventScript_PutAwayDecorationLoop
# 542 "data/scripts/secret_base.pory"
	removeobject VAR_0x8006
# 543 "data/scripts/secret_base.pory"
	setflag VAR_0x8005  @ UB: VAR_0x8005 is set to a flag by PutAwayDecorationIteration, but ScrCmd_setflag doesn't use VarGet
# 544 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_PutAwayDecorationLoop
# 545 "data/scripts/secret_base.pory"
	end
# 546 "data/scripts/secret_base.pory"

# 547 "data/scripts/secret_base.pory"
SecretBase_EventScript_PutAwayDecorationEnd::
# 548 "data/scripts/secret_base.pory"
	end
# 549 "data/scripts/secret_base.pory"

# 550 "data/scripts/secret_base.pory"
SecretBase_EventScript_RecordMixTrainer::
# 551 "data/scripts/secret_base.pory"
	special GetSecretBaseOwnerAndState
# 552 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 0, SecretBase_EventScript_Trainer0
# 553 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 1, SecretBase_EventScript_Trainer1
# 554 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 2, SecretBase_EventScript_Trainer2
# 555 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 3, SecretBase_EventScript_Trainer3
# 556 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 4, SecretBase_EventScript_Trainer4
# 557 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 5, SecretBase_EventScript_Trainer5
# 558 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 6, SecretBase_EventScript_Trainer6
# 559 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 7, SecretBase_EventScript_Trainer7
# 560 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 8, SecretBase_EventScript_Trainer8
# 561 "data/scripts/secret_base.pory"
	goto_if_eq VAR_0x8004, 9, SecretBase_EventScript_Trainer9
# 562 "data/scripts/secret_base.pory"
	end
# 563 "data/scripts/secret_base.pory"

# 564 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 565 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer0::
# 566 "data/scripts/secret_base.pory"
	lock
# 567 "data/scripts/secret_base.pory"
	faceplayer
# 568 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer0PreChampion
# 569 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer0PostBattle
# 570 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer0Intro, MSGBOX_YESNO
# 571 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer0DeclineBattle
# 572 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 573 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 574 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 575 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer0DeclineBattle
# 576 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer0AcceptBattle, MSGBOX_DEFAULT
# 577 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 578 "data/scripts/secret_base.pory"
	end
# 579 "data/scripts/secret_base.pory"

# 580 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer0PreChampion::
# 581 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer0PreChampion, MSGBOX_DEFAULT
# 582 "data/scripts/secret_base.pory"
	release
# 583 "data/scripts/secret_base.pory"
	end
# 584 "data/scripts/secret_base.pory"

# 585 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer0DeclineBattle::
# 586 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 587 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 588 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 589 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer0DeclineBattle, MSGBOX_DEFAULT
# 590 "data/scripts/secret_base.pory"
	release
# 591 "data/scripts/secret_base.pory"
	end
# 592 "data/scripts/secret_base.pory"

# 593 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer0PostBattle::
# 594 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer0PostBattle, MSGBOX_DEFAULT
# 595 "data/scripts/secret_base.pory"
	release
# 596 "data/scripts/secret_base.pory"
	end
# 597 "data/scripts/secret_base.pory"

# 598 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 599 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer1::
# 600 "data/scripts/secret_base.pory"
	lock
# 601 "data/scripts/secret_base.pory"
	faceplayer
# 602 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer1PreChampion
# 603 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer1PostBattle
# 604 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer1Intro, MSGBOX_YESNO
# 605 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer1DeclineBattle
# 606 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 607 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 608 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 609 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer1DeclineBattle
# 610 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer1AcceptBattle, MSGBOX_DEFAULT
# 611 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 612 "data/scripts/secret_base.pory"
	end
# 613 "data/scripts/secret_base.pory"

# 614 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer1PreChampion::
# 615 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer1PreChampion, MSGBOX_DEFAULT
# 616 "data/scripts/secret_base.pory"
	release
# 617 "data/scripts/secret_base.pory"
	end
# 618 "data/scripts/secret_base.pory"

# 619 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer1DeclineBattle::
# 620 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 621 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 622 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 623 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer1DeclineBattle, MSGBOX_DEFAULT
# 624 "data/scripts/secret_base.pory"
	release
# 625 "data/scripts/secret_base.pory"
	end
# 626 "data/scripts/secret_base.pory"

# 627 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer1PostBattle::
# 628 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer1PostBattle, MSGBOX_DEFAULT
# 629 "data/scripts/secret_base.pory"
	release
# 630 "data/scripts/secret_base.pory"
	end
# 631 "data/scripts/secret_base.pory"

# 632 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 633 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer2::
# 634 "data/scripts/secret_base.pory"
	lock
# 635 "data/scripts/secret_base.pory"
	faceplayer
# 636 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer2PreChampion
# 637 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer2PostBattle
# 638 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer2Intro, MSGBOX_YESNO
# 639 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer2DeclineBattle
# 640 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 641 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 642 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 643 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer2DeclineBattle
# 644 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer2AcceptBattle, MSGBOX_DEFAULT
# 645 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 646 "data/scripts/secret_base.pory"
	end
# 647 "data/scripts/secret_base.pory"

# 648 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer2PreChampion::
# 649 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer2PreChampion, MSGBOX_DEFAULT
# 650 "data/scripts/secret_base.pory"
	release
# 651 "data/scripts/secret_base.pory"
	end
# 652 "data/scripts/secret_base.pory"

# 653 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer2DeclineBattle::
# 654 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 655 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 656 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 657 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer2DeclineBattle, MSGBOX_DEFAULT
# 658 "data/scripts/secret_base.pory"
	release
# 659 "data/scripts/secret_base.pory"
	end
# 660 "data/scripts/secret_base.pory"

# 661 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer2PostBattle::
# 662 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer2PostBattle, MSGBOX_DEFAULT
# 663 "data/scripts/secret_base.pory"
	release
# 664 "data/scripts/secret_base.pory"
	end
# 665 "data/scripts/secret_base.pory"

# 666 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 667 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer3::
# 668 "data/scripts/secret_base.pory"
	lock
# 669 "data/scripts/secret_base.pory"
	faceplayer
# 670 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer3PreChampion
# 671 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer3PostBattle
# 672 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer3Intro, MSGBOX_YESNO
# 673 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer3DeclineBattle
# 674 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 675 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 676 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 677 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer3DeclineBattle
# 678 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer3AcceptBattle, MSGBOX_DEFAULT
# 679 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 680 "data/scripts/secret_base.pory"
	end
# 681 "data/scripts/secret_base.pory"

# 682 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer3PreChampion::
# 683 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer3PreChampion, MSGBOX_DEFAULT
# 684 "data/scripts/secret_base.pory"
	release
# 685 "data/scripts/secret_base.pory"
	end
# 686 "data/scripts/secret_base.pory"

# 687 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer3DeclineBattle::
# 688 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 689 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 690 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 691 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer3DeclineBattle, MSGBOX_DEFAULT
# 692 "data/scripts/secret_base.pory"
	release
# 693 "data/scripts/secret_base.pory"
	end
# 694 "data/scripts/secret_base.pory"

# 695 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer3PostBattle::
# 696 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer3PostBattle, MSGBOX_DEFAULT
# 697 "data/scripts/secret_base.pory"
	release
# 698 "data/scripts/secret_base.pory"
	end
# 699 "data/scripts/secret_base.pory"

# 700 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 701 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer4::
# 702 "data/scripts/secret_base.pory"
	lock
# 703 "data/scripts/secret_base.pory"
	faceplayer
# 704 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer4PreChampion
# 705 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer4PostBattle
# 706 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer4Intro, MSGBOX_YESNO
# 707 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer4DeclineBattle
# 708 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 709 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 710 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 711 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer4DeclineBattle
# 712 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer4AcceptBattle, MSGBOX_DEFAULT
# 713 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 714 "data/scripts/secret_base.pory"
	end
# 715 "data/scripts/secret_base.pory"

# 716 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer4PreChampion::
# 717 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer4PreChampion, MSGBOX_DEFAULT
# 718 "data/scripts/secret_base.pory"
	release
# 719 "data/scripts/secret_base.pory"
	end
# 720 "data/scripts/secret_base.pory"

# 721 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer4DeclineBattle::
# 722 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 723 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 724 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 725 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer4DeclineBattle, MSGBOX_DEFAULT
# 726 "data/scripts/secret_base.pory"
	release
# 727 "data/scripts/secret_base.pory"
	end
# 728 "data/scripts/secret_base.pory"

# 729 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer4PostBattle::
# 730 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer4PostBattle, MSGBOX_DEFAULT
# 731 "data/scripts/secret_base.pory"
	release
# 732 "data/scripts/secret_base.pory"
	end
# 733 "data/scripts/secret_base.pory"

# 734 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 735 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer5::
# 736 "data/scripts/secret_base.pory"
	lock
# 737 "data/scripts/secret_base.pory"
	faceplayer
# 738 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer5PreChampion
# 739 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer5PostBattle
# 740 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer5Intro, MSGBOX_YESNO
# 741 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer5DeclineBattle
# 742 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 743 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 744 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 745 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer5DeclineBattle
# 746 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer5AcceptBattle, MSGBOX_DEFAULT
# 747 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 748 "data/scripts/secret_base.pory"
	end
# 749 "data/scripts/secret_base.pory"

# 750 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer5PreChampion::
# 751 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer5PreChampion, MSGBOX_DEFAULT
# 752 "data/scripts/secret_base.pory"
	release
# 753 "data/scripts/secret_base.pory"
	end
# 754 "data/scripts/secret_base.pory"

# 755 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer5DeclineBattle::
# 756 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 757 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 758 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 759 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer5DeclineBattle, MSGBOX_DEFAULT
# 760 "data/scripts/secret_base.pory"
	release
# 761 "data/scripts/secret_base.pory"
	end
# 762 "data/scripts/secret_base.pory"

# 763 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer5PostBattle::
# 764 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer5PostBattle, MSGBOX_DEFAULT
# 765 "data/scripts/secret_base.pory"
	release
# 766 "data/scripts/secret_base.pory"
	end
# 767 "data/scripts/secret_base.pory"

# 768 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 769 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer6::
# 770 "data/scripts/secret_base.pory"
	lock
# 771 "data/scripts/secret_base.pory"
	faceplayer
# 772 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer6PreChampion
# 773 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer6PostBattle
# 774 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer6Intro, MSGBOX_YESNO
# 775 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer6DeclineBattle
# 776 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 777 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 778 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 779 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer6DeclineBattle
# 780 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer6AcceptBattle, MSGBOX_DEFAULT
# 781 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 782 "data/scripts/secret_base.pory"
	end
# 783 "data/scripts/secret_base.pory"

# 784 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer6PreChampion::
# 785 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer6PreChampion, MSGBOX_DEFAULT
# 786 "data/scripts/secret_base.pory"
	release
# 787 "data/scripts/secret_base.pory"
	end
# 788 "data/scripts/secret_base.pory"

# 789 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer6DeclineBattle::
# 790 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 791 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 792 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 793 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer6DeclineBattle, MSGBOX_DEFAULT
# 794 "data/scripts/secret_base.pory"
	release
# 795 "data/scripts/secret_base.pory"
	end
# 796 "data/scripts/secret_base.pory"

# 797 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer6PostBattle::
# 798 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer6PostBattle, MSGBOX_DEFAULT
# 799 "data/scripts/secret_base.pory"
	release
# 800 "data/scripts/secret_base.pory"
	end
# 801 "data/scripts/secret_base.pory"

# 802 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 803 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer7::
# 804 "data/scripts/secret_base.pory"
	lock
# 805 "data/scripts/secret_base.pory"
	faceplayer
# 806 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer7PreChampion
# 807 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer7PostBattle
# 808 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer7Intro, MSGBOX_YESNO
# 809 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer7DeclineBattle
# 810 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 811 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 812 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 813 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer7DeclineBattle
# 814 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer7AcceptBattle, MSGBOX_DEFAULT
# 815 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 816 "data/scripts/secret_base.pory"
	end
# 817 "data/scripts/secret_base.pory"

# 818 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer7PreChampion::
# 819 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer7PreChampion, MSGBOX_DEFAULT
# 820 "data/scripts/secret_base.pory"
	release
# 821 "data/scripts/secret_base.pory"
	end
# 822 "data/scripts/secret_base.pory"

# 823 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer7DeclineBattle::
# 824 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 825 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 826 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 827 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer7DeclineBattle, MSGBOX_DEFAULT
# 828 "data/scripts/secret_base.pory"
	release
# 829 "data/scripts/secret_base.pory"
	end
# 830 "data/scripts/secret_base.pory"

# 831 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer7PostBattle::
# 832 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer7PostBattle, MSGBOX_DEFAULT
# 833 "data/scripts/secret_base.pory"
	release
# 834 "data/scripts/secret_base.pory"
	end
# 835 "data/scripts/secret_base.pory"

# 836 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 837 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer8::
# 838 "data/scripts/secret_base.pory"
	lock
# 839 "data/scripts/secret_base.pory"
	faceplayer
# 840 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer8PreChampion
# 841 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer8PostBattle
# 842 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer8Intro, MSGBOX_YESNO
# 843 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer8DeclineBattle
# 844 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 845 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 846 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 847 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer8DeclineBattle
# 848 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer8AcceptBattle, MSGBOX_DEFAULT
# 849 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 850 "data/scripts/secret_base.pory"
	end
# 851 "data/scripts/secret_base.pory"

# 852 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer8PreChampion::
# 853 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer8PreChampion, MSGBOX_DEFAULT
# 854 "data/scripts/secret_base.pory"
	release
# 855 "data/scripts/secret_base.pory"
	end
# 856 "data/scripts/secret_base.pory"

# 857 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer8DeclineBattle::
# 858 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 859 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 860 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 861 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer8DeclineBattle, MSGBOX_DEFAULT
# 862 "data/scripts/secret_base.pory"
	release
# 863 "data/scripts/secret_base.pory"
	end
# 864 "data/scripts/secret_base.pory"

# 865 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer8PostBattle::
# 866 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer8PostBattle, MSGBOX_DEFAULT
# 867 "data/scripts/secret_base.pory"
	release
# 868 "data/scripts/secret_base.pory"
	end
# 869 "data/scripts/secret_base.pory"

# 870 "data/scripts/secret_base.pory"
@ VAR_RESULT is initially set by GetSecretBaseOwnerAndState
# 871 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer9::
# 872 "data/scripts/secret_base.pory"
	lock
# 873 "data/scripts/secret_base.pory"
	faceplayer
# 874 "data/scripts/secret_base.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_EventScript_Trainer9PreChampion
# 875 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 1, SecretBase_EventScript_Trainer9PostBattle
# 876 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer9Intro, MSGBOX_YESNO
# 877 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, NO, SecretBase_EventScript_Trainer9DeclineBattle
# 878 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 1
# 879 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 880 "data/scripts/secret_base.pory"
	call Common_EventScript_SaveGame
# 881 "data/scripts/secret_base.pory"
	goto_if_eq VAR_RESULT, 0, SecretBase_EventScript_Trainer9DeclineBattle
# 882 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer9AcceptBattle, MSGBOX_DEFAULT
# 883 "data/scripts/secret_base.pory"
	goto SecretBase_EventScript_BattleTrainer
# 884 "data/scripts/secret_base.pory"
	end
# 885 "data/scripts/secret_base.pory"

# 886 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer9PreChampion::
# 887 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer9PreChampion, MSGBOX_DEFAULT
# 888 "data/scripts/secret_base.pory"
	release
# 889 "data/scripts/secret_base.pory"
	end
# 890 "data/scripts/secret_base.pory"

# 891 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer9DeclineBattle::
# 892 "data/scripts/secret_base.pory"
	special DeclinedSecretBaseBattle
# 893 "data/scripts/secret_base.pory"
	setvar VAR_RESULT, 0
# 894 "data/scripts/secret_base.pory"
	special SetBattledOwnerFromResult
# 895 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer9DeclineBattle, MSGBOX_DEFAULT
# 896 "data/scripts/secret_base.pory"
	release
# 897 "data/scripts/secret_base.pory"
	end
# 898 "data/scripts/secret_base.pory"

# 899 "data/scripts/secret_base.pory"
SecretBase_EventScript_Trainer9PostBattle::
# 900 "data/scripts/secret_base.pory"
	msgbox SecretBase_Text_Trainer9PostBattle, MSGBOX_DEFAULT
# 901 "data/scripts/secret_base.pory"
	release
# 902 "data/scripts/secret_base.pory"
	end
# 903 "data/scripts/secret_base.pory"

# 904 "data/scripts/secret_base.pory"
SecretBase_EventScript_BattleTrainer::
# 905 "data/scripts/secret_base.pory"
	special PrepSecretBaseBattleFlags
# 906 "data/scripts/secret_base.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_SECRET_BASE
# 907 "data/scripts/secret_base.pory"
	setvar VAR_0x8005, 0
# 908 "data/scripts/secret_base.pory"
	special DoSpecialTrainerBattle
# 909 "data/scripts/secret_base.pory"
	waitstate
# 910 "data/scripts/secret_base.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_DREW, SecretBase_EventScript_DrewSecretBaseBattle
# 911 "data/scripts/secret_base.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SecretBase_EventScript_WonSecretBaseBattle
# 912 "data/scripts/secret_base.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, SecretBase_EventScript_LostSecretBaseBattle
# 913 "data/scripts/secret_base.pory"
	special HealPlayerParty
# 914 "data/scripts/secret_base.pory"
	release
# 915 "data/scripts/secret_base.pory"
	end
# 916 "data/scripts/secret_base.pory"

# 917 "data/scripts/secret_base.pory"
SecretBase_EventScript_DrewSecretBaseBattle::
# 918 "data/scripts/secret_base.pory"
	special DrewSecretBaseBattle
# 919 "data/scripts/secret_base.pory"
	return
# 920 "data/scripts/secret_base.pory"

# 921 "data/scripts/secret_base.pory"
SecretBase_EventScript_WonSecretBaseBattle::
# 922 "data/scripts/secret_base.pory"
	special WonSecretBaseBattle
# 923 "data/scripts/secret_base.pory"
	return
# 924 "data/scripts/secret_base.pory"

# 925 "data/scripts/secret_base.pory"
SecretBase_EventScript_LostSecretBaseBattle::
# 926 "data/scripts/secret_base.pory"
	special LostSecretBaseBattle
# 927 "data/scripts/secret_base.pory"
	return
# 928 "data/scripts/secret_base.pory"

# 929 "data/scripts/secret_base.pory"
	.include "data/scripts/secret_power_tm.inc"
# 930 "data/scripts/secret_base.pory"

# 931 "data/scripts/secret_base.pory"
SecretBase_EventScript_DollInteract::
# 932 "data/scripts/secret_base.pory"
	special CheckInteractedWithFriendsDollDecor
# 933 "data/scripts/secret_base.pory"
	end
# 934 "data/scripts/secret_base.pory"

# 935 "data/scripts/secret_base.pory"
SecretBase_EventScript_CushionInteract::
# 936 "data/scripts/secret_base.pory"
	special CheckInteractedWithFriendsCushionDecor
# 937 "data/scripts/secret_base.pory"
	end

SecretBase_Text_AllDecorationsWillBeReturned::
# 1 "data/scripts/secret_base.pory"
	.string "Todos tus muebles volverán al PC.\p"
	.string "¿Te parece bien?$"

SecretBase_Text_WantToRegisterSecretBase::
# 14 "data/scripts/secret_base.pory"
	.string "¿Registrar la Base Secreta de\n"
	.string "{STR_VAR_1}?$"

SecretBase_Text_AlreadyRegisteredDelete::
# 27 "data/scripts/secret_base.pory"
	.string "Ya registraste esta Base Secreta.\n"
	.string "¿Te gustaría borrarla?$"

SecretBase_Text_TooManyBasesDeleteSome::
# 40 "data/scripts/secret_base.pory"
	.string "Un total de 10 Bases se pueden\n"
	.string "registrar.\p"
	.string "Si necesitas registrar otra, borra una\n"
	.string "primero.$"

SecretBase_Text_RegistrationCompleted::
# 54 "data/scripts/secret_base.pory"
	.string "{PLAY_SE SE_PIN}¡Ya está! ¡Registro… completado!$"

SecretBase_Text_DataUnregistered::
# 65 "data/scripts/secret_base.pory"
	.string "Se han borrado los datos.$"

SecretBase_Text_BootUpPC::
# 76 "data/scripts/secret_base.pory"
	.string "{PLAYER} encendió la PC.$"

SecretBase_Text_WhatWouldYouLikeToDo::
# 87 "data/scripts/secret_base.pory"
	.string "¿Qué te gustaría hacer?$"

SecretBase_Text_RegistryInfo::
# 98 "data/scripts/secret_base.pory"
	.string "Una vez registrada, la Base Secreta no\n"
	.string "desaparecerá hasta que vuelvas a\l"
	.string "Mezclar Récords si el Dueño la movió a\l"
	.string "otro lugar.\p"
	.string "Si borras la Base del registro, podrás\n"
	.string "sustituirla con otra.\p"
	.string "Hasta 10 Bases Secretas podrán\n"
	.string "registrarse a la vez.$"

SecretBase_Text_BattleTowerShield::
# 119 "data/scripts/secret_base.pory"
	.string "Un escudo de {STR_VAR_2} que premia\n"
	.string "{STR_VAR_1} victorias seguidas en\l"
	.string "la Torre de Batalla.$"

SecretBase_Text_ToyTV::
# 131 "data/scripts/secret_base.pory"
	.string "Una CRT de juguete muy realista.\p"
	.string "La llamaste “Tenna”.$"

SecretBase_Text_SeedotTV::
# 144 "data/scripts/secret_base.pory"
	.string "Una Tele funcional en forma de Seedot.\n"
	.string "Parece lista para irse rodando…$"

SecretBase_Text_SkittyTV::
# 157 "data/scripts/secret_base.pory"
	.string "Una Tele funcional en forma de Skitty.\n"
	.string "Parece lista para irse corriendo…$"

SecretBase_Text_WouldYouLikeToMoveBases::
# 170 "data/scripts/secret_base.pory"
	.string "Ya tienes una Base Secreta.\p"
	.string "¿Te mudarás desde\n"
	.string "{STR_VAR_1}?$"

SecretBase_Text_MovingCompletedUseSecretPower::
# 184 "data/scripts/secret_base.pory"
	.string "¡Mudanza completada!\p"
	.string "¿Usarás {STR_VAR_2}?$"

SecretBase_Text_TreeCanBeClimbed::
# 197 "data/scripts/secret_base.pory"
	.string "Si cayeran las lianas, podrías trepar\n"
	.string "este árbol.$"

SecretBase_Text_TreeUseSecretPower::
# 209 "data/scripts/secret_base.pory"
	.string "Si cayeran las lianas, podrías trepar\n"
	.string "este árbol.\p"
	.string "¿Usarás {STR_VAR_2}?$"

SecretBase_Text_VineDroppedDown::
# 222 "data/scripts/secret_base.pory"
	.string "¡Una liana se soltó!$"

SecretBase_Text_ClumpOfGrass::
# 233 "data/scripts/secret_base.pory"
	.string "Si quitaras estas hojas, podrías\n"
	.string "entrar.$"

SecretBase_Text_ClumpUseSecretPower::
# 245 "data/scripts/secret_base.pory"
	.string "Si quitaras estas hojas, podrías\n"
	.string "entrar.\p"
	.string "¿Usarás {STR_VAR_2}?$"

SecretBase_Text_DiscoveredSmallEntrance::
# 259 "data/scripts/secret_base.pory"
	.string "¡Descubriste una pequeña entrada!$"
