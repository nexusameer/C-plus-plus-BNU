#include <iostream>

using namespace std;

int main(){
    int amount_due;
    int amount_recieved;

    cout<<"Enter the due amount: ";
    cin>>amount_due;

    cout<<"Enter the recieved amount: ";
    cin>>amount_recieved;

    int change = amount_recieved - amount_due;

    int dollar = change/100;
     change %=100;
    
    int quarters = change/25;
    change %=25;

    int dimes = change/10;
    change %=10;

    int nickels = change/5;
    int cents = change % 5;


    cout <<"Amount to be given is: "<<endl;
    cout<<"Dollars: "<<dollar<<endl;
    cout<<"quarters: "<<quarters<<endl;
    cout<<"dimes: "<<dimes<<endl;
    cout<<"nickels: "<<nickels<<endl;
    cout<<"cents: "<<cents<<endl;

    return 0;
}