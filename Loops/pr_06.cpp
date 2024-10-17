#include <iostream>
using namespace std;

int main(){
    float calories=3.6;
    float total_calories=0;

    for( int mins=5;mins<=30;mins=mins+5){
        float total_calories = total_calories + (calories*mins);
        cout<<"Calories burned after: "<<mins<<" minutes are: "<<total_calories<<endl;
       
    }
    return 0;
}