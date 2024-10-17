#include <iostream>
using namespace std;


void takingInput(double arr1[],int size){
    for(int i=0;i<size;i++){
    cout<<"Enter the rainfall for: "<<i+1<<endl;
    cin>>arr1[i];

    while (arr1[i]<0){
        cout << "Rainfall cannot be negative. Please re-enter: ";
        cin >> arr1[i];
    }
  }
}

void calcFunc(double arr1[],int size){
     int highest = 0,lowest = 0;
    double totalRainfall = 0.0;
    for(int i=0;i<size;i++){
         totalRainfall += arr1[i];
        if(arr1[i]>arr1[highest]){
            highest = i;
        }
        if(arr1[i]<arr1[lowest]){
            lowest = i;
        }
       
    }

    double averageRainfall = totalRainfall/size;

     cout << "\nTotal rainfall for the year: " << totalRainfall << " units" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " units" << endl;
    cout << "Month with the highest rainfall: Month " << highest + 1
         << " with " << arr1[highest] << " units" << endl;
    cout << "Month with the lowest rainfall: Month " << lowest + 1
         << " with " << arr1[lowest] << " units" << endl;
}

int main(){
   const int months = 12;
    double rainfall[months];
   
    takingInput(rainfall,months);
    calcFunc(rainfall,months);
  
  


   

   
    return 0;
}