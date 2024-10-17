#include <iostream>
using namespace std;

int main(){
    string word;

    cout<<"Enter the word(write exit to stop.)"<<endl;
    cin>>word;
  while(word != "exit"){
    cout<<"Word is: "<<word<<endl;
    cout<<"Enter any other word(write exit to stop). "<<endl;
    cin>>word;
  }
  cout<<"Now Loop exit."<<endl;
    return 0;
}