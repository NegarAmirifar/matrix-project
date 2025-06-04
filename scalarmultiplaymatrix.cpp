#include <iostream>

using namespace std;

// تابع برای ضرب اسکالر با ماتریس
void scalarMultiplyMatrix(int matrix[][100], int resultMatrix[][100], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            resultMatrix[i][j] = matrix[i][j] * scalar;
        }
    }
}

// تابع برای چاپ ماتریس
void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols, scalar;

    // دریافت ابعاد ماتریس
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // ایجاد ماتریس‌ها
    int matrix[100][100], resultMatrix[100][100];

    // دریافت عناصر ماتریس
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // دریافت عدد اسکالر
    cout << "Enter the scalar number: ";
    cin >> scalar;

    // فراخوانی تابع ضرب اسکالر با ماتریس
    scalarMultiplyMatrix(matrix, resultMatrix, rows, cols, scalar);

    // چاپ نتیجه
    cout << "Result of multiplying a matrix by a scalar number:" << endl;
    printMatrix(resultMatrix, rows, cols);

    return 0;
}
