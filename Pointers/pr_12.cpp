#include <iostream>
using namespace std;

int * newArrFunc(int array[],int size){
    int newSize = size*2;
int *newArray = new int[newSize];

    for(int i=0;i<newSize;i++){
            if(i>=size){
                *(newArray+i) = 0;
            }else{
                *(newArray+i) = array[i];
            }
        }
            

    for(int i=0;i<newSize;i++){
        cout<<*(newArray+i)<<" ";
    }cout<<endl;

return newArray;

}



int main(){
   int size = 4;
   int array[size]= {1,2,3,4};

  int *ptr =  newArrFunc(array,size);
  
    return 0;
}