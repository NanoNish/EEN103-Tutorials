#include <iostream>
using namespace std;

int main(){
    int first_value, second_value;
    int *mypointer;
    first_value = 10;
    second_value = 20;
    cout << "The first_value is " << first_value << "." << endl;
    cout << "The second_value is " << second_value << "." << endl;
    mypointer = &first_value;
    *mypointer += 15;
    mypointer = &second_value;
    *mypointer += 15;
    cout << "The first_value after modifying is " << first_value << "." << endl;
    cout << "The second_value after modifying is " << second_value << "." << endl;
    return 0;
}