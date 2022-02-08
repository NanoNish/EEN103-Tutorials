#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n{0};
    // cout << "Enter the degree of matrix: ";
    cin >> n;
    double arr[4][4]{};
    // cout << "Enter the elements of matrix: \n";
    for (int i{0}; i < 4; i++)
        for (int j{0}; j < 4;j++)
            cin >> arr[i][j];
    // cout << "\nDeterminant of matrix is: ";
    double det{0};
    for (int i{0}; i<4; i++){
        for (int j{i}; j < 4; j++){
            double gain = arr[i + 1][j] / arr[i][j];
            for (int k{0}; k < 4; k++){
                arr[j][k] = 0;
            }
        }
    }
}