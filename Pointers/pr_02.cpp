#include <iostream>
using namespace std;


// Swapping the values

int main(){
   int a = 10,b = 20;

    cout<<"Before swapping."<<endl;
    cout<<"A is: "<<a<<", B is: "<<b<<endl;
   int *aNew = &a;  // storing the address of variable a.
   int *bNew = &b;  // storing the address of variable b.

   int temp = *aNew; 
   *aNew = *bNew;
   *bNew = temp;

  cout<<"After swapping."<<endl;
  cout<<"A is: "<<a<<", B is: "<<b<<endl;

    


return 0;
}