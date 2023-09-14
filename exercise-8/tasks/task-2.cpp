
#include <iostream>

using namespace std;

int factorial(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main()
{
    double n, k;

    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter k: ";
    cin >> k;
    
    if (n < k) {
        cout << "n must be greater than or equal to k\n";
    }
    
    int binomialCoefficient = factorial(n) / (factorial(k) * factorial (n - k));
    cout << "(n k) = " << binomialCoefficient;

    return 0;
}
