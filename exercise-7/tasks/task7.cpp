/******************************************************************************

Проверете дали е палиндром въведения от потребителя символен низ

*******************************************************************************/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_BUFFER_SIZE = 100;

int main() {
    char str[MAX_BUFFER_SIZE];

    cin.getline(str, MAX_BUFFER_SIZE);

    int size = strlen(str);

    bool isPalindrome = true;
    for (int i = 0; i < size / 2; ++i) {
        if (str[i] != str[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "Is a palindrome" : "Isn't a palindrome") << endl;

    return 0;
}
