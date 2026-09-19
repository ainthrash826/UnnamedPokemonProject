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
# 93 "data/scripts/debug.pory"
	initclock 22, 0
	end


Debug_EventScript_Script_2::
# 98 "data/scripts/debug.pory"
	lockall
# 99 "data/scripts/debug.pory"
	special FieldShowRegionMap
# 100 "data/scripts/debug.pory"
	releaseall
	end


Debug_EventScript_Script_3::
	end


Debug_EventScript_Script_4::
	end


Debug_EventScript_Script_5::
# 113 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_5_Text_0, MSGBOX_YESNO
# 114 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_5_2
Debug_EventScript_Script_5_1:
	end

Debug_EventScript_Script_5_2:
# 114 "data/scripts/debug.pory"
	dofieldeffect FLDEFF_USE_SURF
	goto Debug_EventScript_Script_5_1


Debug_EventScript_Script_6::
	end


Debug_EventScript_Script_7::
	end


Debug_EventScript_Script_8::
	end


# 130 "data/scripts/debug.pory"

# 131 "data/scripts/debug.pory"
	Debug_MessageEnd:
# 132 "data/scripts/debug.pory"
		waitmessage
# 133 "data/scripts/debug.pory"
		waitbuttonpress
# 134 "data/scripts/debug.pory"
		releaseall
# 135 "data/scripts/debug.pory"
		end
# 136 "data/scripts/debug.pory"

# 137 "data/scripts/debug.pory"
	Debug_ShowFieldMessageStringVar4::
# 138 "data/scripts/debug.pory"
		special ShowFieldMessageStringVar4
# 139 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 140 "data/scripts/debug.pory"

# 141 "data/scripts/debug.pory"
	Debug_CheatStartFrlg::
# 142 "data/scripts/debug.pory"
		setflag FLAG_SYS_POKEMON_GET
# 143 "data/scripts/debug.pory"
		setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 144 "data/scripts/debug.pory"
		setflag FLAG_OPENED_START_MENU
# 145 "data/scripts/debug.pory"
		setflag FLAG_VISITED_OAKS_LAB
# 146 "data/scripts/debug.pory"
		setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 147 "data/scripts/debug.pory"
		givemon SPECIES_BULBASAUR, 20, ITEM_NONE
# 148 "data/scripts/debug.pory"
		givemon SPECIES_CHARMANDER, 20, ITEM_NONE
# 149 "data/scripts/debug.pory"
		givemon SPECIES_SQUIRTLE, 20, ITEM_NONE
# 150 "data/scripts/debug.pory"
		clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 151 "data/scripts/debug.pory"
		setflag FLAG_HIDE_RIVAL_IN_LAB
# 152 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1 @ prevents Oak scene when trying to enter Route 1
# 153 "data/scripts/debug.pory"
		setflag FLAG_SYS_POKEDEX_GET
# 154 "data/scripts/debug.pory"
		special SetUnlockedPokedexFlags
# 155 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ state after handing in parcel and getting pokedex
# 156 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 157 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 158 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 159 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_ROUTE22, 1
# 160 "data/scripts/debug.pory"
		setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1 @ end
# 161 "data/scripts/debug.pory"
		setflag FLAG_SYS_NATIONAL_DEX
# 162 "data/scripts/debug.pory"
		special EnableNationalPokedex
# 163 "data/scripts/debug.pory"
		setflag FLAG_SYS_B_DASH
# 164 "data/scripts/debug.pory"
		setflag FLAG_BADGE01_GET
# 165 "data/scripts/debug.pory"
		setflag FLAG_BADGE02_GET
# 166 "data/scripts/debug.pory"
		setflag FLAG_BADGE03_GET
# 167 "data/scripts/debug.pory"
		setflag FLAG_BADGE04_GET
# 168 "data/scripts/debug.pory"
		setflag FLAG_BADGE05_GET
# 169 "data/scripts/debug.pory"
		setflag FLAG_BADGE06_GET
# 170 "data/scripts/debug.pory"
		setflag FLAG_BADGE07_GET
# 171 "data/scripts/debug.pory"
		setflag FLAG_BADGE08_GET
# 172 "data/scripts/debug.pory"
		setflag FLAG_GOT_BIKE_VOUCHER
# 173 "data/scripts/debug.pory"
		setflag FLAG_GOT_BICYCLE
# 174 "data/scripts/debug.pory"
		additem ITEM_BICYCLE
# 175 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_PALLET_TOWN
# 176 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 177 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_PEWTER_CITY
# 178 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 179 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CERULEAN_CITY
# 180 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_VERMILION_CITY
# 181 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 182 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 183 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CELADON_CITY
# 184 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 185 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SAFFRON_CITY
# 186 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 187 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 188 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_ONE_ISLAND
# 189 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_TWO_ISLAND
# 190 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_THREE_ISLAND
# 191 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FOUR_ISLAND
# 192 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_FIVE_ISLAND
# 193 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SIX_ISLAND
# 194 "data/scripts/debug.pory"
		setflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 195 "data/scripts/debug.pory"
		release
# 196 "data/scripts/debug.pory"
		end
# 197 "data/scripts/debug.pory"

# 198 "data/scripts/debug.pory"
	Debug_FlagsNotSetOverworldConfigMessage::
# 199 "data/scripts/debug.pory"
		message Debug_FlagsNotSetOverworldConfigMessage_Text
# 200 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 201 "data/scripts/debug.pory"

# 202 "data/scripts/debug.pory"
	Debug_FlagsNotSetOverworldConfigMessage_Text:
