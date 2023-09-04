//Напишете програма, която изчислява фактуриела на въведено от потребителя число.

#include <iostream>

using namespace std;

int main()
{
	int x, num, factorial = 1;
	
	cout << "Type positive number: ";
	cin >> num;
	
	for (x = 1; x <= num; ++x) {
		factorial *= x;   // factorial = factorial * x;
	}
	
	cout << "Factorial of " << num << " = " << factorial;
	
	return 0;
}
