#include <iostream>
using namespace std;

int main(){
    int arr[10]{}, posi{0}, neg{0}, odd{0}, even{0};
    for (int i{0}; i < 10; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        if(arr[i]>0)
            posi++;
        if (arr[i] < 0)
            neg++;
        if (arr[i]%2 == 0)
            even++;
        if (arr[i]%2 != 0)
            odd++;
    }
    cout << "\nThere are " << posi << " positive elements, " << neg << " negative elements, " 
         << odd << " odd elements and " << even << " even elements in the array.";
    return 0;
}