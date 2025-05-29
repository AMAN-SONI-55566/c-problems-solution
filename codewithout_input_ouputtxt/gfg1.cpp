#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 3x3 matrix with values 1 to 9
    int matrix[3][3] = {
        {1, 2, 3},   // First row
        {4, 5, 6},   // Second row
        {7, 8, 9}    // Third row
    };
    
    // Print a label for the matrix
    cout << "3x3 Matrix:" << endl;
    
    // Use nested for loops to traverse and print the matrix elements
    for(int i = 0; i < 3; i++) {          // Outer loop for rows
        for(int j = 0; j < 3; j++) {      // Inner loop for columns
            cout << matrix[i][j] << " ";  // Print each element in the row
        }
        cout << endl; // Move to the next line after printing each row
    }
    
    return 0; // Indicate successful program termination
}