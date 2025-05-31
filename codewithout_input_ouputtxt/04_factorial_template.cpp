#include <iostream>

// Template metaprogramming version (compile-time factorial)
template<int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

// Base case specialization
template<>
struct Factorial<0> {
    static const int value = 1;
};

int main() {
    std::cout << "Factorial of 5 is: " << Factorial<5>::value << std::endl;
    return 0;
}
