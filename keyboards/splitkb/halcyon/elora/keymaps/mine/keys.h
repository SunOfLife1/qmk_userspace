#pragma once

#include "layers.h"



/******************************************************************************
 * Aliases
 ******************************************************************************/

#define NRTS     DF(_NRTS_MINE)
#define QWERTY   DF(_QWERTY)

// tap-hold behavior with nothing on hold
#define TH(kc)   LT(0, kc)

// magic key is just implemented with alt repeat
#define MAGIC QK_ALT_REPEAT_KEY



/******************************************************************************
 * Custom Keycodes
 ******************************************************************************/

enum custom_keycodes {
    // chiral space/repeat
    M_SPT_L = SAFE_RANGE,
    M_SPT_R,

    // magic outputs
    M_ATION,
    M_AND,
    M_ING,
    M_YOU,
    M_THE,
};



/******************************************************************************
 * Key Overrides
 ******************************************************************************/

// S-, → ? (on _NRTS_MINE layer)
const key_override_t comma_question_key_override = ko_make_with_layers(
    MOD_MASK_SHIFT, KC_COMMA,
    KC_QUESTION,
    1 << _NRTS_MINE,
);

// S-. → ! (on _NRTS_MINE layer)
const key_override_t dot_exclamation_key_override = ko_make_with_layers(
    MOD_MASK_SHIFT, KC_DOT,
    KC_EXCLAIM,
    1 << _NRTS_MINE,
);

// S-/ → \ (on _NRTS_MINE layer)
const key_override_t fslash_bslash_key_override = ko_make_with_layers(
    MOD_MASK_SHIFT, KC_SLASH,
    KC_BACKSLASH,
    1 << _NRTS_MINE,
);


const key_override_t *key_overrides[] = {
    &comma_question_key_override,
    &dot_exclamation_key_override,
    &fslash_bslash_key_override,
};
