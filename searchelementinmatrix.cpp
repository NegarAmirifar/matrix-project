#include <iostream>

using namespace std;


// تابع برای جستجوی یک عنصر در ماتریس
void searchElementInMatrix(int matrix[][100], int rows, int cols, int element) {
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == element) {
                cout << "element " << element << " در موقعیت [" << i << "][" << j << "] یافت شد." << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "element " << element << "Not found in the matrix" << endl;
    }
}

int main() {
    int rows, cols;

    // دریافت ابعاد ماتریس
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // ایجاد ماتریس
    int matrix[100][100];

    // دریافت عناصر ماتریس
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // دریافت عنصر مورد جستجو
    int element;
    cout << "Enter the element you want to search for: ";
    cin >> element;

    // فراخوانی تابع جستجو
    searchElementInMatrix(matrix, rows, cols, element);

    return 0;
}
