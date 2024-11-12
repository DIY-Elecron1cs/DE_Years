# DE_Years
библиотека для работы с годами, веками, датами и римскими цифрами
##подключение
```
#include <DE_Years.h>
```
##объекты
```
Years Имя;
```
##функции
```
disp(uint8_t число);                                                       //выводит String значение числа римскими цифрами
century(uint16_t год);                                                     //возвращает век по году (в десятичной СС)
centuryRoman(uint16_t год);                                                //возвращает век по году (римскими цифрами)
setYear(uint16_t год);                                                     //запоминает введённый год
dispYear();                                                                //возвращает год, установленный в setYear()
age(uint16_t год_рождения, uint16_t текущий_год, bool ДР_было_или_будет);  //возвращает возраст
leapYear(uint16_t год);                                                    //проверяет високосный год или нет
```
##константы
```
WAS   //день рождения уже был в году (для age)
WILL  //день рождения ещё будет в году (для age)
```
