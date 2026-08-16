#include <iostream>
using namespace std;

class Stack {
    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    void display() {
        Node* temp = top;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();

    s.display();

    return 0;
}