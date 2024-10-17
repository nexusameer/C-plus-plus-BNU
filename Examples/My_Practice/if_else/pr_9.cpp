#include <iostream>
using namespace std;

int main(){
   int account_balance;
   int requested_amount;

   cout<<"Enter the amount you want: "<<endl;
   cin>>requested_amount;

   cout<<"Enter the current balance: "<<endl;
   cin>>account_balance;

   if(requested_amount>account_balance){
    cout<<"Insufficient Balance. ";
   }
   else{
    if(requested_amount%100==0){
        if(account_balance<1000){
            int total_withdrawl = requested_amount - 2;
            int remain = account_balance - total_withdrawl;
            cout<<"Your withdrawl amount will be: "<<total_withdrawl<<" and remaining balance is: "<<remain<<endl;

        }
        else{
            int remain = account_balance-requested_amount;
            cout<<"Your remaining balance is: "<<remain<<endl;
        }
        
    }
    else{
        cout<<"Please enter an amount in multiples of 100 ."<<endl;
    }
   }

    return 0;


}