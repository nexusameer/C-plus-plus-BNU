#include <iostream>
using namespace std;


void evenOrOdd(int num){
    if(num%2 == 0){
        cout<<"The function is even."<<endl;
    }else{
        cout<<"The function is odd."<<endl;
    }
}

int main(){

    int n;

    for(int i=1;i<=100;i++){
    cout<<"Enter the number: "<<endl;
    cin>>n;
        evenOrOdd(n);

    }



    return 0;
}