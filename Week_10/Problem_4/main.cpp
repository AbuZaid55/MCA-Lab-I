#include <iostream>
#include <string>
using namespace std;

union Address
{
    string* name;
    string* home_address;
    string* hostel_address;
    string* city;
    string* state;
    string* zip;
};

int main()
{
    string name = "Abu Zaid";
    string hostel = "SZ Hall";
    string city = "Mau";
    string state = "Uttar Pradesh";
    string zip = "275101";

    Address a;

    a.name = &name;
    cout << "Name: " << *a.name << endl;

    a.hostel_address = &hostel;
    cout << "Hostel Address: " << *a.hostel_address << endl;

    a.city = &city;
    cout << "City: " << *a.city << endl;

    a.state = &state;
    cout << "State: " << *a.state << endl;

    a.zip = &zip;
    cout << "ZIP: " << *a.zip << endl;

    return 0;
}

