Debug_CheatStart::
# 2 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 3 "data/scripts/debug.pory"
	givemon SPECIES_SNIVY, 20
# 4 "data/scripts/debug.pory"
	givemon SPECIES_FUECOCO, 20
# 5 "data/scripts/debug.pory"
	givemon SPECIES_FROAKIE, 20
# 6 "data/scripts/debug.pory"
	setvar VAR_VAST_WOODS_STATE, VWT_STATE_POST_BATTLE
# 7 "data/scripts/debug.pory"
	settrainerflag TRAINER_MAXIE_MOSSDEEP
# 8 "data/scripts/debug.pory"
	settrainerflag TRAINER_TABITHA_MOSSDEEP
# 9 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_103_TREECKO
# 10 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_103_TORCHIC
# 11 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_103_MUDKIP
# 12 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_110_TREECKO
# 13 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 14 "data/scripts/debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_110_MUDKIP
# 15 "data/scripts/debug.pory"
	setvar VAR_WOODRIDGE_TOWN_STATE, WOODRIDGE_STATE_ADVENTURE_BEGIN
# 16 "data/scripts/debug.pory"
	setvar VAR_ROUTE1_STATE, R1_STATE_COMPLETED_CATCH_TUT
# 17 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_1_CATCH_TUTORIAL
# 18 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 19 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 20 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 21 "data/scripts/debug.pory"
	setvar VAR_ANIMORA_CITY_STATE, ANIMORA_STATE_RECEIVED_DEX
# 23 "data/scripts/debug.pory"
	setflag FLAG_HIDE_OLSTERN_CITY_ROADBLOCK
# 24 "data/scripts/debug.pory"
	setvar VAR_OLSTERN_R4_ROADBLOCK_CLEARED, TRUE
# 26 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 27 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 28 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 29 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 30 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 31 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 32 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 33 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
	end


Debug_EventScript_Script_1::
# 38 "data/scripts/debug.pory"
	lockall
# 39 "data/scripts/debug.pory"
	special FieldShowRegionMap
# 40 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_2::
# 45 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_3::
# 50 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_4::
# 55 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_5::
# 60 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_6::
# 65 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_7::
# 70 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_8::
# 75 "data/scripts/debug.pory"
	release
	end


# 79 "data/scripts/debug.pory"

# 80 "data/scripts/debug.pory"
	Debug_MessageEnd:
# 81 "data/scripts/debug.pory"
		waitmessage
# 82 "data/scripts/debug.pory"
		waitbuttonpress
# 83 "data/scripts/debug.pory"
		releaseall
# 84 "data/scripts/debug.pory"
		end
# 85 "data/scripts/debug.pory"

# 86 "data/scripts/debug.pory"
	Debug_ShowFieldMessageStringVar4::
# 87 "data/scripts/debug.pory"
		special ShowFieldMessageStringVar4
# 88 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 89 "data/scripts/debug.pory"

# 90 "data/scripts/debug.pory"
	@Debug_CheatStart::
# 91 "data/scripts/debug.pory"
	@	setflag FLAG_SYS_POKEMON_GET
# 92 "data/scripts/debug.pory"
	@	setflag FLAG_RESCUED_BIRCH
# 93 "data/scripts/debug.pory"
	@	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 94 "data/scripts/debug.pory"
	@	setflag FLAG_ADVENTURE_STARTED
# 95 "data/scripts/debug.pory"
	@	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 96 "data/scripts/debug.pory"
	@	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 97 "data/scripts/debug.pory"
	@	setvar VAR_BIRCH_LAB_STATE, 2
# 98 "data/scripts/debug.pory"
	@	setvar VAR_ROUTE101_STATE, 3
# 99 "data/scripts/debug.pory"
	@	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 100 "data/scripts/debug.pory"
	@	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 101 "data/scripts/debug.pory"
	@	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 102 "data/scripts/debug.pory"
	@	givemon SPECIES_WAILMER, 20, ITEM_NONE, move1 = MOVE_SURF, move2 = MOVE_WATERFALL, move3 = MOVE_DIVE, move4 = MOVE_STRENGTH
# 103 "data/scripts/debug.pory"
	@	givemon SPECIES_TROPIUS, 20, ITEM_NONE, move1 = MOVE_FLY, move2 = MOVE_CUT, move3 = MOVE_ROCK_SMASH, move4 = MOVE_FLASH
# 104 "data/scripts/debug.pory"
	@	setflag FLAG_SYS_POKEDEX_GET
# 105 "data/scripts/debug.pory"
	@	special SetUnlockedPokedexFlags
# 106 "data/scripts/debug.pory"
	@	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 107 "data/scripts/debug.pory"
	@	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 108 "data/scripts/debug.pory"
	@	setflag FLAG_SYS_NATIONAL_DEX
# 109 "data/scripts/debug.pory"
	@	special EnableNationalPokedex
# 110 "data/scripts/debug.pory"
	@	setflag FLAG_RECEIVED_RUNNING_SHOES
# 111 "data/scripts/debug.pory"
	@	setflag FLAG_SYS_B_DASH
# 112 "data/scripts/debug.pory"
	@	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
# 113 "data/scripts/debug.pory"
	@	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 114 "data/scripts/debug.pory"
	@	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 115 "data/scripts/debug.pory"
	@	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 116 "data/scripts/debug.pory"
	@	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 117 "data/scripts/debug.pory"
	@	setflag FLAG_RECEIVED_BIKE
# 118 "data/scripts/debug.pory"
	@	additem ITEM_ACRO_BIKE
# 119 "data/scripts/debug.pory"
	@	setvar VAR_BRINEY_HOUSE_STATE, 1
# 120 "data/scripts/debug.pory"
	@	setvar VAR_ROUTE116_STATE, 2
# 121 "data/scripts/debug.pory"
	@	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 122 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE01_GET
# 123 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE02_GET
# 124 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE03_GET
# 125 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE04_GET
# 126 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE05_GET
# 127 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE06_GET
# 128 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE07_GET
# 129 "data/scripts/debug.pory"
	@	setflag FLAG_BADGE08_GET
