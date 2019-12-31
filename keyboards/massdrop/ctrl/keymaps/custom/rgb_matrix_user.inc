RGB_MATRIX_EFFECT(SAMURAI)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool SAMURAI(effect_params_t* params) {
    // set key leds to red
    for (uint8_t i = 0; i < 87; i++) {
        rgb_matrix_set_color(i, 0xFF, 0x00, 0x00);
    }
    // set underglow to gold
    for (uint8_t i = 87; i < 119; i++) {
        rgb_matrix_set_color(i, 0xFF, 0xD7, 0x00);
    }

    return false;
}

#endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
