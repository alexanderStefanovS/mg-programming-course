/******************************************************************************

Да се въведат три символни низа. Да се конкатенират трите низа разделени със запетая и интервал “, “.

*******************************************************************************/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_BUFFER_SIZE = 100;
const int MAX_BUFFER_SIZEE = 300;

int main() {
    int i = 0;
    char str1[MAX_BUFFER_SIZE], str2[MAX_BUFFER_SIZE], str3[MAX_BUFFER_SIZE], str[MAX_BUFFER_SIZEE];

    cin.getline(str1, MAX_BUFFER_SIZE);
    cin.getline(str2, MAX_BUFFER_SIZE);
    cin.getline(str3, MAX_BUFFER_SIZE);

    int size = strlen(str);

    bool isPalindrome = true;
    for (i; str1[i] != '\0'; ++i) {
        str[i] = str1[i];
    }
    str[i] = ',';
    i++;
    str[i] = ' ';
    i++;
    
    for (int j = 0; str2[j] != '\0'; i++, j++){
        str[i] = str2[j];
    }
    
    str[i] = ',';
    i++;
    str[i] = ' ';
    i++;
    
    for (int j=0; str3[j]!='\0'; i++, j++){
        str[i] = str3[j];
    }
    
    cout<<str;

    return 0;
}
