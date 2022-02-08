#include <iostream>
using namespace std;

int multiple(int a, int n){
    n += a;
    cout << n << endl;
    if(n<10*a) multiple(a,n);
    return a,n;
}

int main(){
    int a, n{0};
    cout << "Enter the number: ";
    cin >> a;
    multiple(a,n);
}


// float multiple(float a, float n){
//     n += a;
//     cout << n << endl;
//     multiple(a,n);
//     return a,n;
// }

// int main(){
//     multiple(5.0f, 0);
//     multiple(5,0);
// }