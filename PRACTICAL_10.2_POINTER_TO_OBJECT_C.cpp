#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a pointer to a Student object
    Student* studentPtr;

    // Dynamically allocate a Student object
    studentPtr = new Student("Alice", 20);

    // Access and manipulate the object using the pointer
    studentPtr->display();

    // Update object's attributes
    studentPtr->name = "Bob";
    studentPtr->age = 25;

    // Display updated object
    studentPtr->display();

    // Deallocate memory to avoid memory leaks
    delete studentPtr;

    return 0;
}

