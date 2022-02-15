#include <iostream>
using namespace std;

struct add{
    int a, b, sum;
};
int main()
{
    add a;
    add *ptr = &a;
    cout << "Enter both the numbers: ";
    cin >> (*ptr).a >> (*ptr).b;
    (*ptr).sum = (*ptr).a + (*ptr).b;
    cout << "The sum is: " << ptr->sum;
    return 0;
}