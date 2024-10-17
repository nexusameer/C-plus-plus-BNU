#include <iostream>
using namespace std;

// Post increment

int main(){
    int x = 3;
int result = x++ + 5;  // x is used first (3 + 5 = 8), then x is incremented to 4

cout << "x = " << x << endl;        // Output: x = 4
cout << "result = " << result << endl;  // Output: result = 8

    return 0;
}