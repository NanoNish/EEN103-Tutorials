#include <iostream>
#include <string>
using namespace std;

int grade_points(string grade){
    if(grade == "A+" || grade == "10") return 10;
    else if(grade == "A" || grade == "9") return 9;
    else if(grade == "B+" || grade == "8") return 8;
    else if(grade == "B" || grade == "7") return 7;
    else if(grade == "C+" || grade == "6") return 6;
    else if(grade == "C" || grade == "5") return 5;
    else if(grade == "D" || grade == "4") return 4;
    else if(grade == "F" || grade == "0") return 0;
    else return 404;
    }

int main(){
    int no_of_subjects;
    cout << "Enter the number of subjects: ";
    cin >> no_of_subjects;
    float cgsum{0.00};
    string grade;
    for(int i=1; i<=no_of_subjects; i++){
        cout << "Enter the grade of subject " << i << ": ";
        cin >> grade;
        if(grade_points(grade)==404){
            cout << "Invalid grade. Please try again" << endl;
            i--;
        }
        else cgsum += grade_points(grade); 
    }
    cout << "The CGPA is: " << cgsum / no_of_subjects << endl; 
    return 0;
}