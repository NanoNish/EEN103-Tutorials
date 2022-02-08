#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    string str3 = "";
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();

    for(int i = 0; i<(len1+len2);i++){
        if(i<len1){
            str3 = str3 + str1[i];
        }
        else{
            str3 = str3 + str2[i-len1];
        }
    }

    cout << "concatenated string: " << str3 << endl;
    return 0;
}
