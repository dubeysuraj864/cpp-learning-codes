#include <iostream> 
using namespace std;
int main(){
    
    char c;

    cout << " enter an alphabet: ";

    cin >> c;

    switch (c){
        case 'a':
        cout << "It is a vowel"<<endl;
        break;
        case 'e':
        cout << "It is a vowel"<<endl;
        break;
        case 'i':
        cout << "It is a vowel"<<endl;
        break;
        case 'o':
        cout << "It is a vowel"<<endl;
        break;
        case 'u':
        cout << "It is a vowel"<<endl;
        break;

        default:
        cout << "it is a consonant"<<endl;
        break;
    }

    return 0;
}