// 9.	Да се състави програма, която установява дали редицата от цели числа а0, а1, а2, …, аn-1 се състои от различни елементи (0 < n < 50) .


#include <iostream>

using namespace std;

int main()
{
    int size, arr[50];
    cout << "The size of array: ";
    cin >> size;
    
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "The array contains duplicate elements.";
                return 0;
            }
        }
        
    }
    
    cout << "The array doesn't contain duplicate elements.";
    
    return 0;
}
