//5. Напишете програма, която приема две числа x и y, координати на точка и извежда в кой квадрант се намира точката.

#include <iostream>

using namespace std;

int main (){
    
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    if (x == 0 || y == 0) {
        cout << "none";
    } else if (x > 0 && y > 0){
        cout << "first";
    } else if (x < 0 && y > 0){
        cout << "second";
    } else if (x < 0 && y < 0){
        cout << "third";
    } else {
        cout << "fourth";
    }
    
    
  return 0;
}
