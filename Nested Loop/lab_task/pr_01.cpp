#include <iostream>
using namespace std;

int main(){
    int num,sum=0;

    cout<<"Enter the number of rows:"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            if(i==j){
                sum += i;
                
            }
        }

    }
    cout<<sum;
    return 0;
}