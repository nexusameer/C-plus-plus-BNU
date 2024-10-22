#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int *a = new int [size];
    for(int i=0; i<5; i++){
        *(a+i)=i+5;
    }
    for(int i=0; i<5; i++){
        cout<<*(a+i);
    }
    int newsize;
    cout<<"enter new size: "<<endl;
    cin>>newsize;

    int *b = new int[newsize+size];

    for(int i=0; i<size; i++){
        *(b+i)=*(a+i);
    }
    cout<<"enter a number: "<<endl;
    for(int i=size; i<newsize+size; i++){
        cin>>*(b+i);
    }
    size = newsize +size;

    cout<<"new array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<*(b+i)<<endl;
    }
}