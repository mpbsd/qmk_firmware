/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// LAYERS
enum _L { _QW, _NR, _SB, _FN, _AR };

// KEYS
const uint16_t PROGMEM _K[5][3][10] = {
  // QWERTY {{{
  {
    {
      LT(_AR, KC_Q),
      LT(_FN, KC_W),
      LT(_SB, KC_E),
      LT(_NR, KC_R),
      KC_T,
      KC_Y,
      LT(_NR, KC_U),
      LT(_SB, KC_I),
      LT(_FN, KC_O),
      LT(_AR, KC_P)
    },
    {
      LCTL_T(KC_A),
      LGUI_T(KC_S),
      LALT_T(KC_D),
      LSFT_T(KC_F),
      KC_G,
      KC_H,
      RSFT_T(KC_J),
      RALT_T(KC_K),
      RGUI_T(KC_L),
      RCTL_T(KC_SCLN)
    },
    {
      KC_Z,
      KC_X,
      KC_C,
      KC_V,
      KC_B,
      KC_N,
      KC_M,
      KC_COMM,
      KC_DOT,
      KC_SLSH
    }
  },
  // }}}
  // NUMBERS {{{
  {
    {
      KC_1,
      KC_2,
      KC_3,
      KC_4,
      KC_5,
      KC_6,
      KC_7,
      KC_8,
      KC_9,
      KC_0,
    },
    {
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      KC_PLUS,
      KC_4,
      KC_5,
      KC_6,
      KC_MINS,
    },
    {
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      KC_ASTR,
      KC_1,
      KC_2,
      KC_3,
      KC_SLSH
    }
  },
  // }}}
  // SYMBOLS {{{
  {
    {
      KC_EXLM,
      KC_AT,
      KC_HASH,
      KC_DLR,
      KC_PERC,
      KC_CIRC,
      KC_AMPR,
      KC_ASTR,
      KC_LPRN,
      KC_RPRN,
    },
    {
      KC_LCBR,
      KC_LBRC,
      KC_RBRC,
      KC_RCBR,
      XXXXXXX,
      KC_MINS,
      KC_EQL,
      KC_BSLS,
      KC_GRV,
      KC_QUOT,
    },
    {
      XXXXXXX,
      KC_LT,
      KC_GT,
      XXXXXXX,
      XXXXXXX,
      KC_UNDS,
      KC_PLUS,
      KC_PIPE,
      KC_TILD,
      S(KC_QUOT)
    }
  },
  // }}}
  // FUNCTIONS {{{
  {
    {
      KC_F1,
      KC_F2,
      KC_F3,
      KC_F4,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
    },
    {
      KC_F5,
      KC_F6,
      KC_F7,
      KC_F8,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
    },
    {
      KC_F9,
      KC_F10,
      KC_F11,
      KC_F12,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX
    }
  },
  // }}}
  // ARROWS {{{
  {
    {
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
    },
    {
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      KC_LEFT,
      KC_DOWN,
      KC_UP,
      KC_RGHT,
      XXXXXXX,
    },
    {
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX,
      XXXXXXX
    }
  }
  // }}}
};

