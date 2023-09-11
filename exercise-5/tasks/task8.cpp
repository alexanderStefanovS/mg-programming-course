// 8.	Да се състави програма, която установява дали редицата от цели числа а0, а1, а2, …, аn-1 е монотонно намаляваща (0 < n < 50) .

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
        if (arr[i] < arr[i+1]) {
            cout << "The array is not decreasing.";
            return 0;
        }
    }
    
    cout << "The array is decreasing.";
    
    return 0;
}
