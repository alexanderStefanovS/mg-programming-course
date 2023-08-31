
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number;

	cin >> number;

	int firstDigit, secondDigit, thirdDigit;

	firstDigit = number / 100;
	secondDigit = number / 10 % 10;
	thirdDigit = number % 10;

	int sum = firstDigit + secondDigit + thirdDigit;
	int product = firstDigit * secondDigit * thirdDigit;

	// We separate the number to find the digits using "/" and "%" and then find the sum and the product

	cout << "The sum of the digits is: " << sum << "\n";
	cout << "The product of the digits is: " << product << "\n";

	int lastTwoDigits = number % 100;

	cout << "The square root of the last two digits is: " << sqrt(lastTwoDigits) << "\n";

	// After finding the last two numbers and then use sqrt to find its square root.

	return 0;
}