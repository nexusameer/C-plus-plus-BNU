#include <iostream>
using namespace std;

// Electricity Bill Calculate

void InputFunc(int &units,int &unitRate, float &discount, float &LateSurcharge, float TaxRate){
    cout<<"Enter the total Units: "<<endl;
    cin>>units;
    cout<<"Enter the unit Rate: "<<endl;
    cin>>unitRate;
    cout<<"Enter the Discount: "<<endl;
    cin>>discount;
    cout<<"Enter the Late Srucharge: "<<endl;
    cin>>LateSurcharge;
    cout<<"Enter the Tax Rate: "<<endl;
    cin>>TaxRate;
}

float EarlyDisc(int &units,int &unitRate,float &discount){
    int amount = units*unitRate;
    float discountAmount = amount*(discount/100);
    float totalAmount = amount - discountAmount;
    return totalAmount;
}

float LateSur(int &units,int &unitRate, float &LateSurcharge){
    int amount = units*unitRate;
    float surchargeAmount = amount*(LateSurcharge/100);
    float totalAmount = amount + surchargeAmount;
    return totalAmount;
   
    
}

int beforeTax(int &units, int &unitRate){
    
    int amount = units*unitRate;
    return amount;
}

float afterTax(int &units, int &unitRate, float &TaxRate){
   int amount = units*unitRate;
   float taxAmount = amount*(TaxRate/100);
   float tax = amount + taxAmount;
    return tax;
}

void display(float discountAmount,float fine, float beforeTaxAmount, float afterTaxAmount){
    cout<<"The discount Amount is: "<<discountAmount<<endl;
    cout<<"The fine Amount is: "<<fine<<endl;
    cout<<"The Amount before Tax is: "<<beforeTaxAmount<<endl;
    cout<<"The Amount after Tax is: "<<afterTaxAmount<<endl;
}


int main(){
    int units,unitRate;
    float discount,LateSurcharge,TaxRate;
    InputFunc(units,unitRate,discount,LateSurcharge,TaxRate);
   float discountedAmount = EarlyDisc(units,unitRate,discount);
   float fine =  LateSur(units,unitRate,LateSurcharge);
   float beforeTaxAmount =  beforeTax( units, unitRate);
   float afterTaxAmount =  afterTax(units,unitRate,TaxRate);
    display(discountedAmount,fine,beforeTaxAmount,afterTaxAmount);

  
  
    return 0;
}