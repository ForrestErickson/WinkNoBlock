/**
 * File: WinkNoBlock
 * Modified by: Forrest Lee Erickson
 * Date: 20210217
 * 
 */
 
//For on board blue LED.
const int led_gpio = 2;
int lastLEDtime = 0;
int nextLEDchange = 100; //time in ms.


void setup() {
  // put your setup code here, to run once:
  pinMode(led_gpio, OUTPUT);      // set the LED pin mode
  digitalWrite(led_gpio, HIGH);   // turn the LED on (HIGH is the voltage level)

}

void loop() {
  // put your main code here, to run repeatedly:

    //Wink the LED
  if ((millis()-lastLEDtime)>nextLEDchange){
    if(digitalRead(led_gpio)==LOW){
     digitalWrite(led_gpio, HIGH);   // turn the LED on (HIGH is the voltage level)
     lastLEDtime = millis();
     nextLEDchange = 900; 
    }else{
      digitalWrite(led_gpio, LOW);   // turn the LED on (HIGH is the voltage level)
     lastLEDtime = millis();
     nextLEDchange = 100; 
    }     
  }//LED change


}
