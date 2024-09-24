#include <iostream>

using namespace std;

// Iterative method to calculate factorial
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Recursive method to calculate factorial
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // Calculate factorial using iterative method
    unsigned long long iterativeResult = factorialIterative(number);
    cout << "Factorial of " << number << " (Iterative): " << iterativeResult << endl;

    // Calculate factorial using recursive method
    unsigned long long recursiveResult = factorialRecursive(number);
    cout << "Factorial of " << number << " (Recursive): " << recursiveResult << endl;

    return 0;
}
