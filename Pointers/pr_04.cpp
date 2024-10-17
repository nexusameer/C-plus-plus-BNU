#include <iostream>
using namespace std;

// Address of array

int main(){

int a[5] = {1,2,3,4,5};

cout<<a<<endl;
cout<<&a[0]<<endl;
cout<<&a[1]<<endl;
cout<<&a[2]<<endl;
cout<<*a<<endl;

int *a2 = &a[1];
cout << *a2<<endl;

int* a3 = &a[2];
cout<<*a3<<endl;

int *a4 = &a[3];
cout<<*a4<<endl;



return 0;
}