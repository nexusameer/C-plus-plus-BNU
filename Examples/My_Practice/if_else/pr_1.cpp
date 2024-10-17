#include <iostream>
using namespace std;

int main(){
    char grade;
    int attendance;


    cout<<"Enter your grade: "<<endl;
    cin>>grade;
    cout<<"Enter your attendance in percentage: "<<endl;
    cin>>attendance;

    if(grade =='A'){
        if(attendance >90){
            cout<<"You get a full scholarship.";
        }
        else if(attendance >=75 && attendance<90){
             cout<<"You get a partial scholarship.";
        }
        else if(attendance<75){
             cout<<"You get no scholarship.";
        }


    }
    else if(grade == 'B'){
         if(attendance >80){
            cout<<"You get a full scholarship.";
        }
        else if(attendance <80){
             cout<<"You get no scholarship.";
        }

    }

    return 0;

}