
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Friend function
    friend void display(Student s);
};

// Friend function definition
void display(Student s) {
    cout << "\nStudent Information" << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;

    s.getData();
    display(s);

    return 0;
}
