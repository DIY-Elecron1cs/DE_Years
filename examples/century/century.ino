#include <DE_Years.h>

Years Years;

void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.println(Years.century(2024));  //выводит век по году
  Serial.println(Years.centuryRoman(2024));  //выводит век по году римскими цифрами
}
