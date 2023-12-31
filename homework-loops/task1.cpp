// 1.	Петър иска да си купи колело. За да събере пари, той следва следната стратегия: всеки месец получава стипендия, която е равна на числото 20 * месеца. Той също така работи на непълен работен ден и получава допълнителни 80 лева на месец.
// Също така, на всеки трети месец, той получава бонус от баба си в размер на 100 лева. Всеки ден обаче харчи 5 лева за закуска
// Напишете програма, която да изисква да се въведе цената на колелото и да изчислява след колко месеца Петър ще има достатъчно пари, за да си купи колело. Програмата трябва да извежда броя на месеците и колко пари остават след закупуването на колелото.

#include <iostream>

using namespace std;

int main()
{
    int price, months = 1, saved = 0;
    cin >> price;
    while(saved < price) {
        saved += 20 * months + 80;
        if (months % 3 == 0){
            saved += 100;
        }
        saved -= 30 * 5;
        months++;
    }
    
    cout << "Peter will buy the bike after " << months - 1 << " months!";

    return 0;
}