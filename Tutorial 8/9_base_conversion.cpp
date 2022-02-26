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
            if(deci == 0){
                bin += '0';
                return;
            }
            while (deci){
                bin += (deci % 2 == 0 ? '0' : '1');
                deci = deci / 2;
            }
            for (int i = 0; i < bin.length() / 2; i++){
                char tmp = bin[bin.length() - i - 1];
                bin[i] = tmp;
                bin[bin.length() - i - 1] = bin[i];
            }
            cout << "Binary conversion is: " << bin;
            return;
        }
};

int main(){
    Number num;
    num.input();
    num.convert();
    return 0;
}