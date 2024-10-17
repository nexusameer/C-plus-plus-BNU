#include <iostream>
using namespace std;

int main(){
   int a =10;
// Pointer variable.
 int *ab;


//  Storing the address of Variable a into pointer variable. now a and ab are pointing onto same address.
 ab = &a;


// Addressing the 
 cout<<"A Value is "<<a<<endl;
 cout<<"A address is "<<&a<<endl;
 cout<<"AB Value is "<<ab<<endl;
 cout<<"Simple value of a: "<<*ab<<endl;


 *ab = *ab+50;
 cout<<"The ab is: "<<*ab<<endl;

    return 0;
}