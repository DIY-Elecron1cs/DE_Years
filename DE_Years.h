#ifndef DE_Years_h
#define DE_Years_h
#include <Arduino.h>

#define WAS true
#define WILL false

class Years {
  public:
    String disp(uint8_t NumberInput) {
      String RomanNumbers = _RomanNumbers[NumberInput];
      return (RomanNumbers);
    }
    uint16_t century(uint16_t YearInput) {
      YearInput = int(YearInput / 100) + 1;
      return (YearInput);
    }
    String centuryRoman(uint16_t YearInput) {
      YearInput = int(YearInput / 100) + 1;
      String RomanNumbers = _RomanNumbers[YearInput];
      return (RomanNumbers);
    }
    uint8_t age(uint16_t BirthYear, uint16_t CurrentYear, bool ageTransition) {
      _ageTransition = ageTransition;
      _CurrentYear = CurrentYear;
      if (ageTransition == true) {
        _age = CurrentYear - BirthYear;
      }
      else {
        _age = (CurrentYear - BirthYear) - 1;
      }
      return (_age);
    }
    void setYear(uint16_t CurrentYear) {
      _CurrentYear = CurrentYear;
    }
    uint16_t dispYear() {
      return (_CurrentYear);
    }
    bool leapYear(uint16_t Year) {
      _Year = Year;
      if (((_Year % 4) == 0 && (_Year % 100) != 0) || (_Year % 400) == 0) {
        _leapYearCheck = true;
      }
      else {
        _leapYearCheck = false;
      }
      return(_leapYearCheck);
    }

  private:
    uint16_t _Year;
    bool _leapYearCheck;
    uint8_t _age;
    bool _ageTransition = true;
    uint16_t _CurrentYear;
    String _RomanNumbers[41] {
      "ERROR", "I", "II", "III", "IV", "V", "VI",
      "VII", "VIII", "IX", "X", "XI", "XII",
      "XIII", "XIV", "XV", "XVI", "XVII", "XVIII",
      "XIX", "XX", "XXI", "XXII", "XXIII", "XXIV",
      "XXV", "XXVI", "XXVII", "XXVIII", "XXIX",
      "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV",
      "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX",
      "XXXX"
    };
};
#endif