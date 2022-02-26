#include <iostream>
#include <cmath>
using namespace std;

class fixDeposit{
    protected:
        int account_no;     
        double amount; 
    public:
        fixDeposit(int acc, double val){
            account_no = acc;
            amount = val;
        }
        double interest(){
            cout << "This member function is in fixDeposit.";
            return 0;
        }
        void update(double val) { 
            amount += val; 
        }
        void display() { 
            cout << "This member function is in fixDeposit"; 
        }
};

class SIdeposit : public fixDeposit{
    protected:
        double rate;
        int time;
    public:
        SIdeposit(int acc, double val, double rate_val, int time_val) : fixDeposit(acc, val){
            rate = rate_val;
            time = time_val;
        }
        double interest(){
            return (amount * rate * time) / 100;
        }
        void display(){
            cout << "Account Number: " << account_no << "\n";
            cout << "Simple Interest total amount is: ";
            double SI = interest();
            update(SI);
            cout << amount;
            cout << " and interest is " << SI << endl;
        }
};

class CIdeposit : public fixDeposit{
    protected:
        double rate;
        int time;
    public:
        CIdeposit(int acc, double val, double rate_val, int time_val) : fixDeposit(acc, val){
            rate = rate_val;
            time = time_val;
        }   
        double interest(){
            return (amount * (pow((1 + (rate / 100)), time) - 1));
        }
        void display(){
            cout << "Account number: " << account_no << "\n";
            cout << "Compound Intrest total amount is: ";
            double CI = interest();
            update(CI);
            cout << amount;
            cout << " and interest is " << CI << endl;
        }
};

int main(){
    SIdeposit SI(1, 25000, 5, 5);
    SI.display();
    CIdeposit CI(2, 25000, 5, 5);
    CI.display();
    return 0;
}
