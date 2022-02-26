#include <iostream>
#include <cmath>
using namespace std;

int sq_sum(int a){
    int sum{0};
    a = 2 * (a / 2);
    while(a){
        sum += pow(a, 2);
        a -= 2;
    }
    return sum;
}

int cube_sum(int a){
    int sum{0};
    a = 2 * (a / 2);
    while (a){
        sum += pow(a, 3);
        a -= 2;
    }
    return sum;
}

int sum(int (*fn)(int), int a){
    return (*fn)(a);
}

int main(){
    int a;
    cout << "Enter the integer: ";
    cin >> a;
    cout << "\nThe sum of squares of even integers upto a is: "
         << sum(sq_sum, a);
    cout << "\nThe sum of cubes of even integers upto a is: "
         << sum(cube_sum, a);
    return 0;
}