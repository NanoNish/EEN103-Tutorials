#include <iostream>
using namespace std;

void print(char n){
    cout << n << "\t";
    if(n != char(int('Z'))){
        print(char(int(n)+1));
    }
}

int main(){
    print('A');
    return 0;
}