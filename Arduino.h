#pragma once

#include <string>

#include "glog/logging.h"

// TODO(james): Note that this "design" is upside down. It would be better to port glog to work on top of Arduino's
// Serial mechanism and use glog instead of Serial. But this approach accomplishes the main goal of getting debug info.
class SerialT final {
 public:
  void print(const std::string& msg) { LOG(INFO) << msg; }
  void println(const std::string& msg) { LOG(INFO) << msg << "\n"; }

  void print(uint8_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(uint8_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }
  void print(int8_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(int8_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }

  void print(uint16_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(uint16_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }
  void print(int16_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(int16_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }

  void print(uint32_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(uint32_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }
  void print(int32_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(int32_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }

  void print(uint64_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(uint64_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }
  void print(int64_t msg) { LOG(INFO) << std::to_string(msg); }
  void println(int64_t msg) { LOG(INFO) << std::to_string(msg) << "\n"; }
};

extern SerialT Serial;
