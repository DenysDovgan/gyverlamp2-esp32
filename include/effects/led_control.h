#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include <FastLED.h> // For CRGB
#include "data.h"    // For cfg, NUM_LEDS, MAX_LEDS (if NUM_LEDS isn't directly defined)
#include "config/config.h" // For NUM_LEDS

#ifdef __cplusplus
extern "C" {
#endif

    // Function to set a specific pixel by X, Y coordinates (for matrix displays)
    // Handles matrix mapping logic based on cfg.deviceType and cfg.matrix
    void setPix(int x, int y, CRGB color);

    // Function to get the color of a specific pixel by X, Y coordinates
    CRGB getPix(int x, int y);

    // Function to set an LED by its linear index (for strips or linear mapping)
    void setLED(int index, CRGB color);

    // Fills a specified range of LEDs with a color (for strips)
    void fillStrip(int from, int to, CRGB color);

    // Fills an entire row in a matrix with a color
    void fillRow(int y, CRGB color);

    // Similar to setPix but handles overlapping/blending colors
    void setPixOverlap(int x, int y, CRGB color);

#ifdef __cplusplus
}
#endif

#endif // LED_CONTROL_H