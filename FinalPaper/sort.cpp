#include<iostream>
using namespace std;
#include<algorithm>
void bubble(int arr[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<endl;
    }
}
int main(){
    int size = 8;
    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter a number: "<<endl;
        cin>>*(arr+i);
    }

    bubble(arr, size);
}