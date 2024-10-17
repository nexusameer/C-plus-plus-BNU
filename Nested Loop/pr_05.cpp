
#include <iostream>
using namespace std;

int main(){
   int num;
   int previous,adjacent;

   for(int i=1;i<=6;i++){
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(i==1){
    previous = num;
    continue;

    }
    if( num == previous){
       cout<<num<<" "<<endl;
       
    }
    else{
        previous = num;

    }
   }
   
    return 0;
}