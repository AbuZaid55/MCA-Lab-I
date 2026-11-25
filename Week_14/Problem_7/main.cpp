
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    string text;
    char ch;

    cout << "Enter text: ";
    getline(cin, text);

    file.open("data.txt", ios::out);
    file << text;
    file.close();

    file.open("data.txt", ios::in);

    file.seekg(0, ios::end);
    int length = file.tellg();

    cout << "\nText in reverse order: ";

    for (int i = length - 1; i >= 0; i--) {
        file.seekg(i, ios::beg);
        file.get(ch);
        cout << ch;
    }

    file.close();

    return 0;
}
