BufferWelcomeTextByTime::
# 53 "data/scripts/new.pory"
	gettime
# 54 "data/scripts/new.pory"
	compare VAR_0x8000, 19
	goto_if_ge BufferWelcomeTextByTime_1
# 55 "data/scripts/new.pory"
	compare VAR_0x8000, 3
	goto_if_le BufferWelcomeTextByTime_1
# 57 "data/scripts/new.pory"
	compare VAR_0x8000, 12
	goto_if_lt BufferWelcomeTextByTime_2
# 60 "data/scripts/new.pory"
	bufferstring STR_VAR_1, BufferWelcomeTextByTime_Text_2
	return

BufferWelcomeTextByTime_1:
# 56 "data/scripts/new.pory"
	bufferstring STR_VAR_1, BufferWelcomeTextByTime_Text_0
	return

BufferWelcomeTextByTime_2:
# 58 "data/scripts/new.pory"
	bufferstring STR_VAR_1, BufferWelcomeTextByTime_Text_1
	return


BufferClerkTextByTime::
# 64 "data/scripts/new.pory"
	call BufferWelcomeTextByTime
# 65 "data/scripts/new.pory"
	message BufferClerkTextByTime_Text_0
	return


BufferNurseTextByTime::
# 70 "data/scripts/new.pory"
	call BufferWelcomeTextByTime
# 71 "data/scripts/new.pory"
	msgbox BufferNurseTextByTime_Text_0, MSGBOX_YESNO
	return


EventScript_RandomWeather::
	return


EventScript_RandomWeather_SetNext:
# 98 "data/scripts/new.pory"
	copyvar VAR_LAST_HOUR, VAR_0x8000
# 99 "data/scripts/new.pory"
	copyvar VAR_LAST_MINUTE, VAR_0x8001
# 102 "data/scripts/new.pory"
	copyvar VAR_CURRENT_WEATHER, VAR_NEXT_WEATHER
# 103 "data/scripts/new.pory"
	copyvar VAR_NEXT_WEATHER, VAR_NEXT2_WEATHER
# 106 "data/scripts/new.pory"
	call EventScript_RandomWeather_DoCurrent
# 109 "data/scripts/new.pory"
	setvar VAR_TEMP_C, FALSE
# 110 "data/scripts/new.pory"
	random 120
# 112 "data/scripts/new.pory"
	switch VAR_WEATHER_SET
# 114 "data/scripts/new.pory"
	case WEATHER_SET_DEFAULT, EventScript_RandomWeather_SetNext_3
# 120 "data/scripts/new.pory"
	case WEATHER_SET_DEFAULT_PLUS, EventScript_RandomWeather_SetNext_4
# 149 "data/scripts/new.pory"
	case WEATHER_SET_ANY, EventScript_RandomWeather_SetNext_5
EventScript_RandomWeather_SetNext_3:
# 115 "data/scripts/new.pory"
	compare VAR_RESULT, 99
	goto_if_gt EventScript_RandomWeather_SetNext_15
# 118 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 0
EventScript_RandomWeather_SetNext_1:
# 187 "data/scripts/new.pory"
	compare VAR_TEMP_C, FALSE
	goto_if_eq EventScript_RandomWeather_SetNext_8
	return

EventScript_RandomWeather_SetNext_4:
# 121 "data/scripts/new.pory"
	compare VAR_RESULT, 99
	goto_if_gt EventScript_RandomWeather_SetNext_18
# 128 "data/scripts/new.pory"
	compare VAR_RESULT, 79
	goto_if_gt EventScript_RandomWeather_SetNext_19
# 139 "data/scripts/new.pory"
	compare VAR_RESULT, 59
	goto_if_gt EventScript_RandomWeather_SetNext_20
# 147 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 0
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_5:
# 150 "data/scripts/new.pory"
	compare VAR_RESULT, 114
	goto_if_gt EventScript_RandomWeather_SetNext_25
# 152 "data/scripts/new.pory"
	compare VAR_RESULT, 109
	goto_if_gt EventScript_RandomWeather_SetNext_26
# 159 "data/scripts/new.pory"
	compare VAR_RESULT, 99
	goto_if_gt EventScript_RandomWeather_SetNext_27
# 170 "data/scripts/new.pory"
	compare VAR_RESULT, 89
	goto_if_gt EventScript_RandomWeather_SetNext_28
# 179 "data/scripts/new.pory"
	compare VAR_RESULT, 59
	goto_if_gt EventScript_RandomWeather_SetNext_29
# 182 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 0
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_6:
# 190 "data/scripts/new.pory"
	switch VAR_WEATHER_SET
# 196 "data/scripts/new.pory"
	case WEATHER_SET_DEFAULT, EventScript_RandomWeather_SetNext_38
	random 5
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_RandomWeather_SetNext_64
	return

EventScript_RandomWeather_SetNext_7:
# 189 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 7
	goto_if_ne EventScript_RandomWeather_SetNext_6
	return

EventScript_RandomWeather_SetNext_8:
# 188 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 0
	goto_if_ne EventScript_RandomWeather_SetNext_7
	return

