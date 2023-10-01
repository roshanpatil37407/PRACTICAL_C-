#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Base class 2
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

// Derived class inheriting from two base classes
class FlyingCar : public Animal, public Vehicle {
public:
    void fly() {
        cout << "Flying car is flying." << endl;
    }
};

int main() {
    FlyingCar myFlyingCar;
    
    // Calling methods from both base classes
    myFlyingCar.eat();
    myFlyingCar.start();
    
    // Calling a method from the derived class
    myFlyingCar.fly();

    return 0;
}

