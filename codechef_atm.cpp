#include <iostream>
using namespace std;

int modulo(int n)
{
    if (n < 0)
    {
        return (-1 * n);
    }
    else
    {
        return (n);
    }
}

int main()
{
    int testcases; 
    cin>> testcases ; 
    while (testcases!=0){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = 0, y = 1;
    int currentSum=0; 
    int bestSum=0; 
    for (int z=2; z < n; z++)
    {

        currentSum=modulo(arr[x]-arr[y])+modulo(arr[y]-arr[z])+modulo(arr[z]-arr[x]); 
        if (currentSum>bestSum){
            bestSum=currentSum; 
            currentSum=0;
            x++;
            y++;
        }
        else {
            currentSum=0;
            x++; 
            y++;  
        }

    }
    cout<<bestSum<<endl;
    testcases--; 
    } 
    return 0;
}