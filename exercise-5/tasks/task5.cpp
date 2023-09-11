// 5.	Да се състави програма, която намира максималния елемент в даден масив, а също и неговия пореден номер.
#include <iostream>

using namespace std;

int main()
{
    int size, arr[50], max, maxIndex;
    cout << "The size of array: ";
    cin >> size;
    
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    max = arr[0];
    maxIndex = 0;
    
    for (int i = 0; i < size; i++) {
        if (max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }
        
    }
    
    cout << "The max element is: " << max << ".\nAnd is in position: " << maxIndex;
    
    return 0;
}
