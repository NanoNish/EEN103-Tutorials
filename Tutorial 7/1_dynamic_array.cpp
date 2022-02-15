#include <iostream>
using namespace std;

int main(){
    int *marksArray = new int[4];
    cout << "Enter marks into the array marksArray:\n";
    for (int i{0}; i < 4; i++)
        cin >> *(marksArray + i);
    cout << "\nThe marks in marksArray are:\n";
    for (int i{0}; i < 4;i++)
        cout << *(marksArray + i) << " ";
    int *marksArrayA = new int[8];
    for (int i{0}; i < 4; i++)
        *(marksArrayA + i) = *(marksArray + i);
    delete[] marksArray;
    cout << "\n\nEnter marks into the last elements of array marksArrayA:\n";
    for (int i{4}; i < 8; i++)
        cin >> *(marksArrayA + i);
    cout << "\nThe marks in marksArrayA are:\n";
    for (int i{0}; i < 8; i++)
        cout << *(marksArrayA + i) << " ";
    delete[] marksArrayA;
    //deletion is necessary to free the memory that can be used later
    //ie to prevent memory leakage
}