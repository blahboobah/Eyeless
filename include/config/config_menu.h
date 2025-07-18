#pragma once

/*****************
 * MENU SETTINGS *
 *****************/

// -- EXIT COURSE SETTINGS --

/**
 * Disables Exit Course.
 */
// #define DISABLE_EXIT_COURSE

/**
 * Decides whether you can exit course while moving (has no effect if you disable Exit Course).
 */
// #define EXIT_COURSE_WHILE_MOVING

/**
 * Decides whether to treat exiting course as if the player had died. 
 * If enabled, the player will get warped to the failure warp node when selecting EXIT COURSE. (Has no effect if you disable Exit Course)
 */
 #define DEATH_ON_EXIT_COURSE

/**
 * Decides which level, area and warp ID the "Exit Course" option takes you to (has no effect if you disable Exit Course or enable DEATH_ON_EXIT_COURSE).
 * Ensure that the warp exists, or else the game will crash.
 */
#define EXIT_COURSE_LEVEL LEVEL_CASTLE
#define EXIT_COURSE_AREA 0x01
#define EXIT_COURSE_NODE 0x1F
