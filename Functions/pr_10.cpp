#include <iostream>
using namespace std;

void tupleFunc(int num){
     for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}

int main(){
    int num;

    cout<<"Enter any number: "<<endl;
    cin>>num;
    tupleFunc(num);

   

    return 0;
}