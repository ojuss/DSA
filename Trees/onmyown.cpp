#include <iostream>
using namespace std;

class Node {
public:    
    int info;
    Node* right;
    Node* left;

    Node (int value) {
        info = value;
        right = left = nullptr;
    }

    Node () {}

};

Node* insert(Node* root, int value) {
    Node* temp = new Node();

    if (root == nullptr) {
        temp->info = value;
    }
    else if (root->info >= value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    temp->right = temp->left = nullptr;

    return temp;
}

void print (Node* root) {
    if (root == nullptr) return;

        cout << root->info << "\t";
        print(root->left);
        print(root->right);
    

}

int main () {

    Node* root = new Node(5);
    Node* first = insert(root, 3);
    Node* second = insert (root, 7);
    Node* third = insert (root, 1);
    Node* fourth = insert (root, 10);
    Node* fifth = insert (root, 2);


    print(root);


    return 0;
}