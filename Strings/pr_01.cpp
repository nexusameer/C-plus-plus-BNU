#include <iostream>
using namespace std;


int calcVowesl(string input){
    int count = 0;
    for(int i=0;i<input.length();i++){
        if(input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' ){
            
            count++;
        }
    }
    return count;
}

int main(){
    string userOutput = "ABCDEIOUAEIOU";
   int totalCount = calcVowesl(userOutput);
   cout<<"The total vowels in this string is: "<<totalCount<<endl;




    return 0;
}