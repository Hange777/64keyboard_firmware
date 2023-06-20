// Copyright %(YEAR)s %(YOUR_NAME)s (@%(USER_NAME)s)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "777.h"


led_config_t g_led_config = { {
  // Key Matrix to LED Index

  //轴灯
  { 0, 1, 2 , 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12, 13},
  { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 },
  { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,NO_LED,40 },
  { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54},
  { 55, 56, 57, NO_LED, 58,NO_LED, 59,NO_LED, 60, 61,62,63,64,65},
}, {
  // LED Index to Physical Position
  { 0,  0 },  { 17,  0  },{34,  0  },{51,  0  },{ 68,  0  },{86,  0  },{103,  0  }, {120,  0  },{137,  0  },{155,  0  },{172,   0 },{189,  0  },{206,  0  },{224,  0  },
  { 0,  16 }, { 17,  16 },{34,  16 },{51,  16 },{ 68,  16 },{86,  16 },{103,  16 }, {120,  16 },{137,  16 },{155,  16 },{172,  16 },{189,  16 },{206,  16 },{224,  16 },
  { 0,  32 }, { 17,  32 },{34,  32 },{51,  32 },{ 68,  32 },{86,  32 },{103,  32 }, {120,  32 },{137,  32 },{155,  32 },{172,  32 },{189,  32 },            {224,  32 },
  { 0,  48 }, { 17,  48 },{34,  48 },{51,  48 },{ 68,  48 },{86,  48 },{103,  48 }, {120,  48 },{137,  48 },{155,  48 },{172,  48 },{189,  48 },{206,  48 },{224,  48 },
  { 0,  64 }, { 17,  64 },{34,  64 },           { 68,  64 },           {103,  64 },             {137,  64 },{155,  64 },{172,  64 },{189,  64 },{206,  64 },{224,  64 },

  //底灯
  {224,  32 },{224,  0 },{155,  0  },{86,  0  },{51,  0  },{ 0,  0 },{ 0,  32 },{ 0,  64 },{51,  64 }, { 68,  64 },{120,  64 },{224,  64 },
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4,    4,    4,    4, 4, 4, 4, 4, 4,

  //底灯
  2,2,2,2,2,2,2,2,2,2,2,2,
} };


void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    //大写红灯
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(28, RGB_RED);
    }
}
