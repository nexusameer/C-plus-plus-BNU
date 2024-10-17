#include <iostream>
using namespace std;



int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){



    int x,y;
    cout<<"Enter number 1:"<<endl;
    cin>>x;
    cout<<"Enter number 2:"<<endl;
    cin>>y;

    int result = sum(x,y);
    cout<<result<<endl;
   

    return 0;
}