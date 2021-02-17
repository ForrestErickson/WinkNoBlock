# WinkNoBlock
## A variation on the Blink example which does not use delay, does not block. Written for ESP32 Dev Kit.
 
The standard Blink example gets beginners off on a poor programing practice as it teaches them to use the delay() fundction which blocks. 
This example "Winks" the LED, mostly on but brievly off in the main loop so you can tell the loop is running but does not consume all the processor time with delay().

No "magic numbers". All such numbers are defined at the top before setup().
