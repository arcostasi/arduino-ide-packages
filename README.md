Arduino IDE Packages
=======

This package adds support for the Franzininho DIY which uses the Atmel AVR ATtiny85 microcontroller to the Arduino IDE 1.8.x and 2.x.

This package uses parts of [Digistump AVR core](https://github.com/digistump/DigistumpArduino) and a tiny8 variant of [ATtiny](https://github.com/damellis/attiny).

The following board are supported:

- Franzininho DIY (ATtiny 85)
- Franzininho DIY ([PICSimLab](https://github.com/lcgamboa/picsimlab))

### Installation

For now copy the franzininho package to the Arduino15 packages directory.
Wait for new updates with an easier installation.

### Micronucleus Loader

Micronucleus is zipped into the tools directory. Before using the programmer, unzip this folder into the same directory.

**To compile:**

Micronucleus is the only executable in these packages that is pre-compiled:

Micronucleus: https://github.com/micronucleus/micronucleus/tree/80419704f68bf0783c5de63a6a4b9d89b45235c7
Dependencies: libusb and possibly lib32stdc on linux - (on ubuntu get it by issuing: apt-get install lib32stdc++6)
