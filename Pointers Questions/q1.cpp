// Write a program to declare a pointer, assign it the address of an integer variable, and print the value of the integer using the pointer.
#include <iostream>
using namespace std;
int main(){
    int a;
    a=10;
    int *ptr = &a;
    cout<<(*ptr);
}