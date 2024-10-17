#include <iostream>
using namespace std;

float calculateRetail(int wholeSaleCost, float markUp){
    float cost =  wholeSaleCost*markUp;
    float totalCost = wholeSaleCost + cost;
    return totalCost;
}


int main(){
  int wholeSaleCost;
  float markupPercentage;

  cout<<"Enter the whole Sale Cost: "<<endl;
  cin>>wholeSaleCost;
  cout<<"Enter markup percentage: "<<endl;
  cin>>markupPercentage;
  float markUp = markupPercentage/100;

if(wholeSaleCost>0 && markupPercentage>0){

  float result = calculateRetail(wholeSaleCost,markUp);
  cout<<"The total price is: ";
  cout<<result<<endl;
}else{
    cout<<"Enter values greater than 0."<<endl;
}



    return 0;
}