// Switch is only used for checking equality. It uses case just like if-else cases.
// agar line ziada han case mein to {} use kro
#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Enter the day number: "<<endl;
    cin>>day;

    switch (day)
    {
    case 1:
    cout<<"Monday"<<endl;
        break;
    case 2:
    cout<<"Tuesday"<<endl;
        break;
    case 3:
    cout<<"Wedensday"<<endl;
        break;
    case 4:
    cout<<"Thursday"<<endl;
        break;
    case 5:
    cout<<"Friday"<<endl;
        break;
    case 6:
    cout<<"Saturday"<<endl;
        break;
    case 7:
    cout<<"Sunday"<<endl;
        break;
    
    default:
    cout<<"Invalid day number."<<endl;
        break;
    }
    return 0;
}