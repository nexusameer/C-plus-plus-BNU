#include <iostream>
using namespace std;

int main(){
    int num,largest;

    for (int i=1;i<=4;i++){
        cout<<"Enter the number: "<<endl;
        cin>>num;
        if(i==1){
            largest = num;
        }
        if(largest<num){
            largest = num;
        }
        else{
            largest;
        }
        
    }
    cout<<"The largest is: "<<largest<<endl;
    
    return 0;
}