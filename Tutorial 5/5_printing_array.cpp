#include <iostream>
using namespace std;

int main(){
    int A[3][3]{{1,2,3},{4,5,6},{7,8,9}};
    //without pointer
    cout << "Printing A without pointer: " << endl;
    for (int i{0}; i < 3; i++){
        for (int j{0}; j < 3; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
    //with addresses
    cout << "Printing A using addresses: " << endl;
    for (int i{0}; i < 3; i++){
        for (int j{0}; j < 3; j++)
            cout << *(*(A + i) + j) << "\t";
        cout << endl;
    }
    //using & operator and pointer
    cout << "Printing A using & reference operator and pointer: " << endl;
    for (int i{0}; i < 3; i++){
        for (int j{0}; j < 3; j++)
            cout << *(&A[i][j]) << "\t";
        cout << endl;
    }
}