
#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == 99) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        arr[++top] = value;
        cout << value << " pushed into stack" << endl;
    }

    // Pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << arr[top--] << " popped from stack" << endl;
    }

    // Peek operation
    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "\nStack elements:" << endl;
    s.display();

    cout << "\nPeek operation:" << endl;
    s.peek();

    cout << "\nPop operation:" << endl;
    s.pop();

    cout << "\nAfter Pop:" << endl;
    s.display();

    cout << "\nIs Empty: ";
    cout << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
