MauvilleCity_MapScripts::
# 5 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 12 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_OLSTERN_CITY
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_TAMMY_ENCOUNTER_START, MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 10 "data/maps/MauvilleCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_MAUVILLE_CITY
	return

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_TAMMY_ENCOUNTER_START, MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 23 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_GYM_DEFEATED, MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/MauvilleCity/scripts.pory"
	lock
# 16 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 17 "data/maps/MauvilleCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_MAUVILLE_CITY
# 18 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_OLSTERN_TAMMY
# 19 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_TAMMY_ENCOUNTER_END
# 20 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 24 "data/maps/MauvilleCity/scripts.pory"
	lock
# 25 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 26 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 27 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 28 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 29 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 30 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 31 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 32 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 33 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 34 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 35 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 36 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 37 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 38 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 39 "data/maps/MauvilleCity/scripts.pory"
	delay 10
# 40 "data/maps/MauvilleCity/scripts.pory"
	playse SE_M_EXPLOSION
# 41 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 42 "data/maps/MauvilleCity/scripts.pory"
	exclam OBJ_EVENT_ID_PLAYER
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 45 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_UMN_CAVE_STATE, UMN_CAVE_STATE_CAVE_IN_CLEARED
# 46 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_EXPLOSION_HEARD
# 47 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/MauvilleCity/scripts.pory"
	release
	end


OlsternTriathlete::
# 435 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternTriathlete_Text_0, MSGBOX_NPC
	end


OlsternR4Roadblock::
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternR4Roadblock_Text_0, MSGBOX_NPC
	end


OlsternMan::
# 445 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_TAMMY_ENCOUNTER_END
	goto_if_lt OlsternMan_2
# 457 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternMan_Text_2, MSGBOX_NPC
OlsternMan_1:
	end

OlsternMan_2:
# 446 "data/maps/MauvilleCity/scripts.pory"
	goto_if_unset FLAG_TEMP_1, OlsternMan_5
# 453 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternMan_Text_1, MSGBOX_NPC
	goto OlsternMan_1

OlsternMan_5:
# 447 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TEMP_1
# 448 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternMan_Text_0, MSGBOX_NPC
	goto OlsternMan_1


OlsternBoatGuard::
# 463 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBoatGuard_Text_0, MSGBOX_NPC
# 464 "data/maps/MauvilleCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end


OlsternBeachDowsingMachine::
# 469 "data/maps/MauvilleCity/scripts.pory"
	lock
# 470 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
	checkitem ITEM_DOWSING_MACHINE
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OlsternBeachDowsingMachine_2
# 486 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachDowsingMachine_Text_4, MSGBOX_NPC
OlsternBeachDowsingMachine_1:
# 490 "data/maps/MauvilleCity/scripts.pory"
	release
	end

OlsternBeachDowsingMachine_2:
# 472 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachDowsingMachine_Text_0, MSGBOX_YESNO
# 473 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OlsternBeachDowsingMachine_5
# 483 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachDowsingMachine_Text_3, MSGBOX_NPC
	goto OlsternBeachDowsingMachine_1

OlsternBeachDowsingMachine_5:
# 474 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachDowsingMachine_Text_1
	giveitem ITEM_DOWSING_MACHINE
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OlsternBeachDowsingMachine_9
OlsternBeachDowsingMachine_8:
# 479 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachDowsingMachine_Text_2, MSGBOX_NPC
	goto OlsternBeachDowsingMachine_1

OlsternBeachDowsingMachine_9:
# 477 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OlsternBeachDowsingMachine_8


OlsternCitySign::
# 497 "data/maps/MauvilleCity/scripts.pory"
	call EventScript_BufferTime
# 498 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternCitySign_Text_0, MSGBOX_SIGN
	end


OlsternCityOldIronworksSign::
# 503 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternCityOldIronworksSign_Text_0, MSGBOX_SIGN
	return


OlsternCityGymSign::
# 508 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternCityGymSign_Text_0, MSGBOX_SIGN
	end


OlsternBeachSign::
# 514 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternBeachSign_Text_0, MSGBOX_SIGN
	end


OlsternTammyTrigger::
# 521 "data/maps/MauvilleCity/scripts.pory"
	lock
# 522 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_OLSTERN_CITY_STATE, OLSTERN_STATE_TAMMY_ENCOUNTER_START
# 523 "data/maps/MauvilleCity/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 37, 28
# 524 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 525 "data/maps/MauvilleCity/scripts.pory"
	release
	end


OlsternR4RoadblockTrigger::
# 530 "data/maps/MauvilleCity/scripts.pory"
	lock
# 531 "data/maps/MauvilleCity/scripts.pory"
	getplayery
# 0 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 532 "data/maps/MauvilleCity/scripts.pory"
	case 30, OlsternR4RoadblockTrigger_3
# 537 "data/maps/MauvilleCity/scripts.pory"
	case 32, OlsternR4RoadblockTrigger_4
# 538 "data/maps/MauvilleCity/scripts.pory"
	case 33, OlsternR4RoadblockTrigger_4
