
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base Constructor: ";
        show();
    }

    virtual void show() {
        cout << "Base show() called" << endl;
    }

    void display() {
        cout << "Normal Member Function: ";
        show();
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }

    void show() override {
        cout << "Derived show() called" << endl;
    }
};

int main() {
    Derived obj;

    cout << endl;

    obj.display();

    return 0;
}