# 130 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 131 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_OLDALE_TOWN
# 132 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_DEWFORD_TOWN
# 133 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 134 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_FALLARBOR_TOWN
# 135 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_VERDANTURF_TOWN
# 136 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 137 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_PETALBURG_CITY
# 138 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_SLATEPORT_CITY
# 139 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_MAUVILLE_CITY
# 140 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_RUSTBORO_CITY
# 141 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_FORTREE_CITY
# 142 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_LILYCOVE_CITY
# 143 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_MOSSDEEP_CITY
# 144 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 145 "data/scripts/debug.pory"
	@	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 146 "data/scripts/debug.pory"
	@	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 147 "data/scripts/debug.pory"
	@	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 148 "data/scripts/debug.pory"
	@	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 149 "data/scripts/debug.pory"
	@	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 150 "data/scripts/debug.pory"
	@	release
# 151 "data/scripts/debug.pory"
	@	end
# 152 "data/scripts/debug.pory"

# 153 "data/scripts/debug.pory"
	Debug_CheatStartFrlg::
# 154 "data/scripts/debug.pory"
		setflag FLAG_SYS_POKEMON_GET
# 155 "data/scripts/debug.pory"
		setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 156 "data/scripts/debug.pory"
		setflag FLAG_OPENED_START_MENU
# 157 "data/scripts/debug.pory"
		setflag FLAG_VISITED_OAKS_LAB
# 158 "data/scripts/debug.pory"
		setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 159 "data/scripts/debug.pory"
		givemon SPECIES_BULBASAUR, 20, ITEM_NONE
# 160 "data/scripts/debug.pory"
		givemon SPECIES_CHARMANDER, 20, ITEM_NONE
# 161 "data/scripts/debug.pory"
		givemon SPECIES_SQUIRTLE, 20, ITEM_NONE
# 162 "data/scripts/debug.pory"
		givemon SPECIES_PSYDUCK, 20, ITEM_NONE, move1 = MOVE_SURF, move2 = MOVE_WATERFALL, move3 = MOVE_STRENGTH, move4 = MOVE_ROCK_SMASH
# 163 "data/scripts/debug.pory"
		givemon SPECIES_FARFETCHD, 20, ITEM_NONE, move1 = MOVE_FLY, move2 = MOVE_CUT, move3 = MOVE_FLASH, move4 = MOVE_FURY_ATTACK
# 164 "data/scripts/debug.pory"
		clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 165 "data/scripts/debug.pory"
		setflag FLAG_HIDE_RIVAL_IN_LAB
# 166 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1 @ prevents Oak scene when trying to enter Route 1
# 167 "data/scripts/debug.pory"
		setflag FLAG_SYS_POKEDEX_GET
# 168 "data/scripts/debug.pory"
		special SetUnlockedPokedexFlags
# 169 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ state after handing in parcel and getting pokedex
# 170 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 171 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 172 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 173 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_ROUTE22, 1
# 174 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1 @ end
# 175 "data/scripts/debug.pory"
		setflag FLAG_SYS_NATIONAL_DEX
# 176 "data/scripts/debug.pory"
		special EnableNationalPokedex
# 177 "data/scripts/debug.pory"
		setflag FLAG_SYS_B_DASH
# 178 "data/scripts/debug.pory"
		setflag FLAG_BADGE01_GET
# 179 "data/scripts/debug.pory"
		setflag FLAG_BADGE02_GET
# 180 "data/scripts/debug.pory"
		setflag FLAG_BADGE03_GET
# 181 "data/scripts/debug.pory"
		setflag FLAG_BADGE04_GET
# 182 "data/scripts/debug.pory"
		setflag FLAG_BADGE05_GET
# 183 "data/scripts/debug.pory"
		setflag FLAG_BADGE06_GET
# 184 "data/scripts/debug.pory"
		setflag FLAG_BADGE07_GET
# 185 "data/scripts/debug.pory"
		setflag FLAG_BADGE08_GET
# 186 "data/scripts/debug.pory"
		setflag FLAG_GOT_BIKE_VOUCHER
# 187 "data/scripts/debug.pory"
		setflag FLAG_GOT_BICYCLE
# 188 "data/scripts/debug.pory"
		additem ITEM_BICYCLE
# 189 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_PALLET_TOWN
# 190 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 191 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_PEWTER_CITY
# 192 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 193 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CERULEAN_CITY
# 194 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_VERMILION_CITY
# 195 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 196 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 197 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CELADON_CITY
# 198 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 199 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SAFFRON_CITY
# 200 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 201 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 202 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ONE_ISLAND
# 203 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_TWO_ISLAND
# 204 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_THREE_ISLAND
# 205 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FOUR_ISLAND
# 206 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FIVE_ISLAND
# 207 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SIX_ISLAND
# 208 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 209 "data/scripts/debug.pory"
		release
# 210 "data/scripts/debug.pory"
		end
# 211 "data/scripts/debug.pory"

# 212 "data/scripts/debug.pory"
	Debug_FlagsNotSetOverworldConfigMessage::
# 213 "data/scripts/debug.pory"
		message Debug_FlagsNotSetOverworldConfigMessage_Text
# 214 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 215 "data/scripts/debug.pory"

# 216 "data/scripts/debug.pory"
	Debug_FlagsNotSetOverworldConfigMessage_Text:
# 217 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 218 "data/scripts/debug.pory"
		.string "Please define a usable flag in:\l"
# 219 "data/scripts/debug.pory"
		.string "'include/config/overworld.h'!$"
# 220 "data/scripts/debug.pory"

# 221 "data/scripts/debug.pory"
	Debug_FlagsNotSetBattleConfigMessage::
# 222 "data/scripts/debug.pory"
		message Debug_FlagsNotSetBattleConfigMessage_Text
# 223 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 224 "data/scripts/debug.pory"

# 225 "data/scripts/debug.pory"
	Debug_FlagsNotSetBattleConfigMessage_Text:
# 226 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 227 "data/scripts/debug.pory"
		.string "Please define a usable flag in:\l"
# 228 "data/scripts/debug.pory"
		.string "'include/config/battle.h'!$"
