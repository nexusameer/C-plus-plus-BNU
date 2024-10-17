#include <iostream>
using namespace std;

int main(){
   int number = 75;
   int guessNumber;
   int attempts = 1;

do{
   cout<<"Enter the number: "<<endl;
   cin>>guessNumber;
   attempts++;
}while(guessNumber !=number && attempts<=5);

if(guessNumber==number){
    cout<<"You guessed the number."<<endl;
}else{
    cout<<"You can not guessed the number."<<endl;
}


    return 0;
}