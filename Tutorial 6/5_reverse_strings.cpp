#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    size_t n{s.length()};
    char *pi, *pj;
    for (size_t i{0}; i < n / 2; i++){
        pi = &s[i];
        pj = &s[n - 1 - i];
        swap(pi, pj);
    }
    cout << "The reversed string is: " << s;
}