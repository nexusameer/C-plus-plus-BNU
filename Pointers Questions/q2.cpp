// Create an array of integers. Use a pointer to traverse the array and print each element.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int *arr = new int[size];
    int *ptr = arr;
    // cout<<ptr;
    for(int i=0; i<size; i++){
        *(ptr+i)=10+i;
    }
    for(int i=0; i<size; i++){
        cout<<*ptr<<endl;
    }
}