EventScript_RandomWeather_SetNext_12:
# 116 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 1
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_13:
# 118 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 0
	goto EventScript_RandomWeather_SetNext_1

# 115 "data/scripts/new.pory"
	compare VAR_RESULT, 99
	goto_if_gt EventScript_RandomWeather_SetNext_12
	goto EventScript_RandomWeather_SetNext_13

EventScript_RandomWeather_SetNext_15:
# 116 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 1
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_18:
# 122 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 4
# 123 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 4
	goto_if_eq EventScript_RandomWeather_SetNext_40
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_19:
# 129 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 3
# 130 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 3
	goto_if_eq EventScript_RandomWeather_SetNext_44
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_20:
# 140 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 1
# 141 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 1
	goto_if_eq EventScript_RandomWeather_SetNext_48
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_25:
# 151 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 5
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_26:
# 153 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 4
# 154 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 4
	goto_if_eq EventScript_RandomWeather_SetNext_52
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_27:
# 160 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 3
# 161 "data/scripts/new.pory"
	compare VAR_CURRENT_WEATHER, 3
	goto_if_eq EventScript_RandomWeather_SetNext_56
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_28:
# 172 "data/scripts/new.pory"
	gettime
# 173 "data/scripts/new.pory"
	compare VAR_0x8000, ( 18 - 2 )
	goto_if_le EventScript_RandomWeather_SetNext_61
EventScript_RandomWeather_SetNext_60:
# 177 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 6
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_29:
# 180 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 1
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_38:
	random 2
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_RandomWeather_SetNext_66
	return

EventScript_RandomWeather_SetNext_39:
# 125 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 3
# 126 "data/scripts/new.pory"
	setvar VAR_TEMP_C, TRUE
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_40:
	random 50
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 29
	goto_if_gt EventScript_RandomWeather_SetNext_39
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_43:
# 132 "data/scripts/new.pory"
	setvar VAR_TEMP_C, TRUE
	random 2
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_RandomWeather_SetNext_68
# 136 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 1
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_44:
	random 50
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 29
	goto_if_gt EventScript_RandomWeather_SetNext_43
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_47:
# 143 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 3
# 144 "data/scripts/new.pory"
	setvar VAR_TEMP_C, TRUE
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_48:
	random 50
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 29
	goto_if_gt EventScript_RandomWeather_SetNext_47
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_51:
# 156 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 3
# 157 "data/scripts/new.pory"
	setvar VAR_TEMP_C, TRUE
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_52:
	random 50
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 29
	goto_if_gt EventScript_RandomWeather_SetNext_51
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_55:
# 163 "data/scripts/new.pory"
	setvar VAR_TEMP_C, TRUE
	random 2
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_RandomWeather_SetNext_71
# 167 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 1
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_56:
	random 50
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 29
	goto_if_gt EventScript_RandomWeather_SetNext_55
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_59:
# 175 "data/scripts/new.pory"
	setvar VAR_NEXT2_WEATHER, 2
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_61:
# 174 "data/scripts/new.pory"
	compare VAR_0x8000, ( 10 - 2 )
	goto_if_ge EventScript_RandomWeather_SetNext_59
	goto EventScript_RandomWeather_SetNext_60

EventScript_RandomWeather_SetNext_64:
# 194 "data/scripts/new.pory"
	copyvar VAR_NEXT_WEATHER, VAR_CURRENT_WEATHER
	return

EventScript_RandomWeather_SetNext_66:
# 199 "data/scripts/new.pory"
	copyvar VAR_NEXT_WEATHER, VAR_CURRENT_WEATHER
	return

EventScript_RandomWeather_SetNext_68:
# 134 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 4
	goto EventScript_RandomWeather_SetNext_1

EventScript_RandomWeather_SetNext_71:
# 165 "data/scripts/new.pory"
	setvar VAR_NEXT_WEATHER, 4
	goto EventScript_RandomWeather_SetNext_1


EventScript_RandomWeather_DoCurrent:
# 205 "data/scripts/new.pory"
	switch VAR_CURRENT_WEATHER
# 206 "data/scripts/new.pory"
	case 1, EventScript_RandomWeather_DoCurrent_3
# 208 "data/scripts/new.pory"
	case 2, EventScript_RandomWeather_DoCurrent_4
# 217 "data/scripts/new.pory"
	case 3, EventScript_RandomWeather_DoCurrent_5
# 219 "data/scripts/new.pory"
	case 4, EventScript_RandomWeather_DoCurrent_6
# 221 "data/scripts/new.pory"
	case 5, EventScript_RandomWeather_DoCurrent_7
# 223 "data/scripts/new.pory"
	case 6, EventScript_RandomWeather_DoCurrent_8
# 232 "data/scripts/new.pory"
	case 7, EventScript_RandomWeather_DoCurrent_9
EventScript_RandomWeather_DoCurrent_9:
# 234 "data/scripts/new.pory"
	setweather WEATHER_SUNNY
