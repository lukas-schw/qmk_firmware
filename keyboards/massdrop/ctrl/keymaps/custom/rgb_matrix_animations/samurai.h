RGB_MATRIX_EFFECT(SAMURAI)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool SAMURAI(effect_params_t* params) {
    RGB red = hsv_to_rgb((HSV){0, 255, rgb_matrix_config.hsv.v});
    RGB gold = hsv_to_rgb((HSV){51, 255, rgb_matrix_config.hsv.v});
    // set key leds to red
    for (uint8_t i = 0; i < 87; i++) {
        rgb_matrix_set_color(i, red.r, red.g, red.b);
    }
    // set underglow to gold
    for (uint8_t i = 87; i < 119; i++) {
        rgb_matrix_set_color(i, gold.r, gold.g, gold.b);
    }

    return false;
}

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