# 203 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 204 "data/scripts/debug.pory"
		.string "Please define a usable flag in:\l"
# 205 "data/scripts/debug.pory"
		.string "'include/config/overworld.h'!$"
# 206 "data/scripts/debug.pory"

# 207 "data/scripts/debug.pory"
	Debug_FlagsNotSetBattleConfigMessage::
# 208 "data/scripts/debug.pory"
		message Debug_FlagsNotSetBattleConfigMessage_Text
# 209 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 210 "data/scripts/debug.pory"

# 211 "data/scripts/debug.pory"
	Debug_FlagsNotSetBattleConfigMessage_Text:
# 212 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 213 "data/scripts/debug.pory"
		.string "Please define a usable flag in:\l"
# 214 "data/scripts/debug.pory"
		.string "'include/config/battle.h'!$"
# 215 "data/scripts/debug.pory"

# 216 "data/scripts/debug.pory"
	Debug_VarsNotSetBattleConfigMessage::
# 217 "data/scripts/debug.pory"
		message Debug_VarsNotSetBattleConfigMessage_Text
# 218 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 219 "data/scripts/debug.pory"

# 220 "data/scripts/debug.pory"
	Debug_VarsNotSetBattleConfigMessage_Text:
# 221 "data/scripts/debug.pory"
		.string "Feature unavailable!\n"
# 222 "data/scripts/debug.pory"
		.string "Please define a usable var in:\l"
# 223 "data/scripts/debug.pory"
		.string "'include/config/battle.h'!$"
# 224 "data/scripts/debug.pory"

# 225 "data/scripts/debug.pory"
	Debug_BoxFilledMessage::
# 226 "data/scripts/debug.pory"
		message Debug_BoxFilledMessage_Text
# 227 "data/scripts/debug.pory"
		goto Debug_MessageEnd
# 228 "data/scripts/debug.pory"

# 229 "data/scripts/debug.pory"
	Debug_BoxFilledMessage_Text:
# 230 "data/scripts/debug.pory"
		.string "Storage boxes filled!$"
# 231 "data/scripts/debug.pory"

# 232 "data/scripts/debug.pory"
	Debug_EventScript_CheckEVs::
# 233 "data/scripts/debug.pory"
		lockall
# 234 "data/scripts/debug.pory"
		getpartysize
# 235 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 236 "data/scripts/debug.pory"
		special ChoosePartyMon
# 237 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 238 "data/scripts/debug.pory"
		callnative Script_GetChosenMonOffensiveEVs
# 239 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 240 "data/scripts/debug.pory"
		callnative Script_GetChosenMonDefensiveEVs
# 241 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 242 "data/scripts/debug.pory"
	Debug_EventScript_CheckEVs_End::
# 243 "data/scripts/debug.pory"
		releaseall
# 244 "data/scripts/debug.pory"
		end
# 245 "data/scripts/debug.pory"

# 246 "data/scripts/debug.pory"
	Debug_EventScript_Text_OffensiveEVs:
# 247 "data/scripts/debug.pory"
		.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 248 "data/scripts/debug.pory"

# 249 "data/scripts/debug.pory"
	Debug_EventScript_Text_DefensiveEVs:
# 250 "data/scripts/debug.pory"
		.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 251 "data/scripts/debug.pory"

# 252 "data/scripts/debug.pory"
	Debug_EventScript_CheckIVs::
# 253 "data/scripts/debug.pory"
		lockall
# 254 "data/scripts/debug.pory"
		getpartysize
# 255 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 256 "data/scripts/debug.pory"
		special ChoosePartyMon
# 257 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 258 "data/scripts/debug.pory"
		callnative Script_GetChosenMonOffensiveIVs
# 259 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 260 "data/scripts/debug.pory"
		callnative Script_GetChosenMonDefensiveIVs
# 261 "data/scripts/debug.pory"
		msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 262 "data/scripts/debug.pory"
	Debug_EventScript_CheckIVs_End::
# 263 "data/scripts/debug.pory"
		releaseall
# 264 "data/scripts/debug.pory"
		end
# 265 "data/scripts/debug.pory"

# 266 "data/scripts/debug.pory"
	Debug_EventScript_Text_OffensiveIVs:
# 267 "data/scripts/debug.pory"
		.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 268 "data/scripts/debug.pory"

# 269 "data/scripts/debug.pory"
	Debug_EventScript_Text_DefensiveIVs:
# 270 "data/scripts/debug.pory"
		.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 271 "data/scripts/debug.pory"

# 272 "data/scripts/debug.pory"
	Debug_CheckSaveBlock::
# 273 "data/scripts/debug.pory"
		callnative CheckSaveBlock1Size
# 274 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 275 "data/scripts/debug.pory"
		callnative CheckSaveBlock2Size
# 276 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 277 "data/scripts/debug.pory"
		callnative CheckSaveBlock3Size
# 278 "data/scripts/debug.pory"
		msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 279 "data/scripts/debug.pory"
		callnative CheckPokemonStorageSize
# 280 "data/scripts/debug.pory"
		msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 281 "data/scripts/debug.pory"
		release
# 282 "data/scripts/debug.pory"
		end
# 283 "data/scripts/debug.pory"

# 284 "data/scripts/debug.pory"
	Debug_SaveBlock1Size::
# 285 "data/scripts/debug.pory"
		.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 286 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 287 "data/scripts/debug.pory"

# 288 "data/scripts/debug.pory"
	Debug_SaveBlock2Size::
