// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // int main(){

// // // // // // int num1, num2, sum;
// // // // // // cout << "enter the first number: "<< endl;
// // // // // // cin >> num1;
// // // // // // cout << "enter the second number: "<< endl;
// // // // // // cin >> num2;

// // // // // // sum = num1 + num2;
// // // // // // cout <<"Sum is " <<sum << endl;

// // // // // //     return 0;
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int a, b, c;
// // // // //     cin >> a >> b >> c;
// // // // //     if(b>c && b>a){
// // // // //         cout << b ;
// // // // //     }
// // // // //     if(c>a && c>b){
// // // // //         cout << c ;
// // // // //     }
// // // // //     if(a>b && a>c){
// // // // //         cout << a;
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <math.h>
// // // // using namespace std;

// // // // int main()
// // // // {

// // // //     int a, b, c, D, x1, x2, rp, ip;
// // // //     cin >> a >> b >> c >> D >> x1 >> x2 >> rp, ip;

// // // //     D = b * 2 - 4 * a * c;

// // // //     if (D >= 0)
// // // //     {
// // // //         int r1 = (-b + (D) ^ 1 / 2) / 2 * a;
// // // //         int r2 = (-b - (D) ^ 1 / 2) / 2 * a;
// // // //         cout <<"r1 is "<< r1<< endl;
// // // //         cout <<"r2 is "<< r2<< endl;
// // // //     }else{
// // // //         rp = -b / 2 * a;
// // // //         ip = ((-D)/2 * a )^ 1 / 2;
// // // //         cout << rp +  (ip) << endl;
// // // //         cout << rp - (ip);

// // // //     }

// // // // cout << endl;
// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // using namespace std;

// // // int main(){
     
// // //   int i, n;
// // //   bool isPrime = true;
// // //   cout << " Enter a positive integer : ";
// // //   cin >> n;

// // //   if(n==0 || n==1){
// // //       isPrime = false;
// // //   }
// // //   else{
// // //       for(i=2 ; i<=n/2 ; i++){
// // //           if(n%i == 0){
// // //               isPrime = false;
// // //               break;
// // //           }
// // //       }
// // //   }
// // //   if(isPrime){
// // //       cout << n << " is a prime number";
// // //   }
// // //   else{
// // //       cout << n << " is not a prime number";
// // //   }
        
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // int main(){

// //     int n, fact, i;
// //     fact = 1;
   
// //     cin >> n;

// //     for(int i=1 ; i <= n ; i++ ){
// //         fact = fact * i;
// //         i++;
// //     }
// //     cout << fact << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int first_term, second_term, temp;
// //     first_term = 0 ;
// //     second_term = 1;
    
// //     for(int i=1 ; i<=1000 ; i++){
// //         temp = second_term;
// //         second_term = second_term + first_term;
// //         first_term = temp;
// //     }
// //     cout << second_term << endl;

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end){
//         int temp = arr[start];
//         arr[start]= arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int size){
//     for(int i=0 ; i < size ; i++){
//         cout << arr[i]<< " ";
//         cout << endl;
//     }
// }

// int main(){

//     int arr[]={1,2,3,4,5,6};
    
//   int n = sizeof(arr)/sizeof(arr[0]);

//   printArray(arr, n);

//   rvereseArray (arr, 0, n-1);
//   cout << "Reversed array is"<< endl;
//   printArray(arr, n);
    
    
//     return 0;
// }

