//Напишете програма, която изчислява сумата на всички числа до въведено от потребителя число.


#include <iostream>

using namespace std;

int main()
{
	int x, num, sum = 0;
	
	cout << "Type positive number: ";
	cin >> num;
	
	for (x = 1; x <= num; ++x) {
		sum += x;  
	}
	
	cout << "Sum of all numbers" << " = " << sum;
	
	return 0;
}
