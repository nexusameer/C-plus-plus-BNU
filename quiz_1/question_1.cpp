#include <iostream>

using namespace std;

int main(){
    double quiz1,quiz2,quiz3,quiz4,quiz5;
    int quiz1_total,quiz2_total,quiz3_total,quiz4_total,quiz5_total;

    cout<<"Enter the quiz 1 obtained marks and total marks: "<<endl;
    cin>> quiz1;
    cin>>quiz1_total;
    cout<<"Enter the quiz 2 obtained marks and total marks: "<<endl;
    cin>> quiz2;
    cin>>quiz2_total;
    cout<<"Enter the quiz 3 obtained marks and total marks: "<<endl;
    cin>> quiz3;
    cin>> quiz3_total;
    cout<<"Enter the quiz 4 obtained marks and total marks: "<<endl;
    cin>> quiz4;
    cin>> quiz4_total;
    cout<<"Enter the quiz 5 obtained marks and total marks: "<<endl;
    cin>> quiz5;
    cin>> quiz5_total;

    double obtained_marks = quiz1+quiz2+quiz3+quiz4+quiz5;
    int total_marks = quiz1_total+quiz2_total+quiz3_total+quiz4_total+quiz5_total;
    double percentage = obtained_marks/total_marks*100;

    cout<<"Your total obtained marks are: "<<obtained_marks<<endl;
    cout<<"Your total marks are: "<<total_marks<<endl;
    cout<<"Your percentage is : "<<percentage<<"%"<<endl;

    return 0;
}