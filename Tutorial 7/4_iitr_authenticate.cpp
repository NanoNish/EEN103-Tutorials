#include <iostream>
using namespace std;

class IITR{
    void Programmes(){
        cout << "\nProgrammes available in all the branches:\n";
        cout << "B.Tech.\t"
             << "M.Tech.\t"
             << "Int B.Sc./M.Sc.\t"
             << "B.Arch.";
    }
    void Branches(){
        cout << "\nBranches available in IITR:\n";
        cout << "CSE\t"
             << "ECE\t"
             << "EE\t"
             << "Mech E\n"
             << "Chem E\t"
             << "Civil E\t"
             << "Metallurgy\n"
             << "GPT\t"
             << "GT\t"
             << "Arch\t"
             << "BSBE\n"
             << "MnC\t"
             << "and many more.\n";
    }
    public:
        void verify(){
            cout << "\nEnter your enrollment number: ";
            long long enrl_no;
            cin >> enrl_no;
            cout << "\nEnter the pin: ";
            int pin;
            cin >> pin;
            if (pin == 1234 || pin == 9381) // for faculty and for students
                Branches();
                Programmes();
        }
};

int main(){
    IITR data;
    data.verify();
    return 0;
}