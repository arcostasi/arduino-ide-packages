#include "Arduino.h"

__attribute((section(".init9")))

int main()
{
    setup();
    while (1)
        loop();
}
