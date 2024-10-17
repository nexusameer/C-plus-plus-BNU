#include <iostream>
using namespace std;

int main(){
    int shape;

    cout << "Enter the number for the shape (1: Circle, 2: Rectangle, 3: Triangle):" << endl;
    cin >> shape;

    switch (shape)
    {
    case 1:{
        int radius;
        cout<<"Enter the radius of the circle: "<<endl;
        cin>>radius;
    float area_of_circle = 3.14*(radius*radius);
    cout<<"Area of the circle is: "<<area_of_circle<<endl;
        break;
    }

    case 2:{
    int length,width;
    cout<<"Enter the length of the rectangel: "<<endl;
    cin>>length;
    cout<<"Enter the width of the rectangel: "<<endl;
    cin>>width;
    int area_of_rectangle = length*width;
    cout<<"Area of the Rectangle is: "<<area_of_rectangle<<endl;
        break;
    }
    
    case 3:{
    int base,height;
    cout<<"Enter the base of the triangle: "<<endl;
    cin>>base;
    cout<<"Enter the height of the triangle: "<<endl;
    cin>>height;
    int area_of_triangle = base*height;
    cout<<"Area of the Triangle is: "<<area_of_triangle<<endl;
        break;
    }
    default:
    cout<<"Invalid number entered."<<endl;
        break;
    }
    

    return 0;
}