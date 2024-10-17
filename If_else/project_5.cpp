#include <iostream>
using namespace std;

int main(){
    int temp;

    cout<<"Enter the temperature in C: "<<endl;
    cin>>temp;

    int farenheit = (temp*9/5) + 32;

    if(farenheit <0){
        cout<<"It is freezing cold."<<farenheit<<"F"<<endl;
       
    }
    else if(farenheit >=100) {
        cout<<"It is boiling hot. "<<farenheit<<"F"<<endl;
    }

    return 0;
}