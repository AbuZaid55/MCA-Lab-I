
#include <iostream>
using namespace std;

class STAFF {
public:
    string name;
    int id;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Teaching : public STAFF {
public:
    void show() {
        cout << "\nTeaching Staff" << endl;
        display();
    }
};

class NonTeaching : public STAFF {
public:
    void show() {
        cout << "\nNon-Teaching Staff" << endl;
        display();
    }
};

class Officer : public NonTeaching {
public:
    void show() {
        cout << "\nOfficer Staff" << endl;
        display();
    }
};

class Regular : public NonTeaching {
public:
    void show() {
        cout << "\nRegular Staff" << endl;
        display();
    }
};

class Casual : public NonTeaching {
public:
    void show() {
        cout << "\nCasual Staff" << endl;
        display();
    }
};

int main() {
    Teaching t;
    Officer o;
    Regular r;
    Casual c;

    cout << "Enter Teaching Staff Details:\n";
    t.getData();
    t.show();

    cout << "\nEnter Officer Details:\n";
    o.getData();
    o.show();

    cout << "\nEnter Regular Staff Details:\n";
    r.getData();
    r.show();

    cout << "\nEnter Casual Staff Details:\n";
    c.getData();
    c.show();

    return 0;
}
