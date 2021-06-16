#ifndef SCROLL_H
#define SCROLL_H

#include "shim/gb_shim.h"

#include "Math.h"

#define SCROLL_BANK 1
#define SCREEN_TILES_W (SCREENWIDTH >> 3) // GBSA
#define SCREEN_TILES_H (SCREENHEIGHT >> 3) // GBSA
#define SCREEN_PAD_LEFT 1
#define SCREEN_PAD_RIGHT 2
#define SCREEN_PAD_TOP 1
#define SCREEN_PAD_BOTTOM 2
#define SCREEN_TILE_REFRES_W (SCREEN_TILES_W + SCREEN_PAD_LEFT + SCREEN_PAD_RIGHT)
#define SCREEN_TILE_REFRES_H (SCREEN_TILES_H + SCREEN_PAD_TOP + SCREEN_PAD_BOTTOM)

extern Pos* scroll_target;
extern INT16 scroll_x;
extern INT16 scroll_y;
extern INT16 draw_scroll_x;
extern INT16 draw_scroll_y;
extern UINT16 scroll_x_max;
extern UINT16 scroll_y_max;
extern INT16 scroll_offset_x;
extern INT16 scroll_offset_y;
extern UINT8 pending_w_i;
extern UINT8 pending_h_i;

/**
 * Initialise scroll variables, call on scene load
 */
void InitScroll();

/**
 * Update scroll position and load in any newly visible background tiles and actors
 */
void RefreshScroll();

/**
 * Same as RefreshScroll() but requires manually switching to bank 1 first
 */
void RefreshScroll_b() __banked;

/**
 * Rerender all onscreen tiles and load all onscreen actors
 */
void RenderScreen();

#endif
