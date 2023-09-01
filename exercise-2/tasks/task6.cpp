//6. Да се напише програма, която получава 3 числа и определя дали може да съществува триъгълник с толкова големи страни.

#include <iostream>

using namespace std;

int main (){
    
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "true";
    }else{
        cout << "false";
    }
    
  return 0;
}
