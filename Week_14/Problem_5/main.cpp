
#include <iostream>
using namespace std;

class Number {
    int a, b, c, d, e;

public:
    void getData() {
        cout << "Enter five numbers: ";
        cin >> a >> b >> c >> d >> e;
    }

    // Friend functions
    friend void func1(Number obj, int a, int b);
    friend void func2(Number obj, int c, int d, int e);
};

// Friend function taking 2 arguments
void func1(Number obj, int x, int y) {
    cout << "First two numbers: " << x << " " << y << endl;
}

// Friend function taking 3 arguments
void func2(Number obj, int x, int y, int z) {
    cout << "Last three numbers: "
         << x << " " << y << " " << z << endl;

    float avg = (obj.a + obj.b + obj.c +
                 obj.d + obj.e) / 5.0;

    cout << "Average = " << avg << endl;
}

int main() {
    Number n;

    n.getData();

    func1(n, 2, 3);
    func2(n, 1, 2, 3);

    return 0;
}
