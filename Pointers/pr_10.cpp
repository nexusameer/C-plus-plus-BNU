#include <iostream>
using namespace std;

//  2D Array by pointers

int main(){
   
   int size = 4;
   int *ptrArray[size];

   for(int i=0;i<size;i++){
    cout<<'Enter the number: '<<endl;
    cin>>*(ptrArray[i]);
   }
   


   int *ptr1 = new int[2];
   int *ptr2 = new int[2];
   int *ptr3 = new int[2];
   int *ptr4 = new int[2];

   ptrArray[0] = ptr1;
   ptrArray[1] = ptr2;
   ptrArray[2] = ptr3;
   ptrArray[3] = ptr4;



    return 0;
}