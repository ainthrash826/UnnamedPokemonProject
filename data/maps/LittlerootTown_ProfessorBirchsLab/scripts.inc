LittlerootTown_ProfessorBirchsLab_MapScripts::
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_COMPLETED_CATCH_TUTORIAL
	goto_if_lt LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_2
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_8
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmetatile 11, 1, 0x20B, TRUE
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_1

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( FROAKIE )
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( FUECOCO )
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( SNIVY )
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_COMPLETED_CATCH_TUTORIAL
	goto_if_lt LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_RECEIVED_DEX
	goto_if_eq LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_WATSONS_LAB_AIDE_2, 3, 5
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_WATSONS_LAB_HARLEY, 14, 6
	goto LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_ANIMORA_CITY_STATE, 0, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_RECEIVED_DEX, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	.2byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_RG_OAK, TRUE
	end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_ANIMORA_CITY_STATE, 0, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_RECEIVED_DEX, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_WATSONS_LAB_HARLEY, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_WATSONS_LAB_WATSON, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	equestion LOCALID_WATSONS_LAB_WATSON
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_WATSONS_LAB_HARLEY, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_RECEIVED_DEX
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_1_CATCH_TUTORIAL
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ROUTE1_STATE, R1_STATE_CATCH_TUTORIAL
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	warp MAP_ROUTE101, 13, 9
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitstate
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmetatile 11, 1, 0x24C, TRUE
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special DrawWholeMapView
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_WATSONS_LAB_HARLEY, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_WATSONS_LAB_HARLEY
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_ADVENTURE_BEGIN
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


WatsonsLab_AdventureBooklet::
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message WatsonsLab_AdventureBooklet_Text_0
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	multichoice 12, 6, MULTI_UNUSED_9, FALSE
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, WatsonsLab_AdventureBooklet_3
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, WatsonsLab_AdventureBooklet_4
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, WatsonsLab_AdventureBooklet_5
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case MULTI_B_PRESSED, WatsonsLab_AdventureBooklet_5
WatsonsLab_AdventureBooklet_5:
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

WatsonsLab_AdventureBooklet_1:
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto WatsonsLab_AdventureBooklet
	return

WatsonsLab_AdventureBooklet_3:
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox WatsonsLab_AdventureBooklet_Text_1, MSGBOX_SIGN
	goto WatsonsLab_AdventureBooklet_1

WatsonsLab_AdventureBooklet_4:
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox WatsonsLab_AdventureBooklet_Text_2, MSGBOX_SIGN
	goto WatsonsLab_AdventureBooklet_1


WatsonsLab_Starter::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, WatsonsLab_Starter_3
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, WatsonsLab_Starter_4
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, WatsonsLab_Starter_5
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_RATTATA
WatsonsLab_Starter_1:
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto StaticMonNpc
	return

WatsonsLab_Starter_3:
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_FROAKIE
	goto WatsonsLab_Starter_1

WatsonsLab_Starter_4:
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_FUECOCO
	goto WatsonsLab_Starter_1

WatsonsLab_Starter_5:
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_SNIVY
	goto WatsonsLab_Starter_1


WatsonsLab_CaughtMon::
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_WATSON_CAUGHT_MON
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_FLETCHLING, WatsonsLab_CaughtMon_3
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_SENTRET, WatsonsLab_CaughtMon_4
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_ROOKIDEE, WatsonsLab_CaughtMon_5
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_ZIGZAGOON_GALAR, WatsonsLab_CaughtMon_6
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_ZIGZAGOON, WatsonsLab_CaughtMon_6
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_PIDOVE, WatsonsLab_CaughtMon_7
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_SHROODLE, WatsonsLab_CaughtMon_8
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_SKWOVET, WatsonsLab_CaughtMon_9
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_PURRLOIN, WatsonsLab_CaughtMon_10
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case SPECIES_MUNCHLAX, WatsonsLab_CaughtMon_11
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_RATTATA
WatsonsLab_CaughtMon_1:
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto StaticMonNpc
	return

WatsonsLab_CaughtMon_3:
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_FLETCHLING
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_4:
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_SENTRET
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_5:
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_ROOKIDEE
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_6:
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_ZIGZAGOON
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_7:
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_PIDOVE
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_8:
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_SHROODLE
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_9:
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_SKWOVET
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_10:
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_PURRLOIN
	goto WatsonsLab_CaughtMon_1

WatsonsLab_CaughtMon_11:
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_MUNCHLAX
	goto WatsonsLab_CaughtMon_1


# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_down
	step_end

# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_up
	step_end

# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
	step_end

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{COLOR BLUE}Prof. Watson{COLOR DARK_GRAY}: Ah, {PLAYER}! You\n"
	.string "finally made it!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hmm? Who's this you've got with you?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{COLOR RED}Harley{COLOR DARK_GRAY}: The name's Harley. Nice to meet\n"
	.string "you, Professor.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now I gotta teach you two how to catch\n"
	.string "a Pokémon!\p"
	.string "Follow me outside to Woodridge Path.$"

WatsonsLab_AdventureBooklet_Text_0:
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What do you want to read about?$"

WatsonsLab_AdventureBooklet_Text_1:
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "catching a {PKMN}\p"
	.string "PLACEHOLDER$"

WatsonsLab_AdventureBooklet_Text_2:
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The DexNav can only be used in areas\n"
	.string "with wild Pokémon encounters.\p"
	.string "PLACEHOLDER$"
