#include <iostream>
using namespace std;

int main(){


    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> arr[i][j];
        }

        cout << " Matrix is : \n ";
        for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
              

              int x;
              cin >> x;

              bool flag= false;
              for(int i=0 ; i<n ; i++)
              {
                  for(int j=0 ; j<m ;j++)
                  {
                      if(arr[i][j]==x){
                          cout << "element is found\n";
                          flag=true;
                      }
                  }
              }

             if(flag){
                 cout << " element is found\n";

             }else {
                 cout << " element is not found ";
             }
    }
}