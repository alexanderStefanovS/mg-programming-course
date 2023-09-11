// 3.	Да се състави програма, която пресмята сумата: a[0]*b[0] + a[1]*b[1] + … + a[n-1]*b[n-1],
// където (а0, а1, …, аn-1) и (b0, b1, …, bn-1) са два дадени масива от числен тип (1 < n < 50) .
#include <iostream>

using namespace std;

int main()
{
    int size, a[50], b[50], sum = 0;
    cout << "The size of arrays: ";
    cin >> size;
    
    cout << "Enter numbers of first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    
    cout << "Enter numbers of second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < size; i++){
        sum += a[i] * b[i];
        
    }
    cout << "The sum is: " << sum << endl;
    
    return 0;
}