# 229 "data/scripts/debug.pory"

# 230 "data/scripts/debug.pory"
	Debug_VarsNotSetBattleConfigMessage::
# 231 "data/scripts/debug.pory"
		message Debug_VarsNotSetBattleConfigMessage_Text
# 232 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 233 "data/scripts/debug.pory"

# 234 "data/scripts/debug.pory"
	Debug_VarsNotSetBattleConfigMessage_Text:
# 235 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 236 "data/scripts/debug.pory"
		.string "Please define a usable var in:\l"
# 237 "data/scripts/debug.pory"
		.string "'include/config/battle.h'!$"
# 238 "data/scripts/debug.pory"

# 239 "data/scripts/debug.pory"
	Debug_BoxFilledMessage::
# 240 "data/scripts/debug.pory"
		message Debug_BoxFilledMessage_Text
# 241 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 242 "data/scripts/debug.pory"

# 243 "data/scripts/debug.pory"
	Debug_BoxFilledMessage_Text:
# 244 "data/scripts/debug.pory"
		.string "Storage boxes filled!$"
# 245 "data/scripts/debug.pory"

# 246 "data/scripts/debug.pory"
	Debug_EventScript_CheckEVs::
# 247 "data/scripts/debug.pory"
		lockall
# 248 "data/scripts/debug.pory"
		getpartysize
# 249 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 250 "data/scripts/debug.pory"
		special ChoosePartyMon
# 251 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 252 "data/scripts/debug.pory"
		callnative Script_GetChosenMonOffensiveEVs
# 253 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 254 "data/scripts/debug.pory"
		callnative Script_GetChosenMonDefensiveEVs
# 255 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 256 "data/scripts/debug.pory"
	Debug_EventScript_CheckEVs_End::
# 257 "data/scripts/debug.pory"
		releaseall
# 258 "data/scripts/debug.pory"
		end
# 259 "data/scripts/debug.pory"

# 260 "data/scripts/debug.pory"
	Debug_EventScript_Text_OffensiveEVs:
# 261 "data/scripts/debug.pory"
		.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 262 "data/scripts/debug.pory"

# 263 "data/scripts/debug.pory"
	Debug_EventScript_Text_DefensiveEVs:
# 264 "data/scripts/debug.pory"
		.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 265 "data/scripts/debug.pory"

# 266 "data/scripts/debug.pory"
	Debug_EventScript_CheckIVs::
# 267 "data/scripts/debug.pory"
		lockall
# 268 "data/scripts/debug.pory"
		getpartysize
# 269 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 270 "data/scripts/debug.pory"
		special ChoosePartyMon
# 271 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 272 "data/scripts/debug.pory"
		callnative Script_GetChosenMonOffensiveIVs
# 273 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 274 "data/scripts/debug.pory"
		callnative Script_GetChosenMonDefensiveIVs
# 275 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 276 "data/scripts/debug.pory"
	Debug_EventScript_CheckIVs_End::
# 277 "data/scripts/debug.pory"
		releaseall
# 278 "data/scripts/debug.pory"
		end
# 279 "data/scripts/debug.pory"

# 280 "data/scripts/debug.pory"
	Debug_EventScript_Text_OffensiveIVs:
# 281 "data/scripts/debug.pory"
		.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 282 "data/scripts/debug.pory"

# 283 "data/scripts/debug.pory"
	Debug_EventScript_Text_DefensiveIVs:
# 284 "data/scripts/debug.pory"
		.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 285 "data/scripts/debug.pory"

# 286 "data/scripts/debug.pory"
	Debug_CheckSaveBlock::
# 287 "data/scripts/debug.pory"
		callnative CheckSaveBlock1Size
# 288 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 289 "data/scripts/debug.pory"
		callnative CheckSaveBlock2Size
# 290 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 291 "data/scripts/debug.pory"
		callnative CheckSaveBlock3Size
# 292 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 293 "data/scripts/debug.pory"
		callnative CheckPokemonStorageSize
# 294 "data/scripts/debug.pory"
		msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 295 "data/scripts/debug.pory"
		release
# 296 "data/scripts/debug.pory"
		end
# 297 "data/scripts/debug.pory"

# 298 "data/scripts/debug.pory"
	Debug_SaveBlock1Size::
# 299 "data/scripts/debug.pory"
		.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 300 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 301 "data/scripts/debug.pory"

# 302 "data/scripts/debug.pory"
	Debug_SaveBlock2Size::
# 303 "data/scripts/debug.pory"
		.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 304 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 305 "data/scripts/debug.pory"

# 306 "data/scripts/debug.pory"
	Debug_SaveBlock3Size::
# 307 "data/scripts/debug.pory"
		.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 308 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 309 "data/scripts/debug.pory"

# 310 "data/scripts/debug.pory"
	Debug_PokemonStorageSize::
# 311 "data/scripts/debug.pory"
		.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 312 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 313 "data/scripts/debug.pory"

# 314 "data/scripts/debug.pory"
	Debug_CheckROMSpace::
# 315 "data/scripts/debug.pory"
		callnative CheckROMSize
# 316 "data/scripts/debug.pory"
		msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 317 "data/scripts/debug.pory"
		release
# 318 "data/scripts/debug.pory"
		end
# 319 "data/scripts/debug.pory"

# 320 "data/scripts/debug.pory"
	Debug_ROMSize::
# 321 "data/scripts/debug.pory"
		.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 322 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_2}MB.$"
# 323 "data/scripts/debug.pory"

# 324 "data/scripts/debug.pory"
	Debug_HatchAnEgg::
# 325 "data/scripts/debug.pory"
		lockall
# 326 "data/scripts/debug.pory"
		getpartysize
# 327 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 328 "data/scripts/debug.pory"
		special ChoosePartyMon
# 329 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 330 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 331 "data/scripts/debug.pory"
		goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 332 "data/scripts/debug.pory"
		special EggHatch
# 333 "data/scripts/debug.pory"
	Debug_HatchAnEgg_End::
# 334 "data/scripts/debug.pory"
		releaseall
# 335 "data/scripts/debug.pory"
		end
