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

enum joystick_keycode {
    JS00 = QK_KB_0,
    JS01,
    JS02,
    JS03,
    JS04,
    JS05,
    JS06,
    JS07,
    JS08,
    JS09,
    JS10,
    JS11,
    JS12,
    JS13,
    JS14,
    JS15,
    JS16,
    JS17,
    JS18,
    JS19,
    JS20,
    JS21,
    JS22,
    JS23,
    JS24
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JS00:
            if (record->event.pressed) {
                register_joystick_button(0);
                return false;
            } else{
                unregister_joystick_button(0);
                return false;
            }
            return false;
            break;
        case JS01:
            if (record->event.pressed) {
                register_joystick_button(1);
                return false;
            } else{
                unregister_joystick_button(1);
                return false;
            }
            return false;
            break;
        case JS02:
            if (record->event.pressed) {
                register_joystick_button(2);
                return false;
            } else{
                unregister_joystick_button(2);
                return false;
            }
            return false;
            break;
        case JS03:
            if (record->event.pressed) {
                register_joystick_button(3);
                return false;
            } else{
                unregister_joystick_button(3);
                return false;
            }
            return false;
            break;
        case JS04:
            if (record->event.pressed) {
                register_joystick_button(4);
                return false;
            } else{
                unregister_joystick_button(4);
                return false;
            }
            return false;
            break;
        case JS05:
            if (record->event.pressed) {
                register_joystick_button(5);
                return false;
            } else{
                unregister_joystick_button(5);
                return false;
            }
            return false;
            break;
        case JS06:
            if (record->event.pressed) {
                register_joystick_button(6);
                return false;
            } else{
                unregister_joystick_button(6);
                return false;
            }
            return false;
            break;
        case JS07:
            if (record->event.pressed) {
                register_joystick_button(7);
                return false;
            } else{
                unregister_joystick_button(7);
                return false;
            }
            return false;
            break;
        case JS08:
            if (record->event.pressed) {
                register_joystick_button(8);
                return false;
            } else{
                unregister_joystick_button(8);
                return false;
            }
            return false;
            break;
        case JS09:
            if (record->event.pressed) {
                register_joystick_button(9);
                return false;
            } else{
                unregister_joystick_button(9);
                return false;
            }
            return false;
            break;
        case JS10:
            if (record->event.pressed) {
                register_joystick_button(10);
                return false;
            } else{
                unregister_joystick_button(10);
                return false;
            }
            return false;
            break;
        case JS11:
            if (record->event.pressed) {
                register_joystick_button(11);
                return false;
            } else{
                unregister_joystick_button(11);
                return false;
            }
            return false;
            break;
        case JS12:
            if (record->event.pressed) {
                register_joystick_button(12);
                return false;
            } else{
                unregister_joystick_button(12);
                return false;
            }
            return false;
            break;
        case JS13:
            if (record->event.pressed) {
                register_joystick_button(13);
                return false;
            } else{
                unregister_joystick_button(13);
                return false;
            }
            return false;
            break;
        case JS14:
            if (record->event.pressed) {
                register_joystick_button(14);
                return false;
            } else{
                unregister_joystick_button(14);
                return false;
            }
            return false;
            break;
        case JS15:
            if (record->event.pressed) {
                register_joystick_button(15);
                return false;
            } else{
                unregister_joystick_button(15);
                return false;
            }
            return false;
            break;
        case JS16:
            if (record->event.pressed) {
                register_joystick_button(16);
                return false;
            } else{
                unregister_joystick_button(16);
                return false;
            }
            return false;
            break;
        case JS17:
            if (record->event.pressed) {
                register_joystick_button(17);
                return false;
            } else{
                unregister_joystick_button(17);
                return false;
            }
            return false;
            break;
        case JS18:
            if (record->event.pressed) {
                register_joystick_button(18);
                return false;
            } else{
                unregister_joystick_button(18);
                return false;
            }
            return false;
            break;
        case JS19:
            if (record->event.pressed) {
                register_joystick_button(19);
                return false;
            } else{
                unregister_joystick_button(19);
                return false;
            }
            return false;
            break;
        case JS20:
            if (record->event.pressed) {
                register_joystick_button(20);
                return false;
            } else{
                unregister_joystick_button(20);
                return false;
            }
            return false;
            break;
        case JS21:
            if (record->event.pressed) {
                register_joystick_button(21);
                return false;
            } else{
                unregister_joystick_button(21);
                return false;
            }
            return false;
            break;
        case JS22:
            if (record->event.pressed) {
                register_joystick_button(22);
                return false;
            } else{
                unregister_joystick_button(22);
                return false;
            }
            return false;
            break;
        case JS23:
            if (record->event.pressed) {
                register_joystick_button(23);
                return false;
            } else{
                unregister_joystick_button(23);
                return false;
            }
            return false;
            break;
        case JS24:
            if (record->event.pressed) {
                register_joystick_button(24);
                return false;
            } else{
                unregister_joystick_button(24);
                return false;
            }
            return false;
            break;

        default:
            return true;
    }
};




/*joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(GP26, 0, 512, 1023),
    [1] = JOYSTICK_AXIS_IN(GP27, 0, 512, 1023)

};*/


