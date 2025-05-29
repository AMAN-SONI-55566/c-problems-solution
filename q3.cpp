// data types question : elctric bill calculator 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float calculateBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 3;
    } else if (units <= 200) {
        bill = 100 * 3 + (units - 100) * 5;
    } else {
        bill = 100 * 3 + 100 * 5 + (units - 200) * 10;
    }

    return bill;
}

int main() {
    freopen("q_input.txt", "r", stdin);
    freopen("q_output.txt", "w", stdout);

    string name;
    int units;

    getline(cin, name);  // Read full name , full line 
    cin >> units;        // Read integer

    if (cin.fail()) {
        cout << "Invalid input for units consumed.\n";
        return 1;
    }

    float totalBill = calculateBill(units);

    cout << fixed << setprecision(2);  // Proper decimal formatting
    cout << name << "'s Electricity Bill is: Rs " << totalBill << endl;

    return 0;
}