#include <iostream>

using namespace std;

void sumD(int matrix[][3], int size, int sum) {
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3; // اندازه قطر اصلی
    int sum = 0; // متغیر برای نگهداری مجموع عناصر قطر اصلی

    sumD(matrix, size, sum);

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
