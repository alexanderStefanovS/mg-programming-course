// 1.	Да се състави програма, която въвежда оценките на един ученик и пресмята средния му успех.
// Първо да се въведе броят на оценките, а след това и самите оценки разделени с интервал. 
// В масива може да има най-много 50 елемента.

#include <iostream>

using namespace std;

int main()
{
    int size, grades[50];
    double sum = 0;
    cout << "The number of grades: ";
    cin >> size;
    cout << "Enter " << size << " grades: ";
    
    for (int i = 0; i < size; i++) {
        cin >> grades[i];
    }
    for (int i = 0; i < size; i++){
        sum += grades[i];
    }
    
    cout << "The average is: " << sum / size; 
    
    return 0;
}
