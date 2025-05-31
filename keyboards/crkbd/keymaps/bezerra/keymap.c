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
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

/* LAYERS */
enum _L { _Q, _N, _S, _F, _A };

/* KEYS */
const uint16_t PROGMEM _K[5][3][10] = {
  /* QWERTY {{{*/
  {
    {
      LT(_A, KC_Q),
      LT(_F, KC_W),
      LT(_S, KC_E),
      LT(_N, KC_R),
      KC_T,
      KC_Y,
      LT(_N, KC_U),
      LT(_S, KC_I),
      LT(_F, KC_O),
      LT(_A, KC_P)
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
  /* }}} */
  /* NUMBERS {{{*/
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
  /* }}}*/
  /* SYMBOLS {{{*/
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
  /* }}}*/
  /* FUNCTIONS {{{*/
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
  /* }}}*/
  /* ARROWS {{{*/
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
  /* }}}*/
};

/* THUMBS */
const uint16_t PROGMEM _T[5][4] = {
  /* QWERTY {{{*/
  {
    LT(_S, KC_BSPC),
    LT(_N, KC_ESC),
    LT(_N, KC_ENT),
    LT(_S, KC_SPC)
  },
  /* }}}*/
  /* NUMBERS {{{*/
  {
    XXXXXXX,
    XXXXXXX,
    KC_TAB,
    KC_0
  },
  /* }}}*/
  /* SYMBOLS {{{*/
  {
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX
  },
  /* }}}*/
  /* FUNCTIONS {{{*/
  {
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX
  },
  /* }}}*/
  /* ARROWS {{{*/
  {
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX
  }
  /* }}}*/
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_Q] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_Q][0][0], _K[_Q][0][1], _K[_Q][0][2], _K[_Q][0][3], _K[_Q][0][4], _K[_Q][0][5], _K[_Q][0][6], _K[_Q][0][7], _K[_Q][0][8], _K[_Q][0][9], XXXXXXX,
      XXXXXXX, _K[_Q][1][0], _K[_Q][1][1], _K[_Q][1][2], _K[_Q][1][3], _K[_Q][1][4], _K[_Q][1][5], _K[_Q][1][6], _K[_Q][1][7], _K[_Q][1][8], _K[_Q][1][9], XXXXXXX,
      XXXXXXX, _K[_Q][2][0], _K[_Q][2][1], _K[_Q][2][2], _K[_Q][2][3], _K[_Q][2][4], _K[_Q][2][5], _K[_Q][2][6], _K[_Q][2][7], _K[_Q][2][8], _K[_Q][2][9], XXXXXXX,
                                                XXXXXXX,    _T[_Q][0],    _T[_Q][1],    _T[_Q][2],    _T[_Q][3],      XXXXXXX
      ),
  [_N] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_N][0][0], _K[_N][0][1], _K[_N][0][2], _K[_N][0][3], _K[_N][0][4], _K[_N][0][5], _K[_N][0][6], _K[_N][0][7], _K[_N][0][8], _K[_N][0][9], XXXXXXX,
      XXXXXXX, _K[_N][1][0], _K[_N][1][1], _K[_N][1][2], _K[_N][1][3], _K[_N][1][4], _K[_N][1][5], _K[_N][1][6], _K[_N][1][7], _K[_N][1][8], _K[_N][1][9], XXXXXXX,
      XXXXXXX, _K[_N][2][0], _K[_N][2][1], _K[_N][2][2], _K[_N][2][3], _K[_N][2][4], _K[_N][2][5], _K[_N][2][6], _K[_N][2][7], _K[_N][2][8], _K[_N][2][9], XXXXXXX,
                                                XXXXXXX,    _T[_N][0],    _T[_N][1],    _T[_N][2],    _T[_N][3],     XXXXXXX
      ),
  [_S] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_S][0][0], _K[_S][0][1], _K[_S][0][2], _K[_S][0][3], _K[_S][0][4], _K[_S][0][5], _K[_S][0][6], _K[_S][0][7], _K[_S][0][8], _K[_S][0][9], XXXXXXX,
      XXXXXXX, _K[_S][1][0], _K[_S][1][1], _K[_S][1][2], _K[_S][1][3], _K[_S][1][4], _K[_S][1][5], _K[_S][1][6], _K[_S][1][7], _K[_S][1][8], _K[_S][1][9], XXXXXXX,
      XXXXXXX, _K[_S][2][0], _K[_S][2][1], _K[_S][2][2], _K[_S][2][3], _K[_S][2][4], _K[_S][2][5], _K[_S][2][6], _K[_S][2][7], _K[_S][2][8], _K[_S][2][9], XXXXXXX,
                                                XXXXXXX,    _T[_S][0],    _T[_S][1],    _T[_S][2],    _T[_S][3],      XXXXXXX
      ),
  [_F] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_F][0][0], _K[_F][0][1], _K[_F][0][2], _K[_F][0][3], _K[_F][0][4], _K[_F][0][5], _K[_F][0][6], _K[_F][0][7], _K[_F][0][8], _K[_F][0][9], XXXXXXX,
      XXXXXXX, _K[_F][1][0], _K[_F][1][1], _K[_F][1][2], _K[_F][1][3], _K[_F][1][4], _K[_F][1][5], _K[_F][1][6], _K[_F][1][7], _K[_F][1][8], _K[_F][1][9], XXXXXXX,
      XXXXXXX, _K[_F][2][0], _K[_F][2][1], _K[_F][2][2], _K[_F][2][3], _K[_F][2][4], _K[_F][2][5], _K[_F][2][6], _K[_F][2][7], _K[_F][2][8], _K[_F][2][9], XXXXXXX,
                                                XXXXXXX,    _T[_F][0],    _T[_F][1],    _T[_F][2],    _T[_F][3],      XXXXXXX
      ),
  [_A] = LAYOUT_split_3x6_3(
      XXXXXXX, _K[_A][0][0], _K[_A][0][1], _K[_A][0][2], _K[_A][0][3], _K[_A][0][4], _K[_A][0][5], _K[_A][0][6], _K[_A][0][7], _K[_A][0][8], _K[_A][0][9], XXXXXXX,
      XXXXXXX, _K[_A][1][0], _K[_A][1][1], _K[_A][1][2], _K[_A][1][3], _K[_A][1][4], _K[_A][1][5], _K[_A][1][6], _K[_A][1][7], _K[_A][1][8], _K[_A][1][9], XXXXXXX,
      XXXXXXX, _K[_A][2][0], _K[_A][2][1], _K[_A][2][2], _K[_A][2][3], _K[_A][2][4], _K[_A][2][5], _K[_A][2][6], _K[_A][2][7], _K[_A][2][8], _K[_A][2][9], XXXXXXX,
                                                XXXXXXX,    _T[_A][0],    _T[_A][1],    _T[_A][2],    _T[_A][3],      XXXXXXX
      )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_Q] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_N] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_S] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_F] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [_A] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
};
#endif
