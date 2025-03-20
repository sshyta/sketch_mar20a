const int LED = 9;

void setup() {
  pinMode (LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i = i + 1)
  {
    analogWrite(LED, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i = i - 1)
  {
    analogWrite(LED, i);
    delay(10);
  }
}
