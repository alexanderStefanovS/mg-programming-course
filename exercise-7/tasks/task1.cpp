/******************************************************************************

конкатенирайте 2 стринга, въведени от потребителя, в трети стринг

*******************************************************************************/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_BUFFER_SIZE = 100;
const int MAX_BUFFER_SIZEE = 200;

int main() {
    int i = 0;
    char str1[MAX_BUFFER_SIZE], str2[MAX_BUFFER_SIZE], str[MAX_BUFFER_SIZEE];

    cin.getline(str1, MAX_BUFFER_SIZE);
    cin.getline(str2, MAX_BUFFER_SIZE);
    
    int size = strlen(str);

    bool isPalindrome = true;
    for (i; str1[i] != '\0'; ++i) {
        str[i] = str1[i];
    }
    for (int j=0; str2[j]!='\0'; j++){
        str[i+j] = str2[j];
    }
    
    cout<<str;

    return 0;
}