# 336 "data/scripts/debug.pory"

# 337 "data/scripts/debug.pory"
	Debug_NoPokemon::
# 338 "data/scripts/debug.pory"
		msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 339 "data/scripts/debug.pory"
		releaseall
# 340 "data/scripts/debug.pory"
		end
# 341 "data/scripts/debug.pory"

# 342 "data/scripts/debug.pory"
	DebugScript_HatchAnEgg_CantForceHatch::
# 343 "data/scripts/debug.pory"
		msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 344 "data/scripts/debug.pory"
		releaseall
# 345 "data/scripts/debug.pory"
		end
# 346 "data/scripts/debug.pory"

# 347 "data/scripts/debug.pory"
	DebugScript_Text_EmptyParty::
# 348 "data/scripts/debug.pory"
		.string "You have no Pokémon nor Eggs.$"
# 349 "data/scripts/debug.pory"

# 350 "data/scripts/debug.pory"
	DebugScript_HatchAnEgg_Text_NotAnEgg::
# 351 "data/scripts/debug.pory"
		.string "That's not a Pokémon Egg.$"
# 352 "data/scripts/debug.pory"

# 353 "data/scripts/debug.pory"
	DebugScript_ZeroDaycareMons::
# 354 "data/scripts/debug.pory"
		msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 355 "data/scripts/debug.pory"
		releaseall
# 356 "data/scripts/debug.pory"
		end
# 357 "data/scripts/debug.pory"

# 358 "data/scripts/debug.pory"
	DebugScript_OneDaycareMons::
# 359 "data/scripts/debug.pory"
		msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 360 "data/scripts/debug.pory"
		releaseall
# 361 "data/scripts/debug.pory"
		end
# 362 "data/scripts/debug.pory"

# 363 "data/scripts/debug.pory"
	DebugScript_DaycareMonsNotCompatible::
# 364 "data/scripts/debug.pory"
		msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 365 "data/scripts/debug.pory"
		releaseall
# 366 "data/scripts/debug.pory"
		end
# 367 "data/scripts/debug.pory"

# 368 "data/scripts/debug.pory"
	DebugText_DaycareNoPokemon:
# 369 "data/scripts/debug.pory"
		.string "You have no Pokémon at Daycare.$"
# 370 "data/scripts/debug.pory"

# 371 "data/scripts/debug.pory"
	DebugText_DaycareOnePokemon:
# 372 "data/scripts/debug.pory"
		.string "You have only one Pokémon at Daycare.$"
# 373 "data/scripts/debug.pory"

# 374 "data/scripts/debug.pory"
	DebugText_DaycarePokemonNotCompatible:
# 375 "data/scripts/debug.pory"
		.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 376 "data/scripts/debug.pory"

# 377 "data/scripts/debug.pory"
	Debug_ShowExpansionVersion::
# 378 "data/scripts/debug.pory"
		callnative BufferExpansionVersion
# 379 "data/scripts/debug.pory"
		msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 380 "data/scripts/debug.pory"
		release
# 381 "data/scripts/debug.pory"
		end
# 382 "data/scripts/debug.pory"

# 383 "data/scripts/debug.pory"
	Debug_ExpansionVersion:
# 384 "data/scripts/debug.pory"
		.string "pokeemerald-expansion {STR_VAR_1}$"
# 385 "data/scripts/debug.pory"

# 386 "data/scripts/debug.pory"
	Debug_Follower_NPC_Not_Enabled::
# 387 "data/scripts/debug.pory"
		msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 388 "data/scripts/debug.pory"
		release
# 389 "data/scripts/debug.pory"
		end
# 390 "data/scripts/debug.pory"

# 391 "data/scripts/debug.pory"
	Debug_Enable_To_Use_Follower_NPCs:
# 392 "data/scripts/debug.pory"
		.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 393 "data/scripts/debug.pory"

# 394 "data/scripts/debug.pory"
	Debug_Follower_NPC_Event_Script::
# 395 "data/scripts/debug.pory"
		lock
# 396 "data/scripts/debug.pory"
		facefollowernpc
# 397 "data/scripts/debug.pory"
		msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 398 "data/scripts/debug.pory"
		releaseall
# 399 "data/scripts/debug.pory"
		end
# 400 "data/scripts/debug.pory"

# 401 "data/scripts/debug.pory"
	Debug_Follower_NPC_Test_Message:
# 402 "data/scripts/debug.pory"
		.string "This is a Follower NPC test.$"
# 403 "data/scripts/debug.pory"

# 404 "data/scripts/debug.pory"
	Debug_EventScript_Steven_Multi::
# 405 "data/scripts/debug.pory"
		call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 406 "data/scripts/debug.pory"
		release
# 407 "data/scripts/debug.pory"
		end
# 408 "data/scripts/debug.pory"

# 409 "data/scripts/debug.pory"
	Debug_EventScript_WallyTutorial::
# 410 "data/scripts/debug.pory"
		special SavePlayerParty
# 411 "data/scripts/debug.pory"
		special LoadWallyZigzagoon
# 412 "data/scripts/debug.pory"
		special StartWallyTutorialBattle
# 413 "data/scripts/debug.pory"
		special LoadPlayerParty
# 414 "data/scripts/debug.pory"
		release
# 415 "data/scripts/debug.pory"
		end
# 416 "data/scripts/debug.pory"

# 417 "data/scripts/debug.pory"
	Debug_BerryPestsDisabled::
# 418 "data/scripts/debug.pory"
		msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 419 "data/scripts/debug.pory"
		release
# 420 "data/scripts/debug.pory"
		end
# 421 "data/scripts/debug.pory"

# 422 "data/scripts/debug.pory"
	DebugText_BerryPestsDisabled:
# 423 "data/scripts/debug.pory"
		.string "OW_BERRY_PESTS is disabled.\n"
# 424 "data/scripts/debug.pory"
		.string "Unable to force pests onto berry trees.$"
# 425 "data/scripts/debug.pory"

# 426 "data/scripts/debug.pory"
	Debug_BerryWeedsDisabled::
