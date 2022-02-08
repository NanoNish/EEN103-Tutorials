/* Write an algorithm and a program to swap the values of two variables. */

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<< "Enter two numbers.";
    cin>> a>>b;
    c=a;
    a=b;
    b=c;
    cout<< "Variable a is " << a << " and variable b is " << b << endl;
    return 0;
}