
#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value) {
        if (rear == 99) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }

        arr[++rear] = value;
        cout << value << " inserted into queue" << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << arr[front] << " removed from queue" << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    // Front operation
    void getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    // Rear operation
    void getRear() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Rear element: " << arr[rear] << endl;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "\nQueue elements: ";
    q.display();

    cout << "\nFront operation:" << endl;
    q.getFront();

    cout << "\nRear operation:" << endl;
    q.getRear();

    cout << "\nDequeue operation:" << endl;
    q.dequeue();

    cout << "\nAfter Dequeue: ";
    q.display();

    cout << "\nIs Empty: ";
    cout << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
