/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {


  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

// const values for time of flashes 
const int dash = 1000;
const int dot = 500;
const int space_letter = 500;
const int space_words = 1500;

void flash_dash(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(dash); 
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
}

void flash_dot(){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(dash); 
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
}


void loop() 
{
  // T
  flash_dash();
  delay(space_words);                     
  
  // O
  flash_dash();
  delay(space_letter); 
  flash_dash();
  delay(space_letter); 
  flash_dash();
  delay(space_words);

  // M 
  flash_dash();
  delay(space_letter); 
  flash_dash();
  delay(space_letter); 
  flash_dash();
  delay(space_letter); 
  flash_dash();
  delay(space_words);

}
