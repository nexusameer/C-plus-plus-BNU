#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string arr[3][3];
    ifstream myFile("entryTest.txt");
    if(myFile.is_open()){
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            myFile>>arr[i][j];
        }
    }
    }
    else{
        cout<<"not open"<<endl;
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    myFile.close();
    ifstream myFile2("answer.txt");
    string answer;
    if(myFile2.is_open()){
        myFile2>>answer;
    }
    else{
        cout<<"not opened 2";
    }
    myFile2.close();
    int col=2;
    ofstream myFile3("result.txt");
    if(myFile3.is_open()){
    for(int i=0; i<3; i++){
        for(int k=0; k<arr[i][col].size(); k++){
            if(arr[i][col][k]==answer[k]){
                myFile3<<answer[k];
                }
                
            }
            myFile3<<endl;
        }
    }
    else{
        cout<<"not opened";
    }
}
