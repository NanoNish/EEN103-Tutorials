#include <iostream>
using namespace std;

int* find(int arr[], int n, int a){
    int *ptr = arr;
    for (int i{0}; i < n; i++){
        if (a == arr[i]){
            return ptr+i;
        }
    }
    return nullptr;
}

int main(){
    cout << "Enter number of elements: ";
    int n{0}, a{0};
    cin >> n;
    cout << "\nEnter element to be found: ";
    cin >> a;
    cout << "\nEnter elements in array:\n";
    int arr[n]{};
    for (int i{0}; i < n; i++)
        cin >> arr[i];
    cout << endl << find(arr, n, a);
}