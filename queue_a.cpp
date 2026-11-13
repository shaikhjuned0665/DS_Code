#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = 0, rear = -1;

// Enqueue: add element at the rear
void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow (queue is full)\n";
        return;
    }
    queue[++rear] = x;
    cout << x << " enqueued\n";
}

// Dequeue: remove element from the front
void dequeue() {
    if (front > rear) {
        cout << "Queue Underflow (queue is empty)\n";
        return;
    }
    cout << queue[front++] << " dequeued\n";
}

// Traversal: display from front to rear
void display() {
    if (front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue (front to rear): ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main() {
    int ch, x;
    do {
        cout << "\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Enter value: "; cin >> x; enqueue(x); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: cout << "Bye\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (ch != 4);
    return 0;
}