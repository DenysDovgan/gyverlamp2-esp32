#ifndef NTP_CLIENT_GYVER_H
#define NTP_CLIENT_GYVER_H

#include <Arduino.h> // For basic types
#include <time.h>    // For time_t, tm struct
#include <WiFiUdp.h> // If using WiFi UDP for NTP

#ifdef __cplusplus
extern "C" {
#endif

    // Function to initialize NTP client
    void ntp_setup();

    // Function to get current time from NTP (and update global 'now' struct if applicable)
    void ntp_update();

    // Function to retrieve the current synchronized time
    time_t getNtpTime();

#ifdef __cplusplus
}
#endif

#endif // NTP_CLIENT_GYVER_H