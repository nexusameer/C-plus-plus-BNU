#include <iostream>
using namespace std;

int main(){
   int age;

   cout<<"Enter your age: "<<endl;
   cin>>age;

   if(age>0 && age<=12){
    cout<<"You are child. ";
   }
   else if(age>=13 && age<=19){
    if(age>=16){
        cout<<"You are eligible for driving.";
    }
    else{
        cout<<"You are teenager.";
    }
   }
   else if(age>20 && age<=59){
    cout<<"You are Adult. ";
   }
   else if(age>=60){
    cout<<"You are Senior Citizen ";
   }

    return 0;


}