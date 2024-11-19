// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                             KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_ESC,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                             KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B,                             KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RALT,
                                KC_LGUI, MO(3), KC_LSFT,           KC_SPC, MO(4), KC_BSPC
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q, KC_W, KC_F, KC_P, KC_B,                             KC_J,  KC_L, KC_U,    KC_Y,   KC_SCLN, KC_QUOT,
        KC_LCTL, KC_A, KC_R, KC_S, KC_T, KC_G,                             KC_M,  KC_N, KC_E,    KC_I,   KC_O,    KC_TRNS,
        KC_LGUI, KC_Z, KC_X, KC_C, KC_D, KC_V,                             KC_K,  KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
                                KC_LGUI, MO(3), KC_LSFT,           KC_SPC, MO(4), KC_BSPC
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_B, KC_L, KC_D, KC_W, KC_Z,                             KC_QUOT, KC_F,    KC_O,    KC_U,    KC_J,    KC_ESC,
        KC_LCTL, KC_N, KC_R, KC_T, KC_S, KC_G,                             KC_Y,    KC_H,    KC_A,    KC_E,    KC_I,    KC_SCLN,
        KC_LGUI, KC_Q, KC_X, KC_M, KC_C, KC_V,                             KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
                                KC_LGUI, MO(3), KC_LSFT,           KC_SPC, MO(4), KC_BSPC
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_ESC,  LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),                           LSFT(KC_6) ,    LSFT(KC_8),      LSFT(KC_9),        LSFT(KC_0),         LSFT(KC_7),     KC_BSLS,
        KC_TRNS, KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                 KC_MINUS,       KC_EQUAL,       KC_LBRC,       KC_RBRC,        KC_GRAVE,       LSFT(KC_BSLS),
        KC_TRNS, KC_6,       KC_7,       KC_8,       KC_9,       KC_0,                                 LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_LBRC), LSFT(KC_RBRC),  LSFT(KC_GRAVE), KC_RALT,
                                                        KC_TRNS, KC_TRNS, KC_TRNS,           KC_ENTER, KC_TRNS, KC_DELETE
    ),
    [4] = LAYOUT_split_3x6_3(
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                KC_F6,    KC_F7,   KC_F8,  KC_F9,    KC_F10, DF(2),
        KC_TRNS, KC_HOME, KC_PGUP, KC_VOLD, KC_VOLU, KC_MUTE,                              KC_LEFT,  KC_DOWN, KC_UP,  KC_RIGHT, KC_F11, DF(1),
        KC_TRNS, KC_END,  KC_PGDN, KC_MPRV, KC_MNXT, KC_MPLY,                              KC_NO,    KC_F22,  KC_F23, KC_F24,   KC_F12, DF(0),
                                            KC_TRNS, KC_TRNS, KC_TRNS,           KC_ENTER, KC_TRNS, KC_DELETE
    ),
};
