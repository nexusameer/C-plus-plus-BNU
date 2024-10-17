#include <iostream>
using namespace std;

// Date 12/10/2024  Sum the array Numbers by dynamic array. Q02
int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int *new_Array = new int[size];

    int sum = 0;
    for(int i=0;i<size;i++){
       cout<<"Enter the number upto "<<size<<" times"<<endl;
       cin>>*(new_Array+i);
      
    }

   
    for(int i=0;i<size;i++){
        sum = sum + *(new_Array + i);
    }

    cout<<"The sum is..."<<endl;
    cout<<sum<<endl;


return 0;
}