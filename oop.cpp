// // // // // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // // class Car
// // // // // // // // // // // // // // {

// // // // // // // // // // // // // // public:
// // // // // // // // // // // // // //       string Brand;
// // // // // // // // // // // // // //       string model;
// // // // // // // // // // // // // //       int year;
// // // // // // // // // // // // // // };



// // // // // // // // // // // // // // int main(){

// // // // // // // // // // // // // // Car carobj;

// // // // // // // // // // // // // // carobj.Brand = "BMW";
// // // // // // // // // // // // // // carobj.model = "X5";
// // // // // // // // // // // // // // carobj.year = 2010;

// // // // // // // // // // // // // // Car carobj2;

// // // // // // // // // // // // // // carobj2.Brand = "Ford";
// // // // // // // // // // // // // // carobj2.model = "Mustang";
// // // // // // // // // // // // // // carobj2.year = 2011;

// // // // // // // // // // // // // // cout << carobj.Brand << endl << carobj.model << endl << carobj.year << endl;
// // // // // // // // // // // // // // cout << carobj2.Brand << endl << carobj2.model << endl << carobj2.year;

// // // // // // // // // // // // // //           return 0;
// // // // // // // // // // // // // // }



// // // // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // // class Myclass{
// // // // // // // // // // // // //     public:
// // // // // // // // // // // // //     Myclass(){
// // // // // // // // // // // // //         cout << "hellow";
// // // // // // // // // // // // //     }
    
    
     
// // // // // // // // // // // // // };

// // // // // // // // // // // // // int main(){

// // // // // // // // // // // // // Myclass Myobj ;


// // // // // // // // // // // // // return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // class car{
// // // // // // // // // // // //     public:
// // // // // // // // // // // //     string brand;
// // // // // // // // // // // //     string model;
// // // // // // // // // // // //     int year;

// // // // // // // // // // // //     car(string x, string y, int z){
// // // // // // // // // // // //         brand = x;
// // // // // // // // // // // //         model = y;
// // // // // // // // // // // //         year = z;
// // // // // // // // // // // //     }

// // // // // // // // // // // // };

// // // // // // // // // // // // int main(){

// // // // // // // // // // // // car carobj1("BMW","X8",2010);
// // // // // // // // // // // // car carobj2("Ford", "Mustang", 2020);

// // // // // // // // // // // // cout << carobj1.brand << " " << carobj1.model << " "<< carobj1.year << endl;
// // // // // // // // // // // // cout << carobj2.brand << " " << carobj2.model << " "<< carobj2.year ;
// // // // // // // // // // // // return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // using namespace std;

// // // // // // // // // // // class car{
// // // // // // // // // // //     public:
// // // // // // // // // // //     string brand;
// // // // // // // // // // //     string model;
// // // // // // // // // // //     int year;

// // // // // // // // // // //     car(string x, string y, int z);

// // // // // // // // // // // };

// // // // // // // // // // // car ::car(string x, string y, int z){
// // // // // // // // // // //     brand = x;
// // // // // // // // // // //     model = y;
// // // // // // // // // // //     year = z;
// // // // // // // // // // // }

// // // // // // // // // // // int main(){

// // // // // // // // // // // car carobj1("BMW","X8",2010);
// // // // // // // // // // // car carobj2("Ford", "Mustang", 2020);

// // // // // // // // // // // cout << carobj1.brand << " " << carobj1.model << " "<< carobj1.year << endl;
// // // // // // // // // // // cout << carobj2.brand << " " << carobj2.model << " "<< carobj2.year ;
// // // // // // // // // // // return 0;
// // // // // // // // // // // }


// // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // using namespace std;

// // // // // // // // // // class myclass {
// // // // // // // // // //     public:
// // // // // // // // // //     int x;
// // // // // // // // // //     private:
// // // // // // // // // //     int y;
// // // // // // // // // // };

// // // // // // // // // // int main(){

// // // // // // // // // // myclass myobj;

// // // // // // // // // // myobj.x = 25;
// // // // // // // // // // myobj.y = 30;


// // // // // // // // // // return 0;
// // // // // // // // // // }

// // // // /* // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;

// // // // // // // // class employee{

// // // // // // // // private:
// // // // // // // // int salery;

// // // // // // // // public:
// // // // // // // // //setter
// // // // // // // // void setSalery(int s){
// // // // // // // //     salery =s;
// // // // // // // // }
// // // // // // // // //getter
// // // // // // // // int getSalery(){
// // // // // // // //     return salery;
// // // // // // // // }


// // // // // // // // };

// // // // // // // // int main(){
// // // // // // // // employee myobj;
// // // // // // // // myobj.setSalery(50000);
// // // // // // // // cout << myobj.getSalery();


// // // // // // // // return 0;
// // // // // // // // } */

// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // //base class
// // // // // // // // // Base class
// // // // // // // // class Vehicle 
// // // // // // // // {
// // // // // // // //   public:
// // // // // // // //     string brand = "Ford";
// // // // // // // //     void honk()
// // // // // // // //     {
// // // // // // // //       cout << "Tuut, tuut! \n" ;
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // // Derived class
// // // // // // // // class Car: public Vehicle 
// // // // // // // // {
// // // // // // // //   public:
// // // // // // // //     string model = "Mustang";
// // // // // // // // };

// // // // // // // // int main() {
// // // // // // // //   Car myCar;
// // // // // // // //   myCar.honk();
// // // // // // // //   cout << myCar.brand + " " + myCar.model;
// // // // // // // //   return 0;
// // // // // // // // }


// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // class myclass{
// // // // // // //     public:
// // // // // // //     void myfunc0(){
// // // // // // //         cout << "Some content in parents class."<< endl;
// // // // // // //     }
// // // // // // // };

// // // // // // // class mychild : public myclass{
// // // // // // //     public:
// // // // // // //     void myfunc1(){
// // // // // // //     cout << "all is well.";
// // // // // // //     }
// // // // // // // };

// // // // // // // class mygrandchild : public mychild{

// // // // // // // };

// // // // // // // int main(){

// // // // // // //    mygrandchild myobj;
// // // // // // //    myobj.myfunc0();
// // // // // // //    myobj.myfunc1();

// // // // // // //    return 0;
// // // // // // // }

// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // class myclass{
// // // // // //   public:
// // // // // //       void myfunction(){
// // // // // //           cout << "some content in parents class." << endl;
// // // // // //       }

// // // // // // };
// // // // // // //another base class
// // // // // // class myotherclass {
// // // // // // public:
// // // // // // void myotherclassfunction(){
// // // // // //     cout << "some content in another class ";


// // // // // // }
// // // // // // };

// // // // // // class mychildclass: public myclass, public myotherclass{

// // // // // // };


// // // // // // int main(){

// // // // // // mychildclass myobj;
// // // // // // myobj.myfunction();
// // // // // // myobj.myotherclassfunction();

// // // // // // return 0;
// // // // // // }

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // class employee{
// // // // //     protected:
// // // // //     int salery;
// // // // // };

// // // // // class programmer: public employee{
// // // // //     public:
// // // // //     int bonus;
// // // // //     void setsalery(int s){
// // // // //         salery =s;
// // // // //     }
// // // // //     int getsalery(){
// // // // //         return salery;
// // // // //     }
// // // // // };

// // // // // int main(){

// // // // // programmer myobj;
// // // // // myobj.setsalery(50000);
// // // // // myobj.bonus = 15000;

// // // // // cout << "salery : "<< myobj.getsalery() << endl;
// // // // // cout << "Bonus : " << myobj.bonus << endl; 
// // // // // return 0;
// // // // // }

// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // //base class

// // // // class Parent{
// // // //     public:

// // // //     int id_p;
// // // // };
// // // // //subclass or derived class inheriting from base class (parent)
// // // // class child : public Parent{
// // // //     public :
// // // //     int id_c;
// // // // };


// // // // int main(){

// // // //             child obj1;
// // // //             obj1.id_c = 7;
// // // //             obj1.id_p = 21;
// // // //             cout << "child id is " << obj1.id_c << endl;
// // // //             cout << "Parent id is " << obj1.id_p << endl;
// // // // return 0;
// // // // }

// // // //single inheritance

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // class vehicle{
// // //    public:
// // //    vehicle(){
// // //        cout << "This is a vehicle"<< endl;
// // //    }
// // // };

// // // class car: public vehicle{

// // // };


// // // int main(){

// // // car obj;
// // // return 0;

// // // return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // //first base class

// // class vehicle{
// //     public: 
// //     vehicle(){
// //              cout << "this is me vehicle"<< endl;
// //     }

// // };

// // //second base class

// // class fourwheels{
// //     public:
// //     fourwheels(){
// //          cout << "this is a 4 wheels vehicle"<< endl;
// //     }
// // };


// // //subclass derived from 2 base class


// // class car : public vehicle, public fourwheels
// // {

// // };

// // int main(){

// //      car obj;


// // return 0;
// // }


// //multiple inheritance

// #include <bits/stdc++.h>
// using namespace std;

// //base class
// class vehicle{
//      public :
//      vehicle(){
//          cout << "this is vehicle"<< endl;
//      }

// };

// //first subclass derived from base class
// class fourwheel: public vehicle
// {
//   public:
//   fourwheel(){
//            cout << "object with 4 wheel are vehicle"<<endl;
//   } 
// };

// class car : public fourwheel{
//     public:
//     car(){
//         cout << "car has 4 wheel"<< endl;
//     }

// };


// int main(){

// car obj;

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;



int main(){

cout << "jvhfhfh";

return 0;
}