OlsternR4RoadblockTrigger_1:
	checkplayergender
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OlsternR4RoadblockTrigger_6
# 547 "data/maps/MauvilleCity/scripts.pory"
	bufferstring STR_VAR_1, OlsternR4RoadblockTrigger_Text_1
OlsternR4RoadblockTrigger_5:
# 549 "data/maps/MauvilleCity/scripts.pory"
	msgbox OlsternR4RoadblockTrigger_Text_2, MSGBOX_NPC
# 555 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OlsternR4RoadblockTrigger_Movement_2
# 556 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/MauvilleCity/scripts.pory"
	release
	end

OlsternR4RoadblockTrigger_3:
# 533 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_ROADBLOCK, OlsternR4RoadblockTrigger_Movement_0
# 534 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/MauvilleCity/scripts.pory"
	exclam LOCALID_OLSTERN_ROADBLOCK
# 536 "data/maps/MauvilleCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto OlsternR4RoadblockTrigger_1

OlsternR4RoadblockTrigger_4:
# 539 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_ROADBLOCK, OlsternR4RoadblockTrigger_Movement_1
# 540 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/MauvilleCity/scripts.pory"
	exclam LOCALID_OLSTERN_ROADBLOCK
# 542 "data/maps/MauvilleCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto OlsternR4RoadblockTrigger_1

OlsternR4RoadblockTrigger_6:
# 545 "data/maps/MauvilleCity/scripts.pory"
	bufferstring STR_VAR_1, OlsternR4RoadblockTrigger_Text_0
	goto OlsternR4RoadblockTrigger_5


OlsternFakeAideTrigger::
# 562 "data/maps/MauvilleCity/scripts.pory"
	lock
# 563 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_OLSTERN_AIDE
# 564 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_AIDE, OlsternFakeAideTrigger_Movement_0
# 565 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/MauvilleCity/scripts.pory"
	getplayery
# 0 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/MauvilleCity/scripts.pory"
	case 30, OlsternFakeAideTrigger_3
# 572 "data/maps/MauvilleCity/scripts.pory"
	case 31, OlsternFakeAideTrigger_4
# 576 "data/maps/MauvilleCity/scripts.pory"
	case 32, OlsternFakeAideTrigger_5
# 581 "data/maps/MauvilleCity/scripts.pory"
	case 33, OlsternFakeAideTrigger_6
OlsternFakeAideTrigger_1:
# 588 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/MauvilleCity/scripts.pory"
	fadenewbgm MUS_DUMMY
# 590 "data/maps/MauvilleCity/scripts.pory"
	message OlsternFakeAideTrigger_Text_0
# 591 "data/maps/MauvilleCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 592 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 593 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 594 "data/maps/MauvilleCity/scripts.pory"
	special DoSoftReset
# 600 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 601 "data/maps/MauvilleCity/scripts.pory"
	release
	end

OlsternFakeAideTrigger_3:
# 568 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_AIDE, OlsternFakeAideTrigger_Movement_1
# 570 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OlsternR4RoadblockTrigger_Movement_1
	goto OlsternFakeAideTrigger_1

OlsternFakeAideTrigger_4:
# 573 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_AIDE, OlsternFakeAideTrigger_Movement_2
# 574 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OlsternFakeAideTrigger_Movement_3
	goto OlsternFakeAideTrigger_1

OlsternFakeAideTrigger_5:
# 577 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_AIDE, OlsternFakeAideTrigger_Movement_4
# 579 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OlsternR4RoadblockTrigger_Movement_0
	goto OlsternFakeAideTrigger_1

OlsternFakeAideTrigger_6:
# 582 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_OLSTERN_AIDE, OlsternFakeAideTrigger_Movement_5
# 585 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OlsternR4RoadblockTrigger_Movement_0
	goto OlsternFakeAideTrigger_1


# 533 "data/maps/MauvilleCity/scripts.pory"
OlsternR4RoadblockTrigger_Movement_0:
# 533 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 539 "data/maps/MauvilleCity/scripts.pory"
OlsternR4RoadblockTrigger_Movement_1:
# 539 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_down
	step_end

# 555 "data/maps/MauvilleCity/scripts.pory"
OlsternR4RoadblockTrigger_Movement_2:
# 555 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

# 564 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_0:
# 564 "data/maps/MauvilleCity/scripts.pory"
	walk_Left
# 564 "data/maps/MauvilleCity/scripts.pory"
	walk_Left
# 564 "data/maps/MauvilleCity/scripts.pory"
	walk_Left
# 564 "data/maps/MauvilleCity/scripts.pory"
	walk_Left
	step_end

# 568 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_1:
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 569 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 573 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_2:
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 575 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_3:
# 575 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_right
	step_end

# 577 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_4:
# 577 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 577 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 577 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 577 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 578 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_down
	step_end

