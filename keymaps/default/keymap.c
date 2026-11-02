#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_A:
                rgb_matrix_step();
                return false;
            default:
                break;
        }
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_charybdis_right(
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
                 KC_B,             KC_C,             KC_A
    )
};