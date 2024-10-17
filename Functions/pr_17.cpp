#include <iostream>
using namespace std;

// Star Search

void getJudgeData(float &judge1,float &judge2, float &judge3,float &judge4, float &judge5){
    do{
        cout<<"Enter the judge 1 score: "<<endl;
    cin>>judge1;
    cout<<"Enter the judge 2 score: "<<endl;
    cin>>judge2;
    cout<<"Enter the judge 3 score: "<<endl;
    cin>>judge3;
    cout<<"Enter the judge 4 score: "<<endl;
    cin>>judge4;
    cout<<"Enter the judge 5 score: "<<endl;
    cin>>judge5;
    if((judge1 <0 || judge1>10) || (judge2 <0 || judge2>10) || (judge3 <0 || judge3>10) || (judge4 <0 || judge4>10) || (judge5 <0 || judge5>10)){
        cout<<"Enter the scores between 0 and 10."<<endl;
    }}
    
    while((judge1 <0 || judge1>10) || (judge2 <0 || judge2>10) || (judge3 <0 || judge3>10) || (judge4 <0 || judge4>10) || (judge5 <0 || judge5>10));
}


float findHighest(float &judge1,float &judge2, float &judge3,float &judge4, float &judge5){
    float highest = judge1;
    if(judge2 > highest){
        highest = judge2;
    }
     if(judge3>highest){
        highest = judge3;
    }
     if(judge4>highest){
        highest = judge4;
    }
     if(judge5>highest){
        highest = judge5;
    }
    return highest;

}

float findLowest(float &judge1,float &judge2, float &judge3,float &judge4, float &judge5){
    float lowest = judge1;
    if(judge2 < lowest){
        lowest = judge2;
    }
     if(judge3<lowest){
        lowest = judge3;
    }
     if(judge4<lowest){
        lowest = judge4;
    }
     if(judge5<lowest){
        lowest = judge5;
    }
    return lowest;
}

void display(float scores,string message){
    cout<<message<<scores;
}

void calcScore(float &judge1,float &judge2, float &judge3,float &judge4, float &judge5){
   float lowestValue = findLowest(judge1,judge2,judge3,judge4, judge5);
    float HighestValue = findHighest(judge1,judge2,judge3,judge4,judge5);
    float totalScores = (judge1 + judge2 + judge3 + judge4 + judge5) - lowestValue - HighestValue;
    float averageScores = totalScores/3;
    display(averageScores, "The average Scores are: ");
}




int main(){
    float judge1,judge2,judge3,judge4, judge5;
    getJudgeData(judge1,judge2,judge3,judge4, judge5);
    calcScore(judge1,judge2,judge3,judge4, judge5);
    
  
    return 0;
}