EventScript_RandomWeather_DoCurrent_1:
# 236 "data/scripts/new.pory"
	doweather
	return

EventScript_RandomWeather_DoCurrent_3:
# 207 "data/scripts/new.pory"
	setweather WEATHER_RAIN
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_4:
# 209 "data/scripts/new.pory"
	gettime
# 210 "data/scripts/new.pory"
	compare VAR_0x8000, 18
	goto_if_le EventScript_RandomWeather_DoCurrent_12
EventScript_RandomWeather_DoCurrent_11:
# 214 "data/scripts/new.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 215 "data/scripts/new.pory"
	setvar VAR_CURRENT_WEATHER, 6
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_5:
# 218 "data/scripts/new.pory"
	setweather WEATHER_SHADE
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_6:
# 220 "data/scripts/new.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_7:
# 222 "data/scripts/new.pory"
	setweather WEATHER_SNOW
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_8:
# 224 "data/scripts/new.pory"
	gettime
# 225 "data/scripts/new.pory"
	compare VAR_0x8000, 18
	goto_if_gt EventScript_RandomWeather_DoCurrent_15
# 226 "data/scripts/new.pory"
	compare VAR_0x8000, 10
	goto_if_lt EventScript_RandomWeather_DoCurrent_15
# 229 "data/scripts/new.pory"
	setweather WEATHER_DROUGHT
# 230 "data/scripts/new.pory"
	setvar VAR_CURRENT_WEATHER, 2
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_10:
# 212 "data/scripts/new.pory"
	setweather WEATHER_DROUGHT
	goto EventScript_RandomWeather_DoCurrent_1

EventScript_RandomWeather_DoCurrent_12:
# 211 "data/scripts/new.pory"
	compare VAR_0x8000, 10
	goto_if_ge EventScript_RandomWeather_DoCurrent_10
	goto EventScript_RandomWeather_DoCurrent_11

EventScript_RandomWeather_DoCurrent_15:
# 227 "data/scripts/new.pory"
	setweather WEATHER_FOG_HORIZONTAL
	goto EventScript_RandomWeather_DoCurrent_1


EventScript_TimeWeather::
# 240 "data/scripts/new.pory"
	lockall
# 242 "data/scripts/new.pory"
	call EventScript_BufferTime
# 243 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_0
# 244 "data/scripts/new.pory"
	call EventScript_BufferLastTime
# 245 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_1
# 246 "data/scripts/new.pory"
	switch VAR_CURRENT_WEATHER
# 247 "data/scripts/new.pory"
	case 1, EventScript_TimeWeather_3
# 249 "data/scripts/new.pory"
	case 2, EventScript_TimeWeather_4
# 251 "data/scripts/new.pory"
	case 3, EventScript_TimeWeather_5
# 253 "data/scripts/new.pory"
	case 4, EventScript_TimeWeather_6
# 255 "data/scripts/new.pory"
	case 5, EventScript_TimeWeather_7
# 257 "data/scripts/new.pory"
	case 6, EventScript_TimeWeather_8
# 259 "data/scripts/new.pory"
	case 7, EventScript_TimeWeather_9
# 262 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_9
EventScript_TimeWeather_1:
# 264 "data/scripts/new.pory"
	switch VAR_WEATHER_SET
# 265 "data/scripts/new.pory"
	case WEATHER_SET_DEFAULT, EventScript_TimeWeather_13
# 267 "data/scripts/new.pory"
	case WEATHER_SET_DEFAULT_PLUS, EventScript_TimeWeather_14
# 269 "data/scripts/new.pory"
	case WEATHER_SET_RAIN_ONLY, EventScript_TimeWeather_15
# 271 "data/scripts/new.pory"
	case WEATHER_SET_RAIN_PLUS, EventScript_TimeWeather_16
# 273 "data/scripts/new.pory"
	case WEATHER_SET_SNOW_CYCLE, EventScript_TimeWeather_17
# 275 "data/scripts/new.pory"
	case WEATHER_SET_SNOW_ONLY, EventScript_TimeWeather_18
# 277 "data/scripts/new.pory"
	case WEATHER_SET_ANY, EventScript_TimeWeather_19
EventScript_TimeWeather_11:
# 280 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_17
# 282 "data/scripts/new.pory"
	switch VAR_NEXT2_WEATHER
# 283 "data/scripts/new.pory"
	case 1, EventScript_TimeWeather_22
# 285 "data/scripts/new.pory"
	case 2, EventScript_TimeWeather_23
# 287 "data/scripts/new.pory"
	case 3, EventScript_TimeWeather_24
# 289 "data/scripts/new.pory"
	case 4, EventScript_TimeWeather_25
# 291 "data/scripts/new.pory"
	case 5, EventScript_TimeWeather_26
# 293 "data/scripts/new.pory"
	case 6, EventScript_TimeWeather_27
# 295 "data/scripts/new.pory"
	case 7, EventScript_TimeWeather_28
# 298 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_9
EventScript_TimeWeather_20:
# 300 "data/scripts/new.pory"
	switch VAR_NEXT_WEATHER
