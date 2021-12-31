#include<iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotient, reminder;
    cout<<"enter dividend: ";
    cin>>divisor;

    cout<<"enter divisor: ";
    cin>>divisor;

    quotient=dividend / divisor;
    reminder=dividend % divisor;

    cout<<"quotient= "<<quotient<<endl;
    cout<<"reminder= "<<reminder;

    return 0;
}