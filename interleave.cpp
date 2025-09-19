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

void enqueue(int data, Queue &q) {
    if (q.rear == MAX - 1) {
        cout << "Queue Full!" << endl;
        return;
    }
    if (q.front == -1) q.front = 0; // first element
    q.arr[++q.rear] = data;
}

void display(Queue &q) {
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

void interleave(Queue &q) {
    int n = q.rear - q.front + 1; // size of queue
    if (n % 2 != 0) {
        cout << "Queue has odd number of elements, cannot interleave!" << endl;
        return;
    }

    int half = n / 2;
    int i = q.front;
    int j = q.front + half;

    cout << "Interleaved Queue: ";
    while (i < q.front + half && j <= q.rear) {
        cout << q.arr[i] << " " << q.arr[j] << " ";
        i++;
        j++;
    }
    cout << endl;
}

int main() {
    Queue q;

    enqueue(4, q);
    enqueue(7, q);
    enqueue(11, q);
    enqueue(20, q);
    enqueue(5, q);
    enqueue(9, q);

    cout << "Original Queue: ";
    display(q);

    interleave(q);

    return 0;
}
