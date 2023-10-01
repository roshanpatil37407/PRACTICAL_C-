#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car is accelerating." << endl;
    }
};

int main() {
    Car myCar;
    
    // Calling a method from the base class
    myCar.start();
    
    // Calling a method from the derived class
    myCar.accelerate();

    return 0;
}

