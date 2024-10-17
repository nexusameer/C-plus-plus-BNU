#include <iostream>
using namespace std;

int main(){

        int num ;
        int sum=0;

        cout<<"Enter a number: "<<endl;
        cin>>num;

        for(int i=1;i<=num;i++){
             sum = sum + i;
            
        }
        cout<<"The sum of the first "<<num<< "Natural number is: "<<sum<<endl;



    return 0;
}