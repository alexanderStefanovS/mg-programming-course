
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int primeNumbersCount(int matrix[][50], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isPrime(matrix[i][j])) {
                count++;
            }
        }
    }
    
    return count;
}

void enterMatrix(int matrix[][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];   
        }
    }
}

int main()
{
    int n;
    int matrix[50][50];
    
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Enter the matrix: \n";
    enterMatrix(matrix, n);
    
    cout << "Prime numbers count: " << primeNumbersCount(matrix, n);
    
    return 0;
}
