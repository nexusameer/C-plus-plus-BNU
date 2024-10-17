#include <iostream>
using namespace std;




int main(){
string userInput;
string input = "";
while(userInput != "-1"){
    cout<<"Enter the string: "<<endl;
    getline(cin,userInput);

    
    if(userInput != "-1"){
    input = input + userInput;

    }
}

cout<<input<<endl;


    return 0;
}