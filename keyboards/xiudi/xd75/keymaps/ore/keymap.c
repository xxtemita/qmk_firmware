/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Leading "M" stands for Mac and "W" for Windows
enum layer_names {
    _WBASE,
    _WFN,
    _MBASE,
    _MFN,
    _ADJUST
};

// Layer related keycodes
#define WBASE DF(_WBASE)
#define WFN LT(_WFN, KC_SPC)
#define MBASE DF(_MBASE)
#define MFN LT(_MFN, KC_SPC)
#define ADJUST MO(_ADJUST)

// Special keycodes
#define ESC_CTL LCTL_T(KC_ESC)
#define ESC_GUI LGUI_T(KC_ESC)
#define SPC_SFT SFT_T(KC_SPC)
#define EQL_ALT RALT_T(KC_EQL)
#define QUO_ALT LALT_T(KC_QUOT)
#define MIN_CTL RCTL_T(KC_MINS)
#define GRV_CTL LCTL_T(KC_GRV)
#define MIN_GUI RGUI_T(KC_MINS)
#define GRV_GUI LGUI_T(KC_GRV)

// Shortcuts
#define IME_ON LSFT(KC_F2)
#define IME_OFF LSFT(KC_F1)

#define WMV_RDT LGUI(LCTL(KC_RGHT))
#define WMV_LDT LGUI(LCTL(KC_LEFT))
#define WALL_DT LGUI(KC_TAB)
#define WMV_RTB LCTL(KC_PGDN)
#define WMV_LTB LCTL(KC_PGUP)
#define WMV_FPG LALT(KC_RGHT)
#define WMV_BPG LALT(KC_LEFT)
#define WLK_SCR LGUI(KC_L)

#define MMV_RDT LCTL(KC_RGHT)
#define MMV_LDT LCTL(KC_LEFT)
#define MALL_DT LCTL(KC_UP)
#define MMV_RTB LGUI(LALT(KC_RGHT))
#define MMV_LTB LGUI(LALT(KC_LEFT))
#define MMV_FPG LGUI(KC_RGHT)
#define MMV_BPG LGUI(KC_LEFT)
#define MSW_WIN LGUI(KC_F1)
#define MLK_SCR LGUI(LCTL(KC_Q))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_WBASE] = LAYOUT_ortho_5x15(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, KC_DEL,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, ADJUST,  KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LPRN, KC_UP,   KC_RPRN, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT, KC_DOWN, KC_RGHT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_ESC,  KC_LGUI, KC_LALT, XXXXXXX, IME_OFF, KC_LCTL, KC_SPC,  WFN,     KC_MINS, KC_LSFT, IME_ON,  XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT
    ),
    [_WFN] = LAYOUT_ortho_5x15(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_PSCR, KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, WMV_BPG, WLK_SCR, WMV_FPG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        KC_CAPS, KC_CIRC, XXXXXXX, XXXXXXX, XXXXXXX, WMV_LDT, WMV_LTB, WALL_DT, WMV_RTB, WMV_RDT, XXXXXXX, XXXXXXX, XXXXXXX, KC_DLR,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_MBASE] = LAYOUT_ortho_5x15(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, KC_DEL,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, ADJUST,  KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LPRN, KC_UP,   KC_RPRN, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT, KC_DOWN, KC_RGHT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_ESC,  KC_LCTL, KC_LALT, XXXXXXX, IME_OFF, KC_LGUI, KC_SPC,  MFN,     KC_MINS, KC_LSFT, IME_ON,  XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT
    ),
    [_MFN] = LAYOUT_ortho_5x15(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_PSCR, KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MMV_BPG, MLK_SCR, MMV_FPG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        KC_CAPS, KC_CIRC, XXXXXXX, XXXXXXX, XXXXXXX, MMV_LDT, MMV_LTB, MALL_DT, MMV_RTB, MMV_RDT, XXXXXXX, XXXXXXX, XXXXXXX, KC_DLR,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_ADJUST] = LAYOUT_ortho_5x15(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, WBASE,   _______, MBASE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_TOG, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, _______, RGB_SAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______
    )
};
