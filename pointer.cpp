#include<iostream>
using namespace std;
int main(){
    int *ptr = new int[5];
    for(int i=0; i<5; i++){
        cout<<"Enter Value "<<i+1<<endl;
        cin>>ptr[i];
    }
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<endl;
    }
    delete[] ptr;
}