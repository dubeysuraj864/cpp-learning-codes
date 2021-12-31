#include<iostream>
using namespace std;
int main()
{
    float n1, n2, n3;

    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    if(n1>=n2 && n1>=n3){
        cout<<n1<<" is largest number "<<endl;
    }
    if(n2>=n1 && n2>=n3){
        cout<<n2<<" is largest number "<<endl;
    }
    if(n3>=n2 && n3>=n1){
        cout<<n3<<" is largest number "<<endl;
    }
    return 0;

}