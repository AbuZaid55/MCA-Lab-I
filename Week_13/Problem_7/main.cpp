
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Virtual base class
class Student : virtual public Person {
public:
    int rollNo;

    void getRollNo() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Employee : virtual public Person {
public:
    int employeeId;

    void getEmployeeId() {
        cout << "Enter employee ID: ";
        cin >> employeeId;
    }
};

// Multiple inheritance
class TeachingAssistant : public Student, public Employee {
public:
    void displayData() {
        display();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main() {
    TeachingAssistant t;

    t.getData();
    t.getRollNo();
    t.getEmployeeId();

    cout << "\nStudent and Employee Details:\n";
    t.displayData();

    return 0;
}
