#include <Arduino.h>
#include <WiFi.h>
#include <EEPROM.h>
#include <FastLED.h>

void setup()
{
    Serial.begin(115200);
    delay(100);

    EEPROM.begin(EEPROM_SIZE);

    setupWiFi();
    setupTime();

    FastLED.addLeds<CHIPSET, STRIP_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
    FastLED.setBrightness(BRIGHTNESS);

    loadPresets();

    setupButton();         // from button.cpp (if modularized)
}

void loop()
{
    handleButton();        // Handle single/double/long press
    runCurrentEffect();    // Run the currently selected LED effect
    FastLED.show();        // Push frame to strip
    delay(FRAME_DELAY_MS); // Slight delay to control frame rate
}