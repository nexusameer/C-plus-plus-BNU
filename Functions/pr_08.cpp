#include <iostream>
using namespace std;

double getSales(string divisionName){
    float salesFigure;
    do{
    cout<<"Enter the quarterly sales figure for "<<divisionName<<endl;
    cin>>salesFigure;
    if (salesFigure < 0) {
        cout << "Sales figure must be greater than or equal to 0.00. Please enter again." << endl;}

    }while(salesFigure<0);
        return salesFigure;
    
}

void findHighest(){
     string division1,division2,division3,division4;
     double result1,result2,result3,result4;

    cout<<"Enter the division name: "<<endl;
    cin>>division1;
    result1 = getSales(division1);
    cout<<"Enter the division name: "<<endl;
    cin>>division2;
    result2 = getSales(division2);
    cout<<"Enter the division name: "<<endl;
    cin>>division3;
    result3 = getSales(division3);
    cout<<"Enter the division name: "<<endl;
    cin>>division4;
    result4 = getSales(division4);

    if(result1> result2 && result1>result3 && result1>result4){
        cout<<"The highest one is of "<<division1<<" with Sales figure of "<<result1<<endl;
    }else if( result2>result1 && result2>result3 && result2>result4 ){
        cout<<"The highest one is of "<<division2<<" with Sales figure of "<<result2<<endl;
    }
    else if( result3>result1 && result3>result2 && result3>result4 ){
       cout<<"The highest one is of "<<division3<<" with Sales figure of "<<result3<<endl;
    }
    else {
       cout<<"The highest one is of "<<division4<<" with Sales figure of "<<result4<<endl;
    }

}

int main(){
   


    findHighest();
 

    return 0;
}