RGB_MATRIX_EFFECT(SAMURAI)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool SAMURAI(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    RGB red = hsv_to_rgb((HSV){0, 255, rgb_matrix_config.hsv.v});
    RGB gold = hsv_to_rgb((HSV){51, 255, rgb_matrix_config.hsv.v});

    for (uint8_t i = led_min; i < led_max; i++) {
        if (HAS_ANY_FLAGS(g_led_config.flags[i], LED_FLAG_UNDERGLOW)) {
             // set underglow to gold
            rgb_matrix_set_color(i, gold.r, gold.g, gold.b);
        } else {
            // set key leds to red
            rgb_matrix_set_color(i, red.r, red.g, red.b);
        }
    }

    return led_max < DRIVER_LED_TOTAL;
}

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
