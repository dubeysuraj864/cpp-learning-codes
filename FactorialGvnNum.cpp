#include <iostream>
using namespace std;
int main()
{
    // this is a program to find factorial of given numbers

    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter any postive number to get factorial:  ";
    cin >> n;

    for ( int i=1 ; i <=n ; i++ ){
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}