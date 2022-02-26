#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Binary{
    public:
        string bin;
        Binary(){
            bin = "";
        }
};

class Decimal{
    public:
        int deci;
        Decimal():Decimal(0){}
        Decimal(int n){
            deci = n;
        }
};

class Number : public Binary, public Decimal{
    public:
        Number(){
            deci = 0;
        }
        void input(){
            cout << "\nEnter the number: ";
            cin >> deci;
        }
        void convert(){
            int n = deci;
            string ans = bin;
            if(n == 0){
                ans += "0";
                return;
            }
            while (n){
                ans += (n % 2 == 0 ? "0" : "1");
                n = n / 2;
            }
            for (int i = 0; i < ans.length() / 2; i++){
                char tmp = ans[ans.length() - i - 1];
                ans[ans.length() - i - 1] = ans[i];
                ans[i] = tmp;
            }
            cout << "Binary conversion is: " << ans;
            return;
        }
};

int main(){
    Number num;
    num.input();
    num.convert();
    return 0;
}