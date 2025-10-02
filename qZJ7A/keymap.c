#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_152_255_255,
  HSV_74_255_255,
  HSV_188_255_255,
  HSV_252_255_232,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    QK_REP,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    OSM(MOD_LSFT),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    OSM(MOD_LCTL),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                    LT(7, KC_SPACE),OSL(1),                                         OSL(4),         LT(7, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_F11,         CW_TOGG,        KC_TAB,         OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_BSPC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F12,         KC_GRAVE,       KC_ENTER,       OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_ESCAPE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TO(8),          TO(2),          TO(3),          KC_BSLS,        KC_DELETE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_BSPC,        KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_EQUAL,    KC_4,           KC_5,           KC_6,           KC_KP_MINUS,                                    KC_BSPC,        OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_QUOTE,       KC_SCLN,        KC_1,           KC_2,           KC_3,           KC_KP_PLUS,                                     KC_ESCAPE,      OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_ENTER,       KC_GRAVE,       KC_TRANSPARENT, 
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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_BSLS,        TO(6),          TO(5),          TO(8),          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_BSPC,                                        KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_ENTER,       OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_ESCAPE,                                      KC_PLUS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        KC_DELETE,                                      KC_KP_ASTERISK, KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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
  [8] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,HSV_152_255_255,HSV_74_255_255, HSV_188_255_255,HSV_252_255_232,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_INC_CPI,NAVIGATOR_DEC_CPI,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     TOGGLE_SCROLL,                                  TOGGLE_SCROLL,  KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DRAG_SCROLL,                                    DRAG_SCROLL,    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_MS_BTN1,                                     KC_TRANSPARENT, TO(0)
  ),
};






extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_152_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(152,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_188_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(188,255,255);
      }
      return false;
    case HSV_252_255_232:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(252,255,232);
      }
      return false;
  }
  return true;
}

// https://github.com/qmk/qmk_firmware/issues/22566
// Restore deprecated OSL quirk: Disable OSL upon OSM tap.
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
        clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
    }
    return;
}

