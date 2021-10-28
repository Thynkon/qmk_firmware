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
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

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
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  BP_LSPO,
  BP_RSPC,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      BP_DLR,         BP_AMPR,        BP_LPRN,        BP_RPRN,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,                                KC_AUDIO_MUTE,  KC_CAPSLOCK,    BP_AT,          BP_DQOT,        BP_EQL,         BP_PERC,        WEBUSB_PAIR,
    KC_TAB,         BP_AGRV,        BP_B,           BP_ECUT,        BP_DOT,         BP_MINS,        KC_SPACE,                                       KC_RGUI,        BP_DCRC,        BP_V,           BP_L,           BP_M,           BP_X,           BP_CCED,
    RALT_T(KC_ENTER),BP_O,           BP_U,           BP_A,           BP_I,           BP_J,                                                                           BP_G,           BP_T,           BP_S,           BP_N,           BP_R,           BP_F,
    TT(1),          BP_Q,           BP_Y,           BP_EGRV,        BP_P,           BP_K,           KC_BSPACE,                                      KC_DELETE,      BP_W,           BP_D,           KC_UP,          BP_H,           BP_C,           RALT_T(BP_Z),
    LCTL(BP_C),     LCTL(BP_V),     LCTL(BP_X),     KC_LCTRL,       KC_LALT,                                                                                                        TG(3),          BP_PIPE,        LALT_T(KC_RIGHT),BP_UGRV,        TG(2),
                                                                                                    KC_TRANSPARENT, TG(2),          RGB_MOD,        BP_APOS,
                                                                                                                    MT(MOD_HYPR,KC_END),BP_HASH,
                                                                                    LSFT_T(BP_E),   BP_COMM,        KC_HOME,        BP_EXLM,        BP_APOS,        RSFT_T(KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, BP_LCBR,        BP_RCBR,        KC_UP,          BP_LPRN,        BP_RPRN,        KC_SPACE,                                       KC_NUMLOCK,     BP_MINS,        KC_KP_7,        KC_KP_8,        KC_KP_9,        BP_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, BP_LGIL,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       BP_RGIL,                                                                        BP_EQL,         KC_KP_4,        KC_KP_5,        KC_KP_6,        BP_SLSH,        BP_BSLS,
    KC_TRANSPARENT, BP_LBRC,        BP_RBRC,        BP_LESS,        BP_GRTR,        KC_TRANSPARENT, KC_BSPACE,                                      KC_TRANSPARENT, RALT(BP_T),     KC_KP_1,        KC_KP_2,        KC_KP_3,        BP_PLUS,        BP_PERC,
    LCTL(BP_C),     LCTL(BP_V),     LCTL(BP_X),     KC_LCTRL,       KC_TRANSPARENT,                                                                                                 RCTL_T(KC_KP_0),RALT_T(KC_KP_DOT),LALT_T(KC_KP_COMMA),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, FRCH_Z,         KC_U,           KC_I,           KC_O,           KC_P,           FRCH_EGRV,
    KC_ENTER,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           FRCH_EACU,      FRCH_AGRV,
    FRCH_DLR,       FRCH_Y,         KC_X,           KC_C,           KC_V,           KC_B,           KC_BSPACE,                                      KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         FRCH_MINS,      KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_LALT,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_BSPACE,      FRCH_DLR,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RSFT_T(KC_SPACE)
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(BP_1),     LALT(BP_2),     LALT(LCTL(BP_3)),LALT(BP_4),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LALT(BP_5),     LALT(BP_6),     LALT(BP_7),     LALT(BP_8),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RGB_HUD,        RGB_VAD,        RGB_SLD,        RGB_TOG,        RGB_SPD,                                                                        RGB_SPI,        TOGGLE_LAYER_COLOR,RGB_MOD,        RGB_VAI,        RGB_HUI,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAD,                                        RGB_SAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MY_COMPUTER, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MAIL,        KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_UP,KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BP_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_LPRN);
      return false;
    case BP_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_RPRN);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
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
    switch (layer) {
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(0,238,225);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}


