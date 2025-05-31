
#include <iostream>
#include <fstream>
using namespace std;

void printFibonacci(int n, ofstream &outFile) {
    int a = 0, b = 1;
    outFile << a << " " << b << " ";
    for (int i = 2; i < n; ++i) {
        int c = a + b;
        outFile << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int n;
    inFile >> n;
    printFibonacci(n, outFile);
    return 0;
}
