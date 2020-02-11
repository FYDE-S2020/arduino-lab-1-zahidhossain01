#define LED_BUILTIN 2

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int ledDelay){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(ledDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(ledDelay);
}

void loop() {
  timedBlink(250);
  timedBlink(500);
  timedBlink(1000);
}
