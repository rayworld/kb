#include QMK_KEYBOARD_H

led_config_t g_led_config = {
    {
        // key_to_led [row][col]
        { 0,  1,  2,  3,  4,  5 },
        { 6,  7,  8,  9, 10, 11 },
        {12, 13, 14, 15, 16, 17 },
        {18, 19, 20, 21, 22, 23 },
        {NO_LED,24, NO_LED,25, NO_LED,26 }
    },
    {
        // LED x,y
        {0,0},{1,0},{2,0},{3,0},{4,0},{5,0},
        {0,1},{1,1},{2,1},{3,1},{4,1},{5,1},
        {0,2},{1,2},{2,2},{3,2},{4,2},{5,2},
        {0,3},{1,3},{2,3},{3,3},{4,3},{5,3},
        {1,4},
        {3,4},
        {5,4}
    },
    {
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT
    }
};
