#include<iostream>
using namespace std;

// Function to input data
void InputData(int &wh, int &salary) {
    cout << "Enter working hours: ";
    cin >> wh;
    cout << "Enter Salary: ";
    cin >> salary;
}

// Function to calculate total salary based on working hours
void Logic(int wh, int salary, int hr, int &total) {
    if(wh <= 40) {
        total = wh * hr;  // Regular pay for up to 40 hours
    } else {
        int overtime = wh - 40;  // Calculate overtime hours
        total = (40 * hr) + (overtime * hr * 1.5);  // Regular pay + Overtime pay
    }
}

int main() {
    int salary, wh, total;
    int hr = 10;  // Fixed hourly rate
    InputData(wh, salary);  // Get working hours and hourly rate
    Logic(wh, salary, hr, total);  // Calculate the total salary

    cout << "Total salary = " << total << endl;
    return 0;
}
