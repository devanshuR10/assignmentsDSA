#include <iostream>
using namespace std;

#define MAX 6

struct Queue {
    int front;
    int rear;
    int arr[MAX];

    Queue() {
        front = -1;
        rear = -1;
    }
};

bool isEmpty(Queue &q) {
    return (q.front == -1 || q.front > q.rear);
}

bool isFull(Queue &q) {
    return (q.rear == MAX - 1);
}

void enqueue(Queue &q, int d) {
    if (isFull(q)) {
        cout << "Queue is Full\n";
        return;
    }
    if (q.front == -1) q.front = 0; // first element
    q.arr[++q.rear] = d;
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Dequeued: " << q.arr[q.front] << endl;
    q.front++;
}

void peek(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Front element: " << q.arr[q.front] << endl;
}

void display(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    display(q);

    peek(q);

    dequeue(q);
    display(q);

    return 0;
}
