#include<iostream>

using namespace std;

int main(){
	
	int size=5;
	int *currentArray=new int[size];
	
	for(int i=0;i<size;i++){
		
		int num;
		cout<<"Enter Number (-1 to exit)"<<endl;
		cin>>num;
		if(num==-1){
			return 0;
		}
		*(currentArray+i)=num;
		
		
		if(i==size-1){
			cout<<"New array"<<endl;
			int  *newArray=new int[size+3];
			
			//copy data
			for(int j=0;j<size;j++){
					*(newArray+j)=*(currentArray+j);
				}
				
		
			size=size+3;
			currentArray=newArray;
			
			
		}
		
	}
	
}
