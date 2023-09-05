#include <iostream>

using namespace std;

int main(){
  //1. if

  if (1 == 1){
      cout << "its true" << endl;
    }

  int x = 0;
  if (x == 0){
      x = 5;
    }

  char c = 'a';
  if (c == 'a'){
      cout << "c is 'a'" << endl;
    }

  bool b = true;
  if (b){
      cout << "b is true" << endl;
    }

  //2. if...else

  if (x < 0){
      cout << "negative number" << endl;
    }else{
      cout << "positive number" << endl;
    }

  //3. if...else if...else

  if (x < 0){
      cout << "less than 0" << endl;
    }else if (x > 10){
      cout << "more than 10" << endl;
    }else{
      cout << "between 0 and 10" << endl;
    }

  if (x == 0){
      cout << "x is zero" << endl;
    }else if (x == 1){
      cout << "x is one" << endl;
    }else if (x == 2){
      cout << "x is two" << endl;
    }else{
      cout << "x is another number" << endl;
    }

  //4. nested if

  if (x < 10){
    cout << "x is less than 10" << endl;
    if (x > 0){
        cout << "x is between 0 and 10" << endl;
        if (x < 5){
            cout << "x is between 0 and 5" << endl;
            if (x > 2){
                cout << "x is between 2 and 5" << endl;
                }
            }
        }
    }

  //5. multiple conditions
  //5.1. or

  int y = 5;
  if (x > 0 || y > 0){
      cout << "x > 0 or y > 0 or x > 0 and y > 0" << endl;
    }

  //5.2. and

  if (x > 0 && y > 0){
      cout << "x > 0 and y > 0" << endl;
    }

  //6. one line if

  if (x == 0)
    cout << "x is zero" << endl;
  else if (x == 1)
    cout << "x is one" << endl;
  else if (x == 2)
    cout << "x is two" << endl;
  else if (x == 3)
    cout << "x is three" << endl;
  else
    cout << "x is another number" << endl;

  //7. scope of x

  x = 1;
  y = 0;
  if (x > 0){
      int y = 5;
      y++;
      cout << y << endl;
    }
  cout << y << endl;

  y = 0;
  if (x > 0){
      y++;
      int y = 10;
      cout << y << endl;
    }
  cout << y << endl;

  if (x > 0){
      int z = 0;
    }
  //cout << z << endl;

  //8. ternary operator

  (x > 0) ? cout << "x is positive" << endl : cout << "x is negative" << endl;

  x = 5;
  y = 9;
  int max = (x > y) ? x : y;
  cout << max << endl;
  
}
