#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number: "<<endl;
    cin>>num;

    if(num >=1 && num<=100){
        if(num%2 ==0 && num%3==0){
            cout<<"This number is divisble by 2 and 3";
        }
        else if(num%2 !=0 && num%5==0){
            cout<<"This number is not divisble by 2 but  divisible by 5";
        }
        else{
            cout<<"No result.";
        }

    }
    else{
        if(num>0){
            cout<<"Out of range and positive";
        }
        else if(num<0){
            cout<<"Out of range and negative.";
        }

    }

    return 0;

}