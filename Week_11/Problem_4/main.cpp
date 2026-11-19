#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main()
{
    int num, choice;

    cout << "Enter an integer: ";
    cin >> num;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Convert to Binary\n";
        cout << "2. Convert to Octal\n";
        cout << "3. Convert to Hexadecimal\n";
        cout << "4. Convert to All\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Binary: " << bitset<32>(num) << endl;
                break;

            case 2:
                cout << "Octal: " << oct << num << dec << endl;
                break;

            case 3:
                cout << "Hexadecimal: " << hex << uppercase << num
                     << dec << nouppercase << endl;
                break;

            case 4:
                cout << "Binary: " << bitset<32>(num) << endl;
                cout << "Octal: " << oct << num << dec << endl;
                cout << "Hexadecimal: " << hex << uppercase << num
                     << dec << nouppercase << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}

