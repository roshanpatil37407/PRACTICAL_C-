#include <iostream>

int main() {
    int x = 42;
    int* ptr1 = &x; // Pointer to int
    int** ptr2 = &ptr1; // Pointer to pointer

    // Display the value of x using pointer to pointer
    std::cout << "Value of x using pointer to pointer: " << **ptr2 << std::endl;

    // Modify the value of x using pointer to pointer
    **ptr2 = 99;

    // Display the modified value of x
    std::cout << "Modified value of x: " << **ptr2 << std::endl;

    return 0;
}

