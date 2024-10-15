#include<iostream>
using namespace std;
void random();
int main(){
    for(int i=0; i<5; i++){
        random();
    }

}
void random(){
    static int a=5;
    a=a+5;
    cout<<a<<endl;
}