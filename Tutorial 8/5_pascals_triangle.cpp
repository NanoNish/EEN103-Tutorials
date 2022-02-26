#include <iostream>
#include <vector>
#define tv this->vec.push_back
using namespace std;

class Pascal{
    private:
        int degree{1};
        vector<int> vec;
    public:
        Pascal(const Pascal &p, int a){
            degree = a + 1;
            tv(1);
            for (int i{1}; i < degree - 1; i++){
                tv(p.vec[i - 1] + p.vec[i]);
            }
            tv(1);
        }
        Pascal(){
            degree = 1;
            vec.push_back(1);
        }
        ~Pascal(){
        }
        friend void print(const Pascal &);
};

void print(const Pascal &p){
    for (int i{0}; i < p.vec.size(); i++){
        cout << p.vec[i] << " ";
    }
    cout << "\n";
    return;
}

int main(){
    int n;
    cin >> n;
    Pascal arr[n];
    arr[0] = Pascal();
    for (int i{1}; i < n; i++){
        arr[i] = Pascal(arr[i-1], i+1);
    }
    for (int i{0}; i < n; i++){
        print(arr[i]);
    }
    return 0;
}