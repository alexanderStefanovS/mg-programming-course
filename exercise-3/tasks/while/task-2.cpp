 // 1. Сумиране на числата от 1 до 100
 
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "Сумата на числата от 1 до 100 е: " << sum << std::endl;
    
    return 0;
}