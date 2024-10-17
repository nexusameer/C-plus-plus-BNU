#include <iostream>
using namespace std;

int main(){
   int number = 75;
   int guessNumber;
   

do{
   cout<<"Enter the number: "<<endl;
   cin>>guessNumber;
   if(guessNumber>number){
    cout<<"Your number is high."<<endl;
   }
   else if(guessNumber<number){
    cout<<"Your number is low."<<endl;
   }

}while(guessNumber !=number);

if(guessNumber==number){
    cout<<"You guessed the number."<<endl;
}else{
    cout<<"You can not guessed the number."<<endl;
}


    return 0;
}