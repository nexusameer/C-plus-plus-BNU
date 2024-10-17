#include <iostream>
using namespace std;

int main(){
    int num;
    int zeros=0;
    int positive=0;
    int negative=0;


    for(int i=1; i<=10;i++){
        cout<<"Enter the random 10 numbers: "<<endl;
        cin>>num;
        if(num==0){
            zeros++;  
        }else if(num>0){
            positive++;
        }
        else if(num<0){
            negative++;
        }
    }

    cout<<"Total zeros: "<<zeros<<endl;
    cout<<"Total positive: "<<positive<<endl;
    cout<<"Total negative: "<<negative<<endl;


   
    return 0;
}