# 427 "data/scripts/debug.pory"
		msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 428 "data/scripts/debug.pory"
		release
# 429 "data/scripts/debug.pory"
		end
# 430 "data/scripts/debug.pory"

# 431 "data/scripts/debug.pory"
	DebugText_BerryWeedsDisabled:
# 432 "data/scripts/debug.pory"
		.string "OW_BERRY_WEEDS is disabled.\n"
# 433 "data/scripts/debug.pory"
		.string "Unable to force weeds onto berry trees.$"
# 434 "data/scripts/debug.pory"

# 435 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1::
# 436 "data/scripts/debug.pory"
		lockall
# 437 "data/scripts/debug.pory"
		getpartysize
# 438 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 439 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 440 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 441 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 442 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 443 "data/scripts/debug.pory"
		switch VAR_RESULT
# 444 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Single
# 445 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Party
# 446 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Close
# 447 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Close:
# 448 "data/scripts/debug.pory"
		releaseall
# 449 "data/scripts/debug.pory"
		end
# 450 "data/scripts/debug.pory"

# 451 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single:
# 452 "data/scripts/debug.pory"
		special ChoosePartyMon
# 453 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 454 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 455 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 456 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 457 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 458 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 459 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 460 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 461 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 462 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 463 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 464 "data/scripts/debug.pory"
		switch VAR_RESULT
# 465 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 466 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 467 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 468 "data/scripts/debug.pory"
		case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 469 "data/scripts/debug.pory"
		case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 470 "data/scripts/debug.pory"
		case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 471 "data/scripts/debug.pory"
		case 6, Debug_EventScript_InflictStatus1_Close
# 472 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 473 "data/scripts/debug.pory"
		releaseall
# 474 "data/scripts/debug.pory"
		end
# 475 "data/scripts/debug.pory"

# 476 "data/scripts/debug.pory"
	Debug_EventScript_KoPokemon::
# 477 "data/scripts/debug.pory"
		special ChoosePartyMon
# 478 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 479 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 480 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 481 "data/scripts/debug.pory"
		setko VAR_0x8004
# 482 "data/scripts/debug.pory"
		releaseall
# 483 "data/scripts/debug.pory"
		end
# 484 "data/scripts/debug.pory"

# 485 "data/scripts/debug.pory"
	Debug_EventScript_SetHiddenNature::
# 486 "data/scripts/debug.pory"
		special ChoosePartyMon
# 487 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 488 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 489 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 490 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 491 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 492 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 493 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 494 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 495 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 496 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 497 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 498 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 499 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 500 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 501 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 502 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 503 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 504 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 505 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 506 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 507 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 508 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 509 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 510 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 511 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 512 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 513 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 514 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 515 "data/scripts/debug.pory"
		dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 516 "data/scripts/debug.pory"
		switch VAR_RESULT
# 517 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 518 "data/scripts/debug.pory"
		special SetHiddenNature
# 519 "data/scripts/debug.pory"
		releaseall
# 520 "data/scripts/debug.pory"
		end
# 521 "data/scripts/debug.pory"

# 522 "data/scripts/debug.pory"
	Debug_EventScript_SetAbility::
# 523 "data/scripts/debug.pory"
		special ChoosePartyMon
# 524 "data/scripts/debug.pory"
		callnative DebugNative_GetAbilityNames
# 525 "data/scripts/debug.pory"
		dynmultipush gStringVar1, 0
# 526 "data/scripts/debug.pory"
		dynmultipush gStringVar2, 1
# 527 "data/scripts/debug.pory"
		dynmultipush gStringVar3, 2
# 528 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 529 "data/scripts/debug.pory"
		switch VAR_RESULT
# 530 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 531 "data/scripts/debug.pory"
		special SetAbility
# 532 "data/scripts/debug.pory"
	Debug_EventScript_SetAbilityClose:
# 533 "data/scripts/debug.pory"
		releaseall
# 534 "data/scripts/debug.pory"
		end
# 535 "data/scripts/debug.pory"

# 536 "data/scripts/debug.pory"
	Debug_EventScript_SetFriendship::
# 537 "data/scripts/debug.pory"
		special ChoosePartyMon
# 538 "data/scripts/debug.pory"
		callnative DebugNative_Party_SetFriendship
# 539 "data/scripts/debug.pory"
		releaseall
# 540 "data/scripts/debug.pory"
		end
# 541 "data/scripts/debug.pory"

# 542 "data/scripts/debug.pory"
	Debug_EventScript_GivePokerus::
# 543 "data/scripts/debug.pory"
		special ChoosePartyMon
# 544 "data/scripts/debug.pory"
		callnative DebugNative_Party_SetPokerus
# 545 "data/scripts/debug.pory"
		releaseall
# 546 "data/scripts/debug.pory"
		end
# 547 "data/scripts/debug.pory"

# 548 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Poison:
# 549 "data/scripts/debug.pory"
		setstatus1 STATUS1_POISON, VAR_0x8004
# 550 "data/scripts/debug.pory"
		releaseall
# 551 "data/scripts/debug.pory"
		end
# 552 "data/scripts/debug.pory"

# 553 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Paralysis:
# 554 "data/scripts/debug.pory"
		setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 555 "data/scripts/debug.pory"
		releaseall
# 556 "data/scripts/debug.pory"
		end
# 557 "data/scripts/debug.pory"

# 558 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Sleep:
# 559 "data/scripts/debug.pory"
		setstatus1 STATUS1_SLEEP, VAR_0x8004
# 560 "data/scripts/debug.pory"
		releaseall
# 561 "data/scripts/debug.pory"
		end
# 562 "data/scripts/debug.pory"

# 563 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Burn:
# 564 "data/scripts/debug.pory"
		setstatus1 STATUS1_BURN, VAR_0x8004
# 565 "data/scripts/debug.pory"
		releaseall
# 566 "data/scripts/debug.pory"
		end
# 567 "data/scripts/debug.pory"

# 568 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Freeze:
# 569 "data/scripts/debug.pory"
		setstatus1 STATUS1_FREEZE, VAR_0x8004
# 570 "data/scripts/debug.pory"
		releaseall
