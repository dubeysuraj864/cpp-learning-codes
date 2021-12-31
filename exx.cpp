#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum, dif, mul;
    int quo, rem;
    cout << "Enter 1st number:   ";
    cin >> n1;
    cout << "Enter 2nd number:   ";
    cin >> n2;
    sum = n1 + n2;
    dif = n1 - n2;
    quo = (float)n1 / n2;
    mul = n1 * n2;
    rem = n2 % n1;
    cout << "Sum = " << sum << endl;
    cout << "Diffrence = " << dif << endl;
    cout << "Quotient = " << quo << endl;
    cout << "Product  = " << mul << endl;
    cout << "Remainder = " <<  rem << endl;
    return 0;
}