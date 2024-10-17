#include<iostream>
#include<fstream>
using namespace std;


const int studentSize=3;

void fetchStudentData(int studentId[],string studentName[],string studentAnswers[]);
void fetchAnswerKey(string &answerKey);
void CalculateScore(string answerKey,string studentAnswers[],int score[]);
void StoreData(int studentId[],string studentName[],int score[]);
int main(){
	
	int studentId[studentSize];
	string studentName[studentSize];
	string studentAnswers[studentSize];
	int score[studentSize];
	string answerKey;
	
	fetchStudentData(studentId,studentName,studentAnswers);
	
	
	
	fetchAnswerKey(answerKey);
//	

	CalculateScore(answerKey,studentAnswers,score);
	
	StoreData(studentId,studentName,score);
//	
	return 0;
}
void fetchStudentData(int studentId[],
string studentName[],
string studentAnswers[]){
	
	ifstream  inputFile("entryTest.txt");
	
	 int i=0;
	while(inputFile>>studentId[i]>>studentName[i]>>studentAnswers[i]){
		i++;
	}
		
		inputFile.close();	
	
}

void fetchAnswerKey(string &answerKey){
	
	ifstream  inputFile1("answer.txt");
	
	
	 inputFile1>>answerKey;
	
	inputFile1.close();	
}

void CalculateScore(string answerKey,string studentAnswers[],int score[]){
	
	
	
	for(int i=0;i<studentSize;i++){
				string studentAns=studentAnswers[i];
				
				int count=0;
				for(int j=0;j<studentAns.length();j++){
					if(studentAns[j]==answerKey[j]){
						
						count++;
					}
				}
				score[i]=count;
					
	}

}
void StoreData(int studentId[],string studentName[],int score[]){
	
	ofstream myFile("result.txt",ios::app);

	
	for(int i=0;i<studentSize;i++){
		
		myFile<<studentId[i]<<" "<<studentName[i]<<" "<<score[i]<<endl;
	}
	
		myFile.close();	
}
