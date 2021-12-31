// #include <iostream>
// using namespace std;

// int sum(int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }

//     int prevSum = sum(n - 1);
//     return n + prevSum;
// }

// int main()
// {

//     int n;
//     cin >> n;

// //     cout << sum(n) << endl;

// //     return 0;
// //}

// #include <iostream>
// using namespace std;

// int power(int n, int p){

//     if(p==0){
//         return 1;
//     }
//     int prevPower = power(n, p-1);
//     return n*prevPower;
// }

// int main(){

//     int n,p;
//     cin >> n>> p;
//     cout << power(n,p)<< endl;

    

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     // int prevfact = factorial(n-1);
//     return n* factorial(n-1);
// }

// int main(){

//     int n;
//     cin >> n;

//     cout << factorial(n)<< endl;
    
// //     return 0;
// // }
// #include <iostream>

// using namespace std;

// int fib(int n){

//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);


// }

// int  main(){

//     int n;
//     cin >> n;

//     cout << fib(5) << endl;

// //     return 0;
// // }

// #include <iostream> 
// using namespace std;

// bool sorted(int arr[], int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray = sorted(arr+1, n-1);
//     return (arr[0]<arr[1] && restArray);
// }

// int main()
// {
//     int arr[]={1,2,3,2,5};
//     cout << sorted(arr , 5) << endl;
     
//     return 0;
// }
#include <iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    dec(n-1);
}

void inc(int n){
    if (n == 0)
    {
        return;
    }
    inc(n-1);
    cout<< n << endl;
}

int main()
{

int n;
cin >> n;

dec(n);
inc(n);
    return 0;
}
