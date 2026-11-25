
#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    string writer;

public:
    void getPublication() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter writer name: ";
        getline(cin, writer);
    }

    void displayPublication() {
        cout << "\nBook Title: " << title << endl;
        cout << "Writer Name: " << writer << endl;
    }
};

class Sales {
    int sales[3];
    int total;

public:
    void getSales() {
        total = 0;

        cout << "\nEnter sales for 3 months:\n";

        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];

            total += sales[i];
        }
    }

    void displaySales() {
        cout << "\nMonthly Sales:\n";

        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": "
                 << sales[i] << endl;
        }

        cout << "Total Sales: " << total << endl;
    }
};

int main() {
    Publication p;
    Sales s;

    p.getPublication();
    s.getSales();

    p.displayPublication();
    s.displaySales();

    return 0;
}
