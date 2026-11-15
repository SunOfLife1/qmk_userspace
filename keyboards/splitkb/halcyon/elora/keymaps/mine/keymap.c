// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "layers.h"
#include "keys.h"




// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: nrts-mine
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │ - _  │ 1 !  │ 2 @  │ 3 #  │ 4 $  │ 5 %  │                              │ 6 ^  │ 7 &  │ 8 *  │ 9 (  │ 0 )  │ = +  │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │ v V  │ w W  │ g G  │ m M  │ q Q  │                              │ z Z  │ x X  │ j J  │ k K  │ f F  │ Tab  │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ n N  │ r R  │ t T  │ s S  │ , ?  │                              │ . !  │ a A  │ e E  │ i I  │ h H  │ Ent  │
 * │      │ LAlt │ LSft │ LCtl │ LGUI │      │                              │      │ RGUI │ RCtl │ RSft │ LAlt │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Bspc │ p P  │ l L  │ d D  │ c C  │ / \  │ ???? │ ???? │  │ ???? │ ???? │ ' "  │ u U  │ o O  │ y Y  │ b B  │ Del  │
 * │      │      │      │      │      │      │ ???? │ ???? │  │ ???? │ ???? │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │ ???? │ Ent  │Magic │SpcRpt│CapsLk│  │CapsWd│SpcRpt│Magic │ Ent  │ ???? │
 *                      │Adjust│ Sym  │ Nav  │ LSft │ ???? │  │ ???? │ RSft │ Num  │ Func │ ???? │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_NRTS_MINE] = LAYOUT(
     // Top Row
     KC_MINS, KC_1, KC_2, KC_3, KC_4, KC_5,  KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
     // Everything else
     KC_TAB, TH(KC_V), TH(KC_W), TH(KC_G), TH(KC_M), TH(KC_Q),
         TH(KC_Z), TH(KC_X), TH(KC_J), TH(KC_K), TH(KC_F), KC_TAB,
     KC_ESC, LALT_T(KC_N), LSFT_T(KC_R), LCTL_T(KC_T), LGUI_T(KC_S), TH(KC_COMM),
         TH(KC_DOT), RGUI_T(KC_A), RCTL_T(KC_E), RSFT_T(KC_I), LALT_T(KC_H), KC_ENT,
     KC_BSPC, TH(KC_P), TH(KC_L), TH(KC_D), TH(KC_C), TH(KC_SLSH), KC_NO, KC_NO,
         KC_NO, KC_NO, TH(KC_QUOT), TH(KC_U), TH(KC_O), TH(KC_Y), TH(KC_B), KC_DEL,
     LT(_ADJUST, KC_NO), LT(_SYM, KC_ENT), LT(_NAV, MAGIC), LSFT_T(M_SPT_L), TH(KC_CAPS),
         TH(CW_TOGG), RSFT_T(M_SPT_R), LT(_NUM, MAGIC), LT(_FUNCTION, KC_ENT), KC_NO
    ),

