#include <iostream>
using namespace std;


int getMode(int *Arrptr,int size){
    int modeNumber = -1;
    int maxfrequency = 0;
    cout<<"Enter the number in the array upto: "<<size<<endl;
    for(int i=0;i<size;i++){
    cin>>*(Arrptr+i);
    }

    for(int i=0;i<size;i++){
        int currentNumber = *(Arrptr+i);
        int frequency = 0;

        for(int j=0;j<size;j++){
            if( *(Arrptr+j) == currentNumber){
                frequency++;
            }
        }

        if(frequency>maxfrequency){
            modeNumber = currentNumber;
            maxfrequency = frequency;
        }
    }

    if(maxfrequency == 1){
        return -1;
    }

    return modeNumber;


}



int main(){
    int size;
   cout<<"Enter the size of the Array: "<<endl;
   cin>>size;
   

    int *Arrptr = new int[size];          
   int mode = getMode(Arrptr,size);
    if(mode==-1){
        cout<<"No mode occurs."<<endl;
    }else{
        cout<<"Mode Number is: "<<mode<<endl;
    }
    return 0;
}