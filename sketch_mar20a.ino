const int LED = 9;

void setup () {
  pinMode (LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop () {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  delay(2000);
}
