// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _OVERHEAT,
    _UTIL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
        HIGH_4  HIGH_3  HIGH_2  HIGH_1  B_SHIELD    B_CAPACITOR
                MID_3   MID_2   MID_1   B_ARMOUR
                        UTIL    O'HEAT  CTRL        PTT
    */
    [_BASE] = LAYOUT(
        KC_F4,          KC_F3,              KC_F2,              KC_F1,              LCTL(LALT(KC_S)),   LCTL(LALT(KC_C)),   KC_NO,
        KC_NO,          LALT(KC_F3),        LALT(KC_F2),        LALT(KC_F1),        LCTL(LALT(KC_A)),   KC_NO,              KC_NO,
        KC_NO,          KC_NO,              KC_NO,              MO(_UTIL),          MO(_OVERHEAT),      KC_LCTL,            LCTL(LSFT(KC_T))
    ),

    /*
        O'HEAT_HIGH_4   O'HEAT_HIGH_3   O'HEAT_HIGH_2   O'HEAT_HIGH_1  ORBIT        STOP_SHIP
                        O'HEAT_MID_3    O'HEAT_MID_2    O'HEAT_MID_1   APPROACH 
                                        -               -              -            -
    */
    [_OVERHEAT] = LAYOUT(
        LSFT(KC_F4),    LSFT(KC_F3),        LSFT(KC_F2),        LSFT(KC_F1),        KC_W,               LCTL(KC_SPACE),     KC_NO,
        KC_NO,          LALT(LSFT(KC_F3)),  LALT(LSFT(KC_F2)),  LALT(LSFT(KC_F1)),  KC_Q,               KC_NO,              KC_NO,
        KC_NO,          KC_NO,              KC_NO,              KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
    ),

    /*
        D_SCAN  WARP            JUMP        ALIGN       ORBIT        UNLOCK_TARGET
                SHARPSHOOTER    PROPULSION  DEFENSE     KEEP_RANGE 
                                            -           -            -              -
    */
    [_UTIL] = LAYOUT(
        KC_V,       KC_S,           KC_D,           KC_A,           KC_W,       LCTL(KC_LSFT),  KC_NO,
        KC_NO,      LSFT(KC_2),    LSFT(KC_3),     LSFT(KC_1),     KC_Q,       KC_NO,          KC_NO,
        KC_NO,      KC_NO,          KC_NO,          KC_TRNS,        KC_TRNS,    KC_TRNS,        KC_TRNS
    )
};
