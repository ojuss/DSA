#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void Print(Node* n) {
    while(n!=NULL) {
        cout  << n->data << endl;
        n = n->next;
    }
}

void insertAtEnd(Node** head, int newValue) {
    //1. prepare the new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = NULL;

    //2. if linked list is empty, new node will be the head node
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    //3. find the last node 
    Node* last = *head;
    while (last->next!= NULL) {
        last = last->next;
    }

    //4. insert new node after last node (at the end)
    last->next = newNode;
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

    insertAtEnd(&head, 4);

    Print(head);

    return 0;
}

