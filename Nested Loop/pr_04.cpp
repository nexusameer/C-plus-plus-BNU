
#include <iostream>
using namespace std;

int main(){
   int budget;
   int total_expenses=0,expenses;
  

  cout<<"Enter your budget."<<endl;
  cin>>budget;
   
   while(expenses !=-1){
    cout<<"Enter your expenses(-1 to exit)"<<endl;
    cin>>expenses;
    total_expenses += expenses; 
   }
   if(total_expenses>budget){
        cout<<"The user is over budget"<<endl;
    }
    else{
        cout<<"The user is under budget."<<endl;
    }

   
    return 0;
}