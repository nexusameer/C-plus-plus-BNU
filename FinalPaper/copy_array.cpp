#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        *(arr+i)=i*i+5;
    }

    int *brr = new int[size];
    for(int i=0; i<size; i++){
        *(brr+i) = *(arr+i);
    }

    for(int i=0; i<size; i++){
        cout<<*(brr+i)<<endl;
    }
}