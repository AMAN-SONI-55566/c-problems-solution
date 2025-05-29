// Complete the function printNumber which takes an integer input from the user and prints it on the screen.
// Use:-
// for C++ : cout << variable_name;

#include <iostream>
using namespace std;

void printNumber()
{
    int number;
    cin >> number;
    cout << number;
}
int main()
{

    // Redirect standard input to read from "q_input.txt" and standard output to write to "q_output.txt".
    // This allows the program to take input from a file and save the output to another file,
    // which is useful for testing and debugging.
    freopen("q_input.txt", "r", stdin);
    freopen("q_output.txt", "w", stdout);

    printNumber();
    return 0;
}
