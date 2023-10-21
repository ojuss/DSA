#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList myList;

    // Take 5 inputs from the user and insert them into the linked list
    for (int i = 0; i < 5; ++i) {
        int value;
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> value;
        myList.insert(value);
    }

    // Print the linked list
    std::cout << "Linked List: ";
    myList.print();

    return 0;
}