# 301 "data/scripts/new.pory"
	case 1, EventScript_TimeWeather_32
# 303 "data/scripts/new.pory"
	case 2, EventScript_TimeWeather_33
# 305 "data/scripts/new.pory"
	case 3, EventScript_TimeWeather_34
# 307 "data/scripts/new.pory"
	case 4, EventScript_TimeWeather_35
# 309 "data/scripts/new.pory"
	case 5, EventScript_TimeWeather_36
# 311 "data/scripts/new.pory"
	case 6, EventScript_TimeWeather_37
# 313 "data/scripts/new.pory"
	case 7, EventScript_TimeWeather_38
# 316 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_9
EventScript_TimeWeather_30:
# 318 "data/scripts/new.pory"
	switch VAR_TEMP_F
# 319 "data/scripts/new.pory"
	case 231, EventScript_TimeWeather_42
# 322 "data/scripts/new.pory"
	case 232, EventScript_TimeWeather_43
# 326 "data/scripts/new.pory"
	case 233, EventScript_TimeWeather_44
# 329 "data/scripts/new.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_F
# 330 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_21
EventScript_TimeWeather_40:
# 333 "data/scripts/new.pory"
	closemessage
# 334 "data/scripts/new.pory"
	releaseall
	end

EventScript_TimeWeather_3:
# 248 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_2
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_4:
# 250 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_3
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_5:
# 252 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_4
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_6:
# 254 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_5
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_7:
# 256 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_6
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_8:
# 258 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_7
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_9:
# 260 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_8
	goto EventScript_TimeWeather_1

EventScript_TimeWeather_13:
# 266 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_10
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_14:
# 268 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_11
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_15:
# 270 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_12
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_16:
# 272 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_13
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_17:
# 274 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_14
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_18:
# 276 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_15
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_19:
# 278 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_TimeWeather_Text_16
	goto EventScript_TimeWeather_11

EventScript_TimeWeather_22:
# 284 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_2
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_23:
# 286 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_3
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_24:
# 288 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_4
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_25:
# 290 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_5
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_26:
# 292 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_6
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_27:
# 294 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_7
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_28:
# 296 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_TimeWeather_Text_8
	goto EventScript_TimeWeather_20

EventScript_TimeWeather_32:
# 302 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_2
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_33:
# 304 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_3
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_34:
# 306 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_4
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_35:
# 308 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_5
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_36:
# 310 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_6
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_37:
# 312 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_7
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_38:
# 314 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_TimeWeather_Text_8
	goto EventScript_TimeWeather_30

EventScript_TimeWeather_42:
# 320 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_18
	goto EventScript_TimeWeather_40

EventScript_TimeWeather_43:
# 323 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_19
	goto EventScript_TimeWeather_40

EventScript_TimeWeather_44:
# 327 "data/scripts/new.pory"
	msgbox EventScript_TimeWeather_Text_20
	goto EventScript_TimeWeather_40


EventScript_BufferTime::
# 342 "data/scripts/new.pory"
	gettime
# 345 "data/scripts/new.pory"
	goto_if_unset FLAG_SYS_USE_24HR, EventScript_BufferTime_2
# 361 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_2
# 362 "data/scripts/new.pory"
	switch VAR_0x8000
# 365 "data/scripts/new.pory"
	case 0, EventScript_BufferTime_24
# 367 "data/scripts/new.pory"
	case 1, EventScript_BufferTime_25
# 369 "data/scripts/new.pory"
	case 2, EventScript_BufferTime_26
# 371 "data/scripts/new.pory"
	case 3, EventScript_BufferTime_27
# 373 "data/scripts/new.pory"
	case 4, EventScript_BufferTime_28
# 375 "data/scripts/new.pory"
	case 5, EventScript_BufferTime_29
# 377 "data/scripts/new.pory"
	case 6, EventScript_BufferTime_30
# 379 "data/scripts/new.pory"
	case 7, EventScript_BufferTime_31
# 381 "data/scripts/new.pory"
	case 8, EventScript_BufferTime_32
# 383 "data/scripts/new.pory"
	case 9, EventScript_BufferTime_33
# 364 "data/scripts/new.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
EventScript_BufferTime_1:
# 389 "data/scripts/new.pory"
	switch VAR_0x8001
# 392 "data/scripts/new.pory"
	case 0, EventScript_BufferTime_7
# 394 "data/scripts/new.pory"
	case 1, EventScript_BufferTime_8
# 396 "data/scripts/new.pory"
	case 2, EventScript_BufferTime_9
# 398 "data/scripts/new.pory"
	case 3, EventScript_BufferTime_10
# 400 "data/scripts/new.pory"
	case 4, EventScript_BufferTime_11
# 402 "data/scripts/new.pory"
	case 5, EventScript_BufferTime_12
# 404 "data/scripts/new.pory"
	case 6, EventScript_BufferTime_13
# 406 "data/scripts/new.pory"
	case 7, EventScript_BufferTime_14
# 408 "data/scripts/new.pory"
	case 8, EventScript_BufferTime_15
