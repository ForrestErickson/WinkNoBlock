/**
 * File: WinkNoBlock
 * Modified by: Forrest Lee Erickson
 * Date: 20210217
 * 
 */
 
//For ESP32 Dev Kit on board blue LED.
const int onBoardLED = 2;
const int highTimeLED = 900; 
const int lowTimeLED = 100; 

int lastLEDtime = 0;
int nextLEDchange = 100; //time in ms.



void setup() {
  // put your setup code here, to run once:
  pinMode(onBoardLED, OUTPUT);      // set the LED pin mode
  digitalWrite(onBoardLED, HIGH);   // turn the LED on (HIGH is the voltage level)

}

void loop() {
  // put your main code here, to run repeatedly:

    //Wink the LED
  if ((millis()-lastLEDtime)>nextLEDchange){
    if(digitalRead(onBoardLED)==LOW){
     digitalWrite(onBoardLED, HIGH);   // turn the LED on (HIGH is the voltage level)
     lastLEDtime = millis();
     nextLEDchange = highTimeLED; 
    }else{
      digitalWrite(onBoardLED, LOW);   // turn the LED on (HIGH is the voltage level)
     lastLEDtime = millis();
     nextLEDchange = lowTimeLED; 
    }     
  }//LED change


}
