#pragma once

#include <cstdint>

namespace arduino_internals {

class WireT final {
 public:
  void beginTransmission(uint8_t address) {}
  void write(uint8_t value) {}
  void endTransmission();
};

}  // namespace arduino_internals

extern arduino_internals::WireT Wire;
