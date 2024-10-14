#include<iostream>
using namespace std;
int TakeSizeFromUser(){
    int size;
    cout<< "Enter Size of  array"<<endl;
    cin>>size;
    return size;
}
void InputArrayData(int *array, int size){
    for(int i=0; i<size; i++){
        cout<<"Enter any no. "<<endl;
        cin>>*(array+i);
    }
}
void DisplayArray(int *array,int size){
    for(int i=0; i<size; i++){
        cout<<*(array+i)<<" "<<endl;
    }
}
int SumArray(int *array, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum = sum + *(array+i);
    }
    return sum;
}

int main(){
    int size1, size2;
    size1 = TakeSizeFromUser();
    size2 = TakeSizeFromUser();

    int *array1 = new int[size1];
    int *array2 = new int[size2];

    InputArrayData(array1,size1);
    InputArrayData(array2,size2);
    cout<<"1st Array: "<<endl;
    DisplayArray(array1,size1);
    cout<<"2nd Array: "<<endl;
    DisplayArray(array2,size2);

    int *sum1 = new int;
    int *sum2 = new int;
    int *result= new int;

    *sum1 = SumArray(array1, size1);
    *sum2 = SumArray(array2, size2);
    *result = *sum1 + *sum2;
    cout<<"Result is "<<*result<<endl;

    delete sum1;
    delete sum2;
    delete result;
    return 0;
}