#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    for(int i=1;i<=10;i=i+1){
        cout<<num<<" x "<<i<<" = "<<i*num<<endl;
    }
    return 0;
}
