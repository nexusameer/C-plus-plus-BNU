#include <iostream>
using namespace std;

double avgLetters(string name){
    int words = 1;
    for(int i=0;i<name.length();i++){
        if(name[i] == ' '){
            words++;
        }
    }

    int letters = 0;
   for(int i=0;i<name.length();i++){
     letters++;
   }

    int totalLetters = letters - words-1;
    double averageLetters = static_cast<double> (totalLetters)/words;
    return averageLetters;

}


int main(){
  string name;
  cout<<"Enter the Name"<<endl;
  getline(cin,name);

  cout<<"Name is "<< name<<endl;

  double totalLetters = avgLetters(name);
  cout<<"The average letters in this string is: "<<totalLetters<<endl;

    return 0;
}