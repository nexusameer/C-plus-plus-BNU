// Write a function that swaps two numbers using pointers. Use this function in your program.
#include<iostream>
using namespace std;
void PFun(int &a, int &b){
    int *ptr1=&a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2=temp;
}
int main()
{
    int a=10;
    int b=20;
    PFun(a, b);
    cout<<a<<endl;
    cout<<b<<endl;
}