#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

// تابع برای مرتب‌سازی سطرهای ماتریس
void sortRows(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        // مرتب‌سازی سطر i با استفاده از bubble sort
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    // تعویض مقادیر
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
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
    cout << "تعداد سطرها و ستون های ماتریس را وارد کنید: ";
    cin >> rows >> cols;

    // ایجاد ماتریس
    int matrix[100][100];

    // دریافت عناصر ماتریس
    cout << "عناصر ماتریس را وارد کنید:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "عنصر [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // مرتب‌سازی سطرهای ماتریس
    sortRows(matrix, rows, cols);

    // چاپ ماتریس مرتب شده
    cout << "ماتریس پس از مرتب‌سازی سطرها:" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}
