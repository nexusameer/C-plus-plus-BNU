#include <iostream>
using namespace std;

int calcWords(string name){
    int count = 1;
    for(int i=0;i<name.length();i++){
        if(name[i] == ' '){
            count++;
        }
    }

    return count;
}


int main(){
  string name;
  cout<<"Enter the Name"<<endl;
  getline(cin,name);

  cout<<"Name is "<< name<<endl;

  int totalWords = calcWords(name);
  cout<<"The total words in this string is: "<<totalWords<<endl;

    return 0;
}