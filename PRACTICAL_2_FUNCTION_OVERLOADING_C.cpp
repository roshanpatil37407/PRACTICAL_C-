#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    double dbl1 = 2.5, dbl2 = 3.7;

    // Calling the overloaded functions
    int sum1 = add(num1, num2);
    int sum2 = add(num1, num2, num3);
    double sum3 = add(dbl1, dbl2);

    cout << "Sum of two integers: " << sum1 << endl;
    cout << "Sum of three integers: " << sum2 << endl;
    cout << "Sum of two doubles: " << sum3 << endl;

    return 0;
}

