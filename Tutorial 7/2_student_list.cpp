#include <iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};
struct student{
    string name;
    long long enrl_no;
    long long phone_no;
    date dob;
    date jdate;
};
struct faculty{
    string name;
    long long enrl_no;
    long long phone_no;
    date dob;
    date jdate;
};

void allot(faculty b[], student s[], int b_ind, int i);
void display(faculty b[], int i);

int main(){
    int n{0}, students_18{0}, students_19{0}, students_20{0}, students_21{0};
    cout << "Enter total number of students: ";
    cin >> n;
    student list[n];
    for (int i{0}; i < n; i++){
        cout << "\nEnter the details of student number " << i + 1 << ": ";
        cout << "\nName: (fname_lname) ";
        cin >> list[i].name;
        cout << "Enrollment number: ";
        cin >> list[i].enrl_no;
        cout << "Phone number: ";
        cin >> list[i].phone_no;
        cout << "DOB: (DD MM YY) ";
        cin >> list[i].dob.day >> list[i].dob.month >> list[i].dob.year;
        cout << "Joining Date: (DD MM YY) ";
        cin >> list[i].jdate.day >> list[i].jdate.month >> list[i].jdate.year;
    }
    for (int i{0}; i < n; i++){
        switch (list[i].jdate.year){
            case 18:
                students_18++;
                break;
            case 19:
                students_19++;
                break;
            case 20:
                students_20++;
                break;
            case 21:
                students_21++;
                break;
            default:
                break;
        }
    }
    faculty b18[students_18], b19[students_19], b20[students_20], b21[students_21];
    students_18 = students_19 = students_20 = students_21 = 0;
    for (int i{0}; i < n; i++){
        switch (list[i].jdate.year){
        case 18:
            allot(b18, list, students_18++, i);
            break;
        case 19:
            allot(b19, list, students_19++, i);
            break;
        case 20:
            allot(b20, list, students_20++, i);
            break;
        case 21:
            allot(b21, list, students_21++, i);
            break;
        default:
            break;
        }
    }
    cout << "\n2018 Batch:\n";
    for (int i{0}; i < students_18; i++)
        display(b18, i);
    cout << "\n\n2019 Batch:\n";
    for (int i{0}; i < students_19; i++)
        display(b19, i);
    cout << "\n\n2020 Batch:\n";
    for (int i{0}; i < students_20; i++)
        display(b20, i);
    cout << "\n\n2021 Batch:\n";
    for (int i{0}; i < students_21; i++)
        display(b21, i);
}

void allot(faculty b[], student s[], int b_ind, int i){
    b[b_ind].name = s[i].name;
    b[b_ind].enrl_no = s[i].enrl_no;
    b[b_ind].phone_no = s[i].phone_no;
    b[b_ind].dob = s[i].dob;
    b[b_ind].jdate = s[i].jdate;
}

void display(faculty b[], int i){
    cout << "Name: " << b[i].name;
    cout << "\nEnrollment number: " << b[i].enrl_no << endl;
}