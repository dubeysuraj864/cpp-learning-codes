#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool flags;
    for(int i=2;  i<sqrt(n) ;i++){
        if(n%i==0){
            cout << "Non-Prime";
            flags=1;
            break;
        }

    }

    if(flags==0){
        cout << " Prime" << endl;
    }
    return 0;
}