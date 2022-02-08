/* Print in the output of a C++ program the ASCII characters ranging from 65 to 90 with five characters
in each row separated by a tab space. */

#include <iostream>
using namespace std;

int main() {
    int a;
    for (a=65; a<=90;a++) {
        if(a%5 == 4) {
            cout<< char(a) << "\n"; 
        }
        else {
            cout << char(a) << "\t";
        }
    }
    return 0;
}