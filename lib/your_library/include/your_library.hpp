// your_library.hpp

#pragma once

#include "pico/stdlib.h"

namespace YourLibrary {

// A simple class to manage a GPIO pin
class GpioHandler {
public:
    // Constructor to initialize the GPIO pin
    GpioHandler(uint pin);

    // Method to read the state of the pin
    int read() const;

private:
    uint _pin;  // Pin number
};

}  // namespace YourLibrary
