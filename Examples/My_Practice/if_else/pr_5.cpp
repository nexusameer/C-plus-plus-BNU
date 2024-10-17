#include <iostream>
using namespace std;

int main(){
   int income;

   cout<<"Enter your income: "<<endl;
   cin>>income;

   if(income<=50000){
    double tax = income * 0.05;
    double total_income = income - tax;
    cout<<"Your income after income tax is: "<<total_income<<endl;
    
   }
   else if(income>50000 && income<=100000){
     double tax = income * 0.10;
    double total_income = income - tax;
    cout<<"Your income after income tax is: "<<total_income<<endl;

   }
   else if(income>100000){
    double tax = income * 0.15;
    double total_income = income - tax; 
    if(income>150000){
        double tax = income * 0.15;
        double surcharge = tax*0.05;
        double final_income = income-surcharge;
        cout<<"Your total income after income tax and surcharge is: "<<final_income<<endl;
    }
    else{
        cout<<"Your income after income tax is: "<<total_income<<endl;
    }
   }
 
    return 0;

}