#include <iostream>
#define ll long long
using namespace std;
class fibonacci{
    private:
        ll a, b, c;
    public:
        fibonacci(){
            a = -1;
            b = 1;
            c = a + b;
        }
        void display(){
            cout << c << "\t";
        }
        void operator++(){
            a = b;
            b = c;
            c = a + b;
        }
};
int main()
{
    int n;
    fibonacci fib;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i{0}; i < n; i++){
        fib.display();
        ++fib;
    }
    return 0;
}