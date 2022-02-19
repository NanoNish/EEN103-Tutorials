#include <iostream>
using namespace std;

long add(int p, int q){
    return p + q;
}

long subtract(int p, int q){
    return std::abs(p - q);
}

long multiply(int p, int q){
    return p * q;
}

long function(long (*fn_ptr)(int, int), int p, int q){
    return (*fn_ptr)(p, q);
}

long (*ptr[3])(int , int ){add, subtract, multiply};

int main(){
    int p, q;
    cout << "\nEnter the first number: ";
    cin >> p;
    cout << "Enter the second number: ";
    cin >> q;

    cout << "\nDirectly calling using function pointer:";
    cout << "\nThe sum is: " << function(add, p, q);
    cout << "\nThe absolute difference is: " << function(subtract, p, q);
    cout << "\nThe product is: " << function(multiply, p, q);

    // ptr[0] = add;
    // ptr[1] = subtract;
    // ptr[2] = multiply;
    cout << "\n\nCalling functions using an array of function pointers:";
    cout << "\nThe sum is: " << ptr[0](p, q);
    cout << "\nThe absolute difference is: " << ptr[1](p, q);
    cout << "\nThe product is: " << ptr[2](p, q);

    return 0;
}