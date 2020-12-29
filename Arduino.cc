#include "Arduino.h"

#include <chrono>

namespace arduino_internals {
RandomT RandomGlobals{};
Pins<42> pins;
std::chrono::time_point<std::chrono::system_clock> start_time{};
}  // namespace arduino_internals

arduino_internals::SerialT Serial{};

arduino_ulong millis() {
  auto delta = std::chrono::system_clock::now() - arduino_internals::start_time;
  return std::chrono::duration_cast<std::chrono::milliseconds>(delta).count();
}
arduino_ulong micros() {
  auto delta = std::chrono::system_clock::now() - arduino_internals::start_time;
  return std::chrono::duration_cast<std::chrono::microseconds>(delta).count();
}
