
#include <iostream>

using namespace std;

int stringLength(char str[]) {
    int length = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    return length;
}

bool isPalindrom(char str[], int length) {
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main()
{
    char str[100];
    
    do {
        cout << "Enter a string: ";
        cin >> str;
    } while (!isPalindrom(str, stringLength(str)));

}
