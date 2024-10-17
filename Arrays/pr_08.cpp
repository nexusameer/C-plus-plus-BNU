#include <iostream>
using namespace std;

void InputData(string names[], int age[], string address[],float score[][4],int rows,int cols,int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the name of Student: "<<i+1<<endl;
        cin>>names[i];
         cout<<"Enter the age of Student: "<<i+1<<endl;
        cin>>age[i];
        cout<<"Enter the address of Student: "<<i+1<<endl;
       cin>>address[i];

       for(int j=0;j<cols;j++){
        cout<<"Enter the marks of Student: "<<j+1<<endl;
       cin>> score[i][j];
       }
     }
}

void showData(string names[], int age[], string address[], float score[][4],int rows,int cols,int size){
    cout<<"Name \t\t"<<" Age \t\t"<<"Address \t\t"<<"quiz1 \t\t"<<"quiz2 \t\t"<< "quiz3 \t\t"<< "mid \t\t"<<endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << "\t\t"
             << age[i] << "\t\t"
             << address[i] << "\t\t";
             for(int j=0;j<cols;j++){
             cout << score[i][j] << "\t\t";
             }
             cout<< endl;
    }

}


int main(){
     const int size = 5;
    
     string names[size];
     int age[size];
     string address[size];

    const int cols = 4;
     int rows = size;
     float score[size][cols];
   
    
     InputData(names,age,address,score,rows,cols,size);
     showData(names,age,address,score,rows,cols,size);

    return 0;
}