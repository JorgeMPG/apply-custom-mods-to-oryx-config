#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    OSM(MOD_LSFT),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    OSM(MOD_LCTL),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                    LT(7, KC_SPACE),OSL(1),                                         OSL(4),         LT(7, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_F11,         CW_TOGG,        KC_TAB,         OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_BSPC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F12,         KC_GRAVE,       KC_ENTER,       OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_ESCAPE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          TO(3),          KC_BSLS,        KC_DELETE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_BSPC,        KC_TRANSPARENT, KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_EQUAL,    KC_6,           KC_5,           KC_4,           KC_KP_MINUS,                                    KC_BSPC,        OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_QUOTE,       KC_SCLN,        KC_3,           KC_2,           KC_1,           KC_KP_PLUS,                                     KC_ESCAPE,      OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_ENTER,       KC_GRAVE,       KC_TRANSPARENT, 
    KC_ENTER,       KC_SLASH,       KC_DOT,         KC_COMMA,       KC_0,           KC_KP_ASTERISK,                                 KC_DELETE,      KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_NO,                                          KC_NO,          TO(0)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_RIGHT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_ACCEL2,   KC_PAGE_UP,     KC_MS_LEFT,     KC_MS_UP,       KC_MS_DOWN,     KC_MS_RIGHT,                                    KC_BSPC,        OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_ACCEL1,   KC_PGDN,        KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,                                       KC_ESCAPE,      OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_ENTER,       KC_GRAVE,       KC_TRANSPARENT, 
    KC_MS_ACCEL0,   KC_HOME,        KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_END,                                         KC_DELETE,      KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_NO,                                          KC_NO,          TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BSPC,        OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_TAB,         CW_TOGG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ESCAPE,      OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_ENTER,       KC_GRAVE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_BSLS,        KC_TRANSPARENT, TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_BSPC,                                        KC_MINUS,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_ENTER,       OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_ESCAPE,                                      KC_PLUS,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        KC_DELETE,                                      KC_KP_ASTERISK, KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_BSPC,                                        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_PAGE_UP,     KC_MS_ACCEL2,   
    KC_TRANSPARENT, KC_GRAVE,       KC_ENTER,       OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_ESCAPE,                                      KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_PGDN,        KC_MS_ACCEL1,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        KC_DELETE,                                      KC_HOME,        KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_END,         KC_MS_ACCEL0,   
                                                    TO(0),          KC_NO,                                          KC_NO,          TO(0)
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_QUES,        KC_LBRC,        KC_LPRN,        KC_LCBR,        KC_LABK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_MINUS,                                       KC_TILD,        KC_RBRC,        KC_RPRN,        KC_RCBR,        KC_RABK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       KC_COLN,        KC_BSLS,        KC_PIPE,                                        KC_DQUO,        KC_QUOTE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};






bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


