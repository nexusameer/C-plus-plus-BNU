#include <iostream>
#include <fstream>
using namespace std;

int main(){
   // Storing the file names
    const string fileName1 = "EntryTest File.txt";
    const string fileName2 = "answer.txt";
    const string fileName3 = "FinalResult.txt";
    
   //  Making Objects of the fileNames 
    ifstream entryTestFile(fileName1, ios::in);
    ifstream ansFile(fileName2, ios::in);
    ofstream resultFile(fileName3, ios::app);
    
   // Size of the arrays and arrays for storing data from the file
    const int size = 3;
    int rollNo[size];
    string names[size];
    string givenAns[size];
    string correctAns;

   
    int i = 0;
    while (entryTestFile >> rollNo[i] >> names[i] >> givenAns[i] && i < size) {
        i++;
    }

    cout << "Student Record: " << endl;
    for(int i = 0; i < size; i++){
        cout << rollNo[i] << " " << names[i] << " " << givenAns[i] << endl;
    }
    
   ansFile>>correctAns;
   cout<<"The correct Answer is: "<<correctAns<<endl;
   

    resultFile << "Correct Students:\n";
    for (int i = 0; i < size; i++) {
        string studentAnswer = givenAns[i];
        int count = 0;
        
        // Compare each character in the student's answer with the correct answer
        for (int j = 0; j < studentAnswer.length() && j < correctAns.length(); j++) {
            if (studentAnswer[j] == correctAns[j]) {
                count++;
            }
        }

        // Output each student's results to the result file
        resultFile << "Roll No: " << rollNo[i] << ", Name: " << names[i] 
                   << ", Correct Answers: " << count << endl;
        cout << "The correct number of answers for " << names[i] << " is: " << count << endl;
    }
    
    entryTestFile.close();
    ansFile.close();
    resultFile.close();

    return 0;
}
