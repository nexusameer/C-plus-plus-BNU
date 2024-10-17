#include <iostream>
using namespace std;

// Days Out


int employFunc(){
    int employees;
    do{
    cout<<"Enter the number of Employees: "<<endl;
    cin>>employees;

    if(employees<=1){
        cout<<"Enter the numbers greater than 1.";}
    }while(employees<=1);
    return employees;
        
}


int missingDays(int employees){
    int totalDays=0, days;
    for(int i=1;i<=employees;i++){
    do{
    cout<<"Enter the number of days each employee is missing during the past year: "<<endl;
    cin>>days;
    if(days<0){
        cout << "Invalid input. Days cannot be negative. Please enter a non-negative number." << endl;
    }

    }while(days<0);
    totalDays += days;
    }
    return totalDays;
}


double averageFunc(int employees, int totalMissingDays){
    double averageAbsence = totalMissingDays/employees;
    return averageAbsence;
}

void display(int func, string message){
    cout<<message<<func<<endl;

}

int main(){
   int employees =  employFunc();
   int totalMissingDays = missingDays(employees);
   double averageAbsent = averageFunc(employees,totalMissingDays);
   display(averageAbsent, "Total average of missing days are: ");

  
    return 0;
}