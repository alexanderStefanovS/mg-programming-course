/******************************************************************************

Да се въведе символен низ съдържащ няколко думи. Да се изведе броят на думите. 

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    
    cout << "Въведете символен низ: ";
    cin.getline(s, sizeof(s));
    
    int size = strlen(s);
    int counter = 0;
    bool flag = false;
    
    for(int i = 0; i < size; i++){
        if(s[i] == ' ' || s[i] == '\t' || s[i] == ','){
            flag = false;
        }
        else if(flag == false && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
            flag = true;
            counter++;
        }
    }
    
    cout << "Брой на думите: " << counter << endl;
    
    return 0;
}
