#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c,n;

    cout << "Enter number of terms n: ";
    cin >> n;

    if(n<1){
        cout << "Please enter a positive integer." << endl;
    }

    else if(n==1){
        cout << a;
    }

    else{
        cout << a << "\t" << b << "\t";
        for(int i = 2; i<(n); i++){
            c = a+b;
            cout << c << "\t";
            a = b;
            b = c;

        }
    }
    return 0;
}