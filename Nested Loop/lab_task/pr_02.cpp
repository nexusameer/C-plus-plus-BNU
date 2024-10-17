#include <iostream>
using namespace std;
// upper diagonal

int main(){
    int num,sumofUpperAreaOfDiagonal=0;

    cout<<"Enter the number of rows:"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i<j){
                sumofUpperAreaOfDiagonal += j;
                
            }
        }

    }
   cout<<"Sum of Upper Area of Diagonal "<<sumofUpperAreaOfDiagonal<<endl;
    return 0;
}