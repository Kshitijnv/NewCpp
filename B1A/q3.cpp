#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Function to calculate factorial
int calculateFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calculateFactorial(n - 1);
    }
}

int main()
{
    const int numberOfNumbers = 10;
    vector<int> numbers;

    // Accept 10 numbers from the user
    cout << "Enter 10 numbers, one at a time:" << endl;
    for (int i = 0; i < numberOfNumbers; ++i)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    // Open the file for writing
    ofstream outFile("factorials.csv");

    // Check if the file is successfully opened
    if (!outFile.is_open())
    {
        cerr << "Error opening the file factorials.csv for writing." << endl;
        return 1;
    }

    // Calculate factorial for each number and write to the file
    for (int i = 0; i < numberOfNumbers; ++i)
    {
        int number = numbers[i];
        int factorial = calculateFactorial(number);

        // Write to the file in CSV format
        outFile << number << "," << factorial << endl;
    }

    // Close the file
    outFile.close();

    cout << "Factorials written to factorials.csv successfully." << endl;

    return 0;
}
