#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Declare pointers to functions with matching signatures
    int (*operationPtr)(int, int);

    // Initialize the pointer to the add function
    operationPtr = add;

    // Use the pointer to call the add function
    int result1 = operationPtr(5, 3);
    cout << "Result of addition: " << result1 << endl;

    // Initialize the pointer to the subtract function
    operationPtr = subtract;

    // Use the pointer to call the subtract function
    int result2 = operationPtr(10, 4);
    cout << "Result of subtraction: " << result2 << endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

