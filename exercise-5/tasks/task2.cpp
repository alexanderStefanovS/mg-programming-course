// 2.	Да се състави програма, която извежда сумата от положителните и броя на отрицателните елементи  на редица от числа (до 50 числа)

#include <iostream>

using namespace std;

int main()
{
    int size, numbers[50], sum = 0, negativeCount = 0;
    cout << "The size of array: ";
    cin >> size;
    cout << "Enter " << size << " numbers: ";
    
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++){
        if (numbers[i] < 0){
            negativeCount++;
        } else {
            sum += numbers[i];
        }
        
    }
    
    cout << "The sum of positive numbers is: " << sum << endl;
    cout << "The number of negative numbers is: " << negativeCount;
    
    return 0;
}
