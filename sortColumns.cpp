#include <iostream>

using namespace std;

// تابع برای مرتب‌سازی ستون‌های ماتریس
void sortColumns(int matrix[][100], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        // مرتب‌سازی ستون j با استفاده از bubble sort
        for (int i = 0; i < rows - 1; i++) {
            for (int k = 0; k < rows - i - 1; k++) {
                if (matrix[k][j] > matrix[k + 1][j]) {
                    // تعویض مقادیر
                    int temp = matrix[k][j];
                    matrix[k][j] = matrix[k + 1][j];
                    matrix[k + 1][j] = temp;
                }
            }
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
    int rows, cols;

    // دریافت ابعاد ماتریس
    cout <<"Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // ایجاد ماتریس
    int matrix[100][100];

    // دریافت عناصر ماتریس
    cout << "Enter the matrix elements.:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // مرتب‌سازی ستون‌های ماتریس
    sortColumns(matrix, rows, cols);

    // چاپ ماتریس مرتب شده
    cout << "matrix"<<endl;
    return 0;
}
