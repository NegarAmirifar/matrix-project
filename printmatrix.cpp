#include <iostream>

using namespace std;
// تابع چاپ ماتریس
void printMatrix(int matrix[][100], int rows, int cols) {
    cout << "matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;


    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of cols: ";
    cin >> cols;


    int matrix[100][100];


    cout << "enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "elements [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    printMatrix(matrix, rows, cols);

    return 0;
}
