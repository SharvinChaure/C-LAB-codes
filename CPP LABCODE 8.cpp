#include <iostream>
#include <vector>

using namespace std;

int main() {
  
    // Predefined list of numbers
    vector<int> numbers = {12, 7, 9, 4, 20, 15};
    int sum = 0, evenCount = 0, oddCount = 0;

    // Process each number in the list
    for (int number : numbers) {
        sum += number;  // Add to sum

        // Check if the number is even or odd
        if (number % 2 == 0) {
            evenCount++;  // Increment even count
        } else {
            oddCount++;   // Increment odd count
        }
    }

    // Calculate average
    double average = static_cast<double>(sum) / numbers.size();

    // Display results
    cout << "Numbers: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Count of even numbers: " << evenCount << endl;
    cout << "Count of odd numbers: " << oddCount << endl;

    return 0;
}