# 410 "data/scripts/new.pory"
	case 9, EventScript_BufferTime_16
# 391 "data/scripts/new.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
	return

EventScript_BufferTime_2:
# 346 "data/scripts/new.pory"
	copyvar VAR_TEMP_A, VAR_0x8000
# 347 "data/scripts/new.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq EventScript_BufferTime_18
# 349 "data/scripts/new.pory"
	compare VAR_TEMP_A, 12
	goto_if_gt EventScript_BufferTime_19
EventScript_BufferTime_17:
# 352 "data/scripts/new.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_A
# 355 "data/scripts/new.pory"
	compare VAR_0x8000, 12
	goto_if_lt EventScript_BufferTime_34
# 358 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_1
	goto EventScript_BufferTime_1

EventScript_BufferTime_7:
# 393 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_3
	return

EventScript_BufferTime_8:
# 395 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_4
	return

EventScript_BufferTime_9:
# 397 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_5
	return

EventScript_BufferTime_10:
# 399 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_6
	return

EventScript_BufferTime_11:
# 401 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_7
	return

EventScript_BufferTime_12:
# 403 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_8
	return

EventScript_BufferTime_13:
# 405 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_9
	return

EventScript_BufferTime_14:
# 407 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_10
	return

EventScript_BufferTime_15:
# 409 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_11
	return

EventScript_BufferTime_16:
# 411 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_12
	return

EventScript_BufferTime_18:
# 348 "data/scripts/new.pory"
	setvar VAR_TEMP_A, 12
	goto EventScript_BufferTime_17

EventScript_BufferTime_19:
# 350 "data/scripts/new.pory"
	subvar VAR_TEMP_A, 12
	goto EventScript_BufferTime_17

EventScript_BufferTime_24:
# 366 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_3
	goto EventScript_BufferTime_1

EventScript_BufferTime_25:
# 368 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_4
	goto EventScript_BufferTime_1

EventScript_BufferTime_26:
# 370 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_5
	goto EventScript_BufferTime_1

EventScript_BufferTime_27:
# 372 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_6
	goto EventScript_BufferTime_1

EventScript_BufferTime_28:
# 374 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_7
	goto EventScript_BufferTime_1

EventScript_BufferTime_29:
# 376 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_8
	goto EventScript_BufferTime_1

EventScript_BufferTime_30:
# 378 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_9
	goto EventScript_BufferTime_1

EventScript_BufferTime_31:
# 380 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_10
	goto EventScript_BufferTime_1

EventScript_BufferTime_32:
# 382 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_11
	goto EventScript_BufferTime_1

EventScript_BufferTime_33:
# 384 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_12
	goto EventScript_BufferTime_1

EventScript_BufferTime_34:
# 356 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_0
	goto EventScript_BufferTime_1


EventScript_BufferLastTime::
# 420 "data/scripts/new.pory"
	goto_if_unset FLAG_SYS_USE_24HR, EventScript_BufferLastTime_2
# 436 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_2
# 437 "data/scripts/new.pory"
	switch VAR_LAST_HOUR
# 440 "data/scripts/new.pory"
	case 0, EventScript_BufferLastTime_24
# 442 "data/scripts/new.pory"
	case 1, EventScript_BufferLastTime_25
# 444 "data/scripts/new.pory"
	case 2, EventScript_BufferLastTime_26
# 446 "data/scripts/new.pory"
	case 3, EventScript_BufferLastTime_27
# 448 "data/scripts/new.pory"
	case 4, EventScript_BufferLastTime_28
# 450 "data/scripts/new.pory"
	case 5, EventScript_BufferLastTime_29
# 452 "data/scripts/new.pory"
	case 6, EventScript_BufferLastTime_30
# 454 "data/scripts/new.pory"
	case 7, EventScript_BufferLastTime_31
# 456 "data/scripts/new.pory"
	case 8, EventScript_BufferLastTime_32
# 458 "data/scripts/new.pory"
	case 9, EventScript_BufferLastTime_33
# 439 "data/scripts/new.pory"
	buffernumberstring STR_VAR_1, VAR_LAST_HOUR
EventScript_BufferLastTime_1:
# 464 "data/scripts/new.pory"
	switch VAR_LAST_MINUTE
# 467 "data/scripts/new.pory"
	case 0, EventScript_BufferLastTime_7
# 469 "data/scripts/new.pory"
	case 1, EventScript_BufferLastTime_8
# 471 "data/scripts/new.pory"
	case 2, EventScript_BufferLastTime_9
# 473 "data/scripts/new.pory"
	case 3, EventScript_BufferLastTime_10
# 475 "data/scripts/new.pory"
	case 4, EventScript_BufferLastTime_11
# 477 "data/scripts/new.pory"
	case 5, EventScript_BufferLastTime_12
# 479 "data/scripts/new.pory"
	case 6, EventScript_BufferLastTime_13
# 481 "data/scripts/new.pory"
	case 7, EventScript_BufferLastTime_14
