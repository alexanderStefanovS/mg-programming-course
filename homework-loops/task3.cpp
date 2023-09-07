// 3.	Да се напише програма, която приема число и извежда три цели положителни числа m, p и q, такива че m*p*q=N и сумата им е минимална.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = num + 3;
    int min1, min2, min3;

    for (int divider1 = 1; divider1 < num; divider1++) {
        if (num % divider1 == 0) {
            for (int divider2 = 1; divider2 < num / divider1; divider2++) {
                if ((num / divider1) % divider2 == 0) {
                    int divider3 = (num / divider1) / divider2;
                    if (divider1 + divider2 + divider3 < sum) {
                        sum = divider1 + divider2 + divider3;
                        min1 = divider1;
                        min2 = divider2;
                        min3 = divider3;
                    }
                }
            }
        }
    }
    cout << min1 << " " << min2 << " " << min3 << endl;

    return 0;

}
