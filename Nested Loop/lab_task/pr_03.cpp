#include<iostream>

using namespace std;

int main(){
	
	
	for(int i=1;i<=3;i++){
		cout<<"Outer  Loop "<<i<<" ";
		for(int j=1;j<=4;j++){
			
			cout<<"Inner Loop "<<j<<" ";
		}
		cout<<endl;
		
	}
	
	return 0;
}

