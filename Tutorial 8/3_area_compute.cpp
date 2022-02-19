#include <iostream>
#include <cmath>
#define pi 3.1416
using namespace std;

class Area{
    private:
        double area;
    public:
        Area(double r){
            area = pi * r * r;
        }
        Area(double a, double b, double c){
            double s = (a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
        }
        Area(double a, double b){
            area = a * b;
        }
        void disp(){
            cout << "\nArea is: " << area << " sq units.";
        }
};

int main(){
    int choice{0};
    cout << "\nThe numbers corresponding to shapes: ";
    cout << "\n1: Circle\t2: Triangle\t3: Rectangle\n";
    cout << "Enter your choice: ";
    while(1){
        cin >> choice;
        if(choice == 1 || choice == 2 || choice == 3)
            break;
        cout << "Please enter a valid choice: ";
    }
    switch(choice){
        case 1:{
            double r;
            cout << "\nCircle\n"
                 << "Enter radius: ";
            cin >> r;
            Area area_1(r);
            area_1.disp();
            break;
        }
        case 2:{
            double a, b, c;
            cout << "\nTriangle\n"
                 << "Enter the sides: ";
            cin >> a >> b >> c;
            Area area_2(a, b, c);
            area_2.disp();
            break;
        }
        case 3:{
            double a, b;
            cout << "\nRectangle\n"
                 << "Enter sides: ";
            cin >> a >> b;
            Area area_3(a, b);
            area_3.disp();
            break;
        }
        default:
            break;
    }
}