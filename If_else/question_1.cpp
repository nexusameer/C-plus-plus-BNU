#include <iostream>
using namespace std;

int main(){
   
   int num1,num2,num3;

   cout<<"Enter the number: "<<endl;
   cin>>num1;
   cout<<"Enter the number: "<<endl;
   cin>>num2;
   cout<<"Enter the number: "<<endl;
   cin>>num3;

   if(num1>num2){
     if(num1>num3){
        cout<<"The number 1 is greater"<<endl;
   }
   }
  
    if(num2>num1){
    if(num2>num3){
        cout<<"The number 2 is greater"<<endl;
   }
   }
  
    if(num3>num1){
     if(num3>num2){
        cout<<"The number 3 is greater"<<endl;
   }
   }
   
    return 0;
}