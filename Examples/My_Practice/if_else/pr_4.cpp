#include <iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;

    if(x>0 && y>0){
        cout<<"Quadrant 1";
    }
    else if(x<0 && y>0){
        cout<<"Quadrant 2";
    }
    else if(x<0 && y<0){
        cout<<"Quadrant 3";
    }
    else if(x>0 && y<0){
        cout<<"Quadrant 4";
    }
    else if(x==0 && y==0){
        cout<<"The point is at Origin.";
    }
     else if (x == 0) {
        cout << "The point lies on the Y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the X-axis." << endl;
    } 
    return 0;

}