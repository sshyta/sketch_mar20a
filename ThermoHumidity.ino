#include <Wire.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 2         
#define DHTTYPE DHT11     
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(57600);
  lcd.init();
  lcd.backlight();
  dht.begin();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  lcd.setCursor(6, 0);
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(6, 1);
  lcd.print(h);
  lcd.print(" %");

  Serial.print("Температура: ");
  Serial.print(t);
  Serial.print(" *C\t");
  Serial.print("Влажность: ");
  Serial.print(h);
  Serial.println(" %");
  delay(2000);
}