# 483 "data/scripts/new.pory"
	case 8, EventScript_BufferLastTime_15
# 485 "data/scripts/new.pory"
	case 9, EventScript_BufferLastTime_16
# 466 "data/scripts/new.pory"
	buffernumberstring STR_VAR_2, VAR_LAST_MINUTE
	return

EventScript_BufferLastTime_2:
# 421 "data/scripts/new.pory"
	copyvar VAR_TEMP_A, VAR_LAST_HOUR
# 422 "data/scripts/new.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq EventScript_BufferLastTime_18
# 424 "data/scripts/new.pory"
	compare VAR_TEMP_A, 12
	goto_if_gt EventScript_BufferLastTime_19
EventScript_BufferLastTime_17:
# 427 "data/scripts/new.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_A
# 430 "data/scripts/new.pory"
	compare VAR_LAST_HOUR, 12
	goto_if_lt EventScript_BufferLastTime_34
# 433 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_1
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_7:
# 468 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_3
	return

EventScript_BufferLastTime_8:
# 470 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_4
	return

EventScript_BufferLastTime_9:
# 472 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_5
	return

EventScript_BufferLastTime_10:
# 474 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_6
	return

EventScript_BufferLastTime_11:
# 476 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_7
	return

EventScript_BufferLastTime_12:
# 478 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_8
	return

EventScript_BufferLastTime_13:
# 480 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_9
	return

EventScript_BufferLastTime_14:
# 482 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_10
	return

EventScript_BufferLastTime_15:
# 484 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_11
	return

EventScript_BufferLastTime_16:
# 486 "data/scripts/new.pory"
	bufferstring STR_VAR_2, EventScript_BufferTime_Text_12
	return

EventScript_BufferLastTime_18:
# 423 "data/scripts/new.pory"
	setvar VAR_TEMP_A, 12
	goto EventScript_BufferLastTime_17

EventScript_BufferLastTime_19:
# 425 "data/scripts/new.pory"
	subvar VAR_TEMP_A, 12
	goto EventScript_BufferLastTime_17

EventScript_BufferLastTime_24:
# 441 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_3
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_25:
# 443 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_4
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_26:
# 445 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_5
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_27:
# 447 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_6
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_28:
# 449 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_7
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_29:
# 451 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_8
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_30:
# 453 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_9
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_31:
# 455 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_10
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_32:
# 457 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_11
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_33:
# 459 "data/scripts/new.pory"
	bufferstring STR_VAR_1, EventScript_BufferTime_Text_12
	goto EventScript_BufferLastTime_1

EventScript_BufferLastTime_34:
# 431 "data/scripts/new.pory"
	bufferstring STR_VAR_3, EventScript_BufferTime_Text_0
	goto EventScript_BufferLastTime_1


StaticMonItemDropChance::
# 494 "data/scripts/new.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 495 "data/scripts/new.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq StaticMonItemDropChance_1
# 496 "data/scripts/new.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq StaticMonItemDropChance_1
	return

StaticMonItemDropChance_1:
	random 100
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 25
	goto_if_lt StaticMonItemDropChance_5
# 498 "data/scripts/new.pory"
	goto_if_set FLAG_TEMP_10, StaticMonItemDropChance_5
	return

StaticMonItemDropChance_5:
# 499 "data/scripts/new.pory"
	compare VAR_TEMP_E, 0
	goto_if_eq StaticMonItemDropChance_10
StaticMonItemDropChance_9:
# 504 "data/scripts/new.pory"
	msgbox StaticMonItemDropChance_Text_0
# 505 "data/scripts/new.pory"
	giveitem VAR_TEMP_D, VAR_TEMP_E
# 536 "data/scripts/new.pory"
	clearflag FLAG_TEMP_10
	return

StaticMonItemDropChance_10:
# 500 "data/scripts/new.pory"
	random 5
# 501 "data/scripts/new.pory"
	addvar VAR_RESULT, 1
# 502 "data/scripts/new.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
	goto StaticMonItemDropChance_9


GymSetTrainersAndGiveTM::
# 552 "data/scripts/new.pory"
	switch VAR_0x8008
# 553 "data/scripts/new.pory"
	case 1, GymSetTrainersAndGiveTM_3
# 560 "data/scripts/new.pory"
	case 2, GymSetTrainersAndGiveTM_4
# 572 "data/scripts/new.pory"
	giveitem ITEM_NUGGET
GymSetTrainersAndGiveTM_1:
# 574 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_ne GymSetTrainersAndGiveTM_6
# 589 "data/scripts/new.pory"
	call Common_EventScript_BagIsFull
	return

GymSetTrainersAndGiveTM_3:
# 554 "data/scripts/new.pory"
	settrainerflag TRAINER_JOSH
# 555 "data/scripts/new.pory"
	settrainerflag TRAINER_TOMMY
# 556 "data/scripts/new.pory"
	settrainerflag TRAINER_MARC
# 558 "data/scripts/new.pory"
	giveitem ITEM_TM_AERIAL_ACE
	goto GymSetTrainersAndGiveTM_1

