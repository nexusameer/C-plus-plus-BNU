#include<iostream>
using namespace std;
int main(){
    string str = "ab cd ef gh";
    int spacecount =0;
    int total=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            spacecount++;
        }
    }
    int letters = str.length()-spacecount-1;

    cout<<letters;
}