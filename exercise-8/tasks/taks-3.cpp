#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    
    int first = 0, second = 1, fib;
    
    for (int i = 1; i < n; i++) {
        fib = first + second;
        first = second;
        second = fib;
    }
    
    return fib;
}

int main()
{
    int k;
    
    cout << "Enter number: ";
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
