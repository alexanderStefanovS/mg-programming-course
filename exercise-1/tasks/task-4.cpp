
#include <iostream>

using namespace std;

int main()
{

	int num1, num2;

	cin >> num1 >> num2;
	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";

	int buffer = num1;
	num1 = num2;
	num2 = buffer;

	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";

	// We swap the variables we've entered using a buffer varible.
	// Then we print them.

	return 0;
}