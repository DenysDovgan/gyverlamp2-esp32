#ifndef PALETTES_H
#define PALETTES_H

#include <FastLED.h> // For CRGBPalette16
#include "data.h"    // For paletteArr, pal, CUR_PRES

#ifdef __cplusplus
extern "C" {
#endif

    // Function to update the current active palette based on CUR_PRES.palette
    void updPal();

    // Function to scale a palette index (e.g., to map a 0-255 value onto a custom palette)
    byte scalePal(byte val);

    // Function to load a custom palette from PaletteData struct
    void loadCustomPalette(const PaletteData* data, CRGBPalette16& targetPalette);

    // You might declare specific built-in palettes here as extern const
    // extern const CRGBPalette16 myCustomPalette1;

#ifdef __cplusplus
}
#endif

#endif // PALETTES_H