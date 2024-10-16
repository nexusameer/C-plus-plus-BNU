#include <iostream>
using namespace std;

// Function to create a new array and copy previous values
void resizeArray(int* &arr, int &size, int increment) {
    int newSize = size + increment;  // Calculate the new size by adding the increment

    // Create a new array of the newSize
    int* newArr = new int[newSize];

    // Copy the contents of the old array into the new one
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Input values for the newly added spaces
    cout << "Enter " << increment << " new values: ";
    for (int i = size; i < newSize; i++) {
        cin >> newArr[i];
    }

    // Delete the old array
    delete[] arr;

    // Point to the new array
    arr = newArr;

    // Update the size
    size = newSize;
}

// Main function to handle the user input and resizing logic
void handleArrayResize() {
    int size, increment;

    // Input initial size and values
    cout << "Enter initial size of array: ";
    cin >> size;

    int* arr = new int[size];  // Dynamically allocate array
    cout << "Enter " << size << " values: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // While loop to keep resizing until user enters -1
    while (true) {
        cout << "Enter size increment (or -1 to stop): ";
        cin >> increment;

        // Break loop if user enters -1
        if (increment == -1) {
            break;
        }

        // Check if the increment is positive
        if (increment > 0) {
            resizeArray(arr, size, increment);
        } else {
            cout << "Increment must be a positive number!\n";
        }

        // Output the current array contents
        cout << "Current array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    delete[] arr;
}

int main() {
    handleArrayResize();  // Start the array resize process
    return 0;
}
