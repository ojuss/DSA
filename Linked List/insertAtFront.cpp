#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void Print(Node* n) {
    while(n!= NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

void insertAtFront (Node** head, int newValue) {
    // 1. prepare the new node
    Node* newNode = new Node();
    newNode->data = newValue;

    //2. put the new node in front of the current head
    newNode->next = *head;

    //3. move head of the list to point to the new node
    *head = newNode;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    insertAtFront(&head, -1);

    Print(head);

    return 0;
}