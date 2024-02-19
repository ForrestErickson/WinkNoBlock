# WinkNoBlock
A variation on the Blink example which does not use delay, does not block. Written for ESP32 Dev Kit.
If the Blink example is the first "Hello world" of embedded programming, this should be the second example people learn.

The standard Blink example gets beginners off on a poor programming practice as it teaches them to use the delay() function which blocks.  
This example "Winks" the LED, mostly on but brievly off in the main loop so you can tell the loop is running but does not consume all the processor time with delay().  
To understand why the delay() and blocking is bad read the three article series " Multi-tasking the Arduino" by adafruit and Bill Earl
1. https://learn.adafruit.com/multi-tasking-the-arduino-part-1/a-classy-solution
2. https://learn.adafruit.com/multi-tasking-the-arduino-part-2
3. https://learn.adafruit.com/multi-tasking-the-arduino-part-3

### Other features
No "magic numbers". All such numbers are defined at the top before setup().

### Revision History:
* Modified by: Forrest Lee Erickson  
* Date: 20210217 Initial release.  
* Date: 20210222 Modified for long type to hold millis() results and check for millis wrap around.  
* Date: 20210304 Make constants all upper case.  
* Date: 20210505 Change LED name to match the Arduino default for builtin.    
* Date: 20220405 Change for unsigned long for time variables. Thanks to Peter Howells on Facebook  ESP8266, ESP32 & Microcontrollers group.
* Date: 20240219 Formatting change in the main README.md

