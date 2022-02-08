#include <iostream>
#include <cmath>
using namespace std;

long codomain(int arr[][4], int col){
    long det{0}, mat[3][3];
    for (int i{0}; i < 3; i++){
        for (int j{0}, k{0}; j < 3; j++){
            if (j == col)
                k++;
            mat[i][j] = arr[i + 1][k];
            k++;
        }
    }
     for (int i{0}; i < 3; i++){
        det += mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[2][(i + 1) % 3] * mat[1][(i + 2) % 3]);
    }
    return det;
}
int main(){
    int arr[4][4];
    long det{0};
    cout << "\nEnter the elements of matrix: \n";
    for (int i{0}; i < 16; i++)
        cin >> arr[i / 4][i % 4];
    for (int i{0}; i < 4; i++){
        det += pow(-1, i) * arr[0][i] * codomain(arr, i);
    }
    cout << "The determinant of the matrix is: " << det << endl;
    return 0;
}