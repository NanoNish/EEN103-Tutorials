#include <iostream>
using namespace std;
class student{
private:
    int enrl_no;
    string name;
    float marks[5];
    float sgpa;
    float weight;
    int credit;
    int total_cred{0};

public:
    void input(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enrollment number: ";
        cin >> enrl_no;
        for (int i = 0; i < 5; i++){
            cout << "Enter GPA in subject " << i + 1 << ": ";
            cin >> marks[i];
            cout << "Enter credits of subject: ";
            cin >> credit;
            weight += marks[i] * credit;
            total_cred += credit;
        }
        sgpa = weight / total_cred;
        weight = 0;
        total_cred = 0;
    }
    void output(){
        cout << name << "\t" << enrl_no << "\t" << "SGPA: " << sgpa << endl;
    }
};

int main(){
    student s[30];
    for (int i{0}; i < 30; i++){
        cout << "Student " << i + 1 << endl;
        s[i].input();
        cout << endl;
    }
    for (int i{0}; i < 30; i++){
        s[i].output();
    }
}