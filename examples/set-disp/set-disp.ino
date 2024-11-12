#include <DE_Years.h>

Years Years;

void setup(){
  Serial.begin(9600);
  Years.setYear(2024);  //вводим текущий год
}
void loop(){
  Serial.println(Years.dispYear());  //выводим текущий год
}