# 289 "data/scripts/debug.pory"
		.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 290 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 291 "data/scripts/debug.pory"

# 292 "data/scripts/debug.pory"
	Debug_SaveBlock3Size::
# 293 "data/scripts/debug.pory"
		.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 294 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 295 "data/scripts/debug.pory"

# 296 "data/scripts/debug.pory"
	Debug_PokemonStorageSize::
# 297 "data/scripts/debug.pory"
		.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 298 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_3}b.$"
# 299 "data/scripts/debug.pory"

# 300 "data/scripts/debug.pory"
	Debug_CheckROMSpace::
# 301 "data/scripts/debug.pory"
		callnative CheckROMSize
# 302 "data/scripts/debug.pory"
		msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 303 "data/scripts/debug.pory"
		release
# 304 "data/scripts/debug.pory"
		end
# 305 "data/scripts/debug.pory"

# 306 "data/scripts/debug.pory"
	Debug_ROMSize::
# 307 "data/scripts/debug.pory"
		.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 308 "data/scripts/debug.pory"
		.string "Free space: {STR_VAR_2}MB.$"
# 309 "data/scripts/debug.pory"

# 310 "data/scripts/debug.pory"
	Debug_HatchAnEgg::
# 311 "data/scripts/debug.pory"
		lockall
# 312 "data/scripts/debug.pory"
		getpartysize
# 313 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 314 "data/scripts/debug.pory"
		special ChoosePartyMon
# 315 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 316 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 317 "data/scripts/debug.pory"
		goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 318 "data/scripts/debug.pory"
		special EggHatch
# 319 "data/scripts/debug.pory"
	Debug_HatchAnEgg_End::
# 320 "data/scripts/debug.pory"
		releaseall
# 321 "data/scripts/debug.pory"
		end
# 322 "data/scripts/debug.pory"

# 323 "data/scripts/debug.pory"
	Debug_NoPokemon::
# 324 "data/scripts/debug.pory"
		msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 325 "data/scripts/debug.pory"
		releaseall
# 326 "data/scripts/debug.pory"
		end
# 327 "data/scripts/debug.pory"

# 328 "data/scripts/debug.pory"
	DebugScript_HatchAnEgg_CantForceHatch::
# 329 "data/scripts/debug.pory"
		msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 330 "data/scripts/debug.pory"
		releaseall
# 331 "data/scripts/debug.pory"
		end
# 332 "data/scripts/debug.pory"

# 333 "data/scripts/debug.pory"
	DebugScript_Text_EmptyParty::
# 334 "data/scripts/debug.pory"
		.string "You have no Pokémon nor Eggs.$"
# 335 "data/scripts/debug.pory"

# 336 "data/scripts/debug.pory"
	DebugScript_HatchAnEgg_Text_NotAnEgg::
# 337 "data/scripts/debug.pory"
		.string "That's not a Pokémon Egg.$"
# 338 "data/scripts/debug.pory"

# 339 "data/scripts/debug.pory"
	DebugScript_ZeroDaycareMons::
# 340 "data/scripts/debug.pory"
		msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 341 "data/scripts/debug.pory"
		releaseall
# 342 "data/scripts/debug.pory"
		end
# 343 "data/scripts/debug.pory"

# 344 "data/scripts/debug.pory"
	DebugScript_OneDaycareMons::
# 345 "data/scripts/debug.pory"
		msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 346 "data/scripts/debug.pory"
		releaseall
# 347 "data/scripts/debug.pory"
		end
# 348 "data/scripts/debug.pory"

# 349 "data/scripts/debug.pory"
	DebugScript_DaycareMonsNotCompatible::
# 350 "data/scripts/debug.pory"
		msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 351 "data/scripts/debug.pory"
		releaseall
# 352 "data/scripts/debug.pory"
		end
# 353 "data/scripts/debug.pory"

# 354 "data/scripts/debug.pory"
	DebugText_DaycareNoPokemon:
# 355 "data/scripts/debug.pory"
		.string "You have no Pokémon at Daycare.$"
# 356 "data/scripts/debug.pory"

# 357 "data/scripts/debug.pory"
	DebugText_DaycareOnePokemon:
# 358 "data/scripts/debug.pory"
		.string "You have only one Pokémon at Daycare.$"
# 359 "data/scripts/debug.pory"

# 360 "data/scripts/debug.pory"
	DebugText_DaycarePokemonNotCompatible:
# 361 "data/scripts/debug.pory"
		.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 362 "data/scripts/debug.pory"

# 363 "data/scripts/debug.pory"
	Debug_ShowExpansionVersion::
# 364 "data/scripts/debug.pory"
		callnative BufferExpansionVersion
# 365 "data/scripts/debug.pory"
		msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 366 "data/scripts/debug.pory"
		release
# 367 "data/scripts/debug.pory"
		end
# 368 "data/scripts/debug.pory"

# 369 "data/scripts/debug.pory"
	Debug_ExpansionVersion:
# 370 "data/scripts/debug.pory"
		.string "pokeemerald-expansion {STR_VAR_1}$"
# 371 "data/scripts/debug.pory"

# 372 "data/scripts/debug.pory"
	Debug_Follower_NPC_Not_Enabled::
# 373 "data/scripts/debug.pory"
		msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 374 "data/scripts/debug.pory"
		release
# 375 "data/scripts/debug.pory"
		end
# 376 "data/scripts/debug.pory"

# 377 "data/scripts/debug.pory"
	Debug_Enable_To_Use_Follower_NPCs:
