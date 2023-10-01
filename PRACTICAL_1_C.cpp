#include <iostream>
#include <vector>

using namespace std;

int main() {
    int choice;
    cout << "Choose an operation:" << endl;
    cout << "1. Check even or odd" << endl;
    cout << "2. Calculate sum and average" << endl;
    cout << "3. Check prime or composite" << endl;
    cout << "4. Perform arithmetic operations" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            // Check even or odd
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << num << " is even." << endl;
            } else {
                cout << num << " is odd." << endl;
            }
            break;

        case 2:
            // Calculate sum and average
            int n;
            cout << "Enter the number of elements: ";
            cin >> n;
            vector<double> numbers(n);
            double sum = 0;

            for (int i = 0; i < n; i++) {
                cout << "Enter number " << i + 1 << ": ";
                cin >> numbers[i];
                sum += numbers[i];
            }

            double average = sum / n;
            cout << "Sum: " << sum << endl;
            cout << "Average: " << average << endl;
            break;

        case 3:
            // Check prime or composite
            int numToCheck;
            cout << "Enter a number to check for prime or composite: ";
            cin >> numToCheck;
            bool isPrime = true;

            if (numToCheck <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i * i <= numToCheck; i++) {
                    if (numToCheck % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime) {
                cout << numToCheck << " is prime." << endl;
            } else {
                cout << numToCheck << " is composite." << endl;
            }
            break;

        case 4:
            // Perform arithmetic operations
            int num1, num2;
            cout << "Enter the first integer: ";
            cin >> num1;
            cout << "Enter the second integer: ";
            cin >> num2;

            int sum_result = num1 + num2;
            int difference_result = num1 - num2;
            int product_result = num1 * num2;
            double quotient_result;

            if (num2 != 0) {
                quotient_result = static_cast<double>(num1) / num2;
            } else {
                cout << "Cannot divide by zero." << endl;
                break;
            }

            cout << "Sum: " << sum_result << endl;
            cout << "Difference: " << difference_result << endl;
            cout << "Product: " << product_result << endl;
            cout << "Quotient: " << quotient_result << endl;
            break;

        default:
            cout << "Invalid choice. Please choose a valid operation." << endl;
    }

    return 0;
}

