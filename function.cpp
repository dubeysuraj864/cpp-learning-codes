#include <iostream>
using namespace std;

void add(int, int);

int main()
{
    int a,b;
    add(a,b);
    return 0;
}

void add(int x, int y){
    cout << "enter two number : ";
    cin >> x >> y;
    cout << x + y;
}