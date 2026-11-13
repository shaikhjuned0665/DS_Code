#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

// Push: add element on top
void push(int x) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow (stack is full)\n";
        return;
    }
    stack[++top] = x;
    cout << x << " pushed\n";
}

// Pop: remove element from top
void pop() {
    if (top == -1) {
        cout << "Stack Underflow (stack is empty)\n";
        return;
    }
    cout << stack[top--] << " popped\n";
}

// Peek: show top element without removing
void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top element = " << stack[top] << endl;
}

// Display: show all elements from top to bottom
void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack (top to bottom):\n";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << endl;
}

int main() {
    int ch, x;
    do {
        cout << "\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Enter value: "; cin >> x; push(x); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout << "Bye\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (ch != 5);
    return 0;
}