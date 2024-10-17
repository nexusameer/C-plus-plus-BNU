#include <iostream>
using namespace std;

int main(){
    int num,sum=0;

    for (int i=1;i<=4;i++){
        cout<<"Enter the number: "<<endl;
        cin>>num;
        sum = sum+ num;
        cout<<"Sum is: "<<sum<<endl;
        
    }
    
    return 0;
}