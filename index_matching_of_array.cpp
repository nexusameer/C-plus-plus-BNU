#include<iostream>
using namespace std;
int main(){

    int arr1[5]={4,3,5,2,6};
    int arr2[5]={5,56,3,2,6};
    for(int i=0; i<5; i++){
        if(arr1[i]==arr2[i])
        {
            cout<<arr1[i]<<endl;
        }
    }
}