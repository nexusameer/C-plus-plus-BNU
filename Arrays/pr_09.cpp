#include <iostream>
using namespace std;

// 2D Arrays


int main(){
   int rows = 5;
   int columns = 4;
   int score[rows][columns];


   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        score[i][j] = i+j;
    }

   }
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<score[i][j] <<" ";
    }
    cout<<endl;

   }   
    return 0;
}