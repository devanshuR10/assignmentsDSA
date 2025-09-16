#include <iostream>
using namespace std;

#define SIZE 5   // Maximum size of queue

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Insert element into queue
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full! Cannot insert " << x << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        cout << x << " inserted into queue.\n";
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty! Cannot delete.\n";
            return;
        }
        cout << "Deleted: " << arr[front] << endl;
        if (front == rear) {
            // Queue becomes empty after deletion
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    // Peek element
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Front Element: " << arr[front] << endl;
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout << (q.isEmpty() ? "Queue is Empty\n" : "Queue is NOT Empty\n");
                break;
            case 6:
                cout << (q.isFull() ? "Queue is Full\n" : "Queue is NOT Full\n");
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
