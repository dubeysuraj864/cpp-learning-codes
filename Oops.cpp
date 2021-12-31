// #include <iostream>

// using namespace std;

// class Engineering
// {
// public:
//     int java, sap, python, html;

//     void get()
//     {
//         cout << "initialise java, sap, html, python" << endl;
//         cin >> java >> sap >> html >> python;
//         cout << "java = " << java << endl;
//         cout << "sap = " << sap << endl;
//         cout << "html = " << html << endl;
//         cout << "python = " << python << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Engineering ibm, asus, tcs, hcl;
//     ibm.get();
//     asus.get();
//     tcs.get();
//     hcl.get();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Books
{
   public:
          Books(string x)
          {
              setName(x);
          }   
    void setName(string x){
                 name = x;
             }
             string getName(){
                 return name;
             }

         private:
         string name;

};

int main(){
      
       Books book1("OOPs");
       cout << book1.getName()<< endl;

    return 0;
}