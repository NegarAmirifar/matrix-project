#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

// تابع برای ویرایش یک درایه مشخص در ماتریس
void editElementInMatrix(int matrix[][100], int rows, int cols, int row, int col, int newValue) {
    // بررسی اینکه آیا اندیس‌های سطر و ستون معتبر هستند
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        matrix[row][col] = newValue;
        cout << "عنصر [" << row << "][" << col << "] با مقدار " << newValue << " ویرایش شد." << endl;
    } else {
        cout << "اندیس‌های سطر و ستون نامعتبر هستند." << endl;
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

    // دریافت اندیس سطر و ستون برای ویرایش
    int row, col, newValue;
    cout << "اندیس سطر عنصری که می‌خواهید ویرایش کنید را وارد کنید: ";
    cin >> row;
    cout << "اندیس ستون عنصری که می‌خواهید ویرایش کنید را وارد کنید: ";
    cin >> col;
    cout << "مقدار جدید برای این عنصر را وارد کنید: ";
    cin >> newValue;

    // فراخوانی تابع ویرایش
    editElementInMatrix(matrix, rows, cols, row, col, newValue);

    // چاپ ماتریس ویرایش شده
    cout << "ماتریس پس از ویرایش:" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}
