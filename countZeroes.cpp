
#include <iostream>

using namespace std;

int countZeroes(int matrix[][3], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matrix[3][3] = {
        {1, 0, 3},
        {4, 5, 0},
        {0, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int zeroCount = countZeroes(matrix, rows, cols);

    cout << "Number of zero elements: " << zeroCount << endl; // خروجی: 3

    return 0;
}

فاطمه بلوچ 2, [04.06.25 23:36]
https://github.com/FatemehBalouch/matrix.git
