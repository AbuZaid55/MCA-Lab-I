
#include <iostream>
using namespace std;

class Number1 {
    int value1, value2;

public:
    // Constructor
    Number1(int a, int b) {
        value1 = a;
        value2 = b;
    }

    // Friend function for + operator
    friend Number1 operator+(Number1 n1, Number1 n2);

    // Friend function for - operator
    friend Number1 operator-(Number1 n1, Number1 n2);

    // Friend function for * operator
    friend Number1 operator*(Number1 n1, Number1 n2);

    // Friend function for / operator
    friend Number1 operator/(Number1 n1, Number1 n2);

    // Display function
    void display() {
        cout << "Value1 = " << value1
             << ", Value2 = " << value2 << endl;
    }
};

// Addition
Number1 operator+(Number1 n1, Number1 n2) {
    return Number1(n1.value1 + n2.value1,
                   n1.value2 + n2.value2);
}

// Subtraction
Number1 operator-(Number1 n1, Number1 n2) {
    return Number1(n1.value1 - n2.value1,
                   n1.value2 - n2.value2);
}

// Multiplication
Number1 operator*(Number1 n1, Number1 n2) {
    return Number1(n1.value1 * n2.value1,
                   n1.value2 * n2.value2);
}

// Division
Number1 operator/(Number1 n1, Number1 n2) {
    return Number1(n1.value1 / n2.value1,
                   n1.value2 / n2.value2);
}

int main() {
    Number1 n1(20, 40);
    Number1 n2(5, 10);

    Number1 add = n1 + n2;
    Number1 sub = n1 - n2;
    Number1 mul = n1 * n2;
    Number1 div = n1 / n2;

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
