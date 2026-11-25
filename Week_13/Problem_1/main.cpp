
#include <iostream>
using namespace std;

class Number {
    int value1, value2;

public:
    // Constructor
    Number(int a, int b) {
        value1 = a;
        value2 = b;
    }

    // Overloading + operator
    Number operator+(Number obj) {
        return Number(value1 + obj.value1, value2 + obj.value2);
    }

    // Overloading - operator
    Number operator-(Number obj) {
        return Number(value1 - obj.value1, value2 - obj.value2);
    }

    // Overloading * operator
    Number operator*(Number obj) {
        return Number(value1 * obj.value1, value2 * obj.value2);
    }

    // Overloading / operator
    Number operator/(Number obj) {
        return Number(value1 / obj.value1, value2 / obj.value2);
    }

    // Display function
    void display() {
        cout << "Value1 = " << value1
             << ", Value2 = " << value2 << endl;
    }
};

int main() {
    Number n1(20, 40);
    Number n2(5, 10);

    Number add = n1 + n2;
    Number sub = n1 - n2;
    Number mul = n1 * n2;
    Number div = n1 / n2;

    cout << "Addition: ";
    add.display();

    cout << "Subtraction: ";
    sub.display();

    cout << "Multiplication: ";
    mul.display();

    cout << "Division: ";
    div.display();

    return 0;
}
