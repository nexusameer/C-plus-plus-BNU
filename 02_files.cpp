#include <iostream>
using namespace std;

void InputArray(int &size, int &count, int *ptr) {
    for (int i = count; i < size; i++) {
        cout << "Enter a Num: ";
        cin >> *(ptr + i);
        count++;
    }
}

void AdditionSize(int &additionalSize, int &size, int *&ptr, int &count) {
    cout << "Enter additional size of array: ";
    cin >> additionalSize;

    // Allocate new memory with increased size
    int *newPtr = new int[size + additionalSize];

    // Copy existing elements to the new array
    for (int i = 0; i < count; i++) {
        newPtr[i] = ptr[i];
    }

    // Update size
    size += additionalSize;

    // Fill the new part of the array
    InputArray(size, count, newPtr);

    // Free the old array memory
    delete[] ptr;
    ptr = newPtr; // Update ptr to point to the new array
}

int main() {
    int size, count = 0, a, additionalSize;

    cout << "Enter initial size: ";
    cin >> size;
    int *ptr = new int[size];

    // Fill the initial array
    InputArray(size, count, ptr);

    while (true) {
        cout << "Do you want to add more? Press -1 to break or any other number to continue: ";
        cin >> a;
        if (a == -1) {
            break; // Exit the loop if the user enters -1
        }
        AdditionSize(additionalSize, size, ptr, count); // Call to resize and input
    }

    // Print the final array
    cout << "Final array: ";
    for (int i = 0; i < count; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] ptr;

    return 0;
}