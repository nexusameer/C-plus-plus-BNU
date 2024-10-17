#include<iostream>
using namespace std;

int main(){
    int row = 3;
    int col = 3;

    // Dynamically allocate memory for 2D array
    int **rowptr = new int *[row];
    for(int i = 0; i < row; i++){
        rowptr[i] = new int[col];
    }

    // Initialize the array manually with the desired values
    int values[3][3] = {
        {1},
        {4, 7},
        {7, 8, 9}
    };

    // Assign the values to the dynamically allocated array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            rowptr[i][j] = values[i][j];
        }
    }

    // Output the array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << rowptr[i][j] << " ";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for(int i = 0; i < row; i++){
        delete[] rowptr[i];
    }
    delete[] rowptr;

    return 0;
}
