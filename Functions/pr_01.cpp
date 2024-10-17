#include <iostream>
using namespace std;

int Sum(int a,int b){
    int sum = a + b;
    return sum;
}


int main(){
    int x =10;
    int y = 20;
   int sum =  Sum(x,y);

   cout<<"Sum is "<<sum<<endl;



    return 0;
}