#ifndef TIMER_MILLIS_H
#define TIMER_MILLIS_H

#include <Arduino.h> // For millis() and uint32_t

#ifdef __cplusplus
extern "C" {
#endif

    class TimerMillis {
    public:
        TimerMillis();
        TimerMillis(uint32_t interval);

        void setInterval(uint32_t interval);
        void start();
        void restart(); // Restarts the timer from the current moment
        void stop();
        bool isReady(); // Checks if the interval has passed
        bool running(); // Checks if the timer is currently active
        uint32_t getElapsedTime(); // Time elapsed since start
        uint32_t getRemainingTime(); // Time remaining until ready
        byte getLength8(); // Returns progress as a byte (0-255)

        // Optional: for one-shot timers that stop after being ready
        bool isReadyStop(); // Checks if ready, and stops the timer

    private:
        uint32_t _interval;
        uint32_t _startTime;
        bool _running;
        bool _oneShotMode; // For isReadyStop functionality
    };

#ifdef __cplusplus
}
#endif

#endif // TIMER_MILLIS_H