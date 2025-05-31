
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream inFile("q_input.txt");
    ofstream outFile("output.txt");
    string s;
    inFile >> s;
    reverse(s.begin(), s.end());
    outFile << s << endl;
    return 0;
}