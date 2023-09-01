//7. Да се напише програма, която получава 3 цели числа, които символизират дата (ден, месец, година) и извежда следващата дата.
//  Вход:	31 8 2023
//  Изход:	1 9 2023

#include <iostream>

using namespace std;

int main (){
    
    int day, month, year;
    cin >> day >> month >> year;
    
    if (day == 31 && month == 12) {
        day = 1;
        month = 1;
        year++;
    } else if (month == 2) {
        if (day == 28) {
            if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
                day++;
            } else {
                day = 1;
                month = 3;
            }
        } else if (day == 29){
            day = 1;
            month = 3;
        } else {
            day++;
        }
    } else if ((month < 8 && month % 2 == 1) || (month > 7 && month % 2 == 0)) {
        if (day == 31) {
            day = 1;
            month++;
        } else {
            day++;
        }
    } else if ((month < 8 && month % 2 == 0) || (month > 7 && month % 2 == 1)) {
        if (day == 30) {
            day = 1;
            month++;
        } else {
            day++;
        }
    }
    
    cout << day << "." << month << "." << year << endl; 
    
  return 0;
}
