#include<iostream>
using namespace std;
int main(){
    int row = 3;
    int col = 3;
    int **arr = new int *[row];
    for (int i=0; i<row; i++){
        arr[i] = new int [col];
    }
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j]=i*j;
        }
    }
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    delete[] arr;

}