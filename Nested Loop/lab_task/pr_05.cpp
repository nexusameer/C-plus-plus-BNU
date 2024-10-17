#include<iostream>

using namespace std;

int main(){
	
	int n;
    int duplicate;
   

    for(int i=1;i<=8;i++){
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(i==1){
        duplicate = n;
        continue;
    }
    if(duplicate == n){
       cout<<"The number "<<n<<" has duplicates."<<" "<<endl;
        
    }
    else{  
        duplicate = n;
    }

    }
    
	return 0;
}
