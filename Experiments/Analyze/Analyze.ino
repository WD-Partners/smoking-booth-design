
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int GasPin0 = A0;
int GasPin1 = A1;
int GasPin2 = A2;
int GasPin3 = A3;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  lcd.init();
  lcd.backlight();
  Serial.begin(115200);  
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print(analogRead(GasPin0));
  /*                                                                                                                                                                                                                                                                                                                                      ,
  lcd.setCursor(4,0);
  lcd.print(analogRead(GasPin1));
  lcd.setCursor(8,0);
  lcd.print(analogRead(GasPin2));
  lcd.setCursor(12,0);
  lcd.print(analogRead(GasPin3));
  */

  Serial.println(analogRead(GasPin0));/* Serial.print(" ");
  /*Serial.print(analogRead(GasPin1)); Serial.print(" ");
  Serial.print(analogRead(GasPin2)); Serial.print(" ");
  Serial.println(analogRead(GasPin3));*/
  
  delay(100);
}
