#include <iostream>
using namespace std;

void solve(int a, int b, int d, int c){
    int A[a][b]{}, B[d][c]{}, AB[a][c]{};
    cout << "\nInput values of matrix 1: " << endl;
    for (int i{0}; i < a; i++)
        for (int j{0}; j < b; j++)
            cin >> A[i][j];
    cout << "\nInput values of matrix 2: " << endl;
    for (int i{0}; i < d; i++)
        for (int j{0}; j < c; j++)
            cin >> B[i][j];
    for (int i{0}; i < a; i++)
        for (int j{0}; j < c; j++)
            for (int k{0}; k < b; k++)
                AB[i][j] += A[i][k] * B[k][j];
    cout << "\nThe product of matrices is: " << endl;
    for (int i{0}; i < a; i++){
        for (int j{0}; j < c; j++)
            cout << AB[i][j] << "\t";
        cout << endl;
    }
}

int main(){
    int a{}, b{}, c{}, d{};
    while(1){
        cout << "\nEnter dimensions of matrix 1: ";
        cin >> a >> b;
        cout << "Enter dimensions of matrix 2: ";
        cin >> d >> c;
        if(b!=d)
            cout << "Invalid dimensions, please re-enter.";
        else{
            solve(a,b,d,c);
            break;
        } 
    }
}