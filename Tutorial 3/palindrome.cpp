#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool result_control = 1;
    cout << "Enter a string." << endl;
    getline(cin, str);
    for(int i = 0; i < int((str.length())/2); i++) {
        if(str[i] != str[str.length()-i-1]) {
            cout << "The string entered isn't a palindrome." << endl;
            result_control = 0;
            break;
        }
    }
    if(result_control){
        cout << "The string entered is a palindrome." << endl;
        return 0;
    }
}