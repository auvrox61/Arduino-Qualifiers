void blinkLed() {
  static int count = 0;
  count++;
  Serial.println(count);
}

void loop() {
  blinkLed();
  delay(1000);
}

