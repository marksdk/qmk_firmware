#include QMK_KEYBOARD_H

enum layers { _QWERTY, _FUNC, _NUM, _FOUR };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc/_FUNC|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0| + | ´| BS|    |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  Å|  ^| Ent |    |
     * |------------------------------------------------------.    |----|
     * |FUNC_|  A|  S|  D|  F|  G|  H|  J|  K|  L|  Æ|  Ø|  *|     |    |
     * |----------------------------------------------------------------|
     * |Shift| <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  -|Shift |Up |   |
     * |----------------------------------------------------------------|
     * |Ctrl|Win |Alt |          Space        |Alt |Ctrl|  |Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_all(LT(_FUNC, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC, LGUI(KC_SPC), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, LSFT(LCTL(LGUI(KC_H))), MO(_FUNC), KC_A, KC_S, KC_D, LT(_NUM, KC_F), KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, LSFT(LCTL(LGUI(KC_4))), KC_LSFT, KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, LCTL(LGUI(KC_SPC)), KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    /* Keymap Fn Layer
     * ,----------------------------------------------------------------.
     * |  | Brightness Down (Mac)| Brightness Up (Mac)| F3| F4| F5| F6| Prev Track| Next Track| Mute|Vol Down|Vol Up|  |  |  |
     * |----------------------------------------------------------------|
     * |     |  |   |   |   |   |  |   |  |  |  |   |   |     |  |
     * |------------------------------------------------------.    |----|
     * |      |  |   |   |   |   |  |   |   |   |   |   |   |    |  |
     * |----------------------------------------------------------------|
     * |       |   |  |  |  |   |   |   |   |   |   |      |    PUp|    |
     * |----------------------------------------------------------------|
     * |   |   |    |                  |  |   |  |Hom|PDn|End |
     * `---------------------------------------------------------------'
     */
    [_FUNC] = LAYOUT_all(KC_TRNS, KC_BRMD, KC_BRMU, KC_F3, KC_F4, KC_F5, KC_F6, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC__MUTE, KC__VOLDOWN, KC__VOLUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, RESET, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END),

    /* Keymap Numpad Layer
     * ,----------------------------------------------------------------'
     * |   |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  /|   |       |  |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |  4|  5|  6|  *|   |   |     |    |
     * |------------------------------------------------------.    |----|
     * |      |   |   |   |   |   |   |  1|  2|  3|  -|   |   |    |    |
     * |----------------------------------------------------------------|
     * |     |  |  |   |   |   |   |   |  0|   |   |  +|      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |    |    |  |   |   |    |
     * `------------------------------------------------'  `------------'
     */
    [_NUM] = LAYOUT_all(_______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_KP_SLASH, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_MINUS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_KP_0, _______, _______, KC_KP_PLUS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    [_FOUR] = LAYOUT_all(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};