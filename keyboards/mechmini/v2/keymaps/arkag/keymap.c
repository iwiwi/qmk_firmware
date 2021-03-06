#include QMK_KEYBOARD_H
#include "arkag.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_2u_space_ortho(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  TAP_A,   TAP_S,   TAP_D,   TAP_F,   KC_G,    KC_H,    TAP_J,   TAP_K,   TAP_L,   TAP_SCN, QUOTE,
    XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
    M_PMOD,  LRALT,   M_SMOD,  LOWER,   RAISE,        KC_SPC,      KC_SLSH, LAZY,    KC_LEFT, KC_DOWN, KC_RGHT),

  [_RAISE] = LAYOUT_2u_space_ortho(
    GRAVE,   KC_1,    KC_2,    THREE,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, OBRACK,  CBRACK,  TAP_EQ,  HYPHEN,  _______, _______, KC_4,    TAP_5,   KC_6,    _______, KC_NLCK,
    _______, _______, _______, CEDILLA, _______, KC_COMM, KC_PDOT, KC_1,    KC_2,    KC_3,    KC_PPLS, KC_PENT,
    _______, _______, _______, KEEB,    _______,      _______,     _______, M_OS,    KC_PSLS, KC_PMNS, KC_PAST),

  [_LOWER] = LAYOUT_2u_space_ortho(
    _______, _______, _______, _______, _______, _______, _______, M_ULIN,  M_ITAL,  _______, M_P_B,   M_C_A_D,
    _______, _______, STRIKE,  _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_CAPS, KC_DEL,  _______, _______, _______, M_BOLD,  _______, _______, _______, _______, KC_PGUP, _______,
    _______, _______, _______, _______, _______,       MEDIA,      KC_BSLS, M_CALC,  KC_HOME, KC_PGDN, KC_END),

  [_KEEB] = LAYOUT_2u_space_ortho(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, BL_TOGG, BL_STEP, BL_INC,  BL_DEC,  BL_BRTG, _______, _______, _______, _______, _______, _______,
    RGB_M_P, RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______,
    RESET,   _______, _______, _______, _______,      _______,     _______, _______, _______, _______, _______),

  [_MEDIA] = LAYOUT_2u_space_ortho(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLU, KC_MUTE,
    _______, _______, _______, _______, _______,      _______,     _______, _______, KC_MPRV, KC_VOLD, KC_MNXT),

  [_LAZY] = LAYOUT_2u_space_ortho(
    _______, _______, _______, _______, _______, M_TM,    _______, M_SNIPT, M_SHRUG, _______, _______, _______,
    _______, _______, _______, _______, _______, M_GGT,   _______, M_UF,    M_LOD,   M_REPO,  _______, _______,
    _______, _______, _______, _______, _______, _______, _______, M_TF,    M_LENNY, _______, _______, _______,
    _______, _______, _______, _______, _______,      _______,     _______, _______, _______, _______, _______),
};
