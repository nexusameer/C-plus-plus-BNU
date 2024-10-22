#include<iostream>
using namespace std;
int main(){
    int row=3;
    int col=3;
    int arr[row][3];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"enter a num: "<<endl;
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<max<<endl;

}