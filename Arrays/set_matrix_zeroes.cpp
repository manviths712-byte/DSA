#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int rows = 3;
    int cols = 3;

    bool zeroRow[3] = {false};
    bool zeroCol[3] = {false};

    // Find rows and columns containing zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }

    // Set rows to zero
    for (int i = 0; i < rows; i++) {
        if (zeroRow[i]) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to zero
    for (int j = 0; j < cols; j++) {
        if (zeroCol[j]) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    cout << "Matrix after setting zeroes:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
