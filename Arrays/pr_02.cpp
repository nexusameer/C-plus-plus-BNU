#include <iostream>
using namespace std;

int main(){
   string student[5];
   string name;
   bool isFound;

   cout<<"Enter the student name:"<<endl;
   for(int i=0;i<5;i++){
   cin>>student[i];
   }

   cout<<"Enter the name you want to find: "<<endl;
   cin>>name;
   for(int i=0;i<5;i++){
    if(student[i] == name){
        cout<<"Index number is:"<<i<<endl;
        isFound = true;
        break;
    }
   }

   if(isFound){
    cout<<"Found it"<<endl;
   }else{
    cout<<"Not Found"<<endl;
   }


    return 0;
}