# 378 "data/scripts/debug.pory"
		.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 379 "data/scripts/debug.pory"

# 380 "data/scripts/debug.pory"
	Debug_Follower_NPC_Event_Script::
# 381 "data/scripts/debug.pory"
		lock
# 382 "data/scripts/debug.pory"
		facefollowernpc
# 383 "data/scripts/debug.pory"
		msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 384 "data/scripts/debug.pory"
		releaseall
# 385 "data/scripts/debug.pory"
		end
# 386 "data/scripts/debug.pory"

# 387 "data/scripts/debug.pory"
	Debug_Follower_NPC_Test_Message:
# 388 "data/scripts/debug.pory"
		.string "This is a Follower NPC test.$"
# 389 "data/scripts/debug.pory"

# 390 "data/scripts/debug.pory"
	Debug_EventScript_Steven_Multi::
# 391 "data/scripts/debug.pory"
		call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 392 "data/scripts/debug.pory"
		release
# 393 "data/scripts/debug.pory"
		end
# 394 "data/scripts/debug.pory"

# 395 "data/scripts/debug.pory"
	Debug_EventScript_WallyTutorial::
# 396 "data/scripts/debug.pory"
		special SavePlayerParty
# 397 "data/scripts/debug.pory"
		special LoadWallyZigzagoon
# 398 "data/scripts/debug.pory"
		special StartWallyTutorialBattle
# 399 "data/scripts/debug.pory"
		special LoadPlayerParty
# 400 "data/scripts/debug.pory"
		release
# 401 "data/scripts/debug.pory"
		end
# 402 "data/scripts/debug.pory"

# 403 "data/scripts/debug.pory"
	Debug_BerryPestsDisabled::
# 404 "data/scripts/debug.pory"
		msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 405 "data/scripts/debug.pory"
		release
# 406 "data/scripts/debug.pory"
		end
# 407 "data/scripts/debug.pory"

# 408 "data/scripts/debug.pory"
	DebugText_BerryPestsDisabled:
# 409 "data/scripts/debug.pory"
		.string "OW_BERRY_PESTS is disabled.\n"
# 410 "data/scripts/debug.pory"
		.string "Unable to force pests onto berry trees.$"
# 411 "data/scripts/debug.pory"

# 412 "data/scripts/debug.pory"
	Debug_BerryWeedsDisabled::
# 413 "data/scripts/debug.pory"
		msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 414 "data/scripts/debug.pory"
		release
# 415 "data/scripts/debug.pory"
		end
# 416 "data/scripts/debug.pory"

# 417 "data/scripts/debug.pory"
	DebugText_BerryWeedsDisabled:
# 418 "data/scripts/debug.pory"
		.string "OW_BERRY_WEEDS is disabled.\n"
# 419 "data/scripts/debug.pory"
		.string "Unable to force weeds onto berry trees.$"
# 420 "data/scripts/debug.pory"

# 421 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1::
# 422 "data/scripts/debug.pory"
		lockall
# 423 "data/scripts/debug.pory"
		getpartysize
# 424 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 425 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 426 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 427 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 428 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 429 "data/scripts/debug.pory"
		switch VAR_RESULT
# 430 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Single
# 431 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Party
# 432 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Close
# 433 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Close:
# 434 "data/scripts/debug.pory"
		releaseall
# 435 "data/scripts/debug.pory"
		end
# 436 "data/scripts/debug.pory"

# 437 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single:
# 438 "data/scripts/debug.pory"
		special ChoosePartyMon
# 439 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 440 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 441 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 442 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 443 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 444 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 445 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 446 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 447 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 448 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 449 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 450 "data/scripts/debug.pory"
		switch VAR_RESULT
# 451 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 452 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 453 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 454 "data/scripts/debug.pory"
		case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 455 "data/scripts/debug.pory"
		case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 456 "data/scripts/debug.pory"
		case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 457 "data/scripts/debug.pory"
		case 6, Debug_EventScript_InflictStatus1_Close
# 458 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 459 "data/scripts/debug.pory"
		releaseall
# 460 "data/scripts/debug.pory"
		end
# 461 "data/scripts/debug.pory"

# 462 "data/scripts/debug.pory"
	Debug_EventScript_KoPokemon::
# 463 "data/scripts/debug.pory"
		special ChoosePartyMon
# 464 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 465 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 466 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 467 "data/scripts/debug.pory"
		setko VAR_0x8004
# 468 "data/scripts/debug.pory"
		releaseall
# 469 "data/scripts/debug.pory"
		end
# 470 "data/scripts/debug.pory"

# 471 "data/scripts/debug.pory"
	Debug_EventScript_SetHiddenNature::
# 472 "data/scripts/debug.pory"
		special ChoosePartyMon
# 473 "data/scripts/debug.pory"
		goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 474 "data/scripts/debug.pory"
		specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 475 "data/scripts/debug.pory"
		goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 476 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 477 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 478 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 479 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 480 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 481 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 482 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 483 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 484 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 485 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 486 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 487 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 488 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 489 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 490 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 491 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 492 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 493 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 494 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 495 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 496 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 497 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 498 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 499 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 500 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 501 "data/scripts/debug.pory"
		dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 502 "data/scripts/debug.pory"
		switch VAR_RESULT
# 503 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 504 "data/scripts/debug.pory"
		special SetHiddenNature
# 505 "data/scripts/debug.pory"
		releaseall
# 506 "data/scripts/debug.pory"
		end
# 507 "data/scripts/debug.pory"

# 508 "data/scripts/debug.pory"
	Debug_EventScript_SetAbility::
