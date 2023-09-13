/******************************************************************************

Да се въведе символен низ. Да се изведат символите му наобратно.

*******************************************************************************/
#include <iostream>
#include <cstring>

const int MAX_BUFFER_SIZE = 100;

using namespace std;

int main()
{   
    char tmp;
    char s[MAX_BUFFER_SIZE];
    cin >> s;
    
    int size = strlen(s);
    
    for(int i = 0; i < size/2; i++){
        tmp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = tmp;
    }
    
    cout<<s;
    
    return 0;
}
