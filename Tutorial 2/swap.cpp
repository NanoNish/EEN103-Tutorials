/* Write an algorithm and a program to swap the values of two variables. */

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<< "Enter two numbers.";
    cin>> a;
    cin>> b;
    a = a xor b;
    b = a xor b;
    a = a xor b;
    cout<< "Variable a is " << a << " and variable b is " << b << endl;
    return 0;
}