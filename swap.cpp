#include <iostream>
using namespace std;
int main(){
    int a, b, temp;

    cout<<"enter the value of a= ";
    cin>>a;

    cout<<"enter the value of b= ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"\nafter swaping."<<endl;
    cout<<"a= "<<a<<", b = "<<b<<endl;

    return 0;

}