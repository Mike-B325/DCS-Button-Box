/*
  Tell DCS-BIOS to use a serial connection and use the default Arduino Serial
  library. This will work on the vast majority of Arduino-compatible boards,
  but you can get corrupted data if you have too many or too slow outputs
  (e.g. when you have multiple character displays), because the receive
  buffer can fill up if the sketch spends too much time updating them.
  
  If you can, use the IRQ Serial connection instead.
*/
#define DCSBIOS_IRQ_SERIAL

#include "DcsBios.h"

/* paste code snippets from the reference documentation here */
const byte rocketSelPins[3] = {2, 3, -1};
DcsBios::SwitchMultiPos rocketSel("ROCKET_SEL", rocketSelPins, 3);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}

