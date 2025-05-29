#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Use nested for loops to print the matrix
    cout << "3x3 Matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to the next line after printing each row
    }
    
    return 0;
}