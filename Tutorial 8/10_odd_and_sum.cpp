#include <iostream>
using namespace std;

class Odd{
    public:
        int n;
        int *arr;
        Odd(){
            n = 0;
            arr = new int[n];
        }
        ~Odd(){
            delete[] arr;
        }
        void display_odds(){
            cout << "\nThe first n odd numbers are:\n";
            for (int i{0}; i < n; i++){
                cout << arr[i] << " ";
            }
        }
};

class Sum{
    public:
        int m{0};
        int *sum;
        Sum(){
            sum = new int[m];
        }
        ~Sum(){
            delete[] sum;
        }
        void display_sum(){
            cout << "\n\nThe sum array of alternate elements is:\n";
            for (int i{0}; i < m; i++){
                cout << sum[i] << " ";
            }
        }
};

class Combi : public Odd, public Sum{
    public:
        Combi(){
            cout << "\nEnter the number n: ";
            cin >> n;
            arr = new int[n];
            for (int i{0}; i < n; i++){
                *(arr + i) = 2 * i + 1;
            }
            m = n - 1;
            sum = new int[m];
            for (int i{0}; i < m; i++){
                *(sum + i) = *(arr + i) + *(arr + i + 1);
            }
        }
        ~Combi(){
            delete[] arr;
            delete[] sum;
        }
};

int main(){
    Combi obj;
    obj.display_odds();
    obj.display_sum();
    return 0;
}