#ifndef CONFIG_H
#define CONFIG_H

// --- Hardware Pin Definitions ---
#define LED_DATA_PIN        D2    // Example for NodeMCU/ESP32 Dev Kit (use GPIO number like 2 for ESP32)
#define PHOTORESISTOR_PIN   A0    // Example for analog input (e.g., GPIO 34 for ESP32)
#define BUTTON_PIN          D3    // Example button pin

// --- LED Strip Configuration ---
#define NUM_LEDS            256   // Total number of LEDs on your strip/matrix
#define LED_TYPE            WS2812B // Or SK6812, etc.
#define COLOR_ORDER         GRB   // Or RGB, BGR, etc. (Check your strip)

// --- Network Configuration (if using WiFi/UDP) ---
#define WIFI_SSID           "YourWiFiSSID"
#define WIFI_PASS           "YourWiFiPassword"
#define UDP_PORT            8888  // Port for UDP communication (e.g., for master/slave or remote control)
#define NTP_SERVER          "pool.ntp.org" // NTP server for time synchronization

// --- Default Values / Constants ---
#define DEFAULT_BRIGHTNESS  60   // Default LED brightness (0-255)
#define MIN_BRIGHTNESS      10    // Minimum allowed brightness
#define MAX_BRIGHTNESS      220   // Maximum allowed brightness
#define MAX_EFFECTS         11    // Total number of effects implemented
#define MAX_PALETTES        1     // Total number of custom palettes (if you expand beyond one)

// --- Master/Slave Role ---
// #define IS_MASTER           true  // Uncomment if this device is the master in a multi-device setup
                                   // Otherwise, it's implicitly a slave or standalone.

// --- Time Configuration ---
#define DAWN_BRIGHTNESS     50    // Brightness for "dawn" effect
#define DAWN_POST_MINUTES   15    // Duration of full brightness after dawn, in minutes

// --- Other Application-Specific Constants ---
// #define DEBUG_SERIAL        true  // Uncomment to enable serial debug output

#endif // CONFIG_H