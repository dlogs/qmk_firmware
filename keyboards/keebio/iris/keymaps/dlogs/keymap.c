#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;
enum my_layers {
  _COLEMAK,
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define SHO_APPS C(KC_UP) // mission control

enum custom_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  ADJUST,
  ARROW,
  NE,
  APP,
  AAPP,
  APPU,
  REPO,
  BIZ,
  K_BOW,
  K_EOW,
  K_BOL,
  K_EOL,
  K_LUCTRL,
  K_RUGUI
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_UNDS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    K_LUCTRL, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                               KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          K_RUGUI,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    LOWER,    RAISE, KC_SPC,                     KC_ENT,  LOWER,   RALT_T(KC_BSPC)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_A      ,KC_S,  KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,              _______,  _______,   _______
                                // └────────┴────────┴────────┘             └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
    KC_GRAVE,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                            KC_CIRC,  KC_P7,   KC_P8,    KC_P9, KC_RPRN, KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  NE,     KC_MINS, KC_PLUS, KC_EQL,  KC_PSCR,                            _______,  KC_P4,    KC_P5,   KC_P6,  KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, ARROW,   KC_LPRN, KC_LCBR, KC_LBRC, KC_BSLS,                            _______,  KC_P1,   KC_P2,   KC_P3,   KC_PPLS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_RPRN, KC_RCBR, KC_RBRC, KC_PIPE, _______,          _______,  _______, KC_P0,   KC_P0,   KC_PDOT, KC_PENT, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                    _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    SHO_APPS, KC_EXLM, _______,  KC_UP,   _______,KC_PERC,                            KC_CIRC,   K_BOW,   KC_UP,  K_EOW  , KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, AAPP    , APP   , APPU    , REPO   , BIZ    ,                           K_BOL  , KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ENT,  KC_BSPC,  KC_DEL, KC_PGDN, _______,  _______,         _______, K_EOL  , _______, KC_LBRC, KC_RBRC, KC_BSLS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_LGUI,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, _______, _______, _______, _______, TG(_QWERTY),                          _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_MOD, RGB_RMOD, _______, _______, _______, _______,          _______, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

uint16_t mac_keycode(uint16_t keycode) {
  switch (keycode) {
    case K_BOW: return A(KC_LEFT);
    case K_EOW: return A(KC_RIGHT);
    case K_BOL: return G(KC_LEFT);
    case K_EOL: return G(KC_RIGHT);
    case K_LUCTRL: return KC_LGUI;
    case K_RUGUI: return KC_RCTL;
  }
  return 0;
}

uint16_t win_keycode(uint16_t keycode) {
  switch (keycode) {
    case K_BOW: return C(KC_LEFT);
    case K_EOW: return C(KC_RIGHT);
    case K_BOL: return KC_HOME;
    case K_EOL: return KC_END;
    case K_LUCTRL: return KC_LCTL;
    case K_RUGUI: return KC_RGUI;
  }
  return 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint16_t os_key = 0;
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    case K_BOW:
    case K_EOW:
    case K_BOL:
    case K_EOL:
    case K_LUCTRL:
    case K_RUGUI:
      os_key = (detected_host_os() == OS_WINDOWS || detected_host_os() == OS_LINUX) ? win_keycode(keycode) : mac_keycode(keycode);
      if (record->event.pressed) {
        register_code16(os_key);
      } else {
        unregister_code16(os_key);
      }
      return false;
      break;
  }
  if (record->event.pressed) {
    switch(keycode) {
      case ARROW:
        SEND_STRING("=> ");
        break;
      case NE:
        SEND_STRING("!=");
        break;
      case APP:
        SEND_STRING("application");
        break;
      case AAPP:
        SEND_STRING("Application");
        break;
      case APPU:
        SEND_STRING("application_uuid");
        break;
      case REPO:
        SEND_STRING("Repository");
        break;
      case BIZ:
        SEND_STRING("business");
        break;
    }
  }
  return true;
}
