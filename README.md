# Project
3rd party hardware specification for monoxit educational hardware modules.  
Based on rduino-tiny core with Attiny1634 support.

## Manual Deployment
The folder tree contains 3rd party hardware specification and arduino-tiny core with Attiny1634 support. The tree is designed for Arduino IDE 1.5.7 (or later possibly).  
Current monoxit educational hardware module utilizes Attiny1634. Attiny1634 requires avr toolchain contained in Arduino IDE 1.5.7.

1. Place monoxit folder under Arduino sketchbook hardware folder. The current sketchbook folder is found by Arduino IDE property dialog. If hardware folder is not created, create it.
2. Place TinySafeBoot software modified for bluetooth connection (https://github.com/monoxit/tsb1634)  in monoxit\tiny\tools\tsb.
3. (Optional) Place TinySafeBoot bootloader modified for Attiny1634 (https://github.com/monoxit/tsb1634) in monoxit\tiny\bootloader\tsb.

## Credits
https://code.google.com/p/arduino-tiny/  
https://github.com/rambo/arduino-tiny/tree/attiny1634

## License
arduino-tiny core license: license.txt
