#ifndef EFFECTS_H
#define EFFECTS_H

#include "data.h" // Includes global data structures and externs

#ifdef __cplusplus
extern "C" {
#endif

    // Main function responsible for rendering the current lighting effect
    void effectsRoutine();

    // Helper functions to determine effect parameters (brightness, length, scale)
    // These no longer rely on sound analysis.
    bool briMode();    // Checks if ADC is in brightness sensor mode
    byte getBright();  // Calculates the current brightness based on config/sensor
    int getLength();   // Returns the current effect length (no sound reactivity)
    byte getScale();   // Returns the current effect scale (no sound reactivity)

#ifdef __cplusplus
}
#endif

#endif // EFFECTS_H