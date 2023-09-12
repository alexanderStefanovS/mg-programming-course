/******************************************************************************
транспонирайте матрицата, въведена от потребителя (редовете да станат колони)

*******************************************************************************/

#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

using namespace std;

int main() {
    
    int tmp=0;
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, sum = 0;

    // Въведете размерите на матрицата (брой редове и колони)
    cout << "Въведете брой редове: ";
    cin >> rows;
    cout << "Въведете брой колони: ";
    cin >> cols;


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
           tmp = matrix[i][j];
           matrix[i][j] = matrix[j][i];
           matrix[j][i] = tmp;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout<< " " << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
