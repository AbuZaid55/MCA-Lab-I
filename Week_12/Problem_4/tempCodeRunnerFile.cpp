#include <iostream>
using namespace std;

class Counter {
    static int created;
    static int destroyed;

public:
    // Constructor
    Counter() {
        created++;
        cout << "Object created. Total objects created: "
             << created << endl;
    }

    // Destructor
    ~Counter() {
        destroyed++;
        cout << "Object destroyed. Total objects destroyed: "
             << destroyed << endl;
    }

    // Display counts
    static void display() {
        cout << "\nTotal objects created: " << created << endl;
        cout << "Total objects destroyed: " << destroyed << endl;
    }
};

// Initialize static data members
int Counter::created = 0;
int Counter::destroyed = 0;

int main() {
    cout << "Entering first block:" << endl;
    {
        Counter obj1, obj2;

        cout << "\nEntering second block:" << endl;
        {
            Counter obj3, obj4;
        }

        cout << "\nExited second block." << endl;
    }

    cout << "\nExited first block." << endl;

    Counter::display();

    return 0;
}

