#include <iostream>
using namespace std;

int main(){
    int hours;

    cout<<"Enter the number of hours: "<<endl;
    cin>>hours;


    if(hours<=2){
        cout<<"The Parking fee is not charged.";
    }
    else if(hours>=3 && hours<=5){
        int fee = hours*5;
        cout<<"Your Parking fee is: "<<fee<<"$"<<endl;
        
    }
    else if(hours>=6 && hours<=10){
        int fee = hours*4;
        cout<<"Your Parking fee is: "<<fee<<"$"<<endl;
    }
    else if(hours>10){
       if(hours>=24){
        cout<<"The Parking fee is: "<<"50$"<<endl;
       }
       else{
        int fee = hours*3;
        cout<<"Your Parking fee is: "<<fee<<"$"<<endl;
       }
    }


    return 0;


}