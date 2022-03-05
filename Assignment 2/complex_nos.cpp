#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    public:
        double real;
        double imag;
        Complex(): real{0}, imag{0} {}
        Complex(double x, double y): real{x}, imag{y} {}
        Complex operator+ (const Complex &num){
            Complex tmp;
            tmp.real = real + num.real;
            tmp.imag = imag + num.imag;
            return tmp;
        }
        Complex operator* (const Complex &num){
            Complex tmp;
            tmp.imag = this->real * num.imag + this->imag * num.real;
            tmp.real = this->real * num.real - this->imag * num.imag;
            return tmp;
        }
        void display(){
            cout << real << " + " << imag << "i." << endl;
            return;
        }
        void display_polar(){
            cout << sqrt(real * real + imag * imag) << " e ^ (i* " << atan(imag / real) << ")." << endl;
            return;
        }
};

int main(){
    double x, y;
    cout << "\nEnter first number in format x y: ";
    cin >> x >> y;
    Complex num_1(x, y);
    cout << "Enter second number in format x y: ";
    cin >> x >> y;
    Complex num_2(x, y);
    Complex num_3 = num_1 + num_2;
    cout << "The sum is: ";
    num_3.display();
    cout << "The sum in polar form is: ";
    num_3.display_polar();
    num_3 = num_1 * num_2;
    cout << "The product is: ";
    num_3.display();
    cout << "The product in polar form is: ";
    num_3.display_polar();
    return 0;
}