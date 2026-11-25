
#include <iostream>
#include <string>
using namespace std;

// Exception class
class Exception {
public:
    string message;

    Exception(string msg) {
        message = msg;
    }
};

// Class to demonstrate finally-like behavior
class Finally {
public:
    ~Finally() {
        cout << "Finally block executed." << endl;
    }
};

int main() {
    try {
        Finally f;

        cout << "Inside try block." << endl;

        throw Exception("This is a custom exception!");
    }
    catch (Exception e) {
        cout << "Caught Exception: " << e.message << endl;
    }

    return 0;
}
