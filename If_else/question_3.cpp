#include <iostream>
using namespace std;

int main() {
  int a,b,c;

  cout<<"Enter three sides length: "<<endl;
  cin>>a >>b >>c;

  int case1 = a*a;

  int case2 = b*b;
  
  int case3 = c*c;
  


  if( case1 == (b*b) + (c*c)){
    cout<<"This is right triangle.";
  }
  else if(case2 == (c*c) + (a*a)){
    cout<<"This is right triangle.";
   }
   else if(case3 == (a*a) + (b*b)){
    cout<<"This is right triangle.";
   }
   else{
        cout<<"This is not right triangle.";
    }
    return 0;
}
