#include <iostream>

using namespace std;

void sumRows(int matrix[][3], int rows, int sums[]) {
    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) { // فرض می‌کنیم تعداد ستون‌ها 3 است
            sum += matrix[i][j];
        }
        sums[i] = sum; // ذخیره نتیجه در آرایه sums
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int sums[3]; // آرایه‌ای برای نگهداری مجموع سطرها

    sumRows(matrix, rows, sums);

    // چاپ نتایج
    for (int i = 0; i < rows; ++i) {
        cout << "Sum of row " << i << ": " << sums[i] << endl;
    }

    return 0;
}
