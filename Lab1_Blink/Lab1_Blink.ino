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

void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

void loop() {
  for(int i=1;i<=100;i++){
    dimmer(20,i);
  }
  for(int i=100;i>=1;i--){
    dimmer(20,i);
  }
}
