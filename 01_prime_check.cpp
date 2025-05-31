//check if the number is prime or not
//Prime number kya hota hai?
//Jiska 1 aur khud ke alawa koi factor na ho.
#include<iostream>
using namespace std;

int main(){
    int n;
    bool numberisPrime = true; // Assume n is prime until proven otherwise
    cout << "Enter a positive integer: "; 
    cin >> n;

    if (n <= 1) {
        numberisPrime = false;
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                numberisPrime = false;
                break;
            }
        }
    }

    if (numberisPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}



