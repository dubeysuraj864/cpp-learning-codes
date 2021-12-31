#include <iostream>
using namespace std;
int main()
{
    int a; //declaration
    a=12; //initialsation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of character "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of shortint \n\n\n "<<sizeof(si)<<endl;
    cout<<"size of longint "<<sizeof(li)<<endl;

    return 0;
}