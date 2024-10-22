#include<iostream>
using namespace std;
void DisplayArray(int arr[][3], int &row, int &col);
void Calculation(int arr1[][3], int arr2[][3], int arr3[][3], int &row, int &col);
void Input(int arr[][3], int &row, int &col);


int main(){
    int row=3, col=3;
    int arr1[row][3];
    int arr2[row][3];
    Input(arr1, row, col);
    Input(arr2, row, col);

    int arr3[row][3];
    Calculation(arr1,arr2,arr3,row,col);
}
void Input(int arr[][3], int &row, int &col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j]=i+j+5;
        }
    }
    DisplayArray(arr, row, col);
}
void DisplayArray(int arr[][3], int &row, int &col){
    cout<<"array display "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Calculation(int arr1[][3], int arr2[][3], int arr3[][3], int &row, int &col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    DisplayArray(arr3, row, col);
}