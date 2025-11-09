#include <LCDI2C_Multilingual.h>      // Include the whole header file

LCDI2C_Vietnamese lcd(0x27, 16, 2);   // I2C address: 0x27; Display size: 16x2

int moisture = 1023.0;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(A0, INPUT);
}

void loop() {
  moisture = analogRead(A0);
  lcd.println("Độ ẩm: " + String((1023-moisture)/10.23,1) + "%");
  lcd.println();
  delay(1000);
}