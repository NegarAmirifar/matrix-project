#include <iostream>

using namespace std;
// تابع برای ضرب دو ماتریس
void multiplyMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int r1, int c1, int c2) {

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}


void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;

    // دریافت ابعاد ماتریس اول
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;

    // دریافت ابعاد ماتریس دوم
    cout << "Enter the number of rows and columns of the second matrix.: ";
    cin >> r2 >> c2;

    // بررسی امکان ضرب دو ماتریس
    if (c1 != r2) {
        cout << "Multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return 1; // خروج از برنامه اگر ابعاد نادرست باشد
    }

    // ایجاد ماتریس‌ها
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];

    // دریافت عناصر ماتریس اول
    cout << "عناصر ماتریس اول را وارد کنید:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "عنصر [" << i << "][" << j << "]: ";
            cin >> firstMatrix[i][j];
        }
    }

    // دریافت عناصر ماتریس دوم
    cout << "عناصر ماتریس دوم را وارد کنید:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "عنصر [" << i << "][" << j << "]: ";
            cin >> secondMatrix[i][j];
        }
    }

    // فراخوانی تابع ضرب ماتریس
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, r1, c1, c2);

    // نمایش نتیجه
    cout << "نتیجه ضرب ماتریس‌ها:" << endl;
    printMatrix(resultMatrix, r1, c2);

    return 0;
}
