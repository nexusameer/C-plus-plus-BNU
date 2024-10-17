#include <iostream>
using namespace std;

 main() {    
    int num1;    
    int num2;    
    int num3;   

    cout << "Enter the first number: ";    
    cin >> num1;        
    cout << "Enter the second number: ";    
    cin >> num2;    
    cout << "Enter the third number: ";    
    cin >> num3;        
    float avg = (num1+num2+num3)/3;        
    
    cout << "The Average is " << avg<< endl;        
    return 0;

 }