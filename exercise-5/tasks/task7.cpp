// 7.	Дадени са редицата от цели числа а0, а1, …, аn-1 (0 < n < 50) и цяло число х. 
// Да се състави програма, която намира колко пъти х се съдържа в редицата.

#include <iostream>

using namespace std;

int main()
{
    int size, arr[50], x, encounters = 0;
    cout << "The size of array: ";
    cin >> size;
    
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter x: ";
    cin >> x;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            encounters++;
        }
    }
    
    cout << "The number of encounters of x is: " << encounters;
    
    return 0;
}
