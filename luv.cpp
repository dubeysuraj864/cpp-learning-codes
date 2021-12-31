// // #include <iostream>

// // using namespace std;

// // int main()
// // {

// // 	int num;

// // 	cin >> num;

// // 	for (int i = 1; i <= num * 3 + 2; i++)

// // 	{

// // 		for (int j = 1; j <= 5; j++)

// // 		{

// // 			if (i % 3 == 0)

// // 				cout << "*";

// // 			else if (j == 1 || j == 5)

// // 				cout << "*";

// // 			else

// // 				cout << " ";
// // 		}

// // 		cout << endl;
// // 	}
// // }

// // Write your code here
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// 	int n,i;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 1; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	cout << arr[i];
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){

    int d;
	cin >> d;

	int x,r;

	int t=0;

	for(int i=1; i<= d; i++){
		cin >> x, r;

		if((100*x)>= 2*(22*r)/7){
			t++;
		}
	}

cout << t;
	return 0;
}

