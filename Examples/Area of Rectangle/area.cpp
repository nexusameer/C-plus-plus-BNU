#include <iostream>
using namespace std;

int main(){
    int height;
    int width;

    cout<<"Enter height of the rectangle: ";
    cin>>height;
    cout<<"Enter width of the rectangle: ";
    cin>>width;

    int area = height*width;

    cout<<"The area of Rectangle is: "<<area <<" m2"<<endl;


    return 0;
}