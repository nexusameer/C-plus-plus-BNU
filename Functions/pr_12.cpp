#include <iostream>
using namespace std;



void InputFunc(int &password, string &username){
    cout<<"Enter username:"<<endl;
    cin>>username;
    cout<<"Enter password"<<endl;
    cin>>password;

}
bool checkCrede(int pass, string name){
    if(pass == 123 && name == "Admin"){
        return true;
    }else{
        return false;
    }

   
}

void display(string message){
    cout<<message<<endl;

}


int main(){
    int password;
    string username;
    InputFunc(password,username);
   bool isValid = checkCrede(password,username);
   if(isValid){
    display("You are logged In");
   }else{
     display("Invalid Values");

   }


    cout<<"UserName is "<<username<<endl;
    cout<<"Password is "<<password<<endl;

    return 0;
}