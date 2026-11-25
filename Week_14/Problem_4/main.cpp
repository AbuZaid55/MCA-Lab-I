
#include <iostream>
using namespace std;

class Number {
    int arr[100];
    int n;

public:
    void getData() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Friend function
    friend void calculateMean(Number obj);
};

// Friend function definition
void calculateMean(Number obj) {
    int sum = 0;

    for (int i = 0; i < obj.n; i++) {
        sum += obj.arr[i];
    }

    float mean = (float)sum / obj.n;

    cout << "Mean = " << mean << endl;
}

int main() {
    Number n;

    n.getData();

    calculateMean(n);

    return 0;
}
