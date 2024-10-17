#include <iostream>
using namespace std;

// Swapping

void takeNum(int &n1, int &n2){
    cout<<"Enter the number1: "<<endl;
    cin>>n1;
    cout<<"Enter the number2: "<<endl;
    cin>>n2;
}

void display(int num1, int num2, string message){
    cout<<message<<" Number 1 is: "<<num1<<" Number 2 is: "<<" "<<num2;
}

void swapping(int &n1,int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;

}



int main(){
    int num1,num2;
    takeNum(num1,num2);
    display(num1,num2,"Numbers before swapping ");
    cout<<endl;
    swapping(num1,num2);
    display(num1,num2,"Numbers after swapping ");

   
  

    return 0;
}