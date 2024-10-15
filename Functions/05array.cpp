// Larger Than n In a program, write a function that accepts three
// arguments: an array, the size of the array, and a number n .
// Assume that the array contains integers. The function should
// display all of the numbers in the array that are greater than the
// number n .

#include<iostream>
using namespace std;
void InputArray(int[],int,int);
int main(){
    int size=2;
    int number;
    int *arr = new int[size];
    arr[size]={1,2,3};
    InputArray(arr,size,number);
}
void InputArray(int arr[], int &size, int &number){

    cout<<"Enter number: "<<endl;
    cin>>number;
    for(int i=0; i<size; i++){
        if(arr[i]==number){
            cout<<number<<endl;
        }
    }
}