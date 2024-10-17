#include <iostream>
using namespace std;

int getScore(){
    int score;
    do{
        cout<<"Enter the test score (0-100)"<<endl;
        cin>>score;
        if(score<0 || score>100){
            cout<<"Enter the valid amount of the score."<<endl;
        }
    }while(score < 0 || score>100);
    return score;

}

int findLowest(int score1, int score2,int score3,int score4, int score5){
    int lowest = score1;
    if(score2<lowest){
        lowest = score2;
    }
    if(score3<lowest){
        lowest = score3;
    }
    if(score4<lowest){
        lowest = score4;
    }
    if(score5<lowest){
        lowest = score5;
    }
    return lowest;

}

void calcAverage(int score1, int score2,int score3,int score4, int score5){
    int lowest = findLowest(score1,score2,score3,score4,score5);
    int total = 0;
    int count = 0;
    if(score1 != lowest){
        total += score1;
        count++;
    }
    if(score2 != lowest){
        total += score2;
        count++;
    }
    if(score3 != lowest){
        total += score3;
        count++;
    }
    if(score4 != lowest){
        total += score4;
        count++;
    }
    if(score5 != lowest){
        total += score5;
        count++;
    }
    if (count > 0) {
        double average = static_cast<double>(total) / count;
        cout << "The average of the four highest scores is: " << average << endl;
    } else {
        cout << "All scores are the same, unable to calculate average." << endl;
    }
   

}


int main(){
   int score1,score2,score3,score4,score5;

    score1 = getScore();
    score2 = getScore();
    score3 = getScore();
    score4 = getScore();
    score5 = getScore();

    calcAverage(score1,score2,score3,score4,score5);
    return 0;
}