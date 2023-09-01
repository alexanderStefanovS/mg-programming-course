//2. Напишете програма, която приема две числа и изписва по-голямото от тях. 

#include <iostream>

using namespace std;

int main (){
    
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    
    if (x > y) {
        cout << "x is bigger" << endl;
        cout << "x = " << x << endl;
    } else if (y > x) {
        cout << "y is bigger" << endl;
        cout << "y = " << y << endl;
    } else {
        cout << "The numbers are equal."
    }

  return 0;
}
