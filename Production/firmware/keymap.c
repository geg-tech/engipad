// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE

bool oled_task_user() {
    oled_set_cursor(0,1);
    oled_write("engineer gamin");
    return false
}

#endif

enum custom_keycodes {
    REDO = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case REDO:
        if (record->event.pressed) {
            // when keycode REDO is pressed
            SEND_STRING(SS_LCTL("y"));

        } else {
            // when keycode REDO is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_UNDO,   KC_K,   KC_P   REDO,
        KC_M,   KC_Z,   KC_LEFT_SHIFT,   KC_E
    )
};
