#include <iostream>
using namespace std;

// Pass  by reference Concept

void changVal(int &num1,int num2){
    num1 = num1*2;
    num2 = num2*3;
     cout<<"Function 1 "<<endl;
     cout<<"Num1 is: "<<num1<<endl;
    cout<<"Num2 is: "<<num2<<endl;
    
}


int main(){
    int num1=10, num2=20;

    cout<<"Main function"<<endl;
    cout<<"Num1 is: "<<num1<<endl;
    cout<<"Num2 is: "<<num2<<endl;
    changVal(num1, num2);

    cout<<"After update"<<endl;
    cout<<"Num1 is: "<<num1<<endl;
    cout<<"Num2 is: "<<num2<<endl;

   
   
   

    return 0;
}