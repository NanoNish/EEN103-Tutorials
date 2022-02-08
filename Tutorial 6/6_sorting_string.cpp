#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    string s;
    cout << "\nEnter the string: ";
    cin >> s;
    size_t n{s.length()};
    for (size_t i{0}; i < n; i++){
        for (size_t j{i+1}; j < n; j++){
            if (int(s[j]) < int(s[i]))
                swap(&s[i], &s[j]);
        }
    }
    cout << "The sorted string is: " << s;
}
/* If the answer should be like AaBb....
int main(){
    string s, ans{""};
    cout << "\nEnter the string: ";
    cin >> s;
    size_t n{s.length()};
    for (int i{65}, j{97}; i <= 90; i++, j++){
        for(int k{0}; k<n; k++)
            if(s[k] == char(i)) ans += char(i);
        for(int k{0}; k<n; k++)
            if(s[k] == char(j)) ans += char(j);
    }
    cout << "The sorted string is: " << s;
}
*/