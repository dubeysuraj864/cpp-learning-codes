// #include<bits/stdc++.h>
// using namespace std;

// struct Pair{
//     int min;
//     int max;
// };

// struct Pair getMinMax(int arr[], int n)

// {
//     /* data */
//     struct Pair minmax;
//     int i;

//     if(n==1){
//         minmax.max = arr[0];
//         minmax.min = arr[0];
//         return minmax;
//     }

//     if (arr[0]>arr[1]){
//         minmax.max = arr[0];
//         minmax.min = arr[1];
//     }
//     else{
//         minmax.max = arr[1];
//         minmax.min = arr[0];
//     }

//     for(int i=2 ; i<n ; i++){
//         if(arr[i] > minmax.max)
//            minmax.min = arr[i];
//     }
//      if(arr[i] < minmax.min){
//         minmax.min = arr[i];
//     }
//     return minmax;

// };


// int main(){
 
//             int arr[] = {1000, 11, 445, 1, 330, 3000};
//             int arr_size= 6;

//             struct Pair minmax = getMinMax(arr, arr_size);

//             cout << "minimum element is "
//             << minmax.min << endl;
//             cout << "maximum element is "
//             << minmax.max<< endl;
 
// return 0;
// }


#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};
      struct Pair getMinMax(int arr[], int n)
      {
          /* data */
          struct Pair minmax;
          int i;

          if(n==1){
              int minmax.min = arr[0];
              int minmax.max = arr[0];
              return minmax;
          }

          if(arr[0] > arr[1]){
              int minmax.max = arr[0];
              int minmax.min = arr[1];
          }
          
          if(arr[0] < arr[1]){
              int minmax.max = arr[1];
              int minmax.min = arr[0];
          }

          for(i=2 ; i< n ; i++){
                 if(arr[i] > minmax.max){
                     minmax.max= arr[i];
                 }
                 else if(arr[i]< minmax.min){
                     minmax.min = arr[i];
                 }
                 
          }
          return minmax;
      }
      

int main(){
 
            int arr[] = {12,23,43,45,23,32};
            int arr_size = 6;

            struct Pair minmax =  getMinMax(arr, arr_size);

            cout <<" min: "<< minmax.min<< endl;
            cout <<" max: "<< minmax.max<< endl;
 
return 0;
}