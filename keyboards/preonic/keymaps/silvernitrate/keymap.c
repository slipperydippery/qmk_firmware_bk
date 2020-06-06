#include "preonic.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

enum preonic_layers {
  _QWERTY,
  _MAC_LOWER,
  _MAC_RAISE,
  _CAPSFM,
  _QWERTY_WIN,
  _WIN_LOWER,
  _WIN_RAISE,
  _CAPSFN,
  _STRCFT,
  _SUBLIME,
  _SUB_LOWER,
  _SUB_RAISE,
  _CAPSFP,
  _NUMPADFN,
  _USHIFT,
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  MAC_LOWER,
  MAC_RAISE,
  CAPSFM,
  QWERTY_WIN,
  WIN_LOWER,
  WIN_RAISE,
  CAPSFN,
  SUBLIME,
  SUB_LOWER,
  SUB_RAISE,
  CAPSFP,
  NUMPADFN,
  USHIFT,
  SIDEBAR,
  EXT_PLV,
  SPCSPC,
  DSHARR,
  EQUARR,
  OUTSPC,
  STRCFT,
  SEVONE,
  SEVTWO,
  SEVTHR,
  SEVFOU,
  SFTSFT,
  SCRN1,
  SCRN2,
};


// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ENT),
  [2] = ACTION_MODS_KEY(MOD_LSFT, KC_UP),
  [3] = ACTION_MODS_KEY(MOD_LSFT, KC_LEFT),
  [4] = ACTION_MODS_KEY(MOD_LSFT, KC_DOWN),
  [5] = ACTION_MODS_KEY(MOD_LSFT, KC_RIGHT),
  [6] = ACTION_MODS_KEY(MOD_LSFT, KC_HOME),
  [7] = ACTION_MODS_KEY(MOD_LSFT, KC_END),
  [8] = ACTION_MODS_KEY(MOD_LCTL, KC_LBRC),
  [9] = ACTION_MODS_KEY(MOD_LCTL, KC_RBRC),
  [10] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_UP),
  [11] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_DOWN),
  [12] = ACTION_MODS_KEY(MOD_LCTL, KC_LEFT),
  [13] = ACTION_MODS_KEY(MOD_LCTL, KC_RIGHT),
  [14] = ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_LEFT),
  [15] = ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_RIGHT),
  [16] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_QUOT),
  [17] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_MINS),
  [18] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SLSH),
  [19] = ACTION_MODS_TAP_KEY(NUMPADFN, KC_LEFT),
  [20] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_SLSH),
  [21] = ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_UP),
  [22] = ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_DOWN),
  [23] = ACTION_MODS_KEY(MOD_LGUI, KC_LBRC),
  [24] = ACTION_MODS_KEY(MOD_LGUI, KC_RBRC),
  [25] = ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),
  [26] = ACTION_MODS_KEY(MOD_LGUI, KC_RIGHT),
  [27] = ACTION_MODS_KEY(MOD_LSFT | MOD_LGUI, KC_LEFT),
  [28] = ACTION_MODS_KEY(MOD_LSFT | MOD_LGUI, KC_RIGHT),
  // [29] = ACTION_MODS_TAP_KEY(, KC_Q),
  [30] = ACTION_MODS_TAP_KEY(MO(_USHIFT), DF(0)),
  [31] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_4),
  [32] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_3),
  [33] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_TAB),
  [34] = ACTION_MODS_KEY(MOD_LCTL, KC_TAB),
  [35] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB),
  [36] = ACTION_MODS_KEY(MOD_LCTL, KC_ENT),
  [37] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_ENT),
  [38] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),
  [39] = ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),
  [40] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),
  [41] = ACTION_MODS_KEY(MOD_LCTL, KC_PLUS),
  [42] = ACTION_MODS_KEY(MOD_LCTL, KC_MINS),
  [43] = ACTION_MODS_KEY(MOD_LSFT, KC_PGUP),
  [44] = ACTION_MODS_KEY(MOD_LSFT, KC_PGDN),
  [45] = ACTION_MODS_KEY(MOD_LSFT | MOD_LCTL, KC_W),
  [46] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT, KC_W),
  [47] = ACTION_MODS_KEY(MOD_LCTL, KC_1),
  [48] = ACTION_MODS_KEY(MOD_LCTL, KC_2),
  [50] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_MINS),
  [51] = ACTION_MODS_KEY(MOD_LGUI, KC_LBRC),
  [52] = ACTION_MODS_KEY(MOD_LGUI, KC_RBRC),
  [53] = ACTION_MODS_KEY(MOD_LGUI, KC_ENT),
  [54] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_ENT),
  [55] = ACTION_MODS_KEY(MOD_LCTL, KC_1),
  [56] = ACTION_MODS_KEY(MOD_LCTL, KC_2),
  [57] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT, KC_2),
  [58] = ACTION_MODS_KEY(MOD_LSFT, KC_TAB),
  [59] = ACTION_MODS_KEY(MOD_LALT | MOD_LSFT, KC_UP),
  [60] = ACTION_MODS_KEY(MOD_LALT | MOD_LSFT, KC_DOWN),
  [61] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_ENT),
  [62] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_A),
  [63] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),
  [64] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_D),
  [65] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_F),
  [66] = ACTION_MODS_KEY(MOD_LALT, KC_HOME),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = {
  {KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
  {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL},
  {LT(_CAPSFM, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  {MT(MOD_LSFT, KC_MINS),  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  F(20),   MT(MOD_RSFT, KC_ENT)},
  {MO(_NUMPADFN), KC_LGUI, KC_LALT, KC_LCTL, MO(_MAC_LOWER),   KC_SPC,  KC_SPC,  MO(_MAC_RAISE),  KC_LEFT,   KC_UP,   KC_DOWN, MO(_USHIFT)}
},

[_MAC_LOWER] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {LCTL(KC_4), LCTL(KC_5), F(45), F(57), KC_DLR,  KC_PERC, F(51), F(33),   F(21), F(34), F(52),  KC_DEL},
  {_______, _______, _______, _______, _______, _______, KC_BTN1,    F(23),   F(22),    F(24), KC_BTN1, _______},
  {KC_PIPE, _______, _______, _______, _______, _______,   SCRN1,   F(12), LCTL(KC_UP),   F(13), SCRN2, F(54)},
  {_______, _______, _______, _______, _______, OUTSPC, _______, _______, KC_LBRC,   F(41),   F(42), KC_RBRC}
},


[_MAC_RAISE] = {
  { KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { KC_GRV,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, _______, _______,    F(27),    F(2),    F(28), F(43), KC_DEL},
  {KC_CAPS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______, _______,    F(3),    F(4),    F(5), F(44), _______},
  { DSHARR, KC_LCBR, KC_RCBR, KC_PIPE, KC_BSLS, _______, _______, _______, _______,   KC_UP, KC_BSLS, F(53)},
  { EQUARR, _______, _______, _______, _______, SPCSPC, SPCSPC, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______}
},


[_CAPSFM] = {
  {_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11},
  {_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______, KC_HOME,   KC_UP,  KC_END, KC_PGUP,  KC_INS},
  {_______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, F(31)},
  {_______,  KC_F11,  KC_F12, _______, _______, _______,  _______,  F(33), _______,  F(34), KC_BSLS, F(32)},
  {_______, _______, _______, _______, _______, KC_MEDIA_PLAY_PAUSE, _______, KC_MRWD, KC_MFFD, KC_VOLD, KC_VOLU, KC__MUTE}
},

[_QWERTY_WIN] = {
  {KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {LT(_CAPSFN, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  { F(17),  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  F(18),   F(1)},
  {MO(_NUMPADFN), KC_LCTL, KC_LALT, KC_LGUI, MO(_WIN_LOWER),   KC_SPC,  KC_SPC,  MO(_WIN_RAISE),  KC_LEFT,   KC_UP,   KC_DOWN, MO(_USHIFT)}
},

[_WIN_LOWER] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {LALT(KC_1), LALT(KC_F1), KC_AT, KC_HASH, KC_DLR,  KC_PERC,   F(38),   F(33),   F(10),   F(34),    SFTSFT,  F(63)},
  {LALT(KC_TAB), F(62), _______,  F(64), F(65), _______, _______, LSFT(KC_TAB), F(11), KC_TAB, F(66), _______},
  {KC_PIPE, _______, _______, _______,   F(40), _______, _______,   F(14),   F(35),   F(15), _______,   F(61)},
  {_______, _______, _______, _______, _______, OUTSPC, _______, _______, KC_LBRC,   F(41),   F(42), KC_RBRC}
},
 
[_WIN_RAISE] = {
  { KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { KC_GRV,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, LSFT(KC_F10), _______,    F(6),    F(2),    F(7), F(43),  KC_DEL},
  {KC_CAPS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______, _______,    F(3),    F(4),    F(5), F(44), _______},
  { DSHARR, KC_LCBR, KC_RCBR, KC_BSLS,   F(40), _______, _______, _______, _______,   KC_UP, KC_BSLS,   F(37)},
  { EQUARR, _______, _______, _______, _______, SPCSPC, SPCSPC, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______}
},

[_CAPSFN] = {
  {_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11},
  {_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______, KC_HOME,   KC_UP,  KC_END, KC_PGUP,  KC_INS},
  {_______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_PSCR},
  {_______,  KC_F11,  KC_F12, _______, _______, _______,  _______,  F(14), _______,  F(15), KC_BSLS, _______},
  {_______, _______, _______, _______, _______, KC_MEDIA_PLAY_PAUSE, _______, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC__MUTE}
},
// KC_MPLY, KC_MNXT

[_SUBLIME] = {
  {KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {LT(_CAPSFN, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  { F(17),  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  F(18),   F(1)},
  {MO(_NUMPADFN), KC_LCTL, KC_LALT, KC_LGUI, MO(_WIN_LOWER),   KC_SPC,  KC_SPC,  MO(_WIN_RAISE),  KC_LEFT,   KC_UP,   KC_DOWN, MO(_USHIFT)}
},

[_SUB_LOWER] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {KC_ESC,  _______,   F(46),  SEVONE,  SEVTHR, _______,   F(38),   F(33),   F(10),   F(34),    F(39),  KC_DEL},
  {_______, _______, _______,  SEVTWO,  SEVFOU, _______, _______,    F(8),   F(11),    F(9), _______, _______},
  {KC_PIPE, _______, _______, _______, _______, _______, _______,   F(14),   F(35),   F(15), _______,   F(37)},
  {_______, _______, _______, _______, _______, OUTSPC, _______, _______, KC_LBRC,   F(41),   F(42), KC_RBRC}
},
 
[_SUB_RAISE] = {
  { KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { KC_GRV,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, _______, _______,    F(6),    F(2),    F(7), F(43),  KC_DEL}, 
  {KC_CAPS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______, _______,    F(3),    F(4),    F(5), F(44), _______},
  { DSHARR, KC_LCBR, KC_RCBR, KC_BSLS,   F(40), _______, _______, _______, _______,   KC_UP, KC_BSLS,   F(36)},
  { EQUARR, _______, _______, _______, _______, SPCSPC, SPCSPC, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______}
},

[_NUMPADFN] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______,   KC_7,    KC_8,    KC_9, KC_SLSH, _______},
  {_______, _______, _______, _______, _______, _______, _______,   KC_4,    KC_5,    KC_6, KC_ASTR, _______},
  {_______, _______, _______, _______, _______, _______,   KC_0,    KC_1,    KC_2,    KC_3, KC_MINS, _______},
  {_______, _______, _______, _______, _______, _______, _______,   KC_0,    KC_0,  KC_DOT, KC_PLUS, _______}
},

[_STRCFT] = {
  {KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F1},
  {  KC_0,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL},
  {  KC_9,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT},
  {  KC_8,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT,   F(20), MT(MOD_RSFT, KC_ENT)},
  {  KC_7, KC_LCTL, KC_LALT, KC_SLSH, KC_LCTL, KC_RSFT, KC_RSFT, KC_LALT, KC_LEFT,   KC_UP, KC_DOWN, LT(_USHIFT, KC_RIGHT)}
},

[_USHIFT] = {
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN,  F(63)},
  {_______,   RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  { QWERTY, QWERTY_WIN, SUBLIME, STRCFTf, _______, LALT(KC_HOME), _______, _______, _______, _______, _______, _______}
},

};


void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case MAC_LOWER:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_MAC_LOWER);
          }
          return false;
          break;
        case MAC_RAISE:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_MAC_RAISE);
          }
          return false;
          break;
        case CAPSFM:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_CAPSFM);
          }
          return false;
          break;
        case QWERTY_WIN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY_WIN);
          }
          return false;
          break;
        case WIN_RAISE:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_WIN_RAISE);
          }
          return false;
          break;
        case WIN_LOWER:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_WIN_LOWER);
          }
          return false;
          break;
        case CAPSFN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_CAPSFN);
          }
          return false;
          break;
        case SUBLIME:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_SUBLIME);
          }
          return false;
          break;
        case SUB_RAISE:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_SUB_RAISE);
          }
          return false;
          break;
        case SUB_LOWER:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_SUB_LOWER);
          }
          return false;
          break;
        case CAPSFP:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_CAPSFP);
          }
          return false;
          break;          
        case NUMPADFN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_NUMPADFN);
          }
          return false;
          break;
        case USHIFT:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_USHIFT);
          }
          return false;
          break;
        case STRCFT:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_STRCFT);
          }
          return false;
          break;
        case SPCSPC:
          if (record->event.pressed) {
            SEND_STRING(" "SS_TAP(X_LEFT)" ");
          }
          return false; break;
          case DSHARR:
          if (record->event.pressed) {
            SEND_STRING("->");
          }
          return false; break;
          case EQUARR:
          if (record->event.pressed) {
            SEND_STRING("=>");
          }
          return false; break;
          case OUTSPC:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("b")" "SS_TAP(X_ESCAPE)SS_TAP(X_ESCAPE));
          }
          return false; break;
          case SFTSFT:
          if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_LSHIFT)SS_TAP(X_LSHIFT));
          }
          return false; break;
          case SCRN1:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("1"));
            register_code16(KC_BTN1);
            unregister_code16(KC_BTN1);
          }
          return false; break;
          case SCRN2:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("2"));
            register_code16(KC_BTN1);
            unregister_code16(KC_BTN1);
          }
          return false; break;
          case SEVONE:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI("7"));
          }
          return false; break;
          case SEVTWO:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI("77"));
          }
          return false; break;
          case SEVTHR:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI("777"));
          }
          return false; break;
          case SEVFOU:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI("7777"));
          }
          return false; break;
      }
    return true;
};

