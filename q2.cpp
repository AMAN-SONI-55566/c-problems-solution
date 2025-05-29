#include <iostream>
using namespace std;

void printGrade(int marks)
{
    if (marks >= 90)
    {
        cout << "Grade A\n";
    }
    else if (marks >= 70)
    {
        cout << "Grade B\n";
    }
    else if (marks >= 50)
    {
        cout << "Grade C\n";
    }
    else if (marks >= 35)
    {
        cout << "Grade D\n";
    }
    else
    {
        cout << "FAIL\n";
    }
}

int main()
{
    // Redirect standard input to read from "q_input.txt" and standard output to write to "q_output.txt".
    // This allows the program to take input from a file and save the output to another file,
    // which is useful for testing and debugging.

    freopen("q_input.txt", "r", stdin);
    freopen("q_output.txt", "w", stdout);

    int marks;
    while (cin >> marks)
    {
        printGrade(marks);
    }

    return 0;
}
