#include<iostream>
using namespace std;

void printGrade(int marks){
    if (marks >= 90) {
        cout << "Grade A\n";
    } else if (marks >= 70) {
        cout << "Grade B\n";
    } else if (marks >= 50) {
        cout << "Grade C\n";
    } else if (marks >= 35) {
        cout << "Grade D\n";
    } else {
        cout << "FAIL\n";
    }
}

int main() {
    freopen("q_input.txt", "r", stdin);   // Read input from a file
    freopen("q_output.txt", "w", stdout); // Write output to a file

    int marks;
    while (cin >> marks) {
        printGrade(marks);
    }

    return 0;
}
