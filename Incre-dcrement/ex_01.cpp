#include <iostream>
using namespace std;

// Pre increment

int main(){
int x = 3;
int result = ++x + 5;  // x is incremented to 4, then 4 + 5 = 9

cout << "x = " << x << endl;        // Output: x = 4
cout << "result = " << result << endl;  // Output: result = 9


    return 0;
}