# 571 "data/scripts/debug.pory"
		end
# 572 "data/scripts/debug.pory"

# 573 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Frostbite:
# 574 "data/scripts/debug.pory"
		setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 575 "data/scripts/debug.pory"
		releaseall
# 576 "data/scripts/debug.pory"
		end
# 577 "data/scripts/debug.pory"

# 578 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party:
# 579 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 580 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 581 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 582 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 583 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 584 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 585 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 586 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 587 "data/scripts/debug.pory"
		switch VAR_RESULT
# 588 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 589 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 590 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 591 "data/scripts/debug.pory"
		case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 592 "data/scripts/debug.pory"
		case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 593 "data/scripts/debug.pory"
		case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 594 "data/scripts/debug.pory"
		case 6, Debug_EventScript_InflictStatus1_Close
# 595 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 596 "data/scripts/debug.pory"
		releaseall
# 597 "data/scripts/debug.pory"
		end
# 598 "data/scripts/debug.pory"

# 599 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Poison:
# 600 "data/scripts/debug.pory"
		setstatus1 STATUS1_POISON, PARTY_SIZE
# 601 "data/scripts/debug.pory"
		releaseall
# 602 "data/scripts/debug.pory"
		end
# 603 "data/scripts/debug.pory"

# 604 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Paralysis:
# 605 "data/scripts/debug.pory"
		setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 606 "data/scripts/debug.pory"
		releaseall
# 607 "data/scripts/debug.pory"
		end
# 608 "data/scripts/debug.pory"

# 609 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Sleep:
# 610 "data/scripts/debug.pory"
		setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 611 "data/scripts/debug.pory"
		releaseall
# 612 "data/scripts/debug.pory"
		end
# 613 "data/scripts/debug.pory"

# 614 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Burn:
# 615 "data/scripts/debug.pory"
		setstatus1 STATUS1_BURN, PARTY_SIZE
# 616 "data/scripts/debug.pory"
		releaseall
# 617 "data/scripts/debug.pory"
		end
# 618 "data/scripts/debug.pory"

# 619 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Freeze:
# 620 "data/scripts/debug.pory"
		setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 621 "data/scripts/debug.pory"
		releaseall
# 622 "data/scripts/debug.pory"
		end
# 623 "data/scripts/debug.pory"

# 624 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Frostbite:
# 625 "data/scripts/debug.pory"
		setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 626 "data/scripts/debug.pory"
		releaseall
# 627 "data/scripts/debug.pory"
		end
# 628 "data/scripts/debug.pory"

# 629 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Single:
# 630 "data/scripts/debug.pory"
		.string "Single$"
# 631 "data/scripts/debug.pory"

# 632 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_PartyWide:
# 633 "data/scripts/debug.pory"
		.string "Party-wide$"
# 634 "data/scripts/debug.pory"

# 635 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Close:
# 636 "data/scripts/debug.pory"
		.string "Close$"
# 637 "data/scripts/debug.pory"

# 638 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Poison:
# 639 "data/scripts/debug.pory"
		.string "Poison$"
# 640 "data/scripts/debug.pory"

# 641 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Paralysis:
# 642 "data/scripts/debug.pory"
		.string "Paralysis$"
# 643 "data/scripts/debug.pory"

# 644 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Sleep:
# 645 "data/scripts/debug.pory"
		.string "Sleep$"
# 646 "data/scripts/debug.pory"

# 647 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Burn:
# 648 "data/scripts/debug.pory"
		.string "Burn$"
# 649 "data/scripts/debug.pory"

# 650 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Freeze:
# 651 "data/scripts/debug.pory"
		.string "Freeze$"
# 652 "data/scripts/debug.pory"

# 653 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Frostbite:
# 654 "data/scripts/debug.pory"
		.string "Frostbite$"
# 655 "data/scripts/debug.pory"

# 656 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_KO:
# 657 "data/scripts/debug.pory"
		.string "KO$"
# 658 "data/scripts/debug.pory"

# 659 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Hardy:
# 660 "data/scripts/debug.pory"
		.string "Hardy$"
# 661 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Lonely:
# 662 "data/scripts/debug.pory"
		.string "Lonely$"
# 663 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Brave:
# 664 "data/scripts/debug.pory"
		.string "Brave$"
# 665 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Adamant:
# 666 "data/scripts/debug.pory"
		.string "Adamant$"
# 667 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Naughty:
# 668 "data/scripts/debug.pory"
		.string "Naughty$"
# 669 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Bold:
# 670 "data/scripts/debug.pory"
		.string "Bold$"
# 671 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Docile:
# 672 "data/scripts/debug.pory"
		.string "Docile$"
# 673 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Relaxed:
# 674 "data/scripts/debug.pory"
		.string "Relaxed$"
# 675 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Impish:
# 676 "data/scripts/debug.pory"
		.string "Impish$"
# 677 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Lax:
# 678 "data/scripts/debug.pory"
		.string "Lax$"
# 679 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Timid:
# 680 "data/scripts/debug.pory"
		.string "Timid$"
# 681 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Hasty:
# 682 "data/scripts/debug.pory"
		.string "Hasty$"
# 683 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Serious:
# 684 "data/scripts/debug.pory"
		.string "Serious$"
# 685 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Jolly:
# 686 "data/scripts/debug.pory"
		.string "Jolly$"
# 687 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Naive:
# 688 "data/scripts/debug.pory"
		.string "Naive$"
# 689 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Modest:
# 690 "data/scripts/debug.pory"
		.string "Modest$"
# 691 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Mild:
# 692 "data/scripts/debug.pory"
		.string "Mild$"
# 693 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Quiet:
# 694 "data/scripts/debug.pory"
		.string "Quiet$"
# 695 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Bashful:
# 696 "data/scripts/debug.pory"
		.string "Bashful$"
# 697 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Rash:
# 698 "data/scripts/debug.pory"
		.string "Rash$"
# 699 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Calm:
# 700 "data/scripts/debug.pory"
		.string "Calm$"
# 701 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Gentle:
# 702 "data/scripts/debug.pory"
		.string "Gentle$"
