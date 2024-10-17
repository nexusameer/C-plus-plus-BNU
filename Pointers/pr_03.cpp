#include <iostream>
using namespace std;


// Swapping the address 

int main(){
   int a = 10,b = 20;

   
   int *aNew = &a;
   int *bNew = &b;

     cout<<"Before swapping."<<endl;
    cout<<"A address is: "<<aNew<<", B address is: "<<bNew<<endl;
   int *temp = aNew; 
   aNew = bNew;
   bNew = temp;

  cout<<"After swapping."<<endl;
  cout<<"A address is: "<<aNew<<", B address is: "<<bNew<<endl;

    


return 0;
}