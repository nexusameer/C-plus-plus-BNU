#include <iostream>
using namespace std;

int main(){
    int total_odd = 0,total_even = 0;
   
   for(int i=1;i<=100;i++){
    if(i%2==0){
        total_even++;
    }
    else{
        total_odd++;
    }
   }
    cout<<"Total even numbers: "<<total_even<<endl;
    cout<<"Total odd numbers:  "<<total_odd<<endl;
    return 0;
}
