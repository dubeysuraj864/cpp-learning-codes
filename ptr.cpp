#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int *p_x = &x;
    cout << &x << endl;
    cout << p_x << endl;
    cout << *p_x << endl;

    return 0;
}