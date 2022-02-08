#include <iostream>
using namespace std;

int showChoice(){
    int choice;
    cout<< "\n\nHello! Here are the instructions on how to use this calculator. "
        << "\nWe have a menu for options and you will be asked below to input the number corresponding to the operation. "
        << "\nAfter that you will asked to input the operands."
        << "\n\nHere are the corresponding numbers:- "
        << "\n1 for addition | 2 for subtraction | 3 for multiplication | 4 for division"
        << "\n\nPlease enter the number corresponding to the operation you want: ";
    cin >> choice;
    return choice; 
}

void sum(int a,int b){
    cout << "\nThe sum is: " << a+b;
}

void subtract(int a, int b){
    cout << "\nThe difference is: " << (a>b ? (a-b):(b-a));
}

void multiply(int a, int b){
    cout << "\nThe product is: " << a*b;
}

void divide(int a, int b){
    cout << "\nThe quotient is: " << a/b;
}

int main(){
    int no_of_test, choice;
    cout << "How many operations would you like to do: ";
    cin >> no_of_test;
    for(int i{0}; i<no_of_test; i++){
        choice = showChoice();
        int a, b;
        cout << "\n\nEnter the first operand: ";
        cin >> a;
        cout << "\nEnter the second operand: ";
        cin >> b;
        switch(choice){
            case 1:
                sum(a, b);
                break;
            case 2:
                subtract(a, b);
                break;
            case 3:
                multiply(a, b);
                break;
            case 4:
                divide(a, b);
                break;
            default:
                cout << "\nThere seems to be an error.";
                break;
        }
    }
    return 0;
}