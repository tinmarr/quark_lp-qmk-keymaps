#include QMK_KEYBOARD_H

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

// Define homerow mods
// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LALT_T(KC_F)

// Right-hand home row mods
#define HOME_J LALT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

// Open up the array
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_4x12(
    KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,            KC_I,     KC_O,     KC_P,       KC_BSLS,
    KC_ESC,   HOME_A,   HOME_S,   HOME_D,  HOME_F,  KC_G,     KC_H,    HOME_J,          HOME_K,   HOME_L,   HOME_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,    KC_V,    KC_B,     KC_N,    KC_M,            KC_COMM,  KC_DOT,   KC_SLSH,    KC_ENT,
    KC_LCTL,  KC_LGUI,  KC_LALT,  KC_APP,  MO(1),   KC_BSPC,  KC_SPC,  LT(2, KC_ALGR),  KC_LEFT,  KC_DOWN,  KC_UP,      KC_RIGHT
),

[1] = LAYOUT_ortho_4x12(
    KC_TILD,  KC_EXLM,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_LCBR,  KC_RCBR,  KC_LBRC,  KC_RBRC,  KC_MINS,  KC_UNDS,  XXXXXXX,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     XXXXXXX,
    _______,  XXXXXXX,  XXXXXXX,  KC_AMPR,  KC_PERC,  KC_CIRC,  KC_DLR,   KC_HASH,  KC_EQL,   KC_PLUS,  KC_ASTR,  XXXXXXX,
    _______,  _______,  _______,  _______,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
),

[2] = LAYOUT_ortho_4x12(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
    XXXXXXX,  KC_MPRV,  KC_MPLY,  KC_MNXT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  KC_BRID,  KC_BRIU,  KC_PGDN,  KC_PGUP,  XXXXXXX,   XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  TG(3),    KC_DEL,   _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  KC_PSCR
),

[3] = LAYOUT_ortho_4x12(
    KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,   KC_T,     KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,       KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,    KC_F,   KC_G,     KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,    KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,    KC_V,   KC_B,     KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,    KC_ENT,
    KC_LCTL,  KC_LGUI,  KC_LALT,  KC_APP,  MO(1),  KC_BSPC,  KC_SPC,  TG(3),  KC_LEFT,  KC_DOWN,  KC_UP,      KC_RIGHT
),

};