# 703 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Sassy:
# 704 "data/scripts/debug.pory"
		.string "Sassy$"
# 705 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Careful:
# 706 "data/scripts/debug.pory"
		.string "Careful$"
# 707 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Quirky:
# 708 "data/scripts/debug.pory"
		.string "Quirky$"
# 709 "data/scripts/debug.pory"

# 710 "data/scripts/debug.pory"
	Debug_EventScript_EWRAMCounters::
# 711 "data/scripts/debug.pory"
		callnative CheckEWRAMCounters
# 712 "data/scripts/debug.pory"
		msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 713 "data/scripts/debug.pory"
		release
# 714 "data/scripts/debug.pory"
		end
# 715 "data/scripts/debug.pory"

# 716 "data/scripts/debug.pory"
	Debug_EventScript_EWRAMCounters_Text::
# 717 "data/scripts/debug.pory"
		.string "Follower Steps: {STR_VAR_1}.\n"
# 718 "data/scripts/debug.pory"
		.string "Fishing Chain: {STR_VAR_2}.$"
# 719 "data/scripts/debug.pory"

# 720 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_1::
# 721 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 722 "data/scripts/debug.pory"
		.string "Angel Adept Blind Bodice Clique\n"
# 723 "data/scripts/debug.pory"
		.string "Coast Dunce Docile Enact Eosin\l"
# 724 "data/scripts/debug.pory"
		.string "Furlong Focal Gnome Gondola Human\l"
# 725 "data/scripts/debug.pory"
		.string "Hoist Inlet Iodine Justin Jocose\l"
# 726 "data/scripts/debug.pory"
		.string "Knoll Koala Linden Loads Milliner\l"
# 727 "data/scripts/debug.pory"
		.string "Modal Number Nodule Onset Oddball\l"
# 728 "data/scripts/debug.pory"
		.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 729 "data/scripts/debug.pory"
		.string "Roman Snout Sodium Tundra Tocsin\l"
# 730 "data/scripts/debug.pory"
		.string "Uncle Udder Vulcan Vocal Whale\l"
# 731 "data/scripts/debug.pory"
		.string "Woman Xmas Xenon Yunnan Young\l"
# 732 "data/scripts/debug.pory"
		.string "Zloty Zodiac.$"
# 733 "data/scripts/debug.pory"

# 734 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_2::
# 735 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 736 "data/scripts/debug.pory"
		.string "Angel angel adept for the nuance loads\n"
# 737 "data/scripts/debug.pory"
		.string "of the arena cocoa and quaalude. Blind\l"
# 738 "data/scripts/debug.pory"
		.string "blind bodice for the submit oboe of the\l"
# 739 "data/scripts/debug.pory"
		.string "club snob and abbot. Clique clique\l"
# 740 "data/scripts/debug.pory"
		.string "coast for the pouch loco of the franc\l"
# 741 "data/scripts/debug.pory"
		.string "assoc and accede. Dunce dunce docile\l"
# 742 "data/scripts/debug.pory"
		.string "for the loudness mastodon of the\l"
# 743 "data/scripts/debug.pory"
		.string "loud statehood and huddle.$"
# 744 "data/scripts/debug.pory"

# 745 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_3::
# 746 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 747 "data/scripts/debug.pory"
		.string "Enact enact eosin for the quench coed\n"
# 748 "data/scripts/debug.pory"
		.string "of the pique canoe and bleep. Furlong\l"
# 749 "data/scripts/debug.pory"
		.string "furlong focal for the genuflect\l"
# 750 "data/scripts/debug.pory"
		.string "profound of the motif aloof and offers.\l"
# 751 "data/scripts/debug.pory"
		.string "Gnome gnome gondola for the impugn\l"
# 752 "data/scripts/debug.pory"
		.string "logos of the unplug analog and smuggle.\l"
# 753 "data/scripts/debug.pory"
		.string "Human human hoist for the buddhist\l"
# 754 "data/scripts/debug.pory"
		.string "alcohol of the riyadh caliph and\l"
# 755 "data/scripts/debug.pory"
		.string "bathhouse.$"
# 756 "data/scripts/debug.pory"

# 757 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_4::
# 758 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 759 "data/scripts/debug.pory"
		.string "Inlet inlet iodine for the quince\n"
# 760 "data/scripts/debug.pory"
		.string "champion of the ennui scampi and shiite.\l"
# 761 "data/scripts/debug.pory"
		.string "Justin justin jocose for the djibouti\l"
# 762 "data/scripts/debug.pory"
		.string "sojourn of the oranj raj and hajjis.\l"
# 763 "data/scripts/debug.pory"
		.string "Knoll knoll koala for the banknote\l"
# 764 "data/scripts/debug.pory"
		.string "lookout of the dybbuk outlook and\l"
# 765 "data/scripts/debug.pory"
		.string "trekked. Linden linden loads for the\l"
# 766 "data/scripts/debug.pory"
		.string "ulna monolog of the consul menthol and\l"
# 767 "data/scripts/debug.pory"
		.string "shallot.$"
# 768 "data/scripts/debug.pory"

# 769 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_5::
# 770 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 771 "data/scripts/debug.pory"
		.string "Milliner milliner modal for the alumna\n"
# 772 "data/scripts/debug.pory"
		.string "solomon of the album custom and summon.\l"
# 773 "data/scripts/debug.pory"
		.string "Number number nodule for the unmade\l"
# 774 "data/scripts/debug.pory"
		.string "economic of the shotgun bison and\l"
# 775 "data/scripts/debug.pory"
		.string "tunnel. Onset onset oddball for the\l"
# 776 "data/scripts/debug.pory"
		.string "abandon podium of the antiquo tempo\l"
# 777 "data/scripts/debug.pory"
		.string "and moonlit. Pneumo pneumo poncho for\l"
# 778 "data/scripts/debug.pory"
		.string "the dauphin opossum of the holdup\l"
# 779 "data/scripts/debug.pory"
		.string "bishop and supplies.$"
# 780 "data/scripts/debug.pory"

# 781 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_6::
# 782 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 783 "data/scripts/debug.pory"
		.string "Quanta quanta qophs for the inquest\n"
