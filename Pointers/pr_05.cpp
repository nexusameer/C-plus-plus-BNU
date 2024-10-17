#include <iostream>
using namespace std;

// Date 12/10/2024  Q01
int main(){
    int size1 = 3;
    int a[size1] = {1,2,3};
    int *a_ptr = a;

    // display array through pointers
    for(int i=0;i<size1;i++){
        cout<<*(a_ptr + i);
    }

    // Lets size is increased
    int size2 = 10;
    // making dynamic array
    int *ptr2 = new int[size2];

    // Copy data from first array and using size1 due to only 3 elements in first array.
    for(int i=0;i<size1;i++){

        // Passing the values from array1 to ptr2.
        *(ptr2 + i) = *(a_ptr + i);
    }

    // display array through pointers
    for(int i=0;i<size2;i++){
        cout<<*(ptr2+i);
    }
    cout<<endl;

    for(int i=size1;i<size2;i++){
        cout<<"Enter Number"<<endl;
        cin>>*(ptr2+i);
    }
    cout<<endl;


return 0;
}