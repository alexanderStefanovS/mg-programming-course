/******************************************************************************

Напишете програма, определя колко пъти символният низ S2 се съдържа в S1.

*******************************************************************************/
#include <iostream>
#include <cstring>

const int MAX_BUFFER_SIZE = 100;

using namespace std;

int main()
{
    char s1[MAX_BUFFER_SIZE], s2[MAX_BUFFER_SIZE];

    cout << "Въведете първия низ: ";
    cin.getline(s1, MAX_BUFFER_SIZE);

    cout << "Въведете втория низ: ";
    cin.getline(s2, MAX_BUFFER_SIZE);

    int counter = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == len2) {
            counter++;
        }
    }

    cout << "Брой на срещанията на втория низ в първия: " << counter << endl;

    return 0;
}