# 784 "data/scripts/debug.pory"
		.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 785 "data/scripts/debug.pory"
		.string "rhone roman for the burnt porous of the\l"
# 786 "data/scripts/debug.pory"
		.string "lemur clamor and carrot. Snout snout\l"
# 787 "data/scripts/debug.pory"
		.string "sodium for the ensnare bosom of the\l"
# 788 "data/scripts/debug.pory"
		.string "genus pathos and missing. Tundra\l"
# 789 "data/scripts/debug.pory"
		.string "tundra tocsin for the nutmeg isotope\l"
# 790 "data/scripts/debug.pory"
		.string "of the peasant ingot and ottoman.$"
# 791 "data/scripts/debug.pory"

# 792 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_7::
# 793 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 794 "data/scripts/debug.pory"
		.string "Uncle uncle udder for the dunes cloud\n"
# 795 "data/scripts/debug.pory"
		.string "of the hindu thou and continuum. Vulcan\l"
# 796 "data/scripts/debug.pory"
		.string "vulcan vocal for the alluvial ovoid of\l"
# 797 "data/scripts/debug.pory"
		.string "the yugoslav chekhov and revved. Whale\l"
# 798 "data/scripts/debug.pory"
		.string "whale woman for the meanwhile blowout\l"
# 799 "data/scripts/debug.pory"
		.string "of the forepaw meadow and glowworm.\l"
# 800 "data/scripts/debug.pory"
		.string "Xmas xmas xenon for the bauxite\l"
# 801 "data/scripts/debug.pory"
		.string "doxology of the tableaux equinox and\l"
# 802 "data/scripts/debug.pory"
		.string "exxon.$"
# 803 "data/scripts/debug.pory"

# 804 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_8::
# 805 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 806 "data/scripts/debug.pory"
		.string "Yunnan yunnan young for the dynamo\n"
# 807 "data/scripts/debug.pory"
		.string "coyote of the obloquy employ and\l"
# 808 "data/scripts/debug.pory"
		.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 809 "data/scripts/debug.pory"
		.string "ozone of the franz laissez and buzzing.$"
# 810 "data/scripts/debug.pory"

# 811 "data/scripts/debug.pory"

# 812 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 813 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 814 "data/scripts/debug.pory"
		.string "42 × 138 = 5796.\n"
# 815 "data/scripts/debug.pory"
		.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 816 "data/scripts/debug.pory"
		.string "lynx at a café; voilà, they're “worth”\l"
# 817 "data/scripts/debug.pory"
		.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 818 "data/scripts/debug.pory"
		.string "Nintendo GBA can connect to a Nintendo\l"
# 819 "data/scripts/debug.pory"
		.string "GameCube console! He claimed-though I don't\l"
# 820 "data/scripts/debug.pory"
		.string "believe him-to have done so in an eyes-shut\l"
# 821 "data/scripts/debug.pory"
		.string "state…?$"
# 822 "data/scripts/debug.pory"

# 823 "data/scripts/debug.pory"
	Debug_PrintFontTest::
# 824 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 825 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 826 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 827 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 828 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 829 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 830 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 831 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 832 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 833 "data/scripts/debug.pory"
		releaseall
# 834 "data/scripts/debug.pory"
		end
# 835 "data/scripts/debug.pory"

# 836 "data/scripts/debug.pory"
	Debug_EventScript_FontTest::
# 837 "data/scripts/debug.pory"
		lockall
# 838 "data/scripts/debug.pory"
		goto Debug_PrintFontTest
# 839 "data/scripts/debug.pory"
	@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 840 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 841 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 842 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 843 "data/scripts/debug.pory"
	@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 844 "data/scripts/debug.pory"
	@	switch VAR_RESULT
# 845 "data/scripts/debug.pory"
	@	case 0, Debug_EventScript_InflictStatus1_Single
# 846 "data/scripts/debug.pory"
	@	case 1, Debug_EventScript_InflictStatus1_Party
# 847 "data/scripts/debug.pory"
	@	case 2, Debug_EventScript_InflictStatus1_Close
# 848 "data/scripts/debug.pory"
	@Debug_EventScript_InflictStatus1_Close:
# 849 "data/scripts/debug.pory"
	@	releaseall
# 850 "data/scripts/debug.pory"
	@	end
# 851 "data/scripts/debug.pory"

# 852 "data/scripts/debug.pory"
	Debug_EventScript_TellTheTime::
# 853 "data/scripts/debug.pory"
		callnative DebugMenu_CalculateTime
# 854 "data/scripts/debug.pory"
		msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 855 "data/scripts/debug.pory"
		releaseall
# 856 "data/scripts/debug.pory"
		end
# 857 "data/scripts/debug.pory"

# 858 "data/scripts/debug.pory"
	Debug_EventScript_PrintTimeOfDay::
# 859 "data/scripts/debug.pory"
		callnative DebugMenu_CalculateTimeOfDay
# 860 "data/scripts/debug.pory"
		msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 861 "data/scripts/debug.pory"
		releaseall
# 862 "data/scripts/debug.pory"
		end
# 863 "data/scripts/debug.pory"

# 864 "data/scripts/debug.pory"
	Debug_EventScript_FakeRTCNotEnabled::
# 865 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 866 "data/scripts/debug.pory"
		releaseall
# 867 "data/scripts/debug.pory"
		end
# 868 "data/scripts/debug.pory"

# 869 "data/scripts/debug.pory"
	Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 870 "data/scripts/debug.pory"
		.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 871 "data/scripts/debug.pory"

# 872 "data/scripts/debug.pory"

# 873 "data/scripts/debug.pory"
	Debug_EventScript_TellTheTime_Text_0:
# 874 "data/scripts/debug.pory"
		.string "Time and date:\n"
# 875 "data/scripts/debug.pory"
		.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 876 "data/scripts/debug.pory"

# 877 "data/scripts/debug.pory"
	DebugEventScript_PrintWeekday_Text_0:
# 878 "data/scripts/debug.pory"
		.string "Time of day: {STR_VAR_1}$"
