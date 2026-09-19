#ifndef GUARD_CONFIG_NEW_H
#define GUARD_CONFIG_NEW_H

// Will eventually be configurable ingame 
#define N_FLEE_ON_B                     TRUE
#define N_SKIP_EXP_MESSAGES             TRUE
// Depends on current anim style
#define N_SKIP_WEATHER_MESSAGES         TRUE

// Story-Important
#define N_NEW_BERRY_PRICES              TRUE

// QOL
#define N_BALL_SPEED                    15
#define N_FAST_BOOT                     FALSE
#define N_TRAINERS_DONT_WALK_TO_PLAYER  TRUE
#define N_BATTLE_START_SPEED            3  // Default 2
#define N_SHINY_STARS_TIMER             30 // Default 60
#define N_FAINT_WAITMONCRY              TRUE
#define N_MUTE_SE_SELECT                FALSE


// Changes the level range of all Pokemon if the player is the champion
#define N_CHAMPION_WILD_MON_LEVEL_SCALE     FALSE
#define N_CHAMP_WILD_MON_SCALE_LEVEL_MAX    60
#define N_CHAMP_WILD_MON_SCALE_LEVEL_MIN    5

#define SELECT_FUNC_KEY_ITEM 0
#define SELECT_FUNC_HEAL 1
#define SELECT_FUNC_TOGGLE_AUTORUN 2
#define SELECT_FUNC_TIME_WEATHER 3
#define SELECT_FUNC_VIEW_MAP 4
#define N_OW_SELECT_FUNC                SELECT_FUNC_KEY_ITEM

#endif // GUARD_CONFIG_NEW_H
