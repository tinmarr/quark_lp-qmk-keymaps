



# Checkerboards Quark LP Keymap

This is my basic QMK config for my [Quark LP keyboard](https://www.checkerboards.xyz/quark-lp.html).
I now primarily use this board for gaming as a supplement to my Ferris Sweep ([config here](https://github.com/tinmarr/sweep-zmk-config)). I have 34 and 38-key layouts in branches of this repo.


## How to use

This is mainly so that I remember how to use QMK without needed to refer back to the docs everytime.
[Here are the docs](https://docs.qmk.fm/) though if needed.

### Setup environment

For convenience
``` bash
qmk config user.keyboard=checkerboards/quark_lp
qmk config user.keymap=tinmarr
```

### Compile and flash

``` bash
qmk compile # To compile
qmk flash # To flash - make sure to press the little reset hole on the back
```

## Header/definitions

```c
#include QMK_KEYBOARD_H

enum _Layers {
    _BASE,
    _NUM,
    _SYS
};

// Open up the array
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
```

## Base Layer

This is the base/default layer
``` markdown
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
|       |         |       |     |      |      |     |      |      |      |    |       |
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
| Tab   | Q       | W     | E   | R    | T    | Y   | U    | I    | O    | P  | \     |
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
| Esc   | A       | S     | D   | F    | G    | H   | J    | K    | L    | ;  | '     |
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
| Shift | Z       | X     | C   | V    | B    | N   | M    | ,    | .    | /  | Enter |
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
| Ctrl  | Compose | Super | Alt | _Num | Bspc | Spc | _Sys | Left | Down | Up | Right |
|-------|---------|-------|-----|------|------|-----|------|------|------|----|-------|
```
```c
[_BASE] = LAYOUT_ortho_4x12(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,   KC_U,     KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,   KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,   KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_RALT, KC_RGUI, KC_LALT, MO(_NUM), KC_BSPC, KC_SPC, MO(_SYS), KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
),
```

## Number/Symbols Layer

``` markdown
|--|---|-----|---|---|---|---|---|---|---|---|--|
|  |   |     |   |   |   |   |   |   |   |   |  |
|--|---|-----|---|---|---|---|---|---|---|---|--|
|  | ! | @   | ( | ) | { | } | [ | ] | - | _ |  |
|--|---|-----|---|---|---|---|---|---|---|---|--|
|  | 1 | 2   | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 |  |
|--|---|-----|---|---|---|---|---|---|---|---|--|
|  | ` | xxx | & | % | ^ | $ | # | = | + | * |  |
|--|---|-----|---|---|---|---|---|---|---|---|--|
|  |   |     |   |   |   | ~ |   |   |   |   |  |
|--|---|-----|---|---|---|---|---|---|---|---|--|
```
```c
[_NUM] = LAYOUT_ortho_4x12(
    _______,  KC_EXLM,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_LCBR,  KC_RCBR,  KC_LBRC,  KC_RBRC,  KC_MINS,  KC_UNDS,  _______,
    _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_GRV,   XXXXXXX,  KC_AMPR,  KC_PERC,  KC_CIRC,  KC_DLR,   KC_HASH,  KC_EQL,   KC_PLUS,  KC_ASTR,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  KC_TILD,  XXXXXXX,  _______,  _______,  _______,  _______
),
```

## System Layer

Layer that let's me access system stuff and let's me toggle to the gaming layer.
``` markdown
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
|    |      |            |      |         |                |      |      |      |       |      |     |
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
| F1 | F2   | F3         | F4   | F5      | F6             | F7   | F8   | F9   | F10   | F11  | F12 |
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
|    | Prev | Play/Pause | Next | Tab     | Default L_Game | Left | Down | Up   | Right | PrSc |     |
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
|    | Mute | Vol-       | Vol+ | Bright- | Bright+        | xxx  | PgDn | PgUp |       |      |     |
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
|    |      |            |      |         |                |      |      |      |       |      |     |
|----|------|------------|------|---------|----------------|------|------|------|-------|------|-----|
```
```c
[_SYS] = LAYOUT_ortho_4x12(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
    XXXXXXX,  KC_MPRV,  KC_MPLY,  KC_MNXT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_PSCR,  XXXXXXX,
    XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  KC_BRID,  KC_BRIU,  KC_PGDN,  KC_PGUP,  XXXXXXX,   XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX
),
```

## Array close

```c
};
```
