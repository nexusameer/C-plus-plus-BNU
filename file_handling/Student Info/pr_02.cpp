#include <iostream>
#include <fstream>
using namespace std;

int main(){
   const string filename = "Student Info.txt";
   ifstream myFile(filename, ios::in);

   const int size = 5;
   string names[size];
   int age[size];
   string address[size];
   string city[size];
   string country[size];

   int i=0;
   while(myFile>>names[i]>>age[i]>>address[i]>>city[i]>>country[i] && i<size){
    i++;
   }

   cout<<"Student Record "<<endl;
   for(int i=0;i<size;i++){
    cout<<names[i]<<" "<<age[i]<<" "<<address[i]<<" "<<city[i]<<" "<<country[i]<<" "<<endl;
   }
   myFile.close();
   return 0;
}
