// Switch is only used for checking equality. It uses case just like if-else cases.
// agar line ziada han case mein to {} use kro

// 
#include <Iostream>
using namespace std;

int main(){
    char letter;
    cout<<"Enter the letter: "<<endl;
    cin>>letter;

    switch (letter)
    {
    case 'A':
    case 'I':
    case 'E':
    case 'O':
    case 'U':  
    case 'a': 
    case 'i': 
    case 'e':
    case 'o':
    case 'u':
    cout<<"It is vowel."<<endl;
        break;
    
    default:
    cout<<"It is not a vowel."<<endl;
        break;
    }
    
    return 0;
}