/*
 * Base Layer: QWERTY
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │ - _  │ 1 !  │ 2 @  │ 3 #  │ 4 $  │ 5 %  │                              │ 6 ^  │ 7 &  │ 8 *  │ 9 (  │ 0 )  │ = +  │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │ q Q  │ w W  │ e E  │ r R  │ t T  │                              │ y Y  │ u U  │ i I  │ o O  │ p P  │ Bspc │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ a A  │ s S  │ d D  │ f F  │ g G  │                              │ h H  │ j J  │ k K  │ l L  │ ; :  │ ' "  │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │LShift│ z Z  │ x X  │ c C  │ v V  │ b B  │ [ {  │CapsLk│  │ Func │ ] }  │ n N  │ m M  │ , <  │ . >  │ / ?  │RShift│
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │Adjust│ LGUI │ Ent  │ Spc  │ Nav  │  │ Sym  │ Spc  │ RAlt │ RGUI │ Menu │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_QWERTY] = LAYOUT(
     KC_MINS, KC_1    , KC_2   , KC_3       , KC_4   , KC_5   ,                                       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
     KC_TAB , KC_Q    , KC_W   , KC_E       , KC_R   , KC_T   ,                                       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
     KC_ESC , KC_A    , KC_S   , KC_D       , KC_F   , KC_G   ,                                       KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
     KC_LSFT, KC_Z    , KC_X   , KC_C       , KC_V   , KC_B   , KC_LBRC, KC_CAPS ,   MO(_FUNCTION), KC_RBRC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                 MO(_ADJUST), KC_LGUI, KC_ENT , KC_SPC , MO(_NAV),   MO(_SYM)     , KC_SPC , KC_RALT, KC_RGUI, KC_APP
    ),

/*
 * Nav Layer: Navigation & Media
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │                              │      │ Home │ PgDn │ PgUp │ End  │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │ LGUI │ LAlt │ LCtl │      │                              │      │ Left │ Down │  Up  │ Rght │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │      │ WBak │ WFwd │ WSch │ WHom │      │
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_NAV] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
     _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                     KC_NO  , KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______,
     _______, KC_NO  , KC_LGUI, KC_LALT, KC_LCTL, KC_NO  ,                                     KC_NO  , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______,
     _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______, _______, _______, _______, KC_NO  , KC_WBAK, KC_WFWD, KC_WSCH, KC_WHOM, _______,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Num Layer: Numbers & Symbols
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  |   │  ^   │  %   │  &   │      │                              │      │  #   │  @   │  $   │  _   │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  7   │  5   │  3   │  1   │  ,   │                              │  .   │  0   │  2   │  4   │  6   │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  ~   │  /   │  *   │  9   │  :   │      │      │  │      │      │  ;   │  8   │  +   │  -   │      │      │
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_NUM] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
     _______, KC_PIPE, KC_CIRC, KC_PERC, KC_AMPR, KC_NO  ,                                     KC_NO  , KC_HASH, KC_AT  , KC_DLR , KC_UNDS, _______,
     _______, KC_7   , KC_5   , KC_3   , KC_1   , KC_COMM,                                     KC_DOT , KC_0   , KC_2   , KC_4   , KC_6   , _______,
     _______, KC_TILD, KC_SLSH, KC_ASTR, KC_9   , KC_COLN, _______, _______, _______, _______, KC_SCLN, KC_8   , KC_PLUS, KC_MINS, KC_NO  , _______,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Sym Layer: Extra Symbols
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  <   │  >   │  (   │  )   │      │                              │      │  {   │  }   │  [   │  ]   │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_SYM] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
     _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______,
     _______, KC_LT  , KC_GT  , KC_LPRN, KC_RPRN, KC_NO  ,                                     KC_NO  , KC_LCBR, KC_RCBR, KC_LBRC, KC_LBRC, _______,
     _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______, _______, _______, _______, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , _______,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Function Layer: Function keys
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ F12  │  F9  │  F8  │  F7  │      │                              │      │ F19  │ F20  │ F21  │ F24  │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ F10  │  F3  │  F2  │  F1  │      │                              │      │ F13  │ F14  │ F15  │ F22  │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ F11  │  F6  │  F5  │  F4  │      │      │      │  │      │      │      │ F16  │ F17  │ F18  │ F23  │      │
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_FUNCTION] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
      _______, KC_F12 , KC_F9  , KC_F8  , KC_F7  , _______,                                     _______, KC_F19 , KC_F20 , KC_F21 , KC_F24 , _______,
      _______, KC_F10 , KC_F3  , KC_F2  , KC_F1  , _______,                                     _______, KC_F13 , KC_F14 , KC_F15 , KC_F22 , _______,
      _______, KC_F11 , KC_F6  , KC_F5  , KC_F4  , _______, _______, _______, _______, _______, _______, KC_F16 , KC_F17 , KC_F18 , KC_F23 , _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Adjust Layer: Default layer settings, RGB
 *
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │QWERTY│ NRTS │      │                              │ TOG  │ SAI  │ HUI  │ VAI  │ MOD  │      │
 * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │      │ SAD  │ HUD  │ VAD  │ RMOD │      │
 * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 */
    [_ADJUST] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                    _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,                                    _______, _______, _______, _______, _______, _______,
      _______, _______, _______, QWERTY , NRTS   , _______,                                    RM_TOGG, RM_SATU, RM_HUEU, RM_VALU, RM_NEXT, _______,
      _______, _______, _______, _______, _______, _______,_______, _______, _______, _______, _______, RM_SATD, RM_HUED, RM_VALD, RM_PREV, _______,
                                 _______, _______, _______,_______, _______, _______, _______, _______, _______, _______
    ),

// /*
//  * Layer template
//  *
 // * ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * │      │      │      │      │      │      │                              │      │      │      │      │      │      │
 // * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 // * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 // * │      │      │      │      │      │      │      │      │  │      │      │      │      │      │      │      │      │
 // * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 // *                      │      │      │      │      │      │  │      │      │      │      │      │
 // *                      │      │      │      │      │      │  │      │      │      │      │      │
 // *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
//
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_PGUP, KC_PGDN),  ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  },
    [1] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [2] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [3] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [4] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [5] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [6] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
};
#endif

#if defined (HALCYON_ENABLE)
const uint16_t left_halcyon_buttons[10][5] = {
    [_NRTS_MINE] = { KC_MUTE, _______, _______, _______, _______ },
    [_QWERTY] =    { _______, _______, _______, _______, _______ },
    [_NAV] =       { _______, _______, _______, _______, _______ },
    [_NUM] =       { _______, _______, _______, _______, _______ },
    [_SYM] =       { _______, _______, _______, _______, _______ },
    [_FUNCTION] =  { _______, _______, _______, _______, _______ },
    [_ADJUST] =    { _______, _______, _______, _______, _______ },
};

