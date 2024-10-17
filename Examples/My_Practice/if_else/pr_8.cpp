#include <iostream>
using namespace std;

int main(){
    string month;

    cout<<"Enter the name of the month: "<<endl;
    cin>>month;

    if(month =="January" || month=="February"){
         cout<<"It is Winter. "<<endl;
    }
    else if(month=="March" || month=="April" || month=="May"){
         cout<<"It is Spring. "<<endl;
    }
    else if(month=="June" || month=="July" || month=="August"){
         cout<<"It is Summer. "<<endl;
    }
    else if(month=="September" || month=="October" || month=="November"){
         cout<<"It is Autumn. "<<endl;
    }
    else if(month=="December"){
        int day;
        cout<<"Enter the day number: "<<endl;
        cin>>day;
        if(day<21){
             cout<<"It is Autumn. "<<endl;
        }
        else{
          cout<<"It is Winter. "<<endl;   
        }
    }

    return 0;


}