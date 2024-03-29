#include <iostream>

using namespace std;

// dumb idea
typedef int number;

// If we are on a 64-bit intel processor, int is 32 bits
#ifdef __x86_64
typedef int int32;
#endif

// If we are on an 8-bit bit AVR processor, long is 32 bits
#if defined(__AVR_ATmega328P__)
typedef long int32;
#endif

// But c++11 already provides a tool for this
// int32_t  - always a 32 bit value
// int8_t - always a 8 bit value
// uint8_t - always a value 0-255

int main() {
  // these mean int x, y
  number x = 10;
  number y = 5;

  // my typedef
  int32 z = 1000;

  // c++11 standard type
  int32_t c = 1000; // stores a 32-bit value on any platform

  int8_t b;  // stores an 8-bit value (-128 to 127)
  uint8_t a; // stores an unsigned (positive) 8-bit value (0-255)
}