# 582 "data/maps/MauvilleCity/scripts.pory"
OlsternFakeAideTrigger_Movement_5:
# 582 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 583 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 583 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 583 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 583 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 584 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_down
	step_end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 43 "data/maps/MauvilleCity/scripts.pory"
	.string "It sounded like that loud explosion\n"
	.string "came from inside the ??? Cave!$"

OlsternTriathlete_Text_0:
# 435 "data/maps/MauvilleCity/scripts.pory"
	.string "I can run around this perimeter forever\n"
	.string "because the sea breeze here is so\l"
	.string "refreshing!$"

OlsternR4Roadblock_Text_0:
# 439 "data/maps/MauvilleCity/scripts.pory"
	.string "Reno Boardwalk is currently undergoing\n"
	.string "construction, so we can't allow anyone\l"
	.string "through the route.\p"
	.string "The good news is we're wrapping up\n"
	.string "construction now, so it won't take long\l"
	.string "for the route to reopen.$"

OlsternMan_Text_0:
# 448 "data/maps/MauvilleCity/scripts.pory"
	.string "Huh? I never saw you walk into the\n"
	.string "Abandoned Factory…\p"
	.string "Were you with those two weird-lookin'\n"
	.string "dudes that just ran outta there?\p"
	.string "Anyway, If you're heading into the city,\n"
	.string "some crazy lady is giving a speech or\l"
	.string "something up ahead.\p"
	.string "I can't really tell what about, but not a\n"
	.string "lot of people seem to be interested in\l"
	.string "what she's gotta say.$"

OlsternMan_Text_1:
# 453 "data/maps/MauvilleCity/scripts.pory"
	.string "If you're heading into the city, some\n"
	.string "crazy lady is giving a speech or\l"
	.string "something up ahead.\p"
	.string "I can't really tell what about, but not a\n"
	.string "lot of people seem to be interested in\l"
	.string "what she's gotta say.$"

OlsternMan_Text_2:
# 457 "data/maps/MauvilleCity/scripts.pory"
	.string "Up ahead is the now abandoned Fuego\n"
	.string "Ironworks branch.$"

OlsternBoatGuard_Text_0:
# 463 "data/maps/MauvilleCity/scripts.pory"
	.string "Get lost, matey.\nThis 'ere vessel's for the adults!$"

OlsternBeachDowsingMachine_Text_0:
# 472 "data/maps/MauvilleCity/scripts.pory"
	.string "Psssst!\nDo you know what I'm doing?$"

OlsternBeachDowsingMachine_Text_1:
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm using my Dowsing Machine to look for\n"
	.string "hidden items along the beach.\p"
	.string "I'm not having any luck, though. Maybe\n"
	.string "you will?$"

OlsternBeachDowsingMachine_Text_2:
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "If you wear those, you'll be able to\n"
	.string "detect hidden items on the ground.\p"
	.string "When you're directly facing an item,\n"
	.string "they'll light up red.\p"
	.string "You can't run or sneak while using them,\n"
	.string "though.$"

OlsternBeachDowsingMachine_Text_3:
# 483 "data/maps/MauvilleCity/scripts.pory"
	.string "That's right!\nIt's hard work!$"

OlsternBeachDowsingMachine_Text_4:
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "Slip the Dowsing Machine on, and you'll\n"
	.string "be able to detect hidden items on the\l"
	.string "ground.\p"
	.string "When you're directly facing an item,\n"
	.string "it'll light up red.\p"
	.string "You can't run or sneak while using the\n"
	.string "Dowsing Machine, though.$"

OlsternCitySign_Text_0:
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "Olstern City, {STR_VAR_1}:{STR_VAR_2}{STR_VAR_3}$"

OlsternCityOldIronworksSign_Text_0:
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "Fuego Ironworks - ??? Branch\n"
	.string "-- NO LONGER IN OPERATION --$"

OlsternCityGymSign_Text_0:
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "Olstern City Pokémon Gym\nLeader: Redbeard\l"
	.string "The ????????????!$"

OlsternBeachSign_Text_0:
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "Olstern Beach$"

OlsternR4RoadblockTrigger_Text_0:
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "sir$"

OlsternR4RoadblockTrigger_Text_1:
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "miss$"

OlsternR4RoadblockTrigger_Text_2:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "Excuse me, {STR_VAR_1}! Reno Boardwalk is\n"
	.string "currently undergoing construction, so\l"
	.string "we can't allow anyone through the\lroute.\p"
	.string "The good news is we're wrapping up on\n"
	.string "construction now, so it won't take long\l"
	.string "for the route to reopen.$"

OlsternFakeAideTrigger_Text_0:
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "T{PAUSE 8}O{PAUSE 8} {PAUSE 8}B{PAUSE 8}E{PAUSE 8} {PAUSE 8}C{PAUSE 8}O{PAUSE 8}N{PAUSE 8}T{PAUSE 8}I{PAUSE 8}N{PAUSE 8}U{PAUSE 8}E{PAUSE 8}D{PAUSE 360}$"

OrionDefeat2::
# 428 "data/maps/MauvilleCity/scripts.pory"
	.string "Aw, man.\nYou're pretty tough, {PLAYER}!$"
