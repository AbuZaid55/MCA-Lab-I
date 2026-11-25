
#include <iostream>
using namespace std;

class Person {
    int age;

public:
    // Constructor
    Person(int age) {
        this->age = age;
    }

    // Function to find elder person
    void elder(Person p) {
        if (this->age > p.age) {
            cout << "First person is elder." << endl;
            cout << "Age: " << this->age << endl;
        }
        else if (this->age < p.age) {
            cout << "Second person is elder." << endl;
            cout << "Age: " << p.age << endl;
        }
        else {
            cout << "Both persons have the same age." << endl;
        }
    }
};

int main() {
    Person p1(25);
    Person p2(30);

    p1.elder(p2);

    return 0;
}
