#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Steven Chiu, PhD");
  lcd.setCursor(0, 1);
  lcd.print("ID: ");
}
