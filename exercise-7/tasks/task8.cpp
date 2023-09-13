/******************************************************************************

Във въведения низ главните букви да станат малки, а малките - главни 

*******************************************************************************/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_BUFFER_SIZE = 100;

int main() {
    
    int counter = 0;
    char str1[MAX_BUFFER_SIZE];
    
    cin.getline(str1, MAX_BUFFER_SIZE);

    for (int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = str1[i] - 32;
        }
        else if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }
    
    cout << str1;
    return 0;
}