# 509 "data/scripts/debug.pory"
		special ChoosePartyMon
# 510 "data/scripts/debug.pory"
		callnative DebugNative_GetAbilityNames
# 511 "data/scripts/debug.pory"
		dynmultipush gStringVar1, 0
# 512 "data/scripts/debug.pory"
		dynmultipush gStringVar2, 1
# 513 "data/scripts/debug.pory"
		dynmultipush gStringVar3, 2
# 514 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 515 "data/scripts/debug.pory"
		switch VAR_RESULT
# 516 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 517 "data/scripts/debug.pory"
		special SetAbility
# 518 "data/scripts/debug.pory"
	Debug_EventScript_SetAbilityClose:
# 519 "data/scripts/debug.pory"
		releaseall
# 520 "data/scripts/debug.pory"
		end
# 521 "data/scripts/debug.pory"

# 522 "data/scripts/debug.pory"
	Debug_EventScript_SetFriendship::
# 523 "data/scripts/debug.pory"
		special ChoosePartyMon
# 524 "data/scripts/debug.pory"
		callnative DebugNative_Party_SetFriendship
# 525 "data/scripts/debug.pory"
		releaseall
# 526 "data/scripts/debug.pory"
		end
# 527 "data/scripts/debug.pory"

# 528 "data/scripts/debug.pory"
	Debug_EventScript_GivePokerus::
# 529 "data/scripts/debug.pory"
		special ChoosePartyMon
# 530 "data/scripts/debug.pory"
		callnative DebugNative_Party_SetPokerus
# 531 "data/scripts/debug.pory"
		releaseall
# 532 "data/scripts/debug.pory"
		end
# 533 "data/scripts/debug.pory"

# 534 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Poison:
# 535 "data/scripts/debug.pory"
		setstatus1 STATUS1_POISON, VAR_0x8004
# 536 "data/scripts/debug.pory"
		releaseall
# 537 "data/scripts/debug.pory"
		end
# 538 "data/scripts/debug.pory"

# 539 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Paralysis:
# 540 "data/scripts/debug.pory"
		setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 541 "data/scripts/debug.pory"
		releaseall
# 542 "data/scripts/debug.pory"
		end
# 543 "data/scripts/debug.pory"

# 544 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Sleep:
# 545 "data/scripts/debug.pory"
		setstatus1 STATUS1_SLEEP, VAR_0x8004
# 546 "data/scripts/debug.pory"
		releaseall
# 547 "data/scripts/debug.pory"
		end
# 548 "data/scripts/debug.pory"

# 549 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Burn:
# 550 "data/scripts/debug.pory"
		setstatus1 STATUS1_BURN, VAR_0x8004
# 551 "data/scripts/debug.pory"
		releaseall
# 552 "data/scripts/debug.pory"
		end
# 553 "data/scripts/debug.pory"

# 554 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Freeze:
# 555 "data/scripts/debug.pory"
		setstatus1 STATUS1_FREEZE, VAR_0x8004
# 556 "data/scripts/debug.pory"
		releaseall
# 557 "data/scripts/debug.pory"
		end
# 558 "data/scripts/debug.pory"

# 559 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Single_Frostbite:
# 560 "data/scripts/debug.pory"
		setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 561 "data/scripts/debug.pory"
		releaseall
# 562 "data/scripts/debug.pory"
		end
# 563 "data/scripts/debug.pory"

# 564 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party:
# 565 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 566 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 567 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 568 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 569 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 570 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 571 "data/scripts/debug.pory"
		dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 572 "data/scripts/debug.pory"
		dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 573 "data/scripts/debug.pory"
		switch VAR_RESULT
# 574 "data/scripts/debug.pory"
		case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 575 "data/scripts/debug.pory"
		case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 576 "data/scripts/debug.pory"
		case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 577 "data/scripts/debug.pory"
		case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 578 "data/scripts/debug.pory"
		case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 579 "data/scripts/debug.pory"
		case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 580 "data/scripts/debug.pory"
		case 6, Debug_EventScript_InflictStatus1_Close
# 581 "data/scripts/debug.pory"
		case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 582 "data/scripts/debug.pory"
		releaseall
# 583 "data/scripts/debug.pory"
		end
# 584 "data/scripts/debug.pory"

# 585 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Poison:
# 586 "data/scripts/debug.pory"
		setstatus1 STATUS1_POISON, PARTY_SIZE
# 587 "data/scripts/debug.pory"
		releaseall
# 588 "data/scripts/debug.pory"
		end
# 589 "data/scripts/debug.pory"

# 590 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Paralysis:
# 591 "data/scripts/debug.pory"
		setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 592 "data/scripts/debug.pory"
		releaseall
# 593 "data/scripts/debug.pory"
		end
# 594 "data/scripts/debug.pory"

# 595 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Sleep:
# 596 "data/scripts/debug.pory"
		setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 597 "data/scripts/debug.pory"
		releaseall
# 598 "data/scripts/debug.pory"
		end
# 599 "data/scripts/debug.pory"

# 600 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Burn:
# 601 "data/scripts/debug.pory"
		setstatus1 STATUS1_BURN, PARTY_SIZE
# 602 "data/scripts/debug.pory"
		releaseall
# 603 "data/scripts/debug.pory"
		end
# 604 "data/scripts/debug.pory"

# 605 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Freeze:
# 606 "data/scripts/debug.pory"
		setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 607 "data/scripts/debug.pory"
		releaseall
# 608 "data/scripts/debug.pory"
		end
