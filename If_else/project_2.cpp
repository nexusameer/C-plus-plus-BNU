#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age ";
    cin>>age;

    if(age >=18){
        cout<<"You are eligible to caste the vote."<<endl;
    }
    else{
        cout<<"You are not eligible."<<endl;
    }

    return 0;
}