// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    0,
    1,
    2,
    3
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ESC│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│Alt│CMD│FNC│LOW│SPC│       │SPC│UPP|ARL│ARD│ARU│ARR│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */

    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   MO(1),   KC_SPC,                             KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
    ),

    /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ESC│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│Alt│CMD│FNC│LOW│SPC│       │SPC│UPP|ARL│ARD│ARU│ARR│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */

    [1] = LAYOUT(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
        KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_MINS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
        KC_LSFT, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                             KC_F12,  _______,    KC_INS,     KC_HOME, KC_END,  KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   MO(3),   KC_SPC,                             KC_SPC,  MO(3),      KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
    ),

    /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ESC│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│Alt│CMD│FNC│LOW│SPC│       │SPC│UPP|ARL│ARD│ARU│ARR│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */

    [2] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                             KC_F12,  _______, KC_INS,  KC_HOME, KC_END,  KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   MO(3),   KC_SPC,                             KC_SPC,  MO(3),   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
    ),

    /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │dbg│MB1│MUP│MB2│   │   │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │DEL│MBL│MBD│MBR│MWU│MWD│       │ / │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│   │MB3│   │INS│   │       │ * │ M │ , │ . │ / │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │NML│   |   │       │   │   |CAL│MYC│   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */

    [3] = LAYOUT(
        DB_TOGG, KC_BTN1, KC_MS_U,  KC_BTN2,    KC_R,    KC_T,                               _______, KC_P7,   KC_P8,    KC_P9,   KC_P0,   KC_BSPC,
        KC_ESC,  KC_MS_L, KC_MS_D,  KC_MS_R,    KC_WH_U, KC_WH_D,                            KC_PSLS, KC_P4,   KC_P5,    KC_P6,   KC_PMNS, KC_PDOT,
        KC_LSFT, KC_Z,    KC_BTN3,  KC_C,       KC_V,    KC_B,                               KC_PAST, KC_P1,   KC_P2,    KC_P3,   KC_PPLS, KC_ENT,
        _______, _______, _______,  KC_NO,      KC_NO,   _______,                            _______, KC_NO,   KC_CALC,  KC_MYCM, KC_NO,   KC_NO
    ),


};
