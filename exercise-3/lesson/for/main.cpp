#include <iostream>

using namespace std;

int main()
{
    /*for (initialization; condition; iteration) {
        //body
    }
        initialization - executed only once, at the beginning of the for loop
        condition - evaluated ahead of each execution of the loop body
        iteration - executed after the loop body, ahead of the next condition evaluated, unless the for loop is aborted in the body
    */

    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";

    //Examples:
    for (int i = 0; i < 5; i++) {
        cout << "Hello World\n";
    }
    //the same as above
    for(int i=5; i > 0; i--){
      cout << i <<" ";
    }

    //if variable is declared in the scope of for it will be visible only in this scope
    int i=5;
    for (int i=0; i<4; i++) {
        int a=0;
        cout <<"in for i: " <<i<<endl;
    }

    cout<<"i: "<<i<<"  a: ";

    
    //also possible syntax
    int i, j;

    for (i = 1, j = 5; i < 5; i++, j++);
 
    cout << "Value of i = " << i << endl;
    cout << "Value of j = " << j << endl;
    
    for (int i = 0, j = 10, k = 20;  (i + j + k) < 100;  j++, k--, i += k) {
        cout << i << " " << j << " " << k << "\n";
    }


    //endless loop
    for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }


    // nested for loop - "inner loop" will be executed one time for each iteration of the "outer loop"
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times
        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }


    return 0;
}
