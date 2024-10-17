#include <iostream>
using namespace std;

int main(){
    int membershipFee = 2500;
    float increment = 0.04;

    for(int year=1;year<=6;year++){
     float total_amount = membershipFee + membershipFee*(increment*year);
     cout<<"The increment after "<<year<<" is"<<total_amount<<endl;

    }
    return 0;
}