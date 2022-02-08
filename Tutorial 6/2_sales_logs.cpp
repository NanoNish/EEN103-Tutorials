#include <iostream>
using namespace std;

int main(){
    int names{4}, products{5};
    int sales[names][products]{};
    int t{0};
    cout << "\nEnter number of slips: ";
    cin >> t;
    while(t--){
        int n, p, money{0};
        cout << "\nSalesperson number: ";
        cin >> n;
        cout << "Product number: ";
        cin >> p;
        cout << "Total value of product sold in Rs.: ";
        cin >> money;
        sales[n - 1][p - 1] += money;
    }
    return 0;
}