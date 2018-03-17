/*
 * Send an SOS
 */
int led=13;

void setup() {
  pinMode(led, OUTPUT);
}

void sendPoint() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void sendLine() {
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
}

void loop() {
  sendPoint();
  sendPoint();
  sendPoint();
  sendLine();
  sendLine();
  sendLine();
  sendPoint();
  sendPoint();
  sendPoint();
  delay(2000);
}
