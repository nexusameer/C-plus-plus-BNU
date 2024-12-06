// Write a function that takes a pointer as an argument and modifies the value of a variable passed to it.

#include<iostream>
using namespace std;
void PFun(int *ptr){
    *ptr =100;
}
int main()
{
    int a=10;
    PFun(&a);
    cout<<a;
}