#include <iostream>
using namespace std;

int add(int a, int b){
    return (a+b);
}

int main(){

    int number1, number2;
    int sum;

    cin>>number1>>number2;

    

    sum = add(number1,number2);

    cout<<"sum of "<<number1<<" and "<<number2<< " is "<<sum<<endl;


    return 0;
}