GymSetTrainersAndGiveTM_4:
# 561 "data/scripts/new.pory"
	settrainerflag TRAINER_TAKAO
# 562 "data/scripts/new.pory"
	settrainerflag TRAINER_JOCELYN
# 563 "data/scripts/new.pory"
	settrainerflag TRAINER_LAURA
# 564 "data/scripts/new.pory"
	settrainerflag TRAINER_BRENDEN
# 565 "data/scripts/new.pory"
	settrainerflag TRAINER_CRISTIAN
# 566 "data/scripts/new.pory"
	settrainerflag TRAINER_LILITH
# 567 "data/scripts/new.pory"
	settrainerflag TRAINER_DARIAN
# 569 "data/scripts/new.pory"
	giveitem ITEM_TM_AQUA_CUTTER
	goto GymSetTrainersAndGiveTM_1

GymSetTrainersAndGiveTM_6:
# 575 "data/scripts/new.pory"
	switch VAR_0x8008
# 576 "data/scripts/new.pory"
	case 1, GymSetTrainersAndGiveTM_10
# 581 "data/scripts/new.pory"
	case 2, GymSetTrainersAndGiveTM_11
# 587 "data/scripts/new.pory"
	msgbox GymSetTrainersAndGiveTM_Text_2
	return

GymSetTrainersAndGiveTM_10:
# 577 "data/scripts/new.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 578 "data/scripts/new.pory"
	msgbox GymSetTrainersAndGiveTM_Text_0
	return

GymSetTrainersAndGiveTM_11:
# 582 "data/scripts/new.pory"
	setflag FLAG_RECEIVED_TM_AQUA_CUTTER
# 583 "data/scripts/new.pory"
	msgbox GymSetTrainersAndGiveTM_Text_1
	return


EventScript_ViewMap::
# 593 "data/scripts/new.pory"
	lockall
# 594 "data/scripts/new.pory"
	fadescreen FADE_TO_BLACK
# 595 "data/scripts/new.pory"
	special FieldShowRegionMap
# 596 "data/scripts/new.pory"
	releaseall
	end


Common_EventScript_MartClerk::
# 601 "data/scripts/new.pory"
	lock
# 602 "data/scripts/new.pory"
	faceplayer
# 603 "data/scripts/new.pory"
	call BufferClerkTextByTime
# 604 "data/scripts/new.pory"
	waitmessage
# 605 "data/scripts/new.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Common_EventScript_MartClerk_2
# 608 "data/scripts/new.pory"
	pokemart
Common_EventScript_MartClerk_1:
# 610 "data/scripts/new.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end

Common_EventScript_MartClerk_2:
# 606 "data/scripts/new.pory"
	pokemart PokemartNoDex
	goto Common_EventScript_MartClerk_1


	.align 2
# 614 "data/scripts/new.pory"
PokemartNoDex:
# 615 "data/scripts/new.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

StaticMonNpc::
# 621 "data/scripts/new.pory"
	lock
# 622 "data/scripts/new.pory"
	faceplayer
	random 4
# 0 "data/scripts/new.pory"
	compare VAR_RESULT, 0
	goto_if_eq StaticMonNpc_2
# 626 "data/scripts/new.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_NORMAL
StaticMonNpc_1:
# 628 "data/scripts/new.pory"
	waitmoncry
# 629 "data/scripts/new.pory"
	delay 8
# 630 "data/scripts/new.pory"
	release
	end

StaticMonNpc_2:
# 624 "data/scripts/new.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_DOUBLES
	goto StaticMonNpc_1


BufferWelcomeTextByTime_Text_0:
# 56 "data/scripts/new.pory"
	.string "Good evening$"

BufferWelcomeTextByTime_Text_1:
# 58 "data/scripts/new.pory"
	.string "Good morning$"

BufferWelcomeTextByTime_Text_2:
# 60 "data/scripts/new.pory"
	.string "Welcome$"

BufferClerkTextByTime_Text_0:
# 65 "data/scripts/new.pory"
	.string "{STR_VAR_1}!\n"
	.string "How may I serve you?$"

BufferNurseTextByTime_Text_0:
# 71 "data/scripts/new.pory"
	.string "{STR_VAR_1}! Would you like me to heal\n"
	.string "your Pokémon back to perfect health?$"

EventScript_TimeWeather_Text_0:
# 243 "data/scripts/new.pory"
	.string "Current Time: {STR_VAR_1}:{STR_VAR_2}{STR_VAR_3}$"

EventScript_TimeWeather_Text_1:
# 245 "data/scripts/new.pory"
	.string "Last Time: {STR_VAR_1}:{STR_VAR_2}{STR_VAR_3}$"

EventScript_TimeWeather_Text_2:
# 248 "data/scripts/new.pory"
	.string "Rain$"

EventScript_TimeWeather_Text_3:
# 250 "data/scripts/new.pory"
	.string "Drought$"

EventScript_TimeWeather_Text_4:
# 252 "data/scripts/new.pory"
	.string "Shade$"

