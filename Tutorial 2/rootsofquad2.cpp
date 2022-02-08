#include <iostream>
#include <cmath>
using namespace std;

void if_else_fn(double a, double b, double c, double D) {
    if (D>0) {
        double d= sqrt(D);
        cout << "\nThe roots are "<< (-b+d)/(2*a) << " and " << (-b-d)/(2*a) << " .";
    }
    else if (D==0) {
        cout << "\nThe roots are same and equal to "<< (-b)/(2*a) << " .";
    }
    else if (D<0) {
        double d = sqrt(-D);
        cout << "\nThe roots are "<< (-b/(2*a)) << " + " << (d/(2*a)) << " i and "<< (-b/(2*a)) << " - " << (d/(2*a)) << " i.";
    }
    else {
        cout<< "\nOops! There was an error." << endl;
    }
    return;
}

void switch_fn(double a, double b, double c, double D) {
    int temp;
    if (D>0) {
        temp = 1;
    }
    else if (D==0) {
        temp = 2;
    }
    else if (D<0) {
        temp = 3;
    }
    else {
        cout << "\nOops! There was an error";
    }

    switch(temp){
        case 1:
            double d;
            d = sqrt(D);
            cout << "\nThe roots are "<< (-b+d)/(2*a) << " and " << (-b-d)/(2*a) << " .";
            break;

        case 2:
            cout << "\nThe roots are same and equal to "<< (-b)/(2*a) << " .";
            break;

        case 3:
            d = sqrt(-D);
            cout << "\nThe roots are "<< (-b/(2*a)) << " + " << (d/(2*a)) << " i and "<< (-b/(2*a)) << " - " << (d/(2*a)) << " i.";
            break;
        
        default:
            break;
    }   
}

int main(){
    double a,b,c; double D;
    cout << endl <<"Enter coeff of x^2 ";
    cin>> a;
    cout << endl <<"Enter coeff of x^1 ";
    cin>> b;
    cout << endl << "Enter coeff of x^0 ";
    cin>> c;
    D = b*b - 4*a*c;
    cout<<"\n\nUsing the if else function.";
    if_else_fn(a,b,c,D);
    cout<<"\n\nUsing the switch function.";
    switch_fn(a,b,c,D);
    return 0;
}

int sgn(double D){
    int d = std::abs(D)/D;
    return d;
}