#include QMK_KEYBOARD_H

enum _Layers {
    _BASE,
    _NUM,
    _SYS
};

// Open up the array
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x12(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,   KC_U,     KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,   KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,   KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_RALT, KC_RGUI, KC_LALT, MO(_NUM), KC_BSPC, KC_SPC, MO(_SYS), KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
),

[_NUM] = LAYOUT_ortho_4x12(
    _______,  KC_EXLM,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_LCBR,  KC_RCBR,  KC_LBRC,  KC_RBRC,  KC_MINS,  KC_UNDS,  _______,
    _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_GRV,   XXXXXXX,  KC_AMPR,  KC_PERC,  KC_CIRC,  KC_DLR,   KC_HASH,  KC_EQL,   KC_PLUS,  KC_ASTR,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_TILD,  XXXXXXX,  _______,  _______,  _______,  _______
),

[_SYS] = LAYOUT_ortho_4x12(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
    XXXXXXX,  KC_MPRV,  KC_MPLY,  KC_MNXT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_PSCR,  XXXXXXX,
    XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  KC_BRID,  KC_BRIU,  KC_PGDN,  KC_PGUP,  XXXXXXX,   XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX
),

};