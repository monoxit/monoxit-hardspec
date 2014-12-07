# Project
Based on Arduino-tiny core with Attiny1634 support (https://github.com/rambo/arduino-tiny/tree/attiny1634).  
The folder tree contains 3rd party hardware specification for monoxit education hardware module and arduino-tiny core with Attiny1634 support. The tree is designed for Arduino IDE 1.5.7 (or later possibly).

## Manual Deployment

1. Place monoxit folder under Arduino sketchbook hardware folder. The current sketchbook folder is found by Arduino IDE property dialog.  If there is not already a hardware folder in sketchbook folder, create it.
2. Place TinySafeBoot software modified for bluetooth connection (https://github.com/monoxit/tsb1634)  in monoxit\tiny\tools\tsb.
3. (Optional) Place TinySafeBoot bootloader modified for Attiny1634 (https://github.com/monoxit/tsb1634) in monoxit\tiny\bootloader\tsb.

## To Do
1. Set TSB timeout to reasonable value (e.g. 3 to 6 sec) after writing bootloader.
2. Autoreset support on Bluetooth SPP connection. (Hardware enhancement: CON-NOT-0.1uF-(10K pull-up)RST)
3. linux verification.
4. OSX verification.

## Credits
https://code.google.com/p/arduino-tiny/  
https://github.com/rambo/arduino-tiny/tree/attiny1634

## License
arduino-tiny core license: license.txt
