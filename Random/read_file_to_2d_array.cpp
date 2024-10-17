// Write a program that collects information about 5 students, including
// their name, age, address, quiz marks(3 quizzes), and midterm marks.
// Implement functions to input this data and then display it in a
// structured format.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string arr[5][7];
    cout<<"name  age  address  midterm  quiz1  quiz2  quiz3 "<<endl;

    ifstream myFile("student.txt");
    if (myFile.is_open()) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                myFile >> arr[i][j];
            }
        }
        for(int i=0; i<5; i++){
            for(int j=0; j<7; j++){
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }
        myFile.close(); 
        cout << "Data has been taken from student.txt" << endl;
    } else {
        cout << "Unable to open file" << endl;
    }
}