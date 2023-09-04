// C++ program to demonstrate syntax of switch

#include <iostream>

using namespace std;

int main()
{
    //Use the switch statement to select one of many code blocks to be executed
    //The value of the expression is compared with the values of each case and if is matched, the associated block of code is executed
    //When is reached a break keyword, it breaks out of the switch block and stop the execution of more cases and code.
    //if there is no case match, default keyword specifies some code to run
    //break and default keywords are optional
    
	char x = 'B';

	// switch statements
	switch (x) {
	    case 'A':
		    cout << "Choise is A";
		    break;
	    case 'B':
		    cout << "Choise is B";
		    break;
	    case 'C':
		    cout << "Choise is C";
		    break;
    	default:
		    cout << "Choice other than A, B and C";
	}
	
    int var1 = 1;
    int var2 = 0;
  
    // outer switch
    switch (var1) {
        case 0:
            cout << "Outer Switch Case 0\n";
            break;
        case 1:
            cout << "Outer Switch Case 1\n";
            // inner switch
            switch (var2) {
                case 0:
                cout << "Inner Switch Case 0\n";
                break;
            }
            break;
        default:
            cout << "Default Case of Outer Loop";
    }
    
	return 0;
}
