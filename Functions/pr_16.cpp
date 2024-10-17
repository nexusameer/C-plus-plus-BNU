#include <iostream>
using namespace std;

// Overloaded Hospital

void askPatient(int &daysInHospital, int &dailyRate,int &medicationCharges, int &hospitalService, bool &isInPatient){
    string patientType;
    cout<<"Enter the type of patient: "<<endl;
    cin>>patientType;
    if(patientType == "in-patient"){
        isInPatient = true;
        cout<<"The number of days spent in the hospital:"<<endl;
        cin>>daysInHospital;
        cout<<"The daily Rate: "<<endl;
        cin>>dailyRate;
        cout<<"Hospital Medication Charges: "<<endl;
        cin>>medicationCharges;
        cout<<"Charges for Hospital Services: "<<endl;
        cin>>hospitalService;
    }else if(patientType =="out-patient"){
        isInPatient = false;
        cout<<"Hospital Medication Charges: "<<endl;
        cin>>medicationCharges;
        cout<<"Charges for Hospital Services: "<<endl;
        cin>>hospitalService;

    }else{
         isInPatient = false;
        cout<<"The patient type is unknown.";
    }

}


int totalCharges(int &daysInHospital,int dailyRate,int &medicationCharges, int &hospitalService){
    int hospital = daysInHospital*dailyRate;
    int totalCharge = hospital + medicationCharges + hospitalService;
    return totalCharge;

}

int totalCharges(int &medicationCharges, int &hospitalService){
    int totalCharge = medicationCharges + hospitalService;
    return totalCharge;

}

void display(int chargesResult,string message){
    cout<<message<<chargesResult<<endl;
}

int main(){
    int daysInHospital,dailyRate,medicationCharges,hospitalService;
    bool isInPatient = false;

    askPatient(daysInHospital,dailyRate,medicationCharges,hospitalService, isInPatient);
    int chargesResult;
    if(isInPatient){
     chargesResult = totalCharges(daysInHospital,dailyRate,medicationCharges,hospitalService);
    }else{
         chargesResult = totalCharges(medicationCharges,hospitalService);
    }
    display(chargesResult,"The total charges are: ");

   
  
    return 0;
}