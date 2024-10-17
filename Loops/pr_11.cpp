#include <iostream>
using namespace std;

int main(){
    int number,addition=0;

    cout<<"Enter the number: "<<endl;
    cin>>number;

    while(number>0 && number !=0){
         addition = addition + number;    
         cout<<"Enter the next number: "<<endl;
         cin>>number;
    }
    cout<<"The addition is: "<<addition<<endl;
    return 0;
}