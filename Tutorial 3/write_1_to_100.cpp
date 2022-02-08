#include <fstream>
using namespace std;

int main(){
    ofstream writeFile("NOTES.txt");
    for(int i = 1; i<101; i++){
        writeFile << i << " ";
    }
    writeFile.close();
    return 0;
}