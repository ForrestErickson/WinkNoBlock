/**
   File: WinkNoBlock
   Modified by: Forrest Lee Erickson
   Date: 20210217 Initial release.
   Date: 20210222 Modifed for long type to hold millis() results and check for millis wrap around.
   Date: 20210304 Make constants all upper case.
*/

//For ESP32 Dev Kit on board blue LED.
//const int LED_BUILTIN = 2;    // ESP32 Kit
const int LED_BUILTIN = 13;    //Arduino UNO
const int HIGH_TIME_LED = 900;
const int LOW_TIME_LED = 100;
long lastLEDtime = 0;
long nextLEDchange = 100; //time in ms.

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);      // set the LED pin mode
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
}//end setup

void loop() {
  // put your main code here, to run repeatedly:

  //Wink the LED
  if (((millis() - lastLEDtime) > nextLEDchange)||(millis()< lastLEDtime)) {
    if (digitalRead(LED_BUILTIN) == LOW) {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      nextLEDchange = HIGH_TIME_LED;
    } else {
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
      nextLEDchange = LOW_TIME_LED;
    }
    lastLEDtime = millis();
  }//end LED wink

}//End loop
