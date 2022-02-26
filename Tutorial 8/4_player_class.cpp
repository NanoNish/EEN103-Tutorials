#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    private:
        int player_no;
        string name;
        int matches;
        int *goals = new int[matches];
    public:
        Player(int a, string b, int c) : player_no{a}, name{b}, matches{c} {
            cout << "Enter number of goals per match:\n";
            for (int i{0}; i < matches; i++){
                cin >> *(goals + i);
            }
        }
        ~Player(){
            delete[] goals;
        }
};

int main(){
    cout << "\nEnter the number of players: ";
    int n{0};
    cin >> n;
    int a, c;
    string b;
    cout << "Enter player number: ";
    cin >> a;
    cout << "Enter the player name: ";
    cin >> b;
    cout << "Enter the matches player: ";
    cin >> c;
    Player player_1(a,b,c);
}