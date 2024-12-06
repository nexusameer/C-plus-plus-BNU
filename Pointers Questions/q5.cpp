// Use new and delete to dynamically allocate and deallocate memory for an integer variable. Assign a value to the variable and print it.

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    int a = 10;
    *ptr = a;
    cout << "Value at ptr: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
