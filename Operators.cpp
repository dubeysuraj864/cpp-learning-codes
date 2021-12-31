#include <iostream>
using namespace std;
int main()
{
    int i=10, j=20, k=3;

     //10     //10   //20  //20 //9   //19   //20  //21
    k = i-- - i++ + --j - ++j + --i - j-- + ++j - j++;

    cout<<i<<endl;//9
    cout<<j<<endl;//21
    cout<<k<<endl;

    return 0;
}