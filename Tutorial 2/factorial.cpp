/* Write a program to compute the factorial of a given non-negative integer, and draw the flowchart of
the same. */

#include <iostream>
using namespace std;

int fact(int x) {
    int i, ans = 1;
    for (i=1;i<=x;i++) {
        ans = ans * i;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter the number you need factorial for." << endl;
    cin >> num;
    if (num <0) {
        cout << "The number is invalid." << endl;
    }
    else if (num == 0) {
        cout << "Factorial is " << 1 << endl;
    }
    else {
        cout<< "The factorial is "<< fact(num);
    }
    return 0;
}
