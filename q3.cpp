// Program: Electric Bill Calculator (Demonstrating Data Types and File Handling)
// This program calculates the electricity bill based on units consumed, with different slab rates.
// Input is read from "q_input.txt" and output is written to "q_output.txt".

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to calculate electric bill based on units consumed
float calculateBill(int units)
{
    float bill = 0;

    // For first 100 units, rate is Rs 3 per unit
    if (units <= 100)
    {
        bill = units * 3;
    }
    // For next 100 units (101-200), rate is Rs 5 per unit
    else if (units <= 200)
    {
        bill = 100 * 3 + (units - 100) * 5;
    }
    // For units above 200, rate is Rs 10 per unit
    else
    {
        bill = 100 * 3 + 100 * 5 + (units - 200) * 10;
    }

    return bill;
}

int main()
{
    // Redirect standard input to read from "q_input.txt"
    // and output to write to "q_output.txt"
    freopen("q_input.txt", "r", stdin);   // Read input from file
    freopen("q_output.txt", "w", stdout); // Write output to file

    string name;
    int units;

    getline(cin, name); // Read customer's full name (entire line)
    cin >> units;       // Read number of units consumed (integer)

    // Check for invalid input (e.g., non-integer units)
    if (cin.fail())
    {
        cout << "Invalid input for units consumed.\n";
        return 1;
    }

    // Calculate the total electricity bill
    float totalBill = calculateBill(units);

    // Output the result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << name << "'s Electricity Bill is: Rs " << totalBill << endl;

    return 0;
}