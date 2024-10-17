#include <iostream>
using namespace std;

int main()
{
    const int num_size = 10;
    int num[num_size], largest, smallest, sum = 0;
    ;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the numbers: " << endl;
        cin >> num[i];
    }
    largest = num[0];

    for (int i = 1; i <num_size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "The largest number is: " << largest << endl;

    smallest = num[0];
    for (int i = 1; i <num_size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "The smallest number is: " << smallest << endl;

    for (int i = 0; i < 10; i++)
    {
        sum += num[i];
    }
    int average = sum /num_size;
    cout << "The average is: " << average << endl;

    return 0;
}