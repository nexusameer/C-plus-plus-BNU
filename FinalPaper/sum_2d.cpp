#include<iostream>
using namespace std;

// Function declarations
void Display(int arr[][3], int &row, int &col);
void Inputarray(int arr[][3], int &row, int &col);

int main(){
    int row = 3, col = 3;  // Constants for row and col
    int arr[3][3];  // Fixed size 2D array

    // Taking input and displaying the array
    Inputarray(arr, row, col);

    return 0;
}

// Function definitions (Logic comes below main)

void Display(int arr[][3], int &row, int &col) {
    int sum=0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
            cout << arr[i][j] << " ";  // Displaying the array elements
        }
        cout << endl;
    }
    cout<<sum;
}

void Inputarray(int arr[][3], int &row, int &col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "Enter a number: ";
            cin >> arr[i][j];  // Taking input for each element
        }
    }
    Display(arr, row, col);  // Calling Display function to show the input array
}
