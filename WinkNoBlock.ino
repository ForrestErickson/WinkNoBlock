/**
   File: WinkNoBlock
   Modified by: Forrest Lee Erickson
   Date: 20210217 Initial release.
   Date: 20210222 Modifed for long type to hold millis() results and check for millis wrap around.
*/

//For ESP32 Dev Kit on board blue LED.
const int onBoardLED = 2;
const int highTimeLED = 900;
const int lowTimeLED = 100;
long lastLEDtime = 0;
long nextLEDchange = 100; //time in ms.

void setup() {
  // put your setup code here, to run once:

  pinMode(onBoardLED, OUTPUT);      // set the LED pin mode
  digitalWrite(onBoardLED, HIGH);   // turn the LED on (HIGH is the voltage level)
}//end setup

void loop() {
  // put your main code here, to run repeatedly:

  //Wink the LED
  if (((millis() - lastLEDtime) > nextLEDchange)||(millis()< lastLEDtime)) {
    if (digitalRead(onBoardLED) == LOW) {
      digitalWrite(onBoardLED, HIGH);   // turn the LED on (HIGH is the voltage level)
      lastLEDtime = millis();
      nextLEDchange = highTimeLED;
    } else {
      digitalWrite(onBoardLED, LOW);   // turn the LED on (HIGH is the voltage level)
      lastLEDtime = millis();
      nextLEDchange = lowTimeLED;
    }
  }//end LED wink

}//End loop
