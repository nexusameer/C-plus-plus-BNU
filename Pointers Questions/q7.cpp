// Dynamically allocate memory for an array of integers. Accept input from the user, perform operations on the array, and then deallocate the memory.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter a size: "<<endl;
    cin>> size;
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cout<<"Enter a Number: "<<endl;
        cin>>*(arr+i);
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<endl;
    }
    delete[] arr;
}