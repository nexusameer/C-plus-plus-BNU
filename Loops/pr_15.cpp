#include <iostream>
using namespace std;

int main(){
    int price,addition=0;

    while(price !=-1){
        addition += price;
        cout<<"Enter the price of the product(-1 for exit): "<<endl;
        cin>>price;
        
    }

    cout<<"The addition of product is: "<<addition<<endl;

    return 0;
}