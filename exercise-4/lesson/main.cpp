
#include <iostream>

using namespace std;

int main() {

    int num = 0;
    while (true) {
        if (num % 10 == 5) {
            break;
        }
        
        num++; //5
        cout << num; //12345
    }
    
    for (int i = 0; i < 15; i++) {
        if (i % 2 == 0) {
            continue;
        }
        
        cout << i << " ";
    }
    
    int number, sum = 0;
    
    while (true) {
        cout << "Enter a number: ";
        cin >> number;
        
        if (number >= 30) {
            continue; 
        }
        
        sum = sum + number;
        
        if (sum > 100) {
            break;
        }
    }
    
    cout << "Sum = " << sum;
    
    int n;
    
    cout << "n = ";
    cin >> n;
    
    for (int number = 1; number <= n; number++) {
        int sum = 0;
        
        for (int i = 1; i <= number / 2; i++) {
            if (number % i != 0) {
                continue;
            }
            
            sum = sum + i;
        }
    
        if (number == sum) {
            cout << number << " is perfect number!\n";
        }
    }

    return 0;
}













