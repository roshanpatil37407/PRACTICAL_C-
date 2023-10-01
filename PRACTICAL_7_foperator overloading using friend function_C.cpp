#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Friend function to overload the addition operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imag << "i";
    }
};

// Overloading the addition operator using a friend function
Complex operator+(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imagSum = c1.imag + c2.imag;
    return Complex(realSum, imagSum);
}

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2; // Operator overloading with friend function

    cout << "Sum of ";
    num1.display();
    cout << " and ";
    num2.display();
    cout << " is ";
    sum.display();
    cout << endl;

    return 0;
}

