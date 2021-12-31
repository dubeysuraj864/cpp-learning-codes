#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

union money

{
    /* data */
    int rice = ;
    char car;
    float pounds;
};



int main()
{
    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<m1.rice;
    // struct employee shubham;
    // struct employee rohandas;
  
    
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;

    // cout << harry.salary << endl;
    // cout<<harry.eId<<endl;
    // cout<<harry.favChar<<endl;

    return 0;
}