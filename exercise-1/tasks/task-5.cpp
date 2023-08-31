
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double area;

	cout << "Enter the area of the square: ";
	cin >> area;

	cout << "The size of a is: " << sqrt(area) << "\n";

	// We find the side of the square using the function sqrt to find the square root.

	double volume;

	cout << "Enter the volume of the square: ";
	cin >> volume;

	cout << "The size of a is: " << pow(volume, 1/3.) << "\n";

	// In order to find the side of the cybe we use finction pow and grade with 1/3.

	return 0;
}