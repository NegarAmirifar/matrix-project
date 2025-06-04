#include <iostream>

using namespace std;
// دریافت ابعاد و ماتریس از کاربر
int main() {
    int rows, cols;


    cout << "the number of rows: ";
    cin >> rows;
    cout << "the number of cols: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "عنصر [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "the matrix is entered:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
