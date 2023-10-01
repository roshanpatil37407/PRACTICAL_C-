#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize the Person object
    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor to perform cleanup when the object is destroyed
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Method to display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create Person objects using constructors
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Display person information
    cout << "Person 1:" << endl;
    person1.displayInfo();
    cout << "Person 2:" << endl;
    person2.displayInfo();

    // Objects go out of scope and destructors are called when main function exits
    return 0;
}

