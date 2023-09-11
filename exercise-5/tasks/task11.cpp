// 11.	Дадени са два сортирани масива съответно с N и M числа. Слейте ги в нов сортиран масив.

#include <iostream>

using namespace std;

int main()
{
    int n, m, arr1[50], arr2[50], newArr[100];
    cout << "The size of the first array: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "The size of the second array: ";
    cin >> m;
    
    cout << "Enter " << m << " numbers:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            newArr[k] = arr1[i];
            k++;
            i++;
        } else {
            newArr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n) {
        newArr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m) {
        newArr[k] = arr2[j];
        k++;
        j++;
    }
    
    cout << "Merged array:\n";
    for (int p = 0; p < n + m; p++) {
        cout << newArr[p] << " ";
    }
    
    
    return 0;
}
