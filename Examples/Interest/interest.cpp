#include <iostream>
using namespace std;
int main() {    
    int interest;    
    int loan;    
    int time;        
    
    cout << "Enter the amount of interest: ";    
    cin >> interest;        
    
    cout << "Enter the amount of Loan: ";    
    cin >> loan;    
    
    cout << "Enter the time period: ";    
    cin >> time;        
    float interest_rate = interest/(loan*time);  

    cout << "The interest rate is " << interest_rate<< endl;        
    
    return 0;

}