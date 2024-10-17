#include <iostream>
using namespace std;

int sum(int x,int y){
    int sum = x + y;
    return sum;
}
int multiply(int x,int y){
    int mul = x * y;
    return mul;
}
int subtract(int x,int y){
    int sub = x - y;
    return sub;
}
int divison(int x,int y){
    int div = x / y;
    return div;
}
int modul(int x, int y){
    int mod = x % y;
    return mod;
}



int main(){
    int num1,num2;
    string ope;
    cout<<"Enter the number 1:"<<endl;
    cin>>num1;
    cout<<"Enter the number 2:"<<endl;
    cin>>num2;
    cout<<"Enter the operator(+, - , x , / , % ) and e for exit: "<<endl;
    cin>>ope;

do{
     if(ope == "+"){
        int result = sum(num1,num2);
        cout<<"The sum is: "<<result<<endl;
        break;
       
    }
    else if(ope == "x"){
        int result = multiply(num1,num2);
        cout<<"The product is: "<<result<<endl;
        break;
        
    }
    else if(ope == "-"){
        int result = subtract(num1,num2);
        cout<<"The subtraction is: "<<result<<endl;
        break;
       
    }
    else if(ope == "/"){
        int result = divison(num1,num2);
        cout<<"The division is: "<<result<<endl;
        break;
         
    }
    else if(ope == "%"){
        int result = modul(num1,num2);
        cout<<"The modulus is: "<<result<<endl;
        break;
         
    }


}while(ope != "e");
   


    return 0;
}