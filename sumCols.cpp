#include <iostream>

using namespace std;

void sumCols(int matrix[][3], int cols, int sums[]) {
    for (int i = 0; i < 3; ++i) { // تعداد سطر‌ها
        sums[i] = 0; // هر ستون را قبل از محاسبه با 0 初始化 کنید
        for (int j = 0; j < cols; ++j) {
            sums[i] += matrix[j][i]; // در این ستون را به مجموع اضافه کنید
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int cols = 3; // تعداد ستون‌ها
    int sums[3]; // آرایه برای نگهداری مجموع ستون‌ها

    sumCols(matrix, cols, sums);

    // چاپ نتایج
    for (int i = 0; i < cols; ++i) {
        cout << "Sum of column " << i << ": " << sums[i] << endl;
    }

    return 0;
}
