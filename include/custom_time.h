#ifndef CUSTOM_TIME_H
#define CUSTOM_TIME_H

#include <Arduino.h> // For millis() and other basic Arduino functions

#ifdef __cplusplus
extern "C" {
#endif

    // Declare functions related to custom time tracking or calculations
    uint32_t getCustomTimeElapsed();
    void updateCustomTime(); // Might update global 'now' struct or similar

#ifdef __cplusplus
}
#endif

#endif // CUSTOM_TIME_H