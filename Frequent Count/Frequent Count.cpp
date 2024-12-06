#include <iostream>
using namespace std;

int main() {
    int arr[8] = { 4, 9, 8, 4, 9, 3, 8, 9 };

    int maxCount = 0;
    int mostFrequent;

    for (int i = 0; i < 8; i++) {
        int count = 0;
        for (int j = 0; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }

        
    }

    cout << "Most frequent element: " << mostFrequent << " Element comes for " << maxCount << " Times" << endl;

    return 0;
}
