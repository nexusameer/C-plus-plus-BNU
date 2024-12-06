// Write a program that demonstrates the concept of a pointer to a pointer. Use it to modify the value of a variable.


#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    **ptr2 =130;
    cout<<a;
}