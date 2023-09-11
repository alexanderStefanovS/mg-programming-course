// 10.	Да се състави програма, която проверява, има ли в редицата от цели числа а0, а1, а2, …, аn-1 (0 < n < 51) два последователни нулеви елемента.

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
        if (arr[i] == 0 && arr[i + 1] == 0){
            cout << "True";
            return 0;
        }
        
    }
    
    cout << "False";
    
    return 0;
}
