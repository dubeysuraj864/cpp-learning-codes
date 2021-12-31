#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;

   /* if(button=='a'){
        cout<<"hello"<<endl;
    }
    else if(button=='b'){
        cout<<"Hola"<<endl;
    }
    else if(button=='c'){
        cout<<"Namaste"<<endl;
    }
    else{
        cout<<"i am still learning"<<endl;
    }*/

    switch (button)
    {
    case 'a':
        cout<<"Hello"
        break;
    
    default:
        break;
    }
    return 0;
}