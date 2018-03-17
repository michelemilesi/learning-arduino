/*
 * Blink:
 * - led L on arduino board
 * - led ona bread board connected to GND pin (-) and 13 pin (+)
 */
int led=13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(500);
}
