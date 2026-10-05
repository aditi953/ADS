#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;

};
class Queue
{
    Node*front;
    Node*rear;
    public:
    Queue()
    {
        front = rear = NULL;
    }
}