#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2;
    int return_control = 1;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();
    if(len1 == len2){
        for(int i=0; i < len1; i++){
            if(str1[i] != str2[i]){
                return_control = 0;
                break;
            }
        }
    }
    else {
        return_control = 0;
    }

    if(return_control == 1){
        cout << "The strings are identical" << endl;
    }
    else {
        cout << "Strings arent identical." << endl;
    }
    return return_control;
}