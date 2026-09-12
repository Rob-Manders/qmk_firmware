// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
        HIGH_4          HIGH_3          HIGH_2          HIGH_1          DRONES_ENGAGE
                        MID_3           MID_2           MID_1           STOP
                                                        ALT             CTRL                PTT

        CTRL
        O'HEAT_HIGH_4   O'HEAT_HIGH_3   O'HEAT_HIGH_2   O'HEAT_HIGH_1  BROADCAST_SHIELD
                        O'HEAT_MID_3    O'HEAT_MID_2    O'HEAT_MID_1   BROADCAST_ARMOUR 
                                        -               -              -

        ALT
        KEEP_RANGE      APPROACH        ORBIT           ALIGN           JUMP/DOCK
                        SHARPSHOOTER    PROPULSION      DEFENSE         WARP 
                                            -           -           -           -
    */
    [_BASE] = LAYOUT(
        KC_F4,          KC_F3,        KC_F2,        KC_F1,        KC_F,         KC_NO,        KC_NO,
        KC_NO,          KC_F7,        KC_F6,        KC_F5,        KC_SPACE,     KC_NO,        KC_NO,
        KC_NO,          KC_NO,        KC_NO,        KC_NO,        KC_LALT,      KC_LCTL,      MS_BTN5
    ),

    /*
        V2
        HIGH_4          HIGH_3          HIGH_2          HIGH_1          DRONES_ENGAGE 
        DSCAN           MID_3           MID_2           MID_1           STOP
                                                        ALT             CTRL                PTT

        CTRL
        O'HEAT_HIGH_4   O'HEAT_HIGH_3   O'HEAT_HIGH_2   O'HEAT_HIGH_1   BROADCAST_SHIELD
        BROADCAST_CAP   O'HEAT_MID_3    O'HEAT_MID_2    O'HEAT_MID_1    BROADCAST_ARMOUR 
                                                        -              -                    -

        ALT
        KEEP_RANGE      APPROACH        ORBIT           ALIGN           JUMP/DOCK
        PROBE_SCAN      SHARPSHOOTER    PROPULSION      DEFENSE         WARP            
                                                        -               -                   -
    */
    // [_BASE] = LAYOUT(
    //     KC_F4,          KC_F3,        KC_F2,        KC_F1,        KC_F,         KC_NO,        KC_NO,
    //     KC_V,           KC_F7,        KC_F6,        KC_F5,        KC_SPACE,     KC_NO,        KC_NO,
    //     KC_NO,          KC_NO,        KC_NO,        KC_NO,        KC_LALT,      KC_LCTL,      MS_BTN5
    // ),
};
