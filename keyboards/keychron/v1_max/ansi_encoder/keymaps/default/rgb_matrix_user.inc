/*
 * RGB Colors
AZURE - 153, 245, 255
BLACK - 0, 0, 0
BLUE - 0, 0, 255
CHARTREUSE - 128, 255, 0 (greenish)
CORAL - 255, 124, 77 (orangeish)
CYAN - 0, 255, 255
GOLD - 255, 217, 0
GOLDRENROD - 217, 165, 33
GREEN - 0, 255, 0
MAGENTA - 255, 0, 255
ORANGE - 255, 128, 0
PINK - 255, 128, 191
PURPLE - 122, 0, 255
RED - 255, 0, 0
SPRINGGREEN - 0, 255, 128
TEAL - 0, 128, 128
TURQUOISE - 71, 110, 106
WHITE - 255, 255, 255
YELLOW - 255, 255, 0
 */

RGB_MATRIX_EFFECT(sunset_effect)
RGB_MATRIX_EFFECT(void_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool sunset_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 0 ... 13:
                // Pink
                rgb_matrix_set_color(i, 255, 128, 191);
                break;
            case 14 ... 28:
                // Yellow
                rgb_matrix_set_color(i, 255, 255, 0);
                break;
            case 29 ... 43:
                // Orange
                rgb_matrix_set_color(i, 255, 128, 0);
                break;
            case 44 ... 57:
                // Pink
                rgb_matrix_set_color(i, 255, 128, 191);
                break;
            case 58 ... 70:
                // Purple
                rgb_matrix_set_color(i, 255, 0, 255);
                break;
            case 71 ... 80:
                // Purple
                rgb_matrix_set_color(i, 122, 0, 255);
                break;
            default:
                rgb_matrix_set_color(i, 0, 0, 0);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool void_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 0 ... 13:
                // Pink
                rgb_matrix_set_color(i, 255, 128, 191);
                break;
            case 14 ... 28:
                // Purple
                rgb_matrix_set_color(i, 255, 0, 255);
                break;
            case 29 ... 43:
                // Cyan
                rgb_matrix_set_color(i, 0, 255, 255);
                break;
            case 44 ... 57:
                // Blue
                rgb_matrix_set_color(i, 0, 0, 255);
                break;
            case 58 ... 70:
                // Purple
                rgb_matrix_set_color(i, 255, 0, 255);
                break;
            case 71 ... 80:
                // Pink
                rgb_matrix_set_color(i, 255, 128, 191);
                break;
            default:
                rgb_matrix_set_color(i, 0, 0, 0);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif