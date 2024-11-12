#include <DE_Years.h>

Years Years;

void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.println(Years.disp(21));  //выводит век римскими цифрами
}
