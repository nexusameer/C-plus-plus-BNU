#include <iostream>
using namespace std;

// Date 12/10/2024  Entering the numbers into dynamic array. Q03
int main(){

    int size1, size2;
     int exit ;
   
   
    do{
      cout<<"Enter the size of the array: "<<endl;
      cin>>size1;

      int *new_Array = new int[size1];

       for(int i=0;i<size1;i++){
       cout<<"Enter the number upto "<<size1<<" times"<<endl;
       cin>>*(new_Array+i);}
       int userChice;

       cout<<"Do you want to enter more data ? (1 for more data and 0 for end.) "<<endl;
       cin>>userChice;
       if(userChice == 1){
        cout<<"Please enter the new size of the array: "<<endl;
        cin>>size2;

       int *Array2 = new int[size2];

       for(int i=0;i<size1;i++){
        *(Array2+i) = *(new_Array+i);
       }

       for(int i=size1;i<size2;i++){
        cout<<"Enter the numbers "<<endl;
        cin>>*(Array2 + i);
       }

       cout<<"Your data is: "<<endl;
       for(int i=0;i<size2;i++){
       cout<<*(Array2 + i)<<" ";

       }cout<<endl;
       cout<<"Do you want exit [1 for exit and 0 for continue]?"<<endl;
       cin>>exit;
       if(exit == 1){
        break;
       }

      

       }else{
        exit = 1;

       }
      
    }
    while(exit !=1);
   

   
   


return 0;
}