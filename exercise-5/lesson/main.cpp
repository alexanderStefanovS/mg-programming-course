
#include <iostream>

using namespace std;

int main(){
    
    int arr1[5];
    
    int arr2[] = {3, 5, 8, 4, 1};
    
    // index = 0    1   2   3   4
    // value = 3    5   8   4   1
    
    int arr3[50] = {};   // 50 нули
    
    int arr4[50] = {1};     // 1, 0, 0, 0...
    
    
    int size;
    int arr[50];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin << arr[i];
    }
    
    
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " "; 
    }
    
    //arr1 = arr2;  Error
    
    // проверка дали два масива са равни
    bool isEqual = true;
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            isEqual = false;
            break;
        }
    }
    cout << isEqual;
    
    // обръщане на масив
    int temp;
    int size = 5;
    for (int i = 0; i < size / 2; i++) {
        temp = arr2[i];
        arr2[i] = arr2[size - 1 - i];
        arr2[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++){
        cout << arr2[i] <<" ";
    }
    
}
