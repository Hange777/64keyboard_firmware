// Copyright %(YEAR)s %(YOUR_NAME)s (@%(USER_NAME)s)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "raw_hid.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
	_Mo1 ,
    _layer1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
		KC_GESC, KC_1 , KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC,
		KC_TAB , KC_Q , KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A , KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L   , KC_SCLN, KC_QUOT,           KC_ENT,
		KC_LSFT, MO(_Mo1), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT , KC_SLSH, KC_UP  , KC_RSFT,
		KC_LCTL, KC_LWIN, KC_LALT,     KC_SPC,       KC_SPC,        KC_SPC,        DF(_layer1), KC_LEFT, KC_DOWN,KC_RIGHT, KC_DEL
    ),
	[_Mo1] = LAYOUT(
		KC_GESC, KC_F1 , KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9   , KC_F10   , KC_F11, KC_F12 , KC_BSPC,
		KC_TAB , KC_Q , KC_PGUP, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_LEFT , KC_PGDN, KC_LEFT, KC_F13, KC_G, KC_H, KC_J, KC_K, KC_L   , KC_SCLN, KC_QUOT,           KC_ENT,
		KC_LSFT, MO(_Mo1), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT , KC_SLSH, KC_VOLU  , KC_RSFT,
		KC_LCTL, KC_LWIN, KC_LALT,     KC_SPC,       KC_MPLY,        KC_SPC,        MO(_layer1), KC_MPRV, KC_VOLD, KC_MNXT, KC_RCTL
    ),
	[_layer1] = LAYOUT(
		RGB_TOG, KC_F1 , KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9   , KC_F10   , KC_F11, KC_F12 , KC_BSPC,
		RGB_MODE_FORWARD , KC_Q , KC_W, KC_E, KC_R, KC_T, KC_KP_7, KC_KP_8, KC_KP_9, KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
		RGB_HUI, KC_A , KC_S, KC_D, KC_F, KC_G, KC_KP_4, KC_KP_5, KC_KP_6, KC_L   , KC_SCLN, KC_QUOT,           KC_ENT,
		KC_LSFT,DF(_BASE), KC_Z, KC_X, KC_C, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_COMM, KC_DOT , KC_SLSH, RGB_VAI  , KC_RSFT,
		RGB_SAI, KC_LWIN, KC_LALT,    KC_SPC,        KC_SPC,        KC_SPC,        DF(_BASE), RGB_SPD, RGB_VAD, RGB_SPI, RGB_MOD
    )

};