# 609 "data/scripts/debug.pory"

# 610 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Party_Frostbite:
# 611 "data/scripts/debug.pory"
		setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 612 "data/scripts/debug.pory"
		releaseall
# 613 "data/scripts/debug.pory"
		end
# 614 "data/scripts/debug.pory"

# 615 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Single:
# 616 "data/scripts/debug.pory"
		.string "Single$"
# 617 "data/scripts/debug.pory"

# 618 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_PartyWide:
# 619 "data/scripts/debug.pory"
		.string "Party-wide$"
# 620 "data/scripts/debug.pory"

# 621 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Close:
# 622 "data/scripts/debug.pory"
		.string "Close$"
# 623 "data/scripts/debug.pory"

# 624 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Poison:
# 625 "data/scripts/debug.pory"
		.string "Poison$"
# 626 "data/scripts/debug.pory"

# 627 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Paralysis:
# 628 "data/scripts/debug.pory"
		.string "Paralysis$"
# 629 "data/scripts/debug.pory"

# 630 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Sleep:
# 631 "data/scripts/debug.pory"
		.string "Sleep$"
# 632 "data/scripts/debug.pory"

# 633 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Burn:
# 634 "data/scripts/debug.pory"
		.string "Burn$"
# 635 "data/scripts/debug.pory"

# 636 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Freeze:
# 637 "data/scripts/debug.pory"
		.string "Freeze$"
# 638 "data/scripts/debug.pory"

# 639 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_Frostbite:
# 640 "data/scripts/debug.pory"
		.string "Frostbite$"
# 641 "data/scripts/debug.pory"

# 642 "data/scripts/debug.pory"
	Debug_EventScript_InflictStatus1_Text_KO:
# 643 "data/scripts/debug.pory"
		.string "KO$"
# 644 "data/scripts/debug.pory"

# 645 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Hardy:
# 646 "data/scripts/debug.pory"
		.string "Hardy$"
# 647 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Lonely:
# 648 "data/scripts/debug.pory"
		.string "Lonely$"
# 649 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Brave:
# 650 "data/scripts/debug.pory"
		.string "Brave$"
# 651 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Adamant:
# 652 "data/scripts/debug.pory"
		.string "Adamant$"
# 653 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Naughty:
# 654 "data/scripts/debug.pory"
		.string "Naughty$"
# 655 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Bold:
# 656 "data/scripts/debug.pory"
		.string "Bold$"
# 657 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Docile:
# 658 "data/scripts/debug.pory"
		.string "Docile$"
# 659 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Relaxed:
# 660 "data/scripts/debug.pory"
		.string "Relaxed$"
# 661 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Impish:
# 662 "data/scripts/debug.pory"
		.string "Impish$"
# 663 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Lax:
# 664 "data/scripts/debug.pory"
		.string "Lax$"
# 665 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Timid:
# 666 "data/scripts/debug.pory"
		.string "Timid$"
# 667 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Hasty:
# 668 "data/scripts/debug.pory"
		.string "Hasty$"
# 669 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Serious:
# 670 "data/scripts/debug.pory"
		.string "Serious$"
# 671 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Jolly:
# 672 "data/scripts/debug.pory"
		.string "Jolly$"
# 673 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Naive:
# 674 "data/scripts/debug.pory"
		.string "Naive$"
# 675 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Modest:
# 676 "data/scripts/debug.pory"
		.string "Modest$"
# 677 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Mild:
# 678 "data/scripts/debug.pory"
		.string "Mild$"
# 679 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Quiet:
# 680 "data/scripts/debug.pory"
		.string "Quiet$"
# 681 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Bashful:
# 682 "data/scripts/debug.pory"
		.string "Bashful$"
# 683 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Rash:
# 684 "data/scripts/debug.pory"
		.string "Rash$"
# 685 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Calm:
# 686 "data/scripts/debug.pory"
		.string "Calm$"
# 687 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Gentle:
# 688 "data/scripts/debug.pory"
		.string "Gentle$"
# 689 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Sassy:
# 690 "data/scripts/debug.pory"
		.string "Sassy$"
# 691 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Careful:
# 692 "data/scripts/debug.pory"
		.string "Careful$"
# 693 "data/scripts/debug.pory"
	Debug_EventScript_ChangeNature_Text_Quirky:
# 694 "data/scripts/debug.pory"
		.string "Quirky$"
# 695 "data/scripts/debug.pory"

# 696 "data/scripts/debug.pory"
	Debug_EventScript_EWRAMCounters::
# 697 "data/scripts/debug.pory"
		callnative CheckEWRAMCounters
# 698 "data/scripts/debug.pory"
		msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 699 "data/scripts/debug.pory"
		release
# 700 "data/scripts/debug.pory"
		end
# 701 "data/scripts/debug.pory"

# 702 "data/scripts/debug.pory"
	Debug_EventScript_EWRAMCounters_Text::
# 703 "data/scripts/debug.pory"
		.string "Follower Steps: {STR_VAR_1}.\n"
# 704 "data/scripts/debug.pory"
		.string "Fishing Chain: {STR_VAR_2}.$"
# 705 "data/scripts/debug.pory"

# 706 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_1::
# 707 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 708 "data/scripts/debug.pory"
		.string "Angel Adept Blind Bodice Clique\n"
# 709 "data/scripts/debug.pory"
		.string "Coast Dunce Docile Enact Eosin\l"
# 710 "data/scripts/debug.pory"
		.string "Furlong Focal Gnome Gondola Human\l"
