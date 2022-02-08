#include <iostream>
#include <string>
using namespace std;

int main()
{
    int diff = int('a')-int('A');
    string str1;
    cout << "Enter string in upper case: ";
    getline(cin, str1);
    for(int i = 0; i<str1.length(); i++){
        int ascii_val = int(str1[i]);
        if(ascii_val>=65 and ascii_val<=90){
            str1[i]= char(ascii_val + diff);
        }
    }
    cout << "Given string in lower case : " << str1 << "\n\n";

    string str2;
    cout << "Enter string in lower case: ";
    getline(cin, str2);
    for(int i = 0; i<str2.length(); i++){
        int ascii_val = int(str2[i]);
        if(ascii_val>=97 and ascii_val<=122){
            str2[i]= char(ascii_val - diff);
        }
    }
    cout << "Given string in upper case : " << str2 << endl;
    return 0;
}