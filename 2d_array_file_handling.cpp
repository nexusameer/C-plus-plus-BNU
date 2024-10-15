// Write a program that collects information about 5 students, including
// their name, age, address, quiz marks(3 quizzes), and midterm marks.
// Implement functions to input this data and then display it in a
// structured format.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string arr[5][7];
    for(int i=0; i<5; i++){
        for(int j=0; j<7; j++){
            if(j==0){
                cout<<"Enter name of student: "<<endl;
                cin>>arr[i][j];
                }
            else if(j==1){
                cout<<"Enter Age in Alphabets: "<<endl;
                cin>>arr[i][j];
            }
            else if(j==2){
                cout<<"Enter address: ";
                cin>>arr[i][j];
            }
            else if(j==3){
                cout<<"Enter Midterm: ";
                cin>>arr[i][j];
            }
            else if(j==4){
                cout<<"Enter quiz1: ";
                cin>>arr[i][j];
            }
            else if(j==5){
                cout<<"Enter quiz 2: ";
                cin>>arr[i][j];
            }
            else if(j==6){
                cout<<"Enter Quiz 3: ";
                cin>>arr[i][j];
            }
            
        }
    }
    cout<<"name  age  address  midterm  quiz1  quiz2  quiz3 "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<7; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    ofstream myFile("student.txt");
    if (myFile.is_open()) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                myFile << arr[i][j] << " "; // Writing data to file
            }
            myFile << endl;
        }
        myFile.close(); // Close the file after writing
        cout << "Data has been stored in student.txt" << endl; // Output only once
    } else {
        cout << "Unable to open file" << endl; // Handle file open failure
    }
}