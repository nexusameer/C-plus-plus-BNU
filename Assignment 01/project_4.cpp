#include <iostream>
using namespace std;

int main(){

    int miles, gasoline;

    cout<<"Enter the number of miles: ";
    cin>>miles;

    cout<<"Enter the gallons of gasoline: ";
    cin>>gasoline;

   float result = miles/gasoline;

   cout<<"The car will drive "<<result<<" miles per gallon.";
    return 0;

}

