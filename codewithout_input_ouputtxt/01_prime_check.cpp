
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int num;
    inFile >> num;
    if (isPrime(num))
        outFile << num << " is a prime number.\n";
    else
        outFile << num << " is not a prime number.\n";
    return 0;
}
