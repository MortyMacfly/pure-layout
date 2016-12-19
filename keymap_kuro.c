#include "keymap_common.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_PURE(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,DEL,\
        FN1, LGUI,LALT,          SPC,                     FN0, RALT,APP, RCTL),

    KEYMAP_PURE(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, MUTE, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,PGUP,PAUS,PSCR,INS,  \
        LCTL,TRNS,TRNS,VOLD,VOLU,TRNS,TRNS,LEFT,DOWN,RGHT,PGDN,TRNS,     ENT,  \
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,END, F2,  F3,       RSFT,DEL, \
        FN1, LGUI,LALT,          SPC,                     FN0, RALT,APP, RCTL),
    
    KEYMAP_PURE(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PAST,TRNS,TRNS,TRNS,TRNS,BSPC, \
        TAB, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P7,  P8,  P9,  TRNS,TRNS,TRNS,BSLS, \
        LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P4,  P5,  P6,  TRNS,TRNS,     ENT, \
        LSFT,TRNS,TRNS,ENT, TRNS,TRNS,NLCK,P1,  P2,  P3,  TRNS,     RSFT,DEL, \
        FN1, LGUI,LALT,          SPC,                     FN0, RALT,APP, RCTL),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
};