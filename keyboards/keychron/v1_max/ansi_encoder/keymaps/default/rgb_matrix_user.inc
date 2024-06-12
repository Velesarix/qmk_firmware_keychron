RGB_MATRIX_EFFECT(sunset_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool sunset_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(44, 255, 255, 255);
    } else {
        rgb_matrix_set_color(44, 255, 58, 128);
    }

    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            case 0 ... 13:
                rgb_matrix_set_color(i, 255, 50, 0);
                break;
            case 14 ... 28:
                rgb_matrix_set_color(i, 255, 153, 33);
                break;
            case 29 ... 43:
                rgb_matrix_set_color(i, 254, 219, 99);
                break;
            case 44 ... 57:
                rgb_matrix_set_color(i, 255, 58, 128);
                break;
            case 58 ... 70:
                rgb_matrix_set_color(i, 148, 47, 255);
                break;
            case 71 ... 80:
                rgb_matrix_set_color(i, 148, 0, 255);
                break;
            default:
                rgb_matrix_set_color(i, 0, 0, 255);
                break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif