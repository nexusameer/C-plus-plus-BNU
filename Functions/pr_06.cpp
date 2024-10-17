#include <iostream>
using namespace std;

int baseSalary(int working_hours,int basePay){
    return working_hours*basePay;
}

int overtimeSalary(int working_hours,int basePay,float overtime_rate,int basicHour){
    int overHours = working_hours - basicHour;
    int overtimePay = overHours*basePay*overtime_rate;

    int basicPay = baseSalary(basicHour,basePay);
    int totalSalary = overtimePay + basicPay;
    return totalSalary;

}





int main(){
    int working_hours,basePay=500, basicHour=40;
    float overtime_rate = 1.5;

    cout<<"Enter the total hours: "<<endl;
    cin>>working_hours;

    if(working_hours>basicHour){
        cout<<"Your total salary is: ";
       int result = overtimeSalary(working_hours,basePay,overtime_rate,basicHour);
         cout<<result<<" Rs."<<endl;


    }else{
        cout<<"Your total salary is: ";
       int result = baseSalary(working_hours,basePay);
       cout<<result<<" Rs."<<endl;

    }



    return 0;
}