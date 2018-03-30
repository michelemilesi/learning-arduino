/*
 * fade
 * This example shows how to fade an LED on pin 9 using the analogWrite() function.
 */
 
int led = 9; // the pin that the LED is attached to 
int brightness = 0; // how bright the LED is
int fadeAmount = 5; // how many points to fade the LED by 

void setup() {
  pinMode (led, OUTPUT);
}

void loop() {
  analogWrite (led, brightness);
  brightness = brightness + fadeAmount;
  
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
    
}
