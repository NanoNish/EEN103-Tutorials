#include <iostream>
#include <cmath>
using namespace std;

class fixDeposit {
    protected:
        static int account_no; 
        double amount;   
        fixDeposit(double val) { 
            amount = val; 
        }
        double interest(){
            cout << "This member function is in fixDeposit.";
            return 0;
        }
        void update(double val){ 
            amount += val; 
        }
        void display(){
            cout << "This member function is in fixDeposit."; 
        }
};
int fixDeposit::account_no = 100;

class SIdeposit : public fixDeposit {
    protected:
        double rate;
        int time;
    public:
        SIdeposit(double val, double rate_val, int time_val) : fixDeposit(val){
            rate = rate_val;
            time = time_val;
        }
        double interest(){
            return (amount * rate * time) / 100;
        }
        void display(){
            cout << "Account number: " << ++account_no << endl;
            cout << "Simple interest total amount is: ";
            double SI = interest();
            update(SI);
            cout << amount;
            cout << " and interest is " << SI << endl;
        }
};

class CIdeposit : public fixDeposit {
    protected:
        double rate;
        int time;
    public:
        CIdeposit(double val, double rate_val, int time_val) : fixDeposit(val){
            rate = rate_val;
            time = time_val;
        }
        double interest(){
            return (amount * (pow((1 + (rate / 100)), time)) - amount);
        }
        void display(){
            cout << "Account number: " << ++account_no << "\n";
            cout << "Compound Intrest amount is ";
            double CI = interest();
            update(CI);
            cout << amount;
            cout << " and interest is " << CI << endl;
        }
};

int main(){
    SIdeposit SI_1(25000, 5, 5);
    SI_1.display();
    SIdeposit SI_2(12500, 5, 2);
    SI_2.display();
    CIdeposit CI(25000, 5, 5);
    CI.display();
    return 0;
}
