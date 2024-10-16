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

enum _Layers {
  _BASE,
  _SYS,
  _GAME,
  _NUM
};

// Open up the array
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x12(
    KC_Q,     KC_W,     KC_E,    KC_R,              KC_T,     XXXXXXX,  XXXXXXX,  KC_Y,    KC_U,              KC_I,     KC_O,     KC_P,
    HOME_A,   HOME_S,   HOME_D,  HOME_F,            KC_G,     XXXXXXX,  XXXXXXX,  KC_H,    HOME_J,            HOME_K,   HOME_L,   HOME_SCLN,
    KC_Z,     KC_X,     KC_C,    KC_V,              KC_B,     XXXXXXX,  XXXXXXX,  KC_N,    KC_M,              KC_COMM,  KC_DOT,   KC_SLSH,
    XXXXXXX,  XXXXXXX,  KC_TAB,  LT(_NUM, KC_ESC),  KC_BSPC,  XXXXXXX,  XXXXXXX,  KC_SPC,  LT(_SYS, KC_ENT),  KC_ALGR,  XXXXXXX,  XXXXXXX
),

[_SYS] = LAYOUT_ortho_4x12(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,      KC_F5,    XXXXXXX,  XXXXXXX,  KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,
    KC_MPRV,  KC_MPLY,  KC_MNXT,  XXXXXXX,    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_PSCR,
    KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,    KC_BRID,  XXXXXXX,  XXXXXXX,  KC_BRIU,  KC_PGDN,  KC_PGUP,  KC_F11,    KC_F12,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  DF(_GAME),  KC_DEL,   XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX
),

[_GAME] = LAYOUT_ortho_4x12(
    KC_LCTL,  KC_Q,     KC_W,    KC_E,     KC_R,    XXXXXXX,  XXXXXXX,  KC_Y,     KC_U,    KC_I,       KC_O,     KC_P,
    KC_ESC,   KC_A,     KC_S,    KC_D,     KC_F,    XXXXXXX,  XXXXXXX,  KC_H,     KC_J,    KC_K,       KC_L,     KC_SCLN,
    KC_LSFT,  KC_Z,     KC_X,    KC_C,     KC_V,    XXXXXXX,  XXXXXXX,  KC_N,     KC_M,    KC_COMM,    KC_DOT,   KC_SLSH,
    XXXXXXX,  XXXXXXX,  KC_TAB,  _______,  KC_SPC,  XXXXXXX,  XXXXXXX,  _______,  KC_ENT,  DF(_BASE),  XXXXXXX,  XXXXXXX
),

[_NUM] = LAYOUT_ortho_4x12(
    KC_EXLM,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_LCBR,  XXXXXXX,  XXXXXXX,  KC_RCBR,  KC_LBRC,  KC_RBRC,  KC_MINS,  KC_QUOT,
    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     XXXXXXX,  XXXXXXX,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
    KC_GRV,   KC_BSLS,  KC_AMPR,  KC_PERC,  KC_CIRC,  XXXXXXX,  XXXXXXX,  KC_DLR,   KC_HASH,  KC_EQL,   KC_PLUS,  KC_ASTR,
    XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  KC_SPC,   KC_TILD,  _______,  XXXXXXX,  XXXXXXX
),

};
