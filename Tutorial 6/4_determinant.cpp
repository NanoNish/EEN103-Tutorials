#include <iostream>
#include <cmath>
using namespace std;

bool find(int col[], int c, int f){
    for (int i{0}; i < c; i++)
        if(col[i] == f)
            return false;
    return true;
}

// arr[], n = total, x = new last, col[] to be ignored, size of col
int cofactor(int arr[], int n, int x, int col[], int c){
    int det{0};
    if(n - c > 1){    
        int col_new[c + 1];
        for (int i{0}; i < c; i++)
            col_new[i] = col[i];
        for (int i{x - n}; i < x; i++){
            if(find(col, c, i)){    
                col_new[c] = i % n;
                det += pow(-1, ((i / n) + (i % n) + c)) * arr[i] * cofactor(arr, n, x - n, col_new, c+1);
            }
        }
    }
    else{
        for (int i{0}; i < n; i++){
            if(i != col[i])
                det = arr[i];
        }
    }
    return det;
}

int main(){
    int n{0};
    //cout << "Enter the degree of matrix: ";
    cin >> n;
    int arr[n * n]{};
    //cout << "Enter the elements of matrix: \n";
    for (int i{0}; i < n*n; i++)
        cin >> arr[i];
    int col_new[0]{};
    //cout << "\nDeterminant of matrix is: ";
    cout << cofactor(arr, n, n * n, col_new, 0);
}
//element access row = i/n and column = i%n
/*
1 2 3 1
4 5 6 4
7 8 9 7

*/