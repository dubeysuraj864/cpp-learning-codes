#include <iostream>
using namespace std;

void displayNum(int n1, float n2){
    cout <<"The int n1 is "<<n1;
    cout <<"\nThe float n2 is "<<n2;
    cout<<endl;
}

int main()
{
    int num1;
    float num2;

    cin>>num1>>num2;

    displayNum(num1, num2);

    return 0;

}