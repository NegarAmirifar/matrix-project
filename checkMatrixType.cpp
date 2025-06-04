
#include <iostream>

using namespace std;
// تابع مشخص کردن نوع ماتریس
string checkMatrixType(int** matrix, int n) {
    bool upperTriangular = true;
    bool lowerTriangular = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i > j && matrix[i][j] != 0)) upperTriangular = false;
            if ((i < j && matrix[i][j] != 0)) lowerTriangular = false;
        }
    }

    if (upperTriangular) return "بالا مثلثی";
    else if (lowerTriangular) return "پایین مثلثی";
    else return "هیچکدام";
}

int main() {
    int n = 3; // اندازه ماتریس
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) matrix[i] = new int[n];

    // مقدار دهی اولیه ماتریس
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
    matrix[1][0] = 0; matrix[1][1] = 4; matrix[1][2] = 5;
    matrix[2][0] = 0; matrix[2][1] = 0; matrix[2][2] = 6;

    cout << "نوع ماتریس: " << checkMatrixType(matrix, n) << endl;

    // پاکسازی حافظه
    for (int i = 0; i < n; ++i) delete[] matrix[i];
    delete[] matrix;

    return 0;
}

فاطمه بلوچ 2, [04.06.25 23:36]
https://github.com/FatemehBalouch/matrix.git
