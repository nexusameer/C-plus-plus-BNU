#include <iostream>
using namespace std;




int main(){
    // Simple String
    string str;

    // If we want to have a string of n only.it should have 5 n in it.
    string str1(5,'n');
    cout<<str1<<endl;


    // Appending the strings
    string s1 = "Fam";
    string s2 = "ily";

    s1.append(s2);
    cout<<s1<<endl;

    // Only adding both
    cout<<s1 + s2<<endl;

    // Accesing chars by index
    cout<<s1[1]<<endl;

    // Clear the string 
    string abc = "Zain Ul Abideen";
    abc.clear();
    cout<<abc<<endl;

    


    return 0;
}