#include <iostream>
using namespace std;

bool isprime(int n){
    for(int i=2; i*i<=n; i++)
        if(n%i == 0) return 0;
    return 1;
}
    
int main(){
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    if(a>b){
        int c=a;
        a=b;
        b=c;
    }
    for(int i=max(a,2); i<=b; i++){
        if(isprime(i)) cout << i << "\t";
    }
    return 0;
}