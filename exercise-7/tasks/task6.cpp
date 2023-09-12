/******************************************************************************

Да се въведе символен низ и символ. Да се провери колко пъти се повтаря символът в низа.

*******************************************************************************/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_BUFFER_SIZE = 100;

int main() {
    int counter = 0;
    char a;
    char str1[MAX_BUFFER_SIZE];
    cin.getline(str1, MAX_BUFFER_SIZE);
    cin >> a;


    for (int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == a){
            counter++;
        }
    }
    
    cout << counter;;

    return 0;
}
