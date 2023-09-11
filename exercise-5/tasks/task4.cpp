// 4.	Да се състави програма, която въвежда n числа и извежда минималното и максималното от тях (0 < n < 50).

#include <iostream>

using namespace std;

int main()
{
    int size, arr[50], min, max;
    cout << "The size of array: ";
    cin >> size;
    
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    
    for (int i = 0; i < size; i++) {
        if (min > arr[i]){
            min = arr[i];
        }
        if (max < arr[i]){
            max = arr[i];
        }
        
    }
    cout << "The min element is: " << min << endl;
    cout << "The max element is: " << max << endl;
    
    return 0;
}
