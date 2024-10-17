#include <iostream>
using namespace std;

int main(){
    int shares,price,comission;

    cout<<"Enter the shares: ";
    cin>>shares;

    cout<<"Enter the price: ";
    cin>>price;

    cout<<"Enter the amount of comission: ";
    cin>>comission;
    

    int stock_price = shares*price;
    float amount_of_comission = stock_price*comission/100;
    int total_amount = stock_price + amount_of_comission;


    cout<<"Stock price is: "<<stock_price<<endl;
    cout<<"The total comission price is: "<<amount_of_comission<<endl;
    cout<<"The total amount paid is "<<total_amount<<endl;



  
    return 0;

}

