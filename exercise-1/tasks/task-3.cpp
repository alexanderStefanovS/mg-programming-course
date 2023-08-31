
#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.14159265;
	double r;

	cout << "Enter radius: ";
	cin >> r;

	double perimeter = PI * 2 * r;
	double area = PI * r * r;

	cout << "The perimeter of the circle is: " << perimeter << "\n";
	cout << "The area of the circle is: " << area << "\n";

	 //We find the perimeter and the area of the ciecle after we've entered its
	 //radius and then print them. We use the const PI which we declare first.

	return 0;
}