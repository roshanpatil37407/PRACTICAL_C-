#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize the student's name and age
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Getter method to retrieve the student's name
    string getName() {
        return name;
    }

    // Setter method to update the student's age
    void setAge(int newAge) {
        if (newAge >= 0 && newAge <= 120) {
            age = newAge;
            cout << "Age updated successfully." << endl;
        } else {
            cout << "Invalid age. Please enter a valid age between 0 and 120." << endl;
        }
    }

    // Display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a Student object
    Student student("Alice", 20);

    // Access and manipulate the student's information using methods
    student.displayInfo();

    // Attempt to set an invalid age
    student.setAge(150);

    // Update the student's age
    student.setAge(21);

    // Display the updated student information
    student.displayInfo();

    return 0;
}

