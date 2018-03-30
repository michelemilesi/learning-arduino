/*
 * Fading a led with a for loop
*/
int led=9;

void setup() {
  pinMode (led, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i+=5) {
    analogWrite(led, i);
    delay(30);
  }
  
  delay(70);
  
  for (int i = 255; i >= 0; i-=5) {
    analogWrite(led, i);
    delay(30);
  }
  
  delay(170);
}
