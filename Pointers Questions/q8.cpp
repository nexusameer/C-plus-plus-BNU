// Write a program where a function accepts an array and its size as arguments using pointers. The function should return the sum of the array elements.

#include<iostream>
using namespace std;
int PFun(int *arr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum = sum + *(arr+i);
    }
    return sum;
}
int main()
{
    int size;
    cout<<"ente a size"<<endl;
    cin>>size;
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        *(arr+i)= 10+i;
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<endl;
    }
    cout<<PFun(arr, size)<<endl;
}