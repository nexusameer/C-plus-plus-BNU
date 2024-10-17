// Add  upper non diagonal

#include <iostream>
using namespace std;

int main(){
    int sum=0;

    for (int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i<j){
                sum = sum+j;
                
                
            }
        }
    }
    cout<<"Sum is: "<<sum<<endl;

    return 0;
}