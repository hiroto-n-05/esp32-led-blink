const int LED_PIN = 2;

void blinkShort() {
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200);
}

void blinkLong() {
  digitalWrite(LED_PIN, HIGH);
  delay(600);
  digitalWrite(LED_PIN, LOW);
  delay(600);
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  delay(1000);

  for (int i = 0; i < 3; i++) {
    blinkShort();
  }

  delay(300);

  for (int i = 0; i < 3; i++) {
    blinkLong();
  }

  delay(300);

  for (int i = 0; i < 3; i++) {
    blinkShort();
  }

  delay(1000);
}