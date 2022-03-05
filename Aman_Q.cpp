//Question 2 improved versin of Vardaan's solution
#include <iostream>
#include <cmath>
using namespace std;
int enough(int goals){
    int x = goals;
    if ((1 + 8 * x) <= 1)
        return 1;
    return ceil((-1 + sqrt(1.0 + 8 * x)) / 2);
}
int main(){
    int n;
    cout << "Enter number of goals: ";
    cin >> n;
    cout << enough(n) << endl;
    return 0;
}