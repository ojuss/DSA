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

void insertAfter (Node* previous, int newValue) {
    //1. chceck if previous node is null
    if(previous == NULL) {
        cout << "Previous can't be NULL";
        return;
    }

    //2. prepare the new node
    Node* newNode = new Node();
    newNode->data = newValue;

    //3. insert new node after previous
    newNode->next = previous->next;
    previous->next = newNode;


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

    insertAfter(head, -1);

    Print(head);


    return 0;
}