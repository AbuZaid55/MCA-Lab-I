
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }

    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {

    // Array of base class pointers
    Shape* shapes[3];

    // Creating objects on heap and performing upcasting
    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Triangle();

    // Calling virtual function
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    // Freeing dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