EventScript_TimeWeather_Text_5:
# 254 "data/scripts/new.pory"
	.string "Thunderstorm$"

EventScript_TimeWeather_Text_6:
# 256 "data/scripts/new.pory"
	.string "Snow$"

EventScript_TimeWeather_Text_7:
# 258 "data/scripts/new.pory"
	.string "Fog$"

EventScript_TimeWeather_Text_8:
# 260 "data/scripts/new.pory"
	.string "Forced Clear$"

EventScript_TimeWeather_Text_9:
# 262 "data/scripts/new.pory"
	.string "Clear$"

EventScript_TimeWeather_Text_10:
# 266 "data/scripts/new.pory"
	.string "Default$"

EventScript_TimeWeather_Text_11:
# 268 "data/scripts/new.pory"
	.string "Default+$"

EventScript_TimeWeather_Text_12:
# 270 "data/scripts/new.pory"
	.string "Rain Only$"

EventScript_TimeWeather_Text_13:
# 272 "data/scripts/new.pory"
	.string "Rain+$"

EventScript_TimeWeather_Text_14:
# 274 "data/scripts/new.pory"
	.string "Snow Cycle$"

EventScript_TimeWeather_Text_15:
# 276 "data/scripts/new.pory"
	.string "Snow Only$"

EventScript_TimeWeather_Text_16:
# 278 "data/scripts/new.pory"
	.string "Any/Unset$"

EventScript_TimeWeather_Text_17:
# 280 "data/scripts/new.pory"
	.string "Weather Set: {STR_VAR_2}\n"
	.string "Current weather: {STR_VAR_1}$"

EventScript_TimeWeather_Text_18:
# 320 "data/scripts/new.pory"
	.string "Next2: {STR_VAR_1}\n"
	.string "Next: {STR_VAR_3} (continued)$"

EventScript_TimeWeather_Text_19:
# 323 "data/scripts/new.pory"
	.string "Pokédex Unobtained\n"
	.string "Next2: {STR_VAR_1}\l"
	.string "Next: {STR_VAR_3}$"

EventScript_TimeWeather_Text_20:
# 327 "data/scripts/new.pory"
	.string "Weather disabled via flag$"

EventScript_TimeWeather_Text_21:
# 330 "data/scripts/new.pory"
	.string "Next2: {STR_VAR_1}, rolled {STR_VAR_2}\n"
	.string "Next: {STR_VAR_3}$"

EventScript_BufferTime_Text_0:
# 356 "data/scripts/new.pory"
	.string " AM$"

EventScript_BufferTime_Text_1:
# 358 "data/scripts/new.pory"
	.string " PM$"

EventScript_BufferTime_Text_2:
# 361 "data/scripts/new.pory"
	.string "$"

EventScript_BufferTime_Text_3:
# 366 "data/scripts/new.pory"
	.string "00$"

EventScript_BufferTime_Text_4:
# 368 "data/scripts/new.pory"
	.string "01$"

EventScript_BufferTime_Text_5:
# 370 "data/scripts/new.pory"
	.string "02$"

EventScript_BufferTime_Text_6:
# 372 "data/scripts/new.pory"
	.string "03$"

EventScript_BufferTime_Text_7:
# 374 "data/scripts/new.pory"
	.string "04$"

EventScript_BufferTime_Text_8:
# 376 "data/scripts/new.pory"
	.string "05$"

EventScript_BufferTime_Text_9:
# 378 "data/scripts/new.pory"
	.string "06$"

EventScript_BufferTime_Text_10:
# 380 "data/scripts/new.pory"
	.string "07$"

EventScript_BufferTime_Text_11:
# 382 "data/scripts/new.pory"
	.string "08$"

EventScript_BufferTime_Text_12:
# 384 "data/scripts/new.pory"
	.string "09$"

StaticMonItemDropChance_Text_0:
# 504 "data/scripts/new.pory"
	.string "The wild Pokémon dropped something!$"

GymSetTrainersAndGiveTM_Text_0:
# 578 "data/scripts/new.pory"
	.string "This is a Techincal Machine, or “TM” for\n"
	.string "short. They can be used to teach your\l"
	.string "Pokémon neat moves, and can be used\l"
	.string "any number of times!\p"
	.string "The TM I gave you contains the move\n"
	.string "Aerial Ace. It's a pretty swift\l"
	.string "Flying-type move that never misses!\p"
	.string "Well, most of the time, usually.$"

GymSetTrainersAndGiveTM_Text_1:
# 583 "data/scripts/new.pory"
	.string "I forged that TM with me own hook!\n"
	.string "Ha ha!\p"
	.string "That there be the move Aqua Cutter, a\n"
	.string "sharp Water-type move with a high\l"
	.string "critical-hit ratio!\p"
	.string "Use it on a Pokémon with a divine\n"
	.string "cutlass! Ha ha ha!$"

GymSetTrainersAndGiveTM_Text_2:
# 587 "data/scripts/new.pory"
	.string "My TM wasn't assigned, so I gave you\n"
	.string "that instead. Sorry!$"
