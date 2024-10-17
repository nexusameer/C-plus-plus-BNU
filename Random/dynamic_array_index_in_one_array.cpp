#include<iostream>
using namespace std;
 
int main(){
    int arr[5];
    arr[0]=3;
    arr[1]=5;
    arr[2]=5;
    arr[3]=6;
    arr[4]=5;
    int count[5]={0};
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if (arr[i]==arr[j]){
                count[i]++;
            }
        }
    }
    int max=count[0];
    for(int i=1; i<5; i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    cout<<max<<endl;
}