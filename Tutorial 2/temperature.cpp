/* Program which converts the temperature in Fahrenheit into Celcius and vice versa. */

#include <iostream>
using namespace std;

int main() {
    double t,tans;
    int chooser;
    cout<< " Enter the conversion needed: 1 --> C to F, 2 --> F to C"<<endl;
    cin >> chooser;
    cout<< "Input the temperature to be converted."<< endl;
    cin >> t; 
    switch (chooser)
    {
    case 1:
        tans = t*(1.8) + 32.0;
        cout << "The temperature in F scale is " << tans << endl;
        break;
    case 2:
        tans = (t-32.0)*(5.0/9.0);
        cout << "The temperature in C scale is " << tans << endl;
        break;  
    default:
        cout << "We had an error sadge." << endl;
        break;
    }
    return 0;
}