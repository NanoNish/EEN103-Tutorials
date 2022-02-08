#include <iostream>
using namespace std;

int main(){
    int n{0};
    cout << "Please enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nPlease enter the n elements with a space in between: " << endl;
    for (int i{0}; i < n; i++)
        cin >> arr[i];
    //Reversing the array
    for (int i{0}; i * 2 < n; i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << "Reversed array: " << endl;
    for (int i{0}; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    //Sorting in ascending order
    for (int i{0}; i < n; i++)
        for (int j{i+1}; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    cout << "Sorted array in ascending order: " << endl;
    for (int i{0}; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    
    //Sorting in descending order
    for (int i{0}; i < n; i++)
        for (int j{i+1}; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    cout << "Sorted array in descending order: " << endl;
    for (int i{0}; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}