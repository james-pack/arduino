#pragma once

#include <cstdint>

namespace arduino_internals {

class WireT final {
 public:
  void setClock(uint32_t baud_rate) {}
  void begin() {}
  void beginTransmission(uint8_t address) {}
  void write(uint8_t value) {}
  void endTransmission() {}
  void requestFrom(uint8_t address, uint8_t num_bytes) {}
  uint8_t read() { return 0; }
};

}  // namespace arduino_internals

extern arduino_internals::WireT Wire;
