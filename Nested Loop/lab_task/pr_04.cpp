#include<iostream>

using namespace std;

int main(){
	
	int sumofLowerAreaOfDiagonal=0;
	
	for(int i=1;i<=4;i++){
		
		for(int j=1;j<=4;j++){
			
			if(i>j){
			 sumofLowerAreaOfDiagonal=sumofLowerAreaOfDiagonal+j;
				
			}
		}
	}
	cout<<"Sum of Lower Area of Diagonal "<<sumofLowerAreaOfDiagonal<<endl;
	return 0;
}
