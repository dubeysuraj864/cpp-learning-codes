#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int a, b;
    int sum = add(100,54);
    
    cout << "100 + 54 = "<<sum;
    return 0;
}
int add(int a, int b){
    return (a+b);
}