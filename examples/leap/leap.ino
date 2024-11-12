#include <DE_Years.h>

Years Years;

void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.println(Years.leapYear(2024));  //проверяет, високосный год или нет
}
