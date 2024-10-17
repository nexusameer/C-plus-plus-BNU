#include <iostream>
using namespace std;

int main(){
    int age[10] ;
    for(int i=0;i<10;i++){
        cin>>age[i];
        age[i] *= 2;
    }
    for(int i=0;i<10;i++){
        cout<<age[i]<<" ";
    }


    return 0;
}