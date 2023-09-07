//4.	Да се състави програма, която приема число и извежда броят на цифрите след десетичната запетая в записа на числото, 
//      ако 1/N има краен десетичен запис и NO - в противен случай.
//          Вход 	Изход 
//             3	NO
//            25	2
//         10000	4


#include <iostream>
using namespace std;
int main()
{
    int num;
    int pow2 = 0, pow5 = 0;
    cin >> num;
    
    while (num % 2 == 0) {
        num = num / 2;
        pow2++;
    }
    
    while (num % 5 == 0) {
        num = num / 5;
        pow5++;
    }
    
    if (num == 1) {
        if (pow5 <= pow2) {
            cout << pow2;
        }
        if (pow5 > pow2) {
            cout << pow5;
        }
    }
    else {
        cout << "no";
    }
}
