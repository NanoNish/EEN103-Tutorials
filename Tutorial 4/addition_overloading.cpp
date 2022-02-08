#include <iostream>
using namespace std;

int Addition(int a, int b){
    return a+b;
}

float Addition(float a, float b){
    return a+b;
}

int main(){
    cout << Addition(5, 99) << endl;
    cout << Addition(5.0f, 99.50f) << endl;
}