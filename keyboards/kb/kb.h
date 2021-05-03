#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	                  K003,       K005, K006, K007, K008, K009, K010, K011, K012,       K014, K015, K016, K017, K018, K019, K020,                   K024,                               \
	                                                                                                                                                                                    \
	                  K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,       K218, K219, K220, K221, K222, K223, K224,             K227, K228,       \
	                  K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316,       K318, K319, K320, K321, K322, K323, K324, K325,             K328,       \
	K400,             K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414,       K416,                         K421, K422, K423,       K425,       K427,             \
	K500, K501,       K503,       K505, K506, K507, K508, K509, K510, K511, K512, K513, K514,       K516,             K519,       K521, K522, K523, K524, K525,       K527,       K529, \
	                  K603, K604, K605,                   K609,                   K613, K614, K615, K616,       K618, K619, K620,       K622, K623,       K625,                         \
	                  K703, K704, K705,                         K710,                   K714, K715, K716,                         K721, K722  \
) { \
	{ KC_NO, KC_NO, KC_NO, K003,  KC_NO, K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, K014,  K015,  K016,  K017,  K018,  K019,  K020,  KC_NO, KC_NO, KC_NO, K024,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  KC_NO, K218,  K219,  K220,  K221,  K222,  K223,  K224,  KC_NO, KC_NO, K227,  K228,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  KC_NO, K318,  K319,  K320,  K321,  K322,  K323,  K324,  K325,  KC_NO, KC_NO, K328,  KC_NO }, \
	{ K400,  KC_NO, KC_NO, K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  KC_NO, K416,  KC_NO, KC_NO, KC_NO, KC_NO, K421,  K422,  K423,  KC_NO, K425,  KC_NO, K427,  KC_NO, KC_NO }, \
	{ K500,  K501,  KC_NO, K503,  KC_NO, K505,  K506,  K507,  K508,  K509,  K510,  K511,  K512,  K513,  K514,  KC_NO, K516,  KC_NO, KC_NO, K519,  KC_NO, K521,  K522,  K523,  K524,  K525,  KC_NO, K527,  KC_NO, K529 }, \
	{ KC_NO, KC_NO, KC_NO, K603,  K604,  K605,  KC_NO, KC_NO, KC_NO, K609,  KC_NO, KC_NO, KC_NO, K613,  K614,  K615,  K616,  KC_NO, K618,  K619,  K620,  KC_NO, K622,  K623,  KC_NO, K625,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K703,  K704,  K705,  KC_NO, KC_NO, KC_NO, KC_NO, K710,  KC_NO, KC_NO, KC_NO, K714,  K715,  K716,  KC_NO, KC_NO, KC_NO, KC_NO, K721,  K722,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif