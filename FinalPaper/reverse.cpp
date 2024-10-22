#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int *arr = new int[size];

    for(int i=0; i<size; i++){
        *(arr+i)=5+i;
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<endl;
    }
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"new array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<endl;
    }

    delete[] arr;
}