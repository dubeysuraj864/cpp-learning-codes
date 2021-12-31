// // // #include <iostream>
// // // using namespace std;

// // // class student{

// // //     string name;

// // //  public:
    
// // //     int age;
// // //     bool gender;

// // //     student(){
// // //         cout << "default constructor"<< endl;
// // //     }// default constructor

// // //     student(string s,int a, int g){
// // //         cout << "parameterised constructor"<< endl;
// // //         name = s;
// // //         age = a;
// // //         gender = g;
// // //     }//paraemterised constructor

// // //     student (student &a){
// // //         cout << "copy comstructor";
// // //         name = a.name;
// // //         age = a.age;
// // //         gender = a.gender;
// // //     }
// // //     ~student(){
// // //         cout << "Destructor called "<< endl;
// // //     }

// // //     void setName(string s){
// // //         name = s;
       
// // //     }
// // //     void getName(){
// // //         cout << name << endl;
// // //     }

// // //     void printInfo(){
// // //         cout << "name = ";
// // //         cout << name << endl;
// // //         cout << "age = ";
// // //         cout << age << endl;
// // //         cout << "gender = ";
// // //         cout << gender << endl;

// // //         cout << endl;
// // //     }

// // //         bool operator == (student &a){
// // //             if(name == a.name && age == a.age && gender == a.gender){
// // //                 return true;
// // //             }
// // //             return false;
// // //         }

// // // };

// // // int main(){

// // //     // student arr[3];
// // //     // for(int i=0 ; i<3 ; i++){
// // //     //     string s;
// // //     //     cout << "enter name = ";
// // //     //     cin >> s;
// // //     //     arr[i].setName(s);
// // //     //     cout << "enter age = ";
// // //     //     cin >> arr[i].age;
// // //     //     cout << "enter gender = ";
// // //     //     cin >> arr[i].gender;

// // //     //     cout << endl;
// // //     // }

// // //     // for(int i=0 ; i<3 ;i++){
// // //     //    arr[i].printInfo();
// // //     // }

// // //     student a("suraj",20,0);
// // //     a.printInfo();
// // //     student b ("rahul",21,0);
// // //     student c = a;
    
// // //     if(c==a){
// // //         cout << "Same"<< endl;
// // //     }
// // //     else{
// // //         cout<< "Not same"<< endl;
// // //     }

// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // class student{

// //     public:
// //     int id;
// //     string name;

// // };

// // int main{

// //     student s1;
// //     s1.id = 65;
// //     s1.name = "suraj";

// //     cout << s1.id<<endl;
// //     cout<<s1.name<< endl;

// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int id;      //data member (also instance variable)
//     string name; //data member(also instance variable)
// };
// int main()
// {
//     Student s1; //creating an object of Student
//     s1.id = 201;
//     s1.name = "Sonoo Jaiswal";
//     cout << s1.id << endl;
//     cout << s1.name << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Laptop{
       
       public:
       string name;
       int modelYear;
       int price;

       void insert(string i, int m, int p){
           name = i;
           modelYear = m;
           price = p;
       }

       void display(){
           cout << name <<endl;
           cout << modelYear <<endl;
           cout << price <<endl;
           cout << endl;
       }

};

int main(){

    Laptop L1;
    Laptop L2;
    L1.insert("MacBookAir", 2017, 30000 );
    L2.insert("MacBookAir", 2018, 35000 );
    L1.display();
    L2.display();

    return 0;
}