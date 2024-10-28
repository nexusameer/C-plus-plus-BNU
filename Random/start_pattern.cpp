#include<iostream>
using namespace std;
int main(){
    int row=3;
    int k=1;
    for(int i=1; i<=3; i++){
        
        // space
        // for(int j=0; j<row-i; j++){
        //     cout<<" ";
        // }
        // for(int j=0; j<(row-2*i); j++){
            // cout<<"*";
        // }
        // k=k-3;
        // cout<<endl;
        // cout<< row-i;
        for(int j=0; j<k; j++){
            cout<<"*";
        }
        k=k+1;
        cout<<endl;
    }
}