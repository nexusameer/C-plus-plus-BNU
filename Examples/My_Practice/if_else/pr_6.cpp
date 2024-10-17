#include <iostream>
using namespace std;

int main(){
   int a,b,c;

   cout<<"Enter the angles of Triangle: "<<endl;
   cin>>a>>b>>c;

   double traingle = a + b + c;
   if(traingle==180){
    if (a == b && a == c) {
        cout << "The triangle is an Equilateral Triangle." << endl;
    } else if (a == b || a == c || b == c) { // Corrected condition for Isosceles
        cout << "The triangle is an Isosceles Triangle." << endl;
    } else {
        cout << "The triangle is a Scalene Triangle." << endl;
    }

   }
   else{
    cout<<"This is not a valid triangle.";
   }
 
    return 0;


}