
#include <iostream>
using namespace std;

int main(){
    int month;

    cout<<"Enter month number: "<<endl;
    cin>>month;

    switch (month)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    cout<<"30 days are there."<<endl;
    break;
   
    default:
     cout<<"Invalid month number."<<endl;
        break;
    }

    return 0;
}