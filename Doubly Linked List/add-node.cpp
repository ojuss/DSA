#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;
};

int main() {
    //titles
    Node* head;
    Node* tail;

    //creating a 1st node
    Node* node = new Node();

    //defining properties of node just created
    node->data = 4;
    node->next = nullptr;
    node->previous = nullptr;
 
    //assigning titles to the node
    head = node;
    tail = node;

    //creating new node and inserting it in the doubly linked list
    node = new Node();
    node->data = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
     



    return 0;
}