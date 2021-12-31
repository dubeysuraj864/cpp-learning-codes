#include<iostream>  
using namespace std;   
class Bike  
{ 
public:  
// Just the Function Declaration
void Speed(); 
};  
// Defining the Speed function outside Bike class using :: 
void Bike::Speed() 
{ 
cout << "Speed of Bike is 90 KMPH"; 
}   
int main() 
{ 
Bike bike; 
bike.Speed(); 
return 0; 
}