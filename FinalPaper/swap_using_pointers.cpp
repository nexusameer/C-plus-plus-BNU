#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    int sum = *ptr1 + *ptr2;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<" "<< sum;
}