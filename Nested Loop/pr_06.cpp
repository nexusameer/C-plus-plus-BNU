#include <iostream>
using namespace std;

int main() {
    int population_A, population_B;
    float growth_A, growth_B;
    int year = 0;

    // Get inputs
    cout << "Enter the population of A: " << endl;
    cin >> population_A;
    cout << "Enter the growth rate of A (%): " << endl;
    cin >> growth_A;
    cout << "Enter the population of B: " << endl;
    cin >> population_B;
    cout << "Enter the growth rate of B (%): " << endl;
    cin >> growth_B;

    // Initialize total populations with the initial values
    int total_populationA = population_A;
    int total_populationB = population_B;

    // Loop until population of A exceeds population of B
    while (total_populationA <= total_populationB) {
        // Update the populations based on the growth rate
        total_populationA += total_populationA * (growth_A / 100);
        total_populationB += total_populationB * (growth_B / 100);
        year++;  // Increment the year
    }

    // Output the result
    cout << "The total years will be: " << year << endl;

    return 0;
}
