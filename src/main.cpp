#include <stdio.h>
#include "pico/stdlib.h"

#include "your_library.hpp"

int main() {
    setup_default_uart();
    printf("Hello, world!\n");
    return 0;
}
