#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;
};

int main() {

    Node* head;
    Node* tail;

    //1. create a new node
    //we have to use the pointer (Node*) because we're dynamically changing the size
    Node* node = new Node();

    //2. set the value
    node->data = 4;

    //3. point the next and previous to NULLPTR
    node->next = nullptr;
    node->previous = nullptr;
    
    //4. set head and tail to point to node
    head = node;
    tail = node;

    return 0;
}