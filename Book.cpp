#include <iostream>
using namespace std;

int main(){

    char c;
    cout << "\n\n";
    for(int c=65 ; c<=122 ; c = c+1)
    {
        if(c > 65 && c < 122)
        continue;
        cout << 4*c - c << endl;
    }
    cout << endl;

    return 0;
}