#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

void takeInput(int square[][cols], int rows, int cols){
    for (int i = 0; i < rows; i++){
        cout << "Enter the number for row" << i + 1 << endl;
        for (int j = 0; j < cols; j++){
            cout << "Enter the number for row " << i + 1 << " and col " << j + 1 << endl;
            cin >> square[i][j];
        }
    }
}

bool squareMagic(int square[][cols], int rows, int cols){
    int magicSum = 15;

    for (int i = 0; i < rows; i++){
        int rowSum = 0;
        for (int j = 0; j < cols; j++){
            rowSum += square[i][j];
        }
        if (rowSum != magicSum){
            return false;
        }
    }
    for (int j = 0; j < cols; j++){
        int colSum = 0;
        for (int i = 0; i < cols; i++){
            colSum += square[i][j];
        }
        if (colSum != magicSum){
            return false;
        }
    }

    int diagSum1 = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (i == j)
            {
                diagSum1 += square[i][j];
            }
        }
    }
    if (diagSum1 != magicSum){
        return false;
    }

   
    int diagSum2 = 0;
    for (int i = 0; i<rows; i++){
       diagSum2 = square[i][cols-i-1];
       
    }
    if (diagSum2 != magicSum){
        return false;
    }

    return true;
}

void showMatrix(int square[][cols], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int square[rows][cols];
    takeInput(square, rows, cols);
    bool squareMatrix = squareMagic(square, rows, cols);
    if (squareMatrix){
        cout << "The matrix is Square matrix." << endl;
    }
    else{
        cout << "The matrix is not square matrix." << endl;
    }
    showMatrix(square, rows, cols);
}