const uint16_t right_halcyon_buttons[10][5] = {
    [_NRTS_MINE] = { KC_MUTE, _______, _______, _______, _______ },
    [_QWERTY] =    { _______, _______, _______, _______, _______ },
    [_NAV] =       { _______, _______, _______, _______, _______ },
    [_NUM] =       { _______, _______, _______, _______, _______ },
    [_SYM] =       { _______, _______, _______, _______, _______ },
    [_FUNCTION] =  { _______, _______, _______, _______, _______ },
    [_ADJUST] =    { _______, _______, _______, _______, _______ },
};
#endif


// implement magic with alt repeat
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    // clang-format off
    switch (keycode) {
        // Common Strings
        // TEST: do this support shift/capslk/capswd?
        case KC_A: return M_ATION; // also try "and" or SFB "au"
        case KC_I: return M_ING;
        case KC_Y: return M_YOU; // the roll looks fun, so see how this all feels
        case KC_SPC:
        case KC_ENT:
        case KC_TAB: return M_THE;

        // SFBs
        case KC_C: return KC_S;
        case KC_E: return KC_O;
        case KC_K: return KC_I;
        case KC_R: return KC_L;
        case KC_S: return KC_C;
        case KC_U: return KC_E;

        // Scissors
        case KC_B: return KC_E;
        case KC_F: return KC_O;
        case KC_G: return KC_L;
        case KC_J: return KC_U;
        case KC_M: return KC_P;
        case KC_N: return KC_D; // needs testing
        case KC_O: return KC_F;

        // Unused, do nothing
        case KC_D:
        case KC_H:
        case KC_L:
        case KC_P:
        case KC_Q:
        case KC_T:
        case KC_V:
        case KC_W: // try "wr" SFB?
        case KC_X:
        case KC_Z:
        default:
            return KC_NO;
    }
    // clang-format on
}


// hardcoded handedness for nrts-mine
bool is_left_hand(uint16_t keycode) {
    switch (keycode) {
        case KC_MINS: case KC_1: case KC_2: case KC_3: case KC_4: case KC_5:
        case KC_V: case KC_W: case KC_G: case KC_M: case KC_Q:
        case KC_N: case KC_R: case KC_T: case KC_S: case KC_COMM:
        case KC_P: case KC_L: case KC_D: case KC_C: case KC_SLSH:
            return true;

        case KC_6: case KC_7: case KC_8: case KC_9: case KC_0: case KC_EQL:
        case KC_Z: case KC_X: case KC_J: case KC_K: case KC_F:
        case KC_DOT: case KC_A: case KC_E: case KC_I: case KC_H:
        case KC_QUOT: case KC_U: case KC_O: case KC_Y: case KC_B:
            return false;
    }

    return false;
}


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    uint16_t prevkeycode = get_last_keycode();

    switch (keycode) {
        // magic
        case M_ATION: SEND_STRING(/*a*/"tion"); break;
        case M_AND: SEND_STRING(/*a*/"nd"); break;
        case M_ING: SEND_STRING(/*i*/"ng"); break;
        case M_YOU: SEND_STRING(/*y*/"ou"); break;
        case M_THE: SEND_STRING(/* */"the"); break;

        // chiral space/repeat (hardcoded for now, only works with nrts-mine)
        case M_SPT_L:
            switch (prevkeycode) {
                case KC_A: case KC_B: case KC_C: case KC_D: case KC_E: case KC_F:
                case KC_G: case KC_H: case KC_I: case KC_J: case KC_K: case KC_L:
                case KC_M: case KC_N: case KC_O: case KC_P: case KC_Q: case KC_R:
                case KC_S: case KC_T: case KC_U: case KC_V: case KC_W: case KC_X:
                case KC_Y: case KC_Z: case KC_COMM: case KC_DOT: case KC_SLSH: case KC_QUOT:
                    if (is_left_hand(get_last_keycode())) {
                        tap_code16(QK_REP);
                    } else {
                        tap_code(KC_SPC);
                    }
                    break;
                default:
                    tap_code(KC_SPC);
            }
            break;
        case M_SPT_R:
            switch (prevkeycode) {
                case KC_A: case KC_B: case KC_C: case KC_D: case KC_E: case KC_F:
                case KC_G: case KC_H: case KC_I: case KC_J: case KC_K: case KC_L:
                case KC_M: case KC_N: case KC_O: case KC_P: case KC_Q: case KC_R:
                case KC_S: case KC_T: case KC_U: case KC_V: case KC_W: case KC_X:
                case KC_Y: case KC_Z: case KC_COMM: case KC_DOT: case KC_SLSH: case KC_QUOT:
                    if (is_left_hand(get_last_keycode())) {
                        tap_code(KC_SPC);
                    } else {
                        tap_code16(QK_REP);
                    }
                    break;
                default:
                    tap_code(KC_SPC);
            }
            break;
    }
    return true;
}
