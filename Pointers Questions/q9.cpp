// Write a program to reverse a string using pointers.


#include <iostream>
using namespace std;

int main() {
    string s, d;
    s = "abc"; 

    char* ptr = &s[0]; 

    for (int i = s.size() - 1; i >= 0; i--) {
        d += *(ptr + i); 
    }

    cout << "Original string: " << s << endl;
    cout << "Reversed string: " << d << endl;

    return 0;
}
