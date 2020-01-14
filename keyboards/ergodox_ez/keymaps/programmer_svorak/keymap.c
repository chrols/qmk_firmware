#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  SE_LSPO,
  SE_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           SE_HALF,                                        SE_TILD,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           SE_PLUS,
    KC_TAB,         SE_AA,          SE_AE,          SE_OSLH,        KC_P,           KC_Y,           TG(4),                                          KC_F11,         KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           SE_APOS,
    KC_CAPSLOCK,    KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           SE_MINS,
    KC_LSHIFT,      KC_DOT,         KC_Q,           KC_J,           KC_K,           KC_X,           KC_F5,                                          KC_F12,         KC_B,           KC_M,           KC_W,           KC_V,           RCTL_T(KC_Z),   SE_ACUT,
    MO(2),          SE_LESS,        MO(3),          KC_LGUI,        KC_LALT,                                                                                                        MO(1),          KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,
                                                                                                    KC_INSERT,      KC_DELETE,      KC_HOME,        KC_END,
                                                                                                                    C_S_T(KC_F2),   KC_PGUP,
                                                                                    KC_SPACE,       KC_LCTRL,       MO(5),          KC_PGDOWN,      KC_ENTER,       KC_BSPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    SE_HALF,        RALT(KC_1),     RALT(KC_2),     RALT(KC_3),     RALT(KC_4),     RALT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, RALT(KC_6),     RALT(KC_7),     RALT(KC_8),     RALT(KC_9),     RALT(KC_0),     KC_TRANSPARENT,
    KC_TRANSPARENT, SE_LCBR,        SE_RCBR,        SE_LBRC,        SE_RBRC,        SE_DLR_MAC,     KC_TRANSPARENT,                                 KC_TRANSPARENT, SE_QUO2,        SE_QUES,        SE_AMPR,        SE_LESS,        SE_GRTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, SE_SCLN,        SE_SLSH,        SE_LPRN,        SE_RPRN,        SE_PIPE,                                                                        SE_AMPR,        SE_CIRC,        KC_HASH,        SE_QUO2,        SE_TILD,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_COMMA,       SE_EQL,         SE_LESS,        SE_GRTR,        KC_NONUS_BSLASH,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    NO_HALF,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 LED_LEVEL,      KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_MY_COMPUTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP,        KC_TRANSPARENT, KC_PSCREEN,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_KP_SLASH,    KC_WWW_SEARCH,
    KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, KC_MAIL,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_KP_DOT,      KC_KP_COMMA,    KC_CALCULATOR,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,
                                                                                                    KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,
                                                                                                                    KC_TRANSPARENT, KC_AUDIO_VOL_UP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LGUI(LSFT(KC_F1)),LGUI(LSFT(KC_F2)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_F11)),LGUI(LSFT(KC_F12)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_BTN3,     KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_RIGHT),
                                                                                                                    KC_MS_WH_UP,    KC_AUDIO_VOL_UP,
                                                                                    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_WWW_BACK
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           SE_ACUT,                                        NO_QUOT,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           SE_PLUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_F11,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           SE_APOS,
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           SE_OSLH,        SE_AE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_F5,                                          KC_F12,         KC_N,           KC_M,           KC_COMMA,       KC_DOT,         RCTL_T(NO_MINS),SE_ACUT,
    KC_TRANSPARENT, SE_LESS,        KC_TRANSPARENT, KC_LGUI,        KC_LALT,                                                                                                        KC_RALT,        KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,
                                                                                                    KC_INSERT,      KC_DELETE,      KC_HOME,        KC_END,
                                                                                                                    C_S_T(KC_F2),   KC_PGUP,
                                                                                    KC_SPACE,       KC_LCTRL,       LCA_T(KC_F3),   KC_PGDOWN,      KC_ENTER,       KC_BSPACE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_L,           KC_R,           KC_C,           KC_G,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_S,           KC_N,           KC_T,           KC_H,           KC_D,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z,           KC_V,           KC_W,           KC_M,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SE_LSPO:
      perform_space_cadet(record, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case SE_RSPC:
      perform_space_cadet(record, KC_LSFT, KC_LSFT, KC_9);
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
