#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter three sides"<<endl;
    cin>>a>>b>>c;

   if (a == b && a == c) {
        cout << "The triangle is an Equilateral Triangle." << endl;
    } else if (a == b || a == c || b == c) { // Corrected condition for Isosceles
        cout << "The triangle is an Isosceles Triangle." << endl;
    } else {
        cout << "The triangle is a Scalene Triangle." << endl;
    }

    return 0;

}