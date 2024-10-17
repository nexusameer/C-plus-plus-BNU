#include <iostream>
#include <fstream>
using namespace std;

int main(){
   const string filename = "Student Info.txt";
   ofstream myFile(filename, ios::app);

   const int size = 5;
   string names[size];
   int age[size];
   string address[size];
   string city[size];
   string country[size];

   myFile << "Name \t\t Age \t\t Address \t\t City \t\t Country" << endl;
   for(int i = 0; i < size; i++){
       cout << "Enter your name: ";
       cin >> names[i];
       myFile << names[i] << "\t\t";

       cout << "Enter your age: ";
       cin >> age[i];
       myFile << age[i] << "\t\t";

       cout << "Enter your address: ";
       cin.ignore();  
       getline(cin, address[i]);
       myFile << address[i] << "\t\t";

       cout << "Enter your city: ";
       cin >> city[i];
       myFile << city[i] << "\t\t";

       cout << "Enter your country name: ";
       cin >> country[i];
       myFile << country[i] << endl;
   }


   

   myFile.close();
   return 0;
}
