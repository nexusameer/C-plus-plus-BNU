#include <iostream>
using namespace std;

int main(){

       int num,factorial =1;

       cout<<"Enter a number: "<<endl;
       cin>>num;

       for(int i=1;i<=num;i++){
         factorial = factorial * i;
       }
       cout<<"The factorial of the "<<num<<" is"<<factorial;


    return 0;
}