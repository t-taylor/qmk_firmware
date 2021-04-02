#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[0] = LAYOUT( /* Base */
			KC_GESC,       KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_DEL,    KC_INS,
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, KC_DEL,
			KC_LCTL,       KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    KC_PGDN,
		    KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_GRV,  KC_N,  KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
		    KC_LGUI,                 KC_LALT,  MO(1),        KC_BSPC,        RGUI_T(KC_SPC), KC_LALT,                      KC_LEFT, KC_DOWN,   KC_RIGHT),
		[1] = LAYOUT( /* FN */
			KC_TRNS,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  RGB_TOG, KC_MSEL,
		    KC_TRNS,       KC_TRNS, KC_TRNS,  KC_PGUP,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR,  KC_TRNS, KC_TRNS, RESET,   KC_PGUP,
			KC_CAPS,       KC_TRNS,  KC_HOME, KC_PGDN,KC_END,  KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,  KC_TRNS,          EEP_RST, KC_MPLY,
		    KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_VOLU,
		    KC_TRNS,                 KC_TRNS, KC_TRNS,         KC_TRNS,           KC_TRNS,         KC_TRNS,                    KC_MPRV, KC_VOLD, KC_MNXT),
 };
