#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
    cout << "Enter the original number: ";
    cin >> x;
    double a;
    cout << "\nEnter the gain parameter (keep it between 0 and 1): ";
    cin >> a;
    if (a <= 0 || a >= 1){
        cout << "\nInvalid value of gain parmeter.";
        return 1;
    }
    int n{0};
    cout << "\nEnter number of iterations: ";
    cin >> n;
    double arr[n][2];
    arr[0][0] = x;
    for (int i{0}; i < n; i++){
        arr[i][1] = a * arr[i][0];
        if (i + 1 < n)
            arr[i + 1][0] = arr[i][1];
    }
    for (int i{0}; i < n; i++){
        cout << arr[i][0] << "\t\t" << arr[i][1] << endl;
    }
}