#include <iostream>
using namespace std;

int main(){
    int n{0}, m{0};
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    int A[n][m], B[n][m];
    cout << "\nEnter elements of matrix A: " << endl;
    for (int i{0}; i < n; i++)
        for (int j{0}; j < m; j++)
            cin >> A[i][j];
    cout << "Enter elements of matrix B: " << endl;
    for (int i{0}; i < n; i++)
        for (int j{0}; j < m; j++)
            cin >> B[i][j];
    cout << "\nSum of elements of matrix A and B: " << endl;
    for (int i{0}; i < n; i++){
        for (int j{0}; j < m; j++)
            cout << A[i][j] + B[i][j] << "  ";
        cout << endl;
    }
}