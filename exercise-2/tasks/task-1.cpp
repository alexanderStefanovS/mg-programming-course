//1. Напишете програма, която приема числo и изписва „Even“ ако числото е четно или „Odd” ако числото е нечетно.

#include <iostream>

using namespace std;

int main (){
    
  int x;
  cout << "x= ";
  cin >> x;

  if (x % 2 == 0){
      cout << "Even";
    } else {
      cout << "Odd";
    }

  return 0;
}
