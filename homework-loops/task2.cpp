//2.	Да се напише програма, която приема положителни числа. Въвеждането на числата приключва когато се въведе нула или отрицателно число. 
// Програмата да изведе на екрана второто по-големина от въведените числа.
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int max = 0;
    int second = 0;
    
    cin >> n;
    while (true) {
        cin >> n;
        if (n <= 0) {
            break;
        }
        if (n >= max) {
            second = max;
            max = n;
        }
        if (n >= second && n < max) {
            second = n;
        }
    }
    cout << second;
}