#ifndef TIME_RANDOM_H
#define TIME_RANDOM_H

#include <Arduino.h> // For millis() or other time sources

#ifdef __cplusplus
extern "C" {
#endif

    // Function to seed Arduino's random number generator using time
    void seedRandomWithTime();

    // Function to get a random number using a time-seeded generator
    // (If you have a custom fast random, this might combine with it)
    long getRandomTimeSeeded(long howBig);
    long getRandomTimeSeeded(long howSmall, long howBig);

#ifdef __cplusplus
}
#endif

#endif // TIME_RANDOM_H