
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
            
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        cout << "Deleted: " << front->data << endl;

        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }

    
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    
    q.display();

    q.dequeue();

    
    q.display();

    return 0;
}