// THUMB KEYS
const uint16_t PROGMEM _T[5][2][2] = {
  // QWERTY {{{
  {
    {
      LT(_SB, KC_BSPC),
      LT(_NR, KC_ESC)
    },
    {
      LT(_NR, KC_ENT),
      LT(_SB, KC_SPC)
    }
  },
  // }}}
  // NUMBER {{{
  {
    {
      XXXXXXX,
      XXXXXXX
    },
    {
      KC_TAB,
      KC_0
    }
  },
  // }}}
  // SYMBOLS {{{
  {
    {
      XXXXXXX,
      XXXXXXX
    },
    {
      XXXXXXX,
      XXXXXXX
    }
  },
  // }}}
  // FUNCTIONS {{{
  {
    {
      XXXXXXX,
      XXXXXXX
    },
    {
      XXXXXXX,
      XXXXXXX
    }
  },
  // }}}
  // ARROWS {{{
  {
    {
      XXXXXXX,
      XXXXXXX
    },
    {
      XXXXXXX,
      XXXXXXX
    }
  }
  // }}}
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_QW][0][0], _K[_QW][0][1], _K[_QW][0][2], _K[_QW][0][3], _K[_QW][0][4], _K[_QW][0][5], _K[_QW][0][6], _K[_QW][0][7], _K[_QW][0][8], _K[_QW][0][9], XXXXXXX,
      XXXXXXX, _K[_QW][1][0], _K[_QW][1][1], _K[_QW][1][2], _K[_QW][1][3], _K[_QW][1][4], _K[_QW][1][5], _K[_QW][1][6], _K[_QW][1][7], _K[_QW][1][8], _K[_QW][1][9], XXXXXXX,
      XXXXXXX, _K[_QW][2][0], _K[_QW][2][1], _K[_QW][2][2], _K[_QW][2][3], _K[_QW][2][4], _K[_QW][2][5], _K[_QW][2][6], _K[_QW][2][7], _K[_QW][2][8], _K[_QW][2][9], XXXXXXX,
                                                   XXXXXXX, _T[_QW][0][0], _T[_QW][0][1], _T[_QW][1][0], _T[_QW][1][1],       XXXXXXX
      ),
  [_NR] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_NR][0][0], _K[_NR][0][1], _K[_NR][0][2], _K[_NR][0][3], _K[_NR][0][4], _K[_NR][0][5], _K[_NR][0][6], _K[_NR][0][7], _K[_NR][0][8], _K[_NR][0][9], XXXXXXX,
      XXXXXXX, _K[_NR][1][0], _K[_NR][1][1], _K[_NR][1][2], _K[_NR][1][3], _K[_NR][1][4], _K[_NR][1][5], _K[_NR][1][6], _K[_NR][1][7], _K[_NR][1][8], _K[_NR][1][9], XXXXXXX,
      XXXXXXX, _K[_NR][2][0], _K[_NR][2][1], _K[_NR][2][2], _K[_NR][2][3], _K[_NR][2][4], _K[_NR][2][5], _K[_NR][2][6], _K[_NR][2][7], _K[_NR][2][8], _K[_NR][2][9], XXXXXXX,
                                                   XXXXXXX, _T[_NR][0][0], _T[_NR][0][1], _T[_NR][1][0], _T[_NR][1][1],       XXXXXXX
      ),
  [_SB] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_SB][0][0], _K[_SB][0][1], _K[_SB][0][2], _K[_SB][0][3], _K[_SB][0][4], _K[_SB][0][5], _K[_SB][0][6], _K[_SB][0][7], _K[_SB][0][8], _K[_SB][0][9], XXXXXXX,
      XXXXXXX, _K[_SB][1][0], _K[_SB][1][1], _K[_SB][1][2], _K[_SB][1][3], _K[_SB][1][4], _K[_SB][1][5], _K[_SB][1][6], _K[_SB][1][7], _K[_SB][1][8], _K[_SB][1][9], XXXXXXX,
      XXXXXXX, _K[_SB][2][0], _K[_SB][2][1], _K[_SB][2][2], _K[_SB][2][3], _K[_SB][2][4], _K[_SB][2][5], _K[_SB][2][6], _K[_SB][2][7], _K[_SB][2][8], _K[_SB][2][9], XXXXXXX,
                                                   XXXXXXX, _T[_SB][0][0], _T[_SB][0][1], _T[_SB][1][0], _T[_SB][1][1],       XXXXXXX
      ),
  [_FN] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_FN][0][0], _K[_FN][0][1], _K[_FN][0][2], _K[_FN][0][3], _K[_FN][0][4], _K[_FN][0][5], _K[_FN][0][6], _K[_FN][0][7], _K[_FN][0][8], _K[_FN][0][9], XXXXXXX,
      XXXXXXX, _K[_FN][1][0], _K[_FN][1][1], _K[_FN][1][2], _K[_FN][1][3], _K[_FN][1][4], _K[_FN][1][5], _K[_FN][1][6], _K[_FN][1][7], _K[_FN][1][8], _K[_FN][1][9], XXXXXXX,
      XXXXXXX, _K[_FN][2][0], _K[_FN][2][1], _K[_FN][2][2], _K[_FN][2][3], _K[_FN][2][4], _K[_FN][2][5], _K[_FN][2][6], _K[_FN][2][7], _K[_FN][2][8], _K[_FN][2][9], XXXXXXX,
                                                   XXXXXXX, _T[_FN][0][0], _T[_FN][0][1], _T[_FN][1][0], _T[_FN][1][1],       XXXXXXX
      ),
  [_AR] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_AR][0][0], _K[_AR][0][1], _K[_AR][0][2], _K[_AR][0][3], _K[_AR][0][4], _K[_AR][0][5], _K[_AR][0][6], _K[_AR][0][7], _K[_AR][0][8], _K[_AR][0][9], XXXXXXX,
      XXXXXXX, _K[_AR][1][0], _K[_AR][1][1], _K[_AR][1][2], _K[_AR][1][3], _K[_AR][1][4], _K[_AR][1][5], _K[_AR][1][6], _K[_AR][1][7], _K[_AR][1][8], _K[_AR][1][9], XXXXXXX,
      XXXXXXX, _K[_AR][2][0], _K[_AR][2][1], _K[_AR][2][2], _K[_AR][2][3], _K[_AR][2][4], _K[_AR][2][5], _K[_AR][2][6], _K[_AR][2][7], _K[_AR][2][8], _K[_AR][2][9], XXXXXXX,
                                                   XXXXXXX, _T[_AR][0][0], _T[_AR][0][1], _T[_AR][1][0], _T[_AR][1][1],       XXXXXXX
      )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QW] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_NR] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_SB] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_FN] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_AR] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
};
#endif
