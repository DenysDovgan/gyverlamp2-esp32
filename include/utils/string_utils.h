#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <Arduino.h> // For String class or basic types if not using String

#ifdef __cplusplus
extern "C" {
#endif

    // Declare various string manipulation functions
    // Example: Convert byte array to hex string
    void bytesToHexString(const byte* bytes, size_t len, char* buffer);

    // Example: Parse an integer from a string
    int parseIntFromString(const char* str);

    // Example: Check if a string contains a specific substring
    bool stringContains(const char* haystack, const char* needle);

#ifdef __cplusplus
}
#endif

#endif // STRING_UTILS_H