#include <iostream>
#include <string>
using namespace std;

class String{
    public:
        int size;
        string s;
        String(string str = ""){
            s = str;
            size = s.length();
        }
        bool compare(String str1, String str2){
            if(str1.size != str2.size)
                return false;
            for (int i{0}; i < str1.size; i++){
                if(str1.s[i] != str2.s[i])
                    return false;
            }
            return true;
        }
        String operator+ (String &str){
            String tmp;
            tmp.size = size + str.size;
            tmp.s = s + str.s;
            return tmp;
        }
        void display(){
            cout << s << "\n";
        }
};

int main(){
    String a, b;
    cout << "\nEnter first string: ";
    cin >> a.s;
    cout << "Enter second string: ";
    cin >> b.s;
    cout << "\nThe strings you entered are:\n";
    a.display();
    b.display();
    String c{a + b};
    cout << "\nThe concatenated string is:\n";
    c.display();
    return 0;
}