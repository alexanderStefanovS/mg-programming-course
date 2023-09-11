// 6.	Дадени са сортирани във възходящ ред редици а0,а1, а2, …, аk и b0, b1, …, bk. 
// Да се състави програма, която намира броя на равенствата от вида:
// a[i] = b[j] (i =1, 2, .., k, j = 1,2, …, k, 0<=k<=50).

#include <iostream>

using namespace std;

int main()
{
    int size, a[50], b[50], equalPairs = 0;
    cout << "The size of array: ";
    cin >> size;
    
    cout << "Enter numbers of first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    
    cout << "Enter numbers of second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < size && j < size) {
        if (a[i] == b[j]) {
            equalPairs++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    cout << "The number of equal pairs is: " << equalPairs;
    
    return 0;
}
