#include <iostream>

using namespace std;

int main() {
    const int row = 4, coloum = 4; 
    int matrix1[row][coloum] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int matrix2[row][coloum] = {
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 26, 27, 28},
        {29, 30, 31, 32}
    };

    int sumOfMatrices[row][coloum]; 

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            sumOfMatrices[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    cout << "\nThe result of matriks summation:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            cout << sumOfMatrices[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}