#include <iostream>
using namespace std;

int main(){
    int sum=0,num=0;

    do{
        sum +=num;
        cout<<"Enter the number: "<<endl;
        cin>>num;
    }while(num>0);

    cout<<"Sum of positive number is: "<<sum<<endl;
    return 0;
}