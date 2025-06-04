#include <iostream>

using namespace std;

// تابع برای جمع دو ماتریس
void addMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

// تابع برای تفریق دو ماتریس
void subtractMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
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
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // ایجاد ماتریس‌ها
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];

    // دریافت عناصر ماتریس اول
    cout << "Enter the elements of the first matrix.:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element [" << i << "][" << j << "]: ";
            cin >> firstMatrix[i][j];
        }
    }

    // دریافت عناصر ماتریس دوم
    cout << "Enter the elements of the seconnd matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "عنصر [" << i << "][" << j << "]: ";
            cin >> secondMatrix[i][j];
        }
    }

    // فراخوانی تابع جمع ماتریس
    addMatrices(firstMatrix, secondMatrix, resultMatrix, rows, cols);
    cout << "Result of adding matrices:" << endl;
    printMatrix(resultMatrix, rows, cols);

    // فراخوانی تابع تفریق ماتریس
    subtractMatrices(firstMatrix, secondMatrix, resultMatrix, rows, cols);
    cout << "Result of adding subtraction:" << endl;
    printMatrix(resultMatrix, rows, cols);
}
