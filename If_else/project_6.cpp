#include <iostream>
using namespace std;

int main(){
    int quiz1,quiz2,quiz3;

    cout<<"Enter the marks of Quiz 1: "<<endl;
    cin>>quiz1;
    cout<<"Enter the marks of Quiz 2: "<<endl;
    cin>>quiz2;
    cout<<"Enter the marks of Quiz 3: "<<endl;
    cin>>quiz3;

    int obtained = quiz1 + quiz2 + quiz3;
    int total_marks = 300.0;

    float percentage = static_cast<float>((obtained / total_marks) * 100);

    if (percentage >=80){
        cout<<"Grade A";
    }
    else if(percentage >=70){
        cout<<"Grade B";
    }
    else if(percentage >=60){
        cout<<"Grade C";
    }
    else if(percentage >=50){
        cout<<"Grade D";
    }
    else if(percentage<50){
        cout<<"You are Fail. Grade F";
    }
   

    return 0;
}