# 711 "data/scripts/debug.pory"
		.string "Hoist Inlet Iodine Justin Jocose\l"
# 712 "data/scripts/debug.pory"
		.string "Knoll Koala Linden Loads Milliner\l"
# 713 "data/scripts/debug.pory"
		.string "Modal Number Nodule Onset Oddball\l"
# 714 "data/scripts/debug.pory"
		.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 715 "data/scripts/debug.pory"
		.string "Roman Snout Sodium Tundra Tocsin\l"
# 716 "data/scripts/debug.pory"
		.string "Uncle Udder Vulcan Vocal Whale\l"
# 717 "data/scripts/debug.pory"
		.string "Woman Xmas Xenon Yunnan Young\l"
# 718 "data/scripts/debug.pory"
		.string "Zloty Zodiac.$"
# 719 "data/scripts/debug.pory"

# 720 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_2::
# 721 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 722 "data/scripts/debug.pory"
		.string "Angel angel adept for the nuance loads\n"
# 723 "data/scripts/debug.pory"
		.string "of the arena cocoa and quaalude. Blind\l"
# 724 "data/scripts/debug.pory"
		.string "blind bodice for the submit oboe of the\l"
# 725 "data/scripts/debug.pory"
		.string "club snob and abbot. Clique clique\l"
# 726 "data/scripts/debug.pory"
		.string "coast for the pouch loco of the franc\l"
# 727 "data/scripts/debug.pory"
		.string "assoc and accede. Dunce dunce docile\l"
# 728 "data/scripts/debug.pory"
		.string "for the loudness mastodon of the\l"
# 729 "data/scripts/debug.pory"
		.string "loud statehood and huddle.$"
# 730 "data/scripts/debug.pory"

# 731 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_3::
# 732 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 733 "data/scripts/debug.pory"
		.string "Enact enact eosin for the quench coed\n"
# 734 "data/scripts/debug.pory"
		.string "of the pique canoe and bleep. Furlong\l"
# 735 "data/scripts/debug.pory"
		.string "furlong focal for the genuflect\l"
# 736 "data/scripts/debug.pory"
		.string "profound of the motif aloof and offers.\l"
# 737 "data/scripts/debug.pory"
		.string "Gnome gnome gondola for the impugn\l"
# 738 "data/scripts/debug.pory"
		.string "logos of the unplug analog and smuggle.\l"
# 739 "data/scripts/debug.pory"
		.string "Human human hoist for the buddhist\l"
# 740 "data/scripts/debug.pory"
		.string "alcohol of the riyadh caliph and\l"
# 741 "data/scripts/debug.pory"
		.string "bathhouse.$"
# 742 "data/scripts/debug.pory"

# 743 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_4::
# 744 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 745 "data/scripts/debug.pory"
		.string "Inlet inlet iodine for the quince\n"
# 746 "data/scripts/debug.pory"
		.string "champion of the ennui scampi and shiite.\l"
# 747 "data/scripts/debug.pory"
		.string "Justin justin jocose for the djibouti\l"
# 748 "data/scripts/debug.pory"
		.string "sojourn of the oranj raj and hajjis.\l"
# 749 "data/scripts/debug.pory"
		.string "Knoll knoll koala for the banknote\l"
# 750 "data/scripts/debug.pory"
		.string "lookout of the dybbuk outlook and\l"
# 751 "data/scripts/debug.pory"
		.string "trekked. Linden linden loads for the\l"
# 752 "data/scripts/debug.pory"
		.string "ulna monolog of the consul menthol and\l"
# 753 "data/scripts/debug.pory"
		.string "shallot.$"
# 754 "data/scripts/debug.pory"

# 755 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_5::
# 756 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 757 "data/scripts/debug.pory"
		.string "Milliner milliner modal for the alumna\n"
# 758 "data/scripts/debug.pory"
		.string "solomon of the album custom and summon.\l"
# 759 "data/scripts/debug.pory"
		.string "Number number nodule for the unmade\l"
# 760 "data/scripts/debug.pory"
		.string "economic of the shotgun bison and\l"
# 761 "data/scripts/debug.pory"
		.string "tunnel. Onset onset oddball for the\l"
# 762 "data/scripts/debug.pory"
		.string "abandon podium of the antiquo tempo\l"
# 763 "data/scripts/debug.pory"
		.string "and moonlit. Pneumo pneumo poncho for\l"
# 764 "data/scripts/debug.pory"
		.string "the dauphin opossum of the holdup\l"
# 765 "data/scripts/debug.pory"
		.string "bishop and supplies.$"
# 766 "data/scripts/debug.pory"

# 767 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_6::
# 768 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 769 "data/scripts/debug.pory"
		.string "Quanta quanta qophs for the inquest\n"
# 770 "data/scripts/debug.pory"
		.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 771 "data/scripts/debug.pory"
		.string "rhone roman for the burnt porous of the\l"
# 772 "data/scripts/debug.pory"
		.string "lemur clamor and carrot. Snout snout\l"
# 773 "data/scripts/debug.pory"
		.string "sodium for the ensnare bosom of the\l"
# 774 "data/scripts/debug.pory"
		.string "genus pathos and missing. Tundra\l"
# 775 "data/scripts/debug.pory"
		.string "tundra tocsin for the nutmeg isotope\l"
# 776 "data/scripts/debug.pory"
		.string "of the peasant ingot and ottoman.$"
# 777 "data/scripts/debug.pory"

# 778 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_7::
# 779 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 780 "data/scripts/debug.pory"
		.string "Uncle uncle udder for the dunes cloud\n"
