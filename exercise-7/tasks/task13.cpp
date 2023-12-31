/******************************************************************************

Намерете сбора от елементите на двата съседни диагонали, успоредни на второстепенния диагонал  на матрицата, въведена от потребителя 

*******************************************************************************/

#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

using namespace std;

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, sum = 0;

    // Въведете размерите на матрицата (брой редове и колони)
    cout << "Въведете брой редове: ";
    cin >> rows;
    cout << "Въведете брой колони: ";
    cin >> cols;

    // Инициализация и запълване на матрицата
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cin >> matrix[i][j];
            if (j == cols - i || j == cols - i - 2){
                sum += matrix[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}
