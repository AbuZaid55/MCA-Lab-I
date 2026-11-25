
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    int count = 0;

    // Open file
    ifstream fin("data.txt");

    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    // Count characters
    while (fin.get(ch)) {
        count++;
    }

    cout << "Total number of characters: " << count << endl;

    fin.close();

    return 0;
}
