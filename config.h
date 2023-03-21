/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define RETRO_SHIFT 500
#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 200

#define MOUSEKEY_INTERVAL 20 // ms (default 20)
#define MOUSEKEY_TIME_TO_MAX 100 // ms (default 30)
#define MOUSEKEY_MOVE_DELTA 2 // pixels? (default 8)
#define MOUSEKEY_MAX_SPEED 20 // (default 10)
