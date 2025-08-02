#ifndef FAST_RANDOM_H
#define FAST_RANDOM_H

#include <Arduino.h> // For basic types like byte, uint32_t

#ifdef __cplusplus
extern "C" {
#endif

    // Declare functions for faster or specific random number generation
    // if Arduino's random() is not sufficient or has specific needs.
    uint8_t fastrandom8();
    uint16_t fastrandom16();
    uint32_t fastrandom32();

    // Functions to seed the fast random generator
    void seedFastRandom(uint32_t seed);

#ifdef __cplusplus
}
#endif

#endif // FAST_RANDOM_H