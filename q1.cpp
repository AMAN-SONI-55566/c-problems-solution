// Complete the function printNumber which takes an integer input from the user and prints it on the screen.
// Use:-
// for C++ : cout << variable_name;

#include <iostream>
using namespace std;

void printNumber() {
    int number;
    cin >> number;
    cout << number;
}
int main() {

     // Redirect input/output to files
    freopen("q_input.txt", "r", stdin);  //Read input from a file instead of the terminal
    freopen("q_output.txt", "w", stdout); //Write output to a file instead of printing it on screen

    printNumber();
    return 0;
}
