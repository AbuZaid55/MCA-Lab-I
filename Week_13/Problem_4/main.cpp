
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Basic type to User-Defined type
    Number(int x) {
        value = x;
    }

    // User-Defined type to Basic type
    operator int() {
        return value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {

    // Basic to User-Defined conversion
    int a = 50;

    Number n = (Number)a;

    cout << "Basic to User-Defined:" << endl;
    n.display();

    // User-Defined to Basic conversion
    int b = (int)n;

    cout << "\nUser-Defined to Basic:" << endl;
    cout << "Value = " << b << endl;

    return 0;
}
