#include<iostream>
using namespace std;
int main(){
    string str="CDETFDCJAPWQIPOOU";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    int count = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='A'|| str[i]=='a' || str[i]=='E'|| str[i]=='e'|| str[i]=='I'|| str[i]=='i'|| str[i]=='O'|| str[i]=='o'|| str[i]=='U'|| str[i]=='u'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}