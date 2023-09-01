//3. Напишете програма, която приема число от потребителя и извежда абсолютната стойност на числото ( |-1| == 1 ).

#include <iostream>

using namespace std;

int main (){
    
    int x;
    cout << "x= ";
    cin >> x;
    
    if (x < 0) {
        x = -x;
    }
    cout << x;

  return 0;
}
