#include <iostream>
using namespace std;


int userSize(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    return size;
}

void InputDataArray(int *Array, int size){
   cout<<"Enter the elements in Array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>*(Array+i);
      
    } 
}

void displayArray(int *Array, int size){
    for(int i=0;i<size;i++){
        cout<<*(Array+i)<<" ";
      
    } cout<<endl;
}

int sumArray(int *Array, int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += *(Array + i);
    }
    return sum; // Return the sum directly
}

int main(){
    int size1,size2;
    size1 = userSize();
    size2 = userSize();
   
    
  

    int *firstArray = new int[size1];
    int *secondArray = new int[size2];

    InputDataArray(firstArray,size1);
    cout<<"Array 1 data"<<endl;
    displayArray(firstArray,size1);
    InputDataArray(secondArray,size2);
    displayArray(secondArray,size2);
    cout<<"Array 2 data"<<endl;


    int *sum1 = new int;
    int *sum2 = new int;
    int *result = new int;
    *sum1 = sumArray(firstArray,size1);
    cout<<"The first sum is: "<<*sum1<<endl;
    *sum2 = sumArray(secondArray,size2);
    cout<<"The second sum is: "<<*sum2<<endl;

    *result = *sum1 + *sum2;
    cout<<"The result is: "<<*result<<endl;

    delete sum1;
    delete sum2;
    delete result;
    delete [] firstArray;
    delete [] secondArray;




    return 0;
}