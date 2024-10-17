#include <iostream>
using namespace std;

int main(){
    int units;    
    int rate; 

     cout<<"Enter the number of units: ";    
     cin>>units;    

     cout<<"Enter the rate of each unit: ";    
     cin>>rate;    

     int tv_tax = 35;    
     int gst = 1005;    
     int bill = units* rate;    
     int total_bill = bill + gst + tv_tax;  

     cout<<"The bill is: "<<total_bill<<endl; 

     return 0;
}

