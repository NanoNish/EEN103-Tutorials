/* Program to check given number is prime or not. */

#include <iostream>
#include <cmath>
using namespace std;

int prime(int x) {
    bool y;
    for (int i =2;i<=int(sqrt(x));i++) {
        if (x%i == 0) {
            y = 0;
            break;
        }
        else {
            y = 1;
        }
    }
    return y;
}

int main() {
    int a;
    cout<<"Enter the number. ";
    cin >> a;
    int b = int(sqrt(a));
    if (a<=1) {
        cout<<"Please give a positive number greater than 1.";
    }
    else {
        int y = prime(a);
        if (y==0) {
            cout <<  "It is a composite number." << endl;
        }
        else if (y==1) {
            cout <<  "It is a prime number." << endl;
        }
    }
    return 0;
}