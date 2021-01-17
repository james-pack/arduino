#pragma once

#include "Arduino.h"

class Encoder final {
public:
  constexpr Encoder() = default;
  constexpr Encoder(arduino_int pin1, arduino_int pin2) {}
  arduino_long read() { return 0; }
};
