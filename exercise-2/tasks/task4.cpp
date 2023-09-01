//4. Напишете програма, която приема година като вход и определя дали дадената година е високосна или не. 
//(Високосна година се дели на 4, но не на 100, освен ако не се дели на 400.)

#include <iostream>

using namespace std;

int main (){
    
    int x;
    cout << "Enter year: ";
    cin >> x;
    
    if (x % 4 == 0) {
        if (x % 100 == 0) {
            if (x % 400 == 0) {
                cout << "leap" << endl;
            } else {
                cout << "not leap" << endl;
            }
        } else {
            cout << "leap" << endl;
        }
    } else {
        cout << "not leap" << endl;
    }

//or
    if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) {
        cout << "leap";
    } else {
        cout << "not leap";
    }
    
  return 0;
}
