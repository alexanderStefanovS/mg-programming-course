
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}


int main()
{
    double n, m, p, q;

    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter m: ";
    cin >> m;
    
    cout << "Enter p: ";
    cin >> p;
    
    cout << "Enter q: ";
    cin >> q;

    if (q + n == 0) {
        cout << "q + n must not equal 0\n";
    } else {
        double result = subtract(multiply(sum(n, p), m), divide(p, sum(q, n)));
        
        cout <<"(n + p) * m - p / (q + n) = " << result << "\n";
    }

    return 0;
}
