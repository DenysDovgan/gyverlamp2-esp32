#ifndef FAST_FILTER_H
#define FAST_FILTER_H

#include <Arduino.h> // For basic types like byte, int, etc.

#ifdef __cplusplus
extern "C" {
#endif

    // Example of a simple moving average filter
    class MovingAverageFilter {
    public:
        MovingAverageFilter(int windowSize);
        int add(int newValue);
        int getFilteredValue();
        void reset();

    private:
        int* _values;
        int _windowSize;
        long _sum;
        int _count;
        int _index;
    };

    // You might also have global filter functions if not class-based
    int applyExponentialFilter(int currentValue, int previousValue, float alpha);

#ifdef __cplusplus
}
#endif

#endif // FAST_FILTER_H