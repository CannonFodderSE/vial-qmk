// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        JS_0,   JS_1,   JS_2,   JS_3, JS_4,
        JS_5,   JS_6,   JS_7,   JS_8, JS_9,
        JS_10,   JS_11,   JS_12,   JS_13, JS_14,
        JS_15,   JS_16,   JS_17,   JS_18, JS_19,
        JS_20,   JS_21,   JS_22,   JS_23, JS_24
    )
};

/*joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(GP26, 0, 512, 1023),
    [1] = JOYSTICK_AXIS_IN(GP27, 0, 512, 1023)

};*/
