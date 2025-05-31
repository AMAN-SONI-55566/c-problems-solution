#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 3; i <= n; ++i) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
