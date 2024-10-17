#include<iostream>
#include<string>
using namespace std;
int main(){
    string input="";
    while(true){
        string temp;
        cout<<"enter string "<<endl;
        getline(cin,temp);
        if(temp == "#"){
            break;
        }
        input = input + " " + temp;
    }
    cout<<input;
    return 0;
}