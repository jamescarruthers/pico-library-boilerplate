// your_library.cpp

#include "your_library.hpp"

namespace YourLibrary {

GpioHandler::GpioHandler(uint pin) : _pin(pin) {
    gpio_init(pin);              // Initialize the GPIO pin
    gpio_set_dir(pin, GPIO_IN);   // Set the pin as input
}

int GpioHandler::read() const {
    return gpio_get(_pin);        // Read the value of the GPIO pin
}

}  // namespace YourLibrary
