#include <iostream>
using namespace std;

int main(){
    int salary = 1;
    int days;
    int total_salary = 0;

    cout<<"Enter the number of days: "<<endl;
    cin>>days;

    for(int i=1;i<=days;i++){
          total_salary += salary;
         salary *= 2;
        
    }
    cout<<"Your salary on day: "<<days<<" is "<<total_salary<<" Rs."<<endl;

    return 0;
}