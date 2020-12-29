#include "Arduino.h"

namespace arduino_internals {
RandomT RandomGlobals{};
Pins<42> pins;
}  // namespace arduino_internals

arduino_internals::SerialT Serial{};
