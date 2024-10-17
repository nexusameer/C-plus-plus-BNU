#include <iostream>
using namespace std;

void takingInput(int arr1[],int arr2[],int size){
    for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<< " in array 1: "<<endl;
    cin>>arr1[i];
   }

   for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<< " in array 2: "<<endl;
    cin>>arr2[i];
   }

}

int countFunc(int arr1[],int arr2[],int size){
    int count = 0;
   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr1[i] == arr2[j]){
        count++;
        break;
    }    
   }
   }
   return count;
}


int main(){
    const int size = 5;
    int array1[size],array2[size];
   takingInput(array1,array2,size);
   int count = countFunc(array1,array2,size);
   cout<<"The count is: "<<count<<endl;
   

   
    return 0;
}