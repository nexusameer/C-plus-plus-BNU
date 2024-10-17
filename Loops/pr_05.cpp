#include <iostream>
using namespace std;

int main(){
       int total_marks = 10;
    int numbers;
    int sum = 0;
    float percentage, average;

    for(int i = 1; i <= 10; i++){
        cout << "Enter the number for quiz " << i << ": " << endl;
        cin >> numbers;
        sum += numbers;  
    }

    average = sum / 3.0;  
    percentage = (sum /static_cast<float>(total_marks * 3)) * 100;  

    cout << "Your average is: " << average << endl;
    cout << "Your percentage is: " << percentage << "%" << endl;
        
    return 0;
}