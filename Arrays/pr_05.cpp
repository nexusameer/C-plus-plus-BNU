#include <iostream>
using namespace std;


void InputNum(int num[], int size,int &n){

    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=0;i<size;i++){
    cout<<"Enter the number"<<endl;
    cin>>num[i];
  }
}

int Func(int num[],int size, int n){
    int count = 0;
    for(int i=0;i<size;i++){
        if(num[i]>n){
            count++;
        }
    }
    return count;
}

int main(){
  int size = 5;
  int num[size];
  int n;
  InputNum(num,size,n);
  int countNum = Func(num,size,n);
 cout<<"The count is: "<<countNum<<endl;

 
    return 0;
}