#include <iostream>
using namespace std;




int main(){
    string s1 = "abc";
    string s2 = "xyz";
    // Comparing if xyz is greater than abc. if true than returns 1 or else 0.
    cout<<s2.compare(s1)<<endl;

    s1.clear();
    if(s1.empty()){
        cout<<"The string is empty."<<endl;
    }


    string a = "nincompoop";
    // Remove three characters from index 3 to onwards.
    a.erase(3,3);

    // finding a pattern
    cout<<a.find("com")<<endl;
    // Returns the index where the first char exists.

    string newString = "Zain Ul Abideen";
    newString.insert(2,"lol");

    cout<<newString<<endl;

    // Getting the length of the string.
    cout<<newString.length()<<endl;

    // Loop on string

    for(int i=0;i<newString.length();i++){
        cout<<newString[i];
    }
    cout<<endl;


    // Getting the substring
    // Means get the string from 6 index and should contain 4 chars.
    string s = newString.substr(6,4);
    cout<<s<<endl;

    
//   converting string to integer.
     string num = "786";
     int x = stoi(num);
     cout<<x<<endl;

    // converting integer to string
    int n1 = 567899;
    string sss = to_string(n1) + "2";
    cout<<sss<<endl;

    return 0;
}