# 781 "data/scripts/debug.pory"
		.string "of the hindu thou and continuum. Vulcan\l"
# 782 "data/scripts/debug.pory"
		.string "vulcan vocal for the alluvial ovoid of\l"
# 783 "data/scripts/debug.pory"
		.string "the yugoslav chekhov and revved. Whale\l"
# 784 "data/scripts/debug.pory"
		.string "whale woman for the meanwhile blowout\l"
# 785 "data/scripts/debug.pory"
		.string "of the forepaw meadow and glowworm.\l"
# 786 "data/scripts/debug.pory"
		.string "Xmas xmas xenon for the bauxite\l"
# 787 "data/scripts/debug.pory"
		.string "doxology of the tableaux equinox and\l"
# 788 "data/scripts/debug.pory"
		.string "exxon.$"
# 789 "data/scripts/debug.pory"

# 790 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_8::
# 791 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 792 "data/scripts/debug.pory"
		.string "Yunnan yunnan young for the dynamo\n"
# 793 "data/scripts/debug.pory"
		.string "coyote of the obloquy employ and\l"
# 794 "data/scripts/debug.pory"
		.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 795 "data/scripts/debug.pory"
		.string "ozone of the franz laissez and buzzing.$"
# 796 "data/scripts/debug.pory"

# 797 "data/scripts/debug.pory"

# 798 "data/scripts/debug.pory"
	Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 799 "data/scripts/debug.pory"
		.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 800 "data/scripts/debug.pory"
		.string "42 × 138 = 5796.\n"
# 801 "data/scripts/debug.pory"
		.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 802 "data/scripts/debug.pory"
		.string "lynx at a café; voilà, they're “worth”\l"
# 803 "data/scripts/debug.pory"
		.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 804 "data/scripts/debug.pory"
		.string "Nintendo GBA can connect to a Nintendo\l"
# 805 "data/scripts/debug.pory"
		.string "GameCube console! He claimed-though I don't\l"
# 806 "data/scripts/debug.pory"
		.string "believe him-to have done so in an eyes-shut\l"
# 807 "data/scripts/debug.pory"
		.string "state…?$"
# 808 "data/scripts/debug.pory"

# 809 "data/scripts/debug.pory"
	Debug_PrintFontTest::
# 810 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 811 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 812 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 813 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 814 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 815 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 816 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 817 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 818 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 819 "data/scripts/debug.pory"
		releaseall
# 820 "data/scripts/debug.pory"
		end
# 821 "data/scripts/debug.pory"

# 822 "data/scripts/debug.pory"
	Debug_EventScript_FontTest::
# 823 "data/scripts/debug.pory"
		lockall
# 824 "data/scripts/debug.pory"
		goto Debug_PrintFontTest
# 825 "data/scripts/debug.pory"
	@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 826 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 827 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 828 "data/scripts/debug.pory"
	@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 829 "data/scripts/debug.pory"
	@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 830 "data/scripts/debug.pory"
	@	switch VAR_RESULT
# 831 "data/scripts/debug.pory"
	@	case 0, Debug_EventScript_InflictStatus1_Single
# 832 "data/scripts/debug.pory"
	@	case 1, Debug_EventScript_InflictStatus1_Party
# 833 "data/scripts/debug.pory"
	@	case 2, Debug_EventScript_InflictStatus1_Close
# 834 "data/scripts/debug.pory"
	@Debug_EventScript_InflictStatus1_Close:
# 835 "data/scripts/debug.pory"
	@	releaseall
# 836 "data/scripts/debug.pory"
	@	end
# 837 "data/scripts/debug.pory"

# 838 "data/scripts/debug.pory"
	Debug_EventScript_TellTheTime::
# 839 "data/scripts/debug.pory"
		callnative DebugMenu_CalculateTime
# 840 "data/scripts/debug.pory"
		msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 841 "data/scripts/debug.pory"
		releaseall
# 842 "data/scripts/debug.pory"
		end
# 843 "data/scripts/debug.pory"

# 844 "data/scripts/debug.pory"
	Debug_EventScript_PrintTimeOfDay::
# 845 "data/scripts/debug.pory"
		callnative DebugMenu_CalculateTimeOfDay
# 846 "data/scripts/debug.pory"
		msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 847 "data/scripts/debug.pory"
		releaseall
# 848 "data/scripts/debug.pory"
		end
# 849 "data/scripts/debug.pory"

# 850 "data/scripts/debug.pory"
	Debug_EventScript_FakeRTCNotEnabled::
# 851 "data/scripts/debug.pory"
		msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 852 "data/scripts/debug.pory"
		releaseall
# 853 "data/scripts/debug.pory"
		end
# 854 "data/scripts/debug.pory"

# 855 "data/scripts/debug.pory"
	Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 856 "data/scripts/debug.pory"
		.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 857 "data/scripts/debug.pory"

# 858 "data/scripts/debug.pory"

# 859 "data/scripts/debug.pory"
	Debug_EventScript_TellTheTime_Text_0:
# 860 "data/scripts/debug.pory"
		.string "Time and date:\n"
# 861 "data/scripts/debug.pory"
		.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 862 "data/scripts/debug.pory"

# 863 "data/scripts/debug.pory"
	DebugEventScript_PrintWeekday_Text_0:
# 864 "data/scripts/debug.pory"
		.string "Time of day: {STR_VAR_1}$"

Debug_EventScript_Script_5_Text_0:
# 113 "data/scripts/debug.pory"
	.string "Use Surf?$"
