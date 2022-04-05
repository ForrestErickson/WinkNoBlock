# WinkNoBlock
## A variation on the Blink example which does not use delay, does not block. Written for ESP32 Dev Kit.
 
The standard Blink example gets beginners off on a poor programing practice as it teaches them to use the delay() function which blocks. 
This example "Winks" the LED, mostly on but brievly off in the main loop so you can tell the loop is running but does not consume all the processor time with delay().

No "magic numbers". All such numbers are defined at the top before setup().

Revision History:
   Modified by: Forrest Lee Erickson
   Date: 20210217 Initial release.
   Date: 20210222 Modifed for long type to hold millis() results and check for millis wrap around.
   Date: 20210304 Make constants all upper case.
   Date: 20210505 Change LED name to match the Arduino default for builtin.  
   Date: 20220405 Change for unsigned long for time variables. Thanks to Peter Howells 
   on Facebook  ESP8266, ESP32 & Microcontrollers group.

