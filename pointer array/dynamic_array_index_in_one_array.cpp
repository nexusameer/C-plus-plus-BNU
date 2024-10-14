#include<iostream>
using namespace std;
int main(){
    int *ptrArray = new int[2];
    int *array1 = new int[2];
    int *array2 = new int[2];
    ptrArray[0]=array1;
    ptrArray[1]=array2;
}