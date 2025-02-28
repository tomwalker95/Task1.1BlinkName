
// Pin Assignments

int ledPin = 13;

// Constant values for time of flashes 
const int dash = 1500;
const int dot = 500;
const int space_letter = 1500;
const int space_words = 3500;


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ledPin, OUTPUT);
}


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
  delay(space_words);

}
