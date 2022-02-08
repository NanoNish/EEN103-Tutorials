#include <iostream>
#include <string>
using namespace std;

// Converting to lower case.
string lcase(string str1){
    int diff = int('a')-int('A');
    for(int i = 0; i<str1.length(); i++){
        int ascii_val = int(str1[i]);
        if(ascii_val>=65 and ascii_val<=90){
            str1[i]= char(ascii_val + diff);
        }
    }
    return str1;
}

int main(){
    string str;
    bool result_control = 1;
    cout << "Enter a string." << endl;
    getline(cin, str);
